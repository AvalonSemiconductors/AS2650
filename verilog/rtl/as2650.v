`default_nettype none

module as2650(
	input clk,
	input rst,
	
	input [7:0] bus_in,
	output [7:0] bus_out,
	output le_lo,
	output le_hi,
	
	output OEb,
	output WEb,
	output bus_dir,
	output IOC,
	output IOD,
	
	input irq,
	
	output flag,
	input sense,
	
	output [7:0] debug_psl,
	output [7:0] debug_psu,
	
	output [32:0] la_data_out
);

reg [7:0] regs [7:0];

`ifdef SIM
wire [7:0] r0 = regs[0];
wire r0_broken = regs[0] != regs[4];
wire [7:0] r1 = regs[1];
wire [7:0] r2 = regs[2];
wire [7:0] r3 =  regs[3];
wire [7:0] r1_2 = regs[5];
wire [7:0] r2_2 = regs[6];
wire [7:0] r3_2 = regs[7];
`endif

/*
 *  ---------------------------------
 *  |  7|  6|  5|  4|  3|  2|  1|  0|
 *  ---------------------------------
 *  |  S|  F| II| NC|SP3|SP2|SP1|SP0|
 *  ---------------------------------
 */
reg [7:0] psu;
assign debug_psu = psu;
assign flag = psu[6];

/*
 *  ---------------------------------
 *  |  7|  6|  5|  4|  3|  2|  1|  0|
 *  ---------------------------------
 *  |CC1|CC0|IDC| RS| WC|OVF|COM|  C|
 *  ---------------------------------
 */
reg [7:0] psl;
assign debug_psl = psl;

reg [15:0] stack [15:0];
wire [15:0] TOS = stack[psu[3:0] - 1];
reg [12:0] PC;
reg [2:0] page_reg; 
reg [15:0] ivectors_base;

reg [15:0] last_addr;
reg [2:0] cycle;
reg [7:0] insin;
reg [15:0] instruction_args_latch;
wire [15:0] instruction_args = {
	cycle == PARAM1 && last_addr == requested_addr && !reset ? bus_in : instruction_args_latch[15:8],
	cycle == PARAM2 && last_addr == requested_addr && !reset ? bus_in : instruction_args_latch[7:0]
};
reg extend;
reg [1:0] warmup;
reg halted;
wire reset = rst || warmup;

reg indirect_cyc;
reg [1:0] indexed_cyc;
reg [15:0] indirect_target;
reg relative_cyc;

wire [7:0] instruction = cycle == FETCH ? bus_in : insin;

localparam FETCH = 0;
localparam PARAM1 = 1;
localparam PARAM2 = 2;
localparam DATA1 = 3;
localparam IO1 = 4;
localparam IO2 = 5;
localparam HALT = 7;

/*
 * Memory bus signals
 */
wire [7:0] reg_plus_1 = instr_reg_v + 1;
wire [7:0] reg_minus_1 = instr_reg_v - 1;
wire [1:0] index_control = extend ? 2'b11 : (indexed_cyc != 0 ? indexed_cyc : instruction_args_latch[14:13]);
wire [7:0] index = index_control== 2'b01 ? reg_plus_1 : (index_control == 2'b10 ? reg_minus_1 : regs[instr_reg_a]);
wire is_data_fetch_cycle = relative_cyc || indirect_cyc || cycle == DATA1;
wire is_instr_fetch_cycle = (cycle == FETCH || cycle == PARAM1 || cycle == PARAM2) && !is_data_fetch_cycle;
wire le_lo_act = (is_instr_fetch_cycle || is_data_fetch_cycle) && (requested_addr[7:0] != last_addr[7:0] && requested_addr[15:8] == last_addr[15:8]) && !IO_cyc;
assign le_lo = le_lo_act && clk && !reset;
wire le_hi_act = (is_instr_fetch_cycle || is_data_fetch_cycle) && (requested_addr[15:8] != last_addr[15:8]) && !IO_cyc;
assign le_hi = le_hi_act && clk && !reset;

wire [15:0] requested_addr = (cycle == DATA1 ? (indirect_cyc || extend ? instruction_args_latch : {page_reg, instruction_args_latch[12:0]}) : (is_instr_fetch_cycle ? {page_reg, PC} : (indirect_cyc || relative_cyc ? indirect_target : 0)) + (!is_instr_fetch_cycle && cycle == PARAM2 ? 1 : 0)) + (((is_indexed && !indirect_cyc) || (indexed_cyc != 0 && cycle == DATA1)) && is_data_fetch_cycle ? index : 0);

wire write_cyc = cycle == DATA1 && is_store || (cycle == PARAM1 && relative_cyc && is_store);

assign OEb = !(((is_instr_fetch_cycle || is_data_fetch_cycle) && last_addr == requested_addr) || (IO_cyc && is_IO_READ)) || reset || write_cyc;
assign WEb = !(write_cyc || (is_IO_WRITE && cycle == IO1)) || reset || (last_addr != requested_addr && !IO_cyc);
assign bus_out = is_IO_WRITE && IO_cyc ? instr_reg_v : (le_lo_act ? requested_addr[7:0] : (le_hi_act ? requested_addr[15:8] : alu_instr_reg));
assign bus_dir = !(!WEb || le_lo_act || le_hi_act || (is_IO_WRITE && IO_cyc)) || reset;
wire IO_cyc = cycle == IO1 || cycle == IO2;
assign IOC = IO_cyc && !instruction[6];
assign IOD = IO_cyc && instruction[6];

/*
 * Instruction decode
 */
wire is_RETURN = (instruction[7:2] == 6'b000101 || instruction[7:2] == 6'b001101) && !extend;
wire is_DAR = instruction[7:2] == 6'b100101 && !extend;
wire is_CLR = instruction[7:2] == 6'h31 && !extend;
wire is_EXT = instruction == 8'hB7 && !extend;
wire is_HALT = instruction == 8'h40 && !extend;
wire is_NOP = instruction == 8'hC0 && !extend;
wire is_XCHG = instruction == 8'h91 && !extend;
wire is_MUL = instruction == 8'h90 && !extend;
wire is_ZBR = (instruction == 8'h9B || instruction == 8'hBB) && !extend;
wire is_BXA = (instruction == 8'h9F || instruction == 8'hBF) && !extend;
wire is_LPS = instruction[7:1] == 7'h49 && !extend;
wire is_SPS = instruction[7:1] == 7'h09 && !extend;
wire is_BRANCH = instruction[4:3] == 2'b11;
wire needs_param = (instruction[3:2] == 2'b01 || instruction[3:2] == 2'b10) && !is_RETURN && !is_DAR && !is_CLR && !is_EXT && !extend;
wire needs_2_param = instruction[3:2] == 2'b11 || (extend && instruction[3:2] == 2'b10);
wire is_indexed = ((instruction[3:2] == 2'b11 && instruction_args_latch[14:13] != 2'b00) && !is_BRANCH && !indirect_cyc && !extend) || (extend && (instruction[7:2] == 6'h03 || instruction[7:2] == 6'h33));
wire is_indirect = (instruction[3:2] == 2'b10 || instruction[3:2] == 2'b11) && instruction_args[15] && !indirect_cyc && !extend;
wire is_store = (instruction[7:4] == 4'hC && !is_NOP && !extend) || (instruction[7:3] == 5'h19 && extend);
wire is_COM = instruction[7:4] == 4'hE && !extend;
wire is_ALU_op = !instruction[4] && !is_store && !is_HALT && !is_COM && (!extend || instruction[3] == 1);
wire is_immediate = instruction[3:2] == 2'b01;
wire is_zero_reg = instruction[3:2] == 2'b00;
wire is_add_sub = instruction[7:5] == 3'h4 || instruction[7:5] == 3'h5;
wire is_relative = instruction[3:2] == 2'b10;
wire is_PUSH = instruction == 8'h10 && !extend;
wire is_POP = instruction == 8'h11 && !extend;
wire is_TPS = instruction[7:1] == 7'h5A && !extend;
wire is_CPS = instruction[7:1] == 7'h3A && !extend;
wire is_PPS = instruction[7:1] == 7'h3B && !extend;
wire is_RRR = instruction[7:2] == 6'h14 && !extend;
wire is_RRL = instruction[7:2] == 6'h34 && !extend;
wire is_TMI = instruction[7:2] == 6'h3D && !extend;
wire is_IO_READ = (instruction[7:2] == 6'h0C || instruction[7:2] == 6'h1C) && !extend;
wire is_IO_WRITE = (instruction[7:2] == 6'h2C || instruction[7:2] == 6'h3C) && !extend;
wire is_CPL = instruction[7:2] == 6'h38 && extend;
wire is_PSHS = instruction == 8'h10 && extend;
wire is_POPS = instruction == 8'h11 && extend;
wire is_SVB = instruction == 8'h12 && extend;
wire is_CHRP = instruction == 8'h13 && extend;

wire [2:0] instr_reg_a = {psl[4], instruction[1:0]};
wire [7:0] instr_reg_v = regs[instr_reg_a];

wire [12:0] relative_eff_address_pre = PC + 1 + {instruction_args[14], instruction_args[14], instruction_args[14], instruction_args[14], instruction_args[14], instruction_args[14], instruction_args[14:8]};
wire [15:0] relative_eff_address = {page_reg, relative_eff_address_pre};

//Branch instr decode
wire is_CC_BRANCH = instruction[7:4] == 4'h1 || instruction[7:4] == 4'h3 || instruction[7:4] == 4'h9 || instruction[7:4] == 4'hB;
wire is_REG_BRANCH = !is_CC_BRANCH;
wire is_BRANCH_SUB = instruction[7:4] != 4'hF && instruction[5:4] == 2'b11;
wire [7:0] branch_compare_reg = instruction[7:4] == 4'hD ? reg_plus_1 : (instruction[7:4] == 4'hF ? reg_minus_1 : instr_reg_v);
wire should_branch = (is_CC_BRANCH && instruction[7] && psl[7:6] != instruction[1:0]) || (is_CC_BRANCH && !instruction[7] && instruction[1:0] == 2'b11) || (is_CC_BRANCH && !instruction[7] && psl[7:6] == instruction[1:0] || (is_REG_BRANCH && branch_compare_reg != 8'h00)) || is_ZBR || is_BXA;
wire [15:0] zbr_target = {(bus_in[6] ? 10'b0000000111 : 10'h000), bus_in[5:0]};

/*
 * ALU
 */
wire [2:0] r0_a = {psl[4], 2'b00};
wire [2:0] r1_a = {psl[4], 2'b01};
wire [2:0] r2_a = {psl[4], 2'b10};
wire [2:0] r3_a = {psl[4], 2'b11};
assign la_data_out = {halted, regs[r3_a], regs[r2_a], regs[r1_a], regs[r0_a]};
wire [15:0] mul_res = regs[r0_a] * regs[r1_a];
wire [7:0] rrr = psl[3] ? {psl[0], instr_reg_v[7:1]} : {instr_reg_v[0], instr_reg_v[7:1]};
wire [7:0] rrl = psl[3] ? {instr_reg_v[6:0], psl[0]} : {instr_reg_v[6:0], instr_reg_v[7]};

wire indexed_data1 = ((is_indexed && !indirect_cyc) || indexed_cyc != 0) && cycle == DATA1;
wire [7:0] alu_instr_reg = indexed_data1 ? (instr_reg_a[1:0] == 2'b00 ? index : regs[r0_a]) : instr_reg_v;
wire [7:0] alu_input1 = is_zero_reg ? regs[r0_a] : alu_instr_reg;
wire [7:0] alu_input2 = is_zero_reg ? alu_instr_reg : bus_in;
wire [2:0] alu_op = instruction[7:5];
reg [8:0] alu_next;
always @(*) begin
	case(alu_op)
		1: alu_next = {psl[0], alu_input1 ^ alu_input2};
		2: alu_next = {psl[0], alu_input1 & alu_input2};
		3: alu_next = {psl[0], alu_input1 | alu_input2};
		4: alu_next = {1'b0, alu_input1} + {1'b0, alu_input2} + {8'h00, (psl[3] && psl[0])};
		5: alu_next = {1'b0, alu_input1} + {1'b0, ~alu_input2} + {8'h00, (!psl[3] || psl[0])};
		default: alu_next = {psl[0], alu_input2};
	endcase
end
wire next_idc = alu_next[4] != alu_input1[4] ^ (instruction[7:5] == 5 ? ~alu_input2[4] : alu_input2[4]);
wire next_ovf = alu_input1[7] == alu_input2[7] && alu_next[7] != alu_input1[7];

always @(posedge clk) begin
	if(rst || (warmup != 0)) begin
		psl <= 8'h00;
		psu <= 8'h20; //Interrupts globally disabled on reset
		cycle <= 3'h0;
		last_addr <= 16'hAAAA;
		insin <= 8'h00;
		instruction_args_latch <= 16'h0000;
		PC <= 13'h0000;
		extend <= 1'b0;
		warmup <= rst ? 2'b11 : warmup - 1;
		halted <= 1'b0;
		indirect_cyc <= 1'b0;
		indirect_target <= 16'h0000;
		relative_cyc <= 1'b0;
		regs[0] <= 8'h00;
		regs[1] <= 8'h00;
		regs[2] <= 8'h00;
		regs[3] <= 8'h00;
		regs[4] <= 8'h00;
		regs[5] <= 8'h00;
		regs[6] <= 8'h00;
		regs[7] <= 8'h00;
		indexed_cyc <= 2'b00;
		page_reg <= 3'b000;
		ivectors_base <= 16'h0000;
		chirp_ptr <= 3'b000;
	end else begin
		psu[7] <= sense;
		//r0 is always the same, no matter the RS value
		if(psl[4]) regs[3'b000] <= regs[3'b100];
		else regs[3'b100] <= regs[3'b000];

		if(le_lo_act) last_addr[7:0] <= requested_addr[7:0];
		if(le_hi_act) last_addr[15:8] <= requested_addr[15:8];
		if(cycle == FETCH) begin
			indirect_cyc <= 1'b0;
			relative_cyc <= 1'b0;
			indexed_cyc <= 2'b00;
			instruction_args_latch <= 16'h0000;
			if(last_addr == requested_addr) begin
				PC <= PC + 1;
				insin <= bus_in;
				if(needs_param || needs_2_param) begin
					if(is_BRANCH && !should_branch) begin
						PC <= PC + (needs_2_param ? 3 : 2);
						cycle <= FETCH;
						if(is_REG_BRANCH) regs[instr_reg_a] <= branch_compare_reg;
					end else cycle <= PARAM1;
				end else begin
					//Hidden EXEC0 state. Some instructions can be quickly executed right away
					//Special case some stuff
					if(!is_EXT) extend <= 1'b0;
					if(is_HALT) halted <= 1'b1;
					else if(is_EXT) begin
						extend <= 1'b1;
					end else if(is_NOP || is_IO_READ || is_IO_WRITE) begin
					end else if(is_CPL) begin
						regs[instr_reg_a] <= ~instr_reg_v;
					end else if(is_XCHG) begin
						regs[r0_a] <= regs[r1_a];
						regs[r1_a] <= regs[r0_a];
					end else if(is_PUSH) begin
						stack[psu[3:0]] <= {regs[r1_a], regs[r0_a]};
						psu[3:0] <= psu[3:0] + 1;
					end else if(is_POP) begin
						regs[r0_a] <= TOS[7:0];
						regs[r1_a] <= TOS[15:8];
						psu[3:0] <= psu[3:0] - 1;
					end else if(is_PSHS) begin
						stack[psu[3:0]] <= {psu, psl};
						psu[3:0] <= psu[3:0] + 1;
					end else if(is_POPS) begin
						psl <= TOS[7:0];
						psu <= {TOS[15:12], psu[3:0] - 4'b0001};
					end else if(is_SVB) begin
						ivectors_base <= {regs[r1_a], regs[r0_a]};
					end else if(is_CHRP) begin
						regs[r0_a] <= {1'b0, chirpchar};
						chirp_ptr <= chirp_ptr + 1;
						psl[7:6] <= 2'b01;
					end else if(is_CLR) begin
						regs[instr_reg_a] <= 8'h00;
					end else if(is_RETURN) begin
						if(instruction[1:0] == 2'b11 || instruction[1:0] == psl[7:6]) begin
							PC <= TOS[12:0];
							page_reg <= TOS[15:13];
							psu[3:0] <= psu[3:0] - 1;
							if(instruction[5]) psu[5] <= 1'b0;
						end
					end else if(is_MUL) begin
						regs[r0_a] <= mul_res[7:0];
						regs[r1_a] <= mul_res[15:8];
						psl[7:6] <= mul_res > 32767 ? 'b10 : (mul_res != 0 ? 'b01 : 'b00);
					end else if(is_COM && is_zero_reg) begin
						perform_compare(regs[r0_a], regs[instr_reg_a]);
					end else if(is_ALU_op && is_zero_reg) begin
						perform_alu_op(r0_a);
					end else if(is_store && is_zero_reg) begin
						regs[instr_reg_a] <= regs[r0_a];
						set_cc_for(regs[r0_a]);
					end else if(is_DAR) begin
						regs[instr_reg_a] <= {regs[instr_reg_a][7:4] + (psl[0] ? 4'h0 : 4'hA), regs[instr_reg_a][3:0] + (psl[5] ? 4'h0 : 4'hA)};
					end else if(is_RRR) begin
						if(psl[3]) begin
							psl[0] <= instr_reg_v[0];
							psl[5] <= instr_reg_v[6];
						end
						set_cc_for(rrr);
						regs[instr_reg_a] <= rrr;
					end else if(is_RRL) begin
						if(psl[3]) begin
							psl[0] <= instr_reg_v[7];
							psl[5] <= instr_reg_v[4];
						end
						set_cc_for(rrl);
						regs[instr_reg_a] <= rrl;
					end else if(is_LPS) begin
						if(instruction[0]) psl <= regs[r0_a];
						else psu <= regs[r0_a];
					end else if(is_SPS) begin
						if(instruction[0]) begin
							regs[r0_a] <= psl;
							set_cc_for(psl);
						end else begin
							regs[r0_a] <= psu;
							set_cc_for(psu);
						end
					end

					cycle <= is_HALT ? HALT : (is_IO_READ || is_IO_WRITE ? IO1 : FETCH);
				end
			end
		end
		if(cycle == PARAM1) begin
			if(last_addr == requested_addr) begin
				if(is_instr_fetch_cycle) PC <= PC + 1;
				if(is_immediate || relative_cyc) begin
					//Immediate mode and relative mode instructions
					if(is_store) begin
					end else if(is_TPS) begin
						if(((instruction[0] ? psl : psu) & bus_in) == bus_in) psl[7:6] <= 2'b00;
						else psl[7:6] <= 2'b01;
					end else if(is_CPS) begin
						if(instruction[0]) psl <= psl & ~bus_in;
						else psu <= psu & ~bus_in;
					end else if(is_PPS) begin
						if(instruction[0]) psl <= psl | bus_in;
						else psu <= psu | bus_in;
					end else if(is_COM) begin
						perform_compare(alu_instr_reg, bus_in);
					end else if(is_TMI) begin
						if((instr_reg_v & bus_in) == instr_reg_v) psl[7:6] <= 2'b00;
						else psl[7:6] <= 2'b01;
					end else if(is_ALU_op) begin
						perform_alu_op(instr_reg_a);
					end
					cycle <= FETCH;
					extend <= 1'b0;
					relative_cyc <= 1'b0;
				end else if(needs_2_param || indirect_cyc) begin
					cycle <= PARAM2;
				end else if(is_relative && is_indirect) begin
					indirect_target <= is_ZBR ? zbr_target : relative_eff_address;
					indirect_cyc <= 1'b1;
				end else if(is_relative && !is_indirect) begin
					if(is_BRANCH) begin
						if(is_ZBR) perform_branch(zbr_target);
						else perform_branch(relative_eff_address);
						extend <= 1'b0;
						cycle <= FETCH;
					end else begin
						relative_cyc <= 1'b1;
						indirect_target <= relative_eff_address;
					end
				end
				instruction_args_latch[15:8] <= bus_in;
			end
		end
		if(cycle == PARAM2) begin
			if(last_addr == requested_addr) begin
				if(is_instr_fetch_cycle) PC <= PC + 1;
				if(is_indirect && !indirect_cyc) begin
					indirect_cyc <= 1'b1;
					indirect_target <= is_BRANCH ? {page_reg[2], instruction_args[14:0]} : {page_reg, instruction_args[12:0]};
					indexed_cyc <= index_control;
					cycle <= PARAM1;
				end else if(is_BRANCH) begin
					perform_branch((indirect_cyc || extend ? instruction_args : {page_reg[2], instruction_args[14:0]}) + (is_BXA ? {8'h00, regs[r3_a]} : 16'h0000));
					cycle <= FETCH;
					extend <= 1'b0;
				end else cycle <= DATA1;
				instruction_args_latch[7:0] <= bus_in;
			end
		end
		if(cycle == DATA1) begin
			if(last_addr == requested_addr) begin
				if(indexed_data1) regs[instr_reg_a] <= index;
				indirect_cyc <= 1'b0;
				indexed_cyc <= 2'b00;
				instruction_args_latch <= 16'h0000;
				if(is_store) begin
				end else if(is_COM) begin
					perform_compare(alu_instr_reg, bus_in);
				end else if(is_ALU_op) begin
					perform_alu_op(indexed_data1 ? r0_a : instr_reg_a);
				end
				cycle <= FETCH;
				extend <= 1'b0;
			end
		end
		if(cycle == IO1) begin
			cycle <= IO2;
		end
		if(cycle == IO2) begin
			if(is_IO_READ) begin
				regs[instr_reg_a] <= bus_in;
				psl[7:6] <= bus_in > 127 ? 2'b10 : (bus_in == 0 ? 2'b00 : 2'b01);
			end
			cycle <= FETCH;
		end

		if(cycle == HALT) begin

		end
	end
end

task set_cc_for(input [7:0] val);
	begin
		psl[7:6] <= val > 127 ? 'b10 : (val != 0 ? 'b01 : 'b00);
	end
endtask

task perform_alu_op(input [2:0] targ_reg);
	begin
		regs[targ_reg] <= alu_next[7:0];
		psl[0] <= alu_next[8];
		set_cc_for(alu_next[7:0]);
		if(is_add_sub) begin
			psl[5] <= next_idc;
			psl[2] <= next_ovf;
		end
	end
endtask

task perform_compare(input [7:0] in1, input [7:0] in2);
	begin
		if(in1 == in2) psl[7:6] <= 2'b00;
		else if(psl[1] || in1[7] == in2[7]) begin
			if(in1 > in2) psl[7:6] <= 2'b01;
			else if(in1 < in2) psl[7:6] <= 2'b10;
		end else psl[7:6] <= in1[7] ? 2'b10 : 2'b01;
	end
endtask

task perform_branch(input [15:0] target);
	begin
		if(should_branch) begin
			if(is_BRANCH_SUB) begin
				//Push return address onto stack
				stack[psu[3:0]] <= {page_reg, indirect_cyc ? PC : PC + 13'h0001};
				psu[3:0] <= psu[3:0] + 1;
			end
			PC <= target[12:0];
			page_reg <= target[15:13];
		end
		if(is_REG_BRANCH) regs[instr_reg_a] <= branch_compare_reg;
	end
endtask

reg [2:0] chirp_ptr;
reg [6:0] chirpchar;
always @(*) begin
	case(chirp_ptr)
		0: chirpchar = 7'h43;
		1: chirpchar = 7'h68;
		2: chirpchar = 7'h69;
		3: chirpchar = 7'h72;
		4: chirpchar = 7'h70;
		5: chirpchar = 7'h21;
		6: chirpchar = 13;
		7: chirpchar = 10;
	endcase
end

endmodule
