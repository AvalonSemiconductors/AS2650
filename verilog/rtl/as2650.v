`default_nettype none

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

module as2650(
	input reset,
	output [12:0] adr,
	input [7:0] dbus_in,
	output [7:0] dbus_out,
	output oeb,
	output rw,
	output opreq,
	output wrp,
	output m_io,
	output d_c,
	
	input sense,
	output flag,
	
	input clk,
	
	input opack
);

	/* CPU registers */
	reg [7:0] r0;
	reg [7:0] r123[2:0];
	reg [7:0] r123_2[2:0];
	reg [14:0] pc;
	reg [7:0] psu;
	reg [7:0] psl;
	reg [7:0] ins_reg;
	reg [14:0] stack[7:0];
	reg [5:0] cycle;
	reg halted;
	reg [7:0] holding_reg;
	reg [7:0] addr_buff;
	reg [1:0] idx_ctrl;
	
`ifdef BENCH
	wire [7:0] r1 = r123[0];
	wire [7:0] r2 = r123[1];
	wire [7:0] r3 = r123[2];
`endif
	
	assign flag = psu[6];
	
	reg r_opreq;
	assign opreq = r_opreq;
	reg r_rw;
	assign rw = r_rw;
	reg [12:0] r_addr;
	assign adr = r_addr;
	reg r_m_io;
	assign m_io = r_m_io;
	reg r_d_c;
	assign d_c = r_d_c;
	reg r_wrp;
	assign wrp = r_wrp;
	reg [7:0] b_buf;
	assign oeb = r_rw ? 0 : 1;
	assign dbus_out = b_buf;

	/*
	*	Some common values defined as wires
	*/
	wire [7:0] instr_reg = ins_reg[1:0] == 0 ? r0 : (psl[4] ? r123_2[ins_reg[1:0] - 1] : r123[ins_reg[1:0] - 1]);
	wire [7:0] instr_reg_p1 = instr_reg + 1;
	wire [7:0] instr_reg_m1 = instr_reg - 1;
	wire [14:0] branch_addr = pc + (dbus_in[6:0] >= 64 ? -(64 - (dbus_in[6:0] - 64)) : dbus_in[6:0]);
	wire carry = psl[0];
	wire overflow = psl[2];
	
	/*
	*	Shift & ALU
	*/
	wire [7:0] alu_instr_reg = idx_ctrl != 0 ? r0 : instr_reg;
	wire [7:0] rrr = psl[3] ? {carry, instr_reg[7:1]} : {instr_reg[0], instr_reg[7:1]};
	wire [7:0] rrl = psl[3] ? {instr_reg[6:0], carry} : {instr_reg[6:0], instr_reg[7]};
	wire [7:0] input1 = ins_reg[3:2] == 0 ? holding_reg : alu_instr_reg;
	wire [7:0] input2 = ins_reg[3:2] == 0 ? instr_reg : holding_reg;
	wire is_mul = ins_reg == 8'h90;
	wire [16:0] mul_res = r0 * (psl[4] ? r123_2[0] : r123[0]);
	
	wire [2:0] alu_op = ins_reg[7:5];
	reg [8:0] alu_next;
	always @(*) begin
		case(alu_op)
			1: alu_next <= {psl[0], input1 ^ input2};
			2: alu_next <= {psl[0], input1 & input2};
			3: alu_next <= {psl[0], input1 | input2};
			4: alu_next <= {1'b0, input1} + {1'b0, input2} + (psl[3] && psl[0]);
			5: alu_next <= {1'b0, input1} + {1'b0, ~input2} + (!psl[3] || psl[0]);
			default: alu_next <= {psl[0], input2};
		endcase
	end

	always @(posedge clk) begin
		if(reset) begin
			pc <= 0;
			r0 <= 0;
			r123[0] <= 0;
			r123[1] <= 0;
			r123[2] <= 0;
			r123_2[0] <= 0;
			r123_2[1] <= 0;
			r123_2[2] <= 0;
			psu <= 0;
			psl <= 0;
			cycle <= 0;
			r_opreq <= 0;
			r_rw <= 0;
			r_addr <= 0;
			r_m_io <= 1;
			r_d_c <= 0;
			r_wrp <= 0;
			halted <= 0;
			idx_ctrl <= 0;
			b_buf <= 0;
		end else if(!halted) begin
			psu[7] <= sense;
			if(cycle == 0) begin // First instruction cycle. Request memory read from mem[pc]
				idx_ctrl <= 0;
				r_m_io <= 1;
				r_opreq <= 1;
				r_rw <= 0;
				r_addr <= pc[12:0];
				pc <= pc + 1;
				cycle <= 1;
			end else if(cycle == 1) begin // Latch received instruction
				ins_reg <= dbus_in;
				r_opreq <= !opack;
				cycle <= opack ? 2 : 1;
			end else begin
				if(ins_reg[4]) begin
					if(ins_reg[3]) begin
						/*
						*	Branch instructions
						*/
						if(ins_reg == 'h9B || ins_reg == 'hBB) begin
							//zbrr, zbsr
							if(cycle == 2) begin //Read instruction argument
								pc <= pc + 1;
								r_addr <= pc[12:0];
								r_opreq <= 1;
								r_rw <= 0;
								cycle <= 3;
							end else if(cycle == 3 && opack) begin //take the branch
								if(dbus_in[7]) begin //Indirect addressing. Use ugly hack to force it.
									r_addr <= branch_addr[12:0];
									r_opreq <= 1;
									r_rw <= 0;
									cycle <= 8;
									ins_reg <= ins_reg == 'h9B ? 'h1B : 'h3B;
								end else begin //Take the branch
									pc <= {1'b0, 1'b0, branch_addr[12:0]};
									r_opreq <= 0;
									cycle <= 0;
								end
							end
						end else if(ins_reg == 'h9F || ins_reg == 'hBF) begin
							//bxa, bsxa
							if(cycle == 2) begin
								pc <= pc + 1;
								r_addr <= pc;
								r_opreq <= 1;
								r_rw <= 0;
								cycle <= 3;
							end else if(cycle == 3 && opack) begin
								addr_buff <= dbus_in;
								pc <= pc + 1;
								r_addr <= pc;
								cycle <= 4;
							end else if(cycle == 4 && opack) begin
								if(ins_reg == 'hBF) begin
									stack[psu[2:0]] <= pc;
									psu[2:0] <= psu[2:0] + 1;
								end
								if(addr_buff[7]) begin //Indirect addressing
									r_addr <= {addr_buff[4:0], dbus_in};
									cycle <= 5;
								end else begin //Take branch
									r_opreq <= 0;
									pc <= {addr_buff[4:0], dbus_in} + (psl[4] ? r123_2[2] : r123[2]);
									cycle <= 0;
								end
							//Do the indirect addressing
							end else if(cycle == 5 && opack) begin
								addr_buff <= dbus_in;
								r_addr <= r_addr + 1;
								cycle <= 6;
							end else if(cycle == 6 && opack) begin
								pc <= {addr_buff[6:0], dbus_in};
								r_opreq <= 0;
								cycle <= 0;
							end
						end else begin
							if(cycle == 2) begin
								//Decide if the branch will be taken or not
								if(ins_reg[7:4] == 'h5 || ins_reg[7:4] == 'h7 || ins_reg[7:4] == 'hD || ins_reg[7:4] == 'hF) begin
									//These branch if a register is non-zero. May increment or decrement the reg.
									write_reg(ins_reg[7:4] == 'hD ? instr_reg_p1 : (ins_reg[7:4] == 'hF ? instr_reg_m1 : instr_reg), ins_reg[1:0]);
									if((ins_reg[7:4] == 'hD ? instr_reg_p1 : (ins_reg[7:4] == 'hF ? instr_reg_m1 : instr_reg)) == 0) begin //Branch is not taken
										pc <= pc + (ins_reg[2] ? 2 : 1);
										cycle <= 0;
									end else begin
										pc <= pc + 1;
										r_addr <= pc;
										r_opreq <= 1;
										r_rw <= 0;
										cycle <= 3;
									end
								end else begin
									//These will compare the CC to decide wether to branch or not
									if(
										((ins_reg[7:4] == 'h1 || ins_reg[7:4] == 'h3)
										&&
										(ins_reg[1:0] != 'b11 && ins_reg[1:0] != psl[7:6]))
										||
										((ins_reg[7:4] == 'h9 || ins_reg[7:4] == 'hB)
										&&
										(ins_reg[1:0] == psl[7:6]))
										) begin //Branch is not taken
										pc <= pc + (ins_reg[2] ? 2 : 1);
										cycle <= 0;
									end else begin
										pc <= pc + 1;
										r_addr <= pc;
										r_opreq <= 1;
										r_rw <= 0;
										cycle <= 3;
									end
								end
							end else if(cycle == 3 && opack) begin
								if(!ins_reg[2]) begin //Relative branch
									if(dbus_in[7]) begin //Indirect addressing. Need more data.
										r_addr <= branch_addr[12:0];
										cycle <= 8;
									end else begin //Take the branch
										push_stack();
										pc <= branch_addr[12:0];
										r_opreq <= 0;
										cycle <= 0;
									end
								end else begin //Absolute branch, need one more byte
									addr_buff <= dbus_in;
									pc <= pc + 1;
									r_addr <= pc;
									cycle <= 4;
								end
							end else if(cycle == 4 && opack) begin //Getting the second byte of absolute branch
								if(addr_buff[7]) begin //Indirect addressing. Need more data.
									r_addr <= {addr_buff[4:0], dbus_in};
									cycle <= 8;
								end else begin //Take the branch
									push_stack();
									pc <= {addr_buff[6:0], dbus_in};
									r_opreq <= 0;
									cycle <= 0;
								end
							end else if(cycle == 8 && opack) begin //Indirect addressing, first byte
								addr_buff <= dbus_in;
								r_addr <= r_addr + 1;
								cycle <= 9;
							end else if(cycle == 9 && opack) begin //Indirect addressing, second byte, finally take branch
								push_stack();
								pc <= {dbus_in[4:0], addr_buff};
								r_opreq <= 0;
								cycle <= 0;
							end
						end
					end else begin
						if((ins_reg[7:4] == 'h1 || ins_reg[7:4] == 'h3) && ins_reg[2]) begin
							/*
							*	Subroutine returns
							*/
							if(cycle == 2) begin
								if(ins_reg[1:0] == 'b11 || ins_reg[1:0] == psl[7:6]) begin //Return on condition true
									//Pop a value of the stack and into PC
									pc <= stack[psu[2:0] - 1];
									psu[2:0] <= psu[2:0] - 1;
									if(ins_reg[7:4] == 'h3) begin //Also re-enable interrupts
										psu[5] <= 0;
									end
								end
								cycle <= 0;
							end
						end else if((ins_reg[7:4] == 'h3 || ins_reg[7:4] == 'h7) && !ins_reg[2]) begin
							/*
							*	Basic I/O read
							*/
							if(cycle == 2) begin
								r_opreq <= 1;
								r_rw <= 0;
								r_m_io <= 0;
								r_d_c <= ins_reg[7:4] == 'h7 ? 1 : 0;
								cycle <= 3;
							end else if(cycle == 3 && opack) begin
								set_cc_for(dbus_in);
								write_reg(dbus_in, ins_reg[1:0]);
								r_opreq <= 0;
								r_m_io <= 1;
								cycle <= 0;
							end
						end else if((ins_reg[7:4] == 'hB || ins_reg[7:4] == 'hF) && !ins_reg[2]) begin
							/*
							*	Basic I/O write
							*/
							if(cycle == 2) begin
								r_opreq <= 1;
								r_rw <= 1;
								b_buf <= instr_reg;
								r_m_io <= 0;
								r_d_c <= ins_reg[7:4] == 'hF ? 1 : 0;
								cycle <= 3;
							end else if(cycle == 3) begin
								r_wrp <= 1;
								cycle <= 4;
							end else if(cycle == 4 && opack) begin
								r_wrp <= 0;
								r_opreq <= 0;
								r_rw <= 0;
								r_m_io <= 1;
								cycle <= 0;
							end
						end else if(ins_reg[7:4] == 'h5 && !ins_reg[2]) begin
							/*
							*	rrr
							*/
							if(cycle == 2) begin
								if(psl[3]) begin
									psl[0] <= instr_reg[0];
									psl[5] <= instr_reg[6];
								end
								set_cc_for(rrr);
								write_reg(rrr, ins_reg[1:0]);
								cycle <= 0;
							end
						end else if(ins_reg[7:4] == 'hD && !ins_reg[2]) begin
							/*
							*	rrl
							*/
							if(cycle == 2) begin
								if(psl[3]) begin
									psl[0] <= instr_reg[7];
									psl[5] <= instr_reg[4];
								end
								set_cc_for(rrl);
								write_reg(rrl, ins_reg[1:0]);
								cycle <= 0;
							end
						end else if(ins_reg[7:4] >= 'h94 && ins_reg[7:4] <= 'h97) begin //Decimal-adjust register
							if(cycle == 2) begin
								write_reg(instr_reg + (psl[0] ? 0 : 'hA0) + (psl[5] ? 0 : 'h0A), ins_reg[1:0]);
								cycle <= 0;
							end
						end else begin
							/*
							*	Misc instructions
							*/
							if(cycle == 2) begin
								if(is_mul) begin //Using undocumented opcodes to add a multiply instruction
									if(psl[4]) begin
										r123_2[1] <= mul_res[7:0];
										r123_2[2] <= mul_res[15:8];
									end else begin
										r123[1] <= mul_res[7:0];
										r123[2] <= mul_res[15:8];
									end
									cycle <= 0;
								end else if(ins_reg == 'h91) begin //Undocumented opcode, used here as an instruction that swaps r0 and r1
									if(psl[4]) begin
										r0 <= r123_2[0];
										r123_2[0] <= r0;
									end else begin
										r0 <= r123[0];
										r123[0] <= r0;
									end
									cycle <= 0;
								end else if(ins_reg == 'h10) begin //Originally undocumented, used here as a way to pop from the on-chip stack
									r0 <= stack[psu[2:0] - 1][7:0];
									if(psl[4]) begin
										r123_2[0] <= stack[psu[2:0] - 1][14:8];
									end else begin
										r123[0] <= stack[psu[2:0] - 1][14:8];
									end
									psu[2:0] <= psu[2:0] - 1;
									cycle <= 0;
								end else if(ins_reg == 'h11) begin //Originally undocumented, used here as a way to push to the on-chip stack
									stack[psu[2:0]][7:0] <= r0;
									if(psl[4]) begin
										stack[psu[2:0]][14:8] <= r123_2[0];
									end else begin
										stack[psu[2:0]][14:8] <= r123[0];
									end
									psu[2:0] <= psu[2:0] + 1;
									cycle <= 0;
								end else if(ins_reg == 'h12) begin
									r0 <= psu;
									set_cc_for(r0);
									cycle <= 0;
								end else if(ins_reg == 'h13) begin
									r0 <= psl;
									set_cc_for(r0);
									cycle <= 0;
								end else if(ins_reg == 'h92) begin
									psu <= r0;
									cycle <= 0;
								end else if(ins_reg == 'h93) begin
									psl <= r0;
									cycle <= 0;
								end else begin
									r_rw <= 0;
									r_opreq <= 1;
									pc <= pc + 1;
									r_addr <= pc;
									cycle <= 3;
								end
							end else if(cycle == 3 && opack) begin
								if(ins_reg == 'h74) begin
									psu <= psu & ~dbus_in;
								end else if(ins_reg == 'h75) begin
									psl <= psl & ~dbus_in;
								end else if(ins_reg == 'h76) begin
									psu <= psu | dbus_in;
								end else if(ins_reg == 'h77) begin
									psl <= psl | dbus_in;
								end else if(ins_reg == 'hB4 || ins_reg == 'hB6) begin
									psl[7:6] <= (psu & dbus_in) == dbus_in ? 0 : 2;
								end else if(ins_reg == 'hB5 || ins_reg == 'hB7) begin
									psl[7:6] <= (psl & dbus_in) == dbus_in ? 0 : 2;
								end else if(ins_reg >= 'hF4 && ins_reg <= 'hF7) begin //tmi
									psl[7:6] <= (instr_reg & dbus_in) == dbus_in ? 0 : 2;
								end
								r_opreq <= 0;
								cycle <= 0;
							end
						end
					end
				end else begin
					/*
					*	ALU or load/store instruction, or 'halt' or 'nop'
					*/
					if(cycle == 2) begin
						if(ins_reg == 'h40) begin //halt
							halted <= 1;
							cycle <= 0;
						end else if(ins_reg == 'hC0) begin //nop
							cycle <= 0;
						end else begin
							if(ins_reg[3:2] == 0) begin //Zero-addressed instruction
								if(ins_reg[7:4] == 0) begin //lodz instruction can complete immediately
									r0 <= instr_reg;
									set_cc_for(instr_reg);
									cycle <= 0;
								end else if(ins_reg[7:4] == 'hC && ins_reg[3:2] == 0) begin //strz instruction can complete immediately
									write_reg(r0, ins_reg[1:0]);
									set_cc_for(r0);
									cycle <= 0;
								end else begin //'zero' addressing mode can load immediately
									holding_reg <= r0;
									cycle <= 4;
								end
							end else begin
								//All other addressing modes need to read at least one more byte of instruction argument
								r_opreq <= 1;
								r_rw <= 0;
								r_addr <= pc[12:0];
								pc <= pc + 1;
								/*
								* Immediate-addressed instructions only load one byte, with no further address computation, so we can take a shortcut for those.
								* No need to 'branch' to complex address-computation. Just go to cycle 3 where the second operand is loaded from the bus.
								*/
								if(ins_reg[3:2] == 2) begin
									cycle <= 'b10_0000;
								end else if(ins_reg[3:2] == 3) begin
									cycle <= 'b11_0000;
								end else begin
									cycle <= 3;
								end
							end
						end
					end else if(cycle == 3 && opack) begin
						r_opreq <= 0;
						holding_reg <= dbus_in;
						cycle <= 4;
					end else if(cycle == 4) begin
						if(ins_reg[7:5] == 7) begin
							if(psl[1]) begin
								//Logical compare
								psl[7:6] <= input1 > input2 ? 'b01 : (input1 < input2 ? 'b10 : 'b00);
							end else begin
								//Arithmetic compare
								psl[7:6] <= input1[7] == input2[7] ? (input1 > input2 ? 'b01 : (input1 < input2 ? 'b10 : 'b00)) : (input1[7] ? 'b10 : 'b01);
							end
						end else begin
							set_cc_for(alu_next[7:0]);
							write_reg(alu_next[7:0], idx_ctrl != 0 || ins_reg[3:2] == 0 ? 0 : ins_reg[1:0]);
							if(ins_reg[7:5] == 4 || ins_reg[7:5] == 5) begin
								psl[5] <= alu_next[4] != input1[4] ^ (ins_reg[7:5] == 5 ? ~input2[4] : input2[4]);
								psl[2] <= input1[7] == input2[7] && alu_next[7] != input1[7];
								psl[0] <= alu_next[8];
							end
						end
						r_opreq <= 0;
						cycle <= 0;
					end
					/*
					*	Store instruction
					*/
					else if(cycle == 8) begin
						if(ins_reg >= 'hC4 && ins_reg <= 'hC7) begin
							cycle <= 0;
						end else begin
							r_wrp <= 1;
							cycle <= 9;
						end
					end else if(cycle == 9 && opack) begin
						r_rw <= 0;
						r_wrp <= 0;
						r_opreq <= 0;
						cycle <= 0;
					end
					
					/*
					*	Relative-addressing
					*/
					else if(cycle == 'b10_0000 && opack) begin
						cycle <= dbus_in[7] ? 'b01_0000 : (ins_reg[7:5] == 6 ? 8 : 3); //Detect if indirect load, and detect if store
						r_addr <= pc[12:0] + 1 + (dbus_in[6:0] >= 64 ? -(64 - (dbus_in[6:0] - 64)) : dbus_in[6:0]); //Apply address change
						if(!dbus_in[7]) begin
							setup_read();
						end
					end
					/*
					*	Absolute-addressing
					*/
					else if(cycle == 'b11_0000 && opack) begin
						addr_buff <= dbus_in; //Read MSB
						r_addr <= r_addr + 1; //Read next byte
						pc <= pc + 1;
						cycle <= 'b11_0001;
					end else if(cycle == 'b11_0001 && opack) begin
						cycle <= addr_buff[7] ? 'b01_0000 : (ins_reg[7:5] == 6 ? 8 : 3); //Detect if indirect load, and detect if store
						idx_ctrl <= addr_buff[6:5];
						if(!addr_buff[7]) begin
							/*
							*	Offset address by register value for indexed addressing
							*/
							if(addr_buff[6:5] == 0) begin
								r_addr <= {addr_buff[4:0], dbus_in};
							end else begin
								r_addr <= {addr_buff[4:0], dbus_in} + (addr_buff[6:5] == 1 ? instr_reg_p1 : (addr_buff[6:5] == 2 ? instr_reg_m1 : instr_reg));
								write_reg(addr_buff[6:5] == 1 ? instr_reg_p1 : (addr_buff[6:5] == 2 ? instr_reg_m1 : instr_reg), ins_reg[1:0]);
							end
							setup_read();
						end else begin
							r_addr <= {addr_buff[4:0], dbus_in};
						end
					end
					/*
					*	Indirect addressing (follows relative or absolute)
					*/
					else if(cycle == 'b01_0000 && opack) begin
						addr_buff <= dbus_in; //Read MSB
						r_addr <= r_addr + 1; //Read next byte
						cycle <= 'b01_0001;
					end else if(cycle == 'b01_0001) begin
						if(idx_ctrl == 0) begin
							r_addr <= {addr_buff[4:0], dbus_in};
						end else begin
							/*
							*	Offset address by register value for indexed addressing
							*/
							r_addr <= {addr_buff[4:0], dbus_in} + (idx_ctrl[1:0] == 1 ? instr_reg_p1 : (idx_ctrl[1:0] == 2 ? instr_reg_m1 : instr_reg));
							write_reg(idx_ctrl[1:0] == 1 ? instr_reg_p1 : (idx_ctrl[1:0] == 2 ? instr_reg_m1 : instr_reg), ins_reg[1:0]);
						end
						cycle <= ins_reg[7:5] == 6 ? 8 : 3; //Detect if store
						setup_read();
					end
				end
			end
		end
	end

	task write_reg(input [7:0] data, input [1:0] r_addr);
		begin
			if(r_addr == 0) begin
				r0 <= data;
			end else begin
				if(psl[4]) begin
					r123_2[r_addr - 1] <= data;
				end else begin
					r123[r_addr - 1] <= data;
				end
				
			end
		end
	endtask

	task push_stack();
		begin
			if(ins_reg[7:4] == 'h3 || ins_reg[7:4] == 'h7 || ins_reg[7:4] == 'hB) begin //Is it in one of the rows of subroutine branches?
				stack[psu[2:0]] <= pc;
				psu[2:0] <= psu[2:0] + 1;
			end
		end
	endtask

	task set_cc_for(input [7:0] val);
		begin
			psl[7:6] <= val > 127 ? 'b10 : (val != 0 ? 'b01 : 'b00);
		end
	endtask

	task setup_read();
		begin
			if(ins_reg[7:4] == 'hC) begin
				r_rw <= 1;
				b_buf <= addr_buff[6:5] != 0 ? r0 : instr_reg; //Account for indexed addressing always using r0
				cycle <= 8;
			end
		end
	endtask
endmodule
