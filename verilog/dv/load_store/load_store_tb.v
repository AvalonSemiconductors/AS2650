// SPDX-FileCopyrightText: 2023 Tholin
//
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
// SPDX-License-Identifier: Apache-2.0

`default_nettype none

`timescale 1 ns / 1 ps

module load_store_tb;
	reg clock;
	reg RSTB;
	reg CSB;
	reg power1;
	reg design_rst;

	wire gpio;
	wire [37:0] mprj_io;
	wire checkbit;

	// External clock is used by default.  Make this artificially fast for the
	// simulation.  Normally this would be a slow clock and the digital PLL
	// would be the fast clock.

	always #15 clock <= (clock === 1'b0);
	assign mprj_io[3] = (CSB == 1'b1) ? 1'b1 : 1'bz;
	assign mprj_io[0] = design_rst;
	
	wire [7:0] bus_out = mprj_io[1] ? 8'hzz : mprj_io[12:5];
	wire le_lo = mprj_io[13];
	wire le_hi = mprj_io[14];
	wire OEb;
	assign OEb = mprj_io[15];
	wire WEb = mprj_io[16];
	wire IOD = mprj_io[17];
	wire IOC = mprj_io[18];
	
	reg [7:0] bus_in;
	reg [15:0] full_addr_latch;
	
	wire [15:0] full_addr = {
		le_hi ? bus_out : full_addr_latch[15:8],
		le_lo ? bus_out : full_addr_latch[7:0]
	};
	
	assign mprj_io[12:5] = OEb ? 8'hzz : bus_in;
	
	initial begin
		bus_in = 8'h00;
		clock = 0;
		design_rst = 0;
		full_addr_latch = 0;
	end
	
	always @(negedge le_lo) begin
		full_addr_latch[7:0] <= bus_out;
	end
	
	always @(negedge le_hi) begin
		full_addr_latch[15:8] <= bus_out;
	end

	integer test;
	initial begin
		test = 1300;

		while(test > 2)  begin
			repeat (50) @(posedge clock);
			$fflush();
			test -= 1;
		end
			$display("%c[1;31m",27);
			`ifdef GL
				$display ("Monitor: TIMEOUT (GL)");
			`else
				$display ("Monitor: TIMEOUT (RTL)");
			`endif
			$display("%c[0m",27);
		$finish;
	end

	always @(posedge clock) begin
		if((IOC || IOD) && design_rst) begin
			$display("%c[1;31m",27);
			$display ("Monitor: IOC and/or IOD went high, this should never happen here. Test failed.");
			$display("%c[0m",27);
			$finish;
		end
	end
	
	reg [7:0] expected_regs [3:0];
	wire [7:0] expected_reg_0 = expected_regs[0];
	wire [7:0] expected_reg_1 = expected_regs[1];
	wire [7:0] expected_reg_2 = expected_regs[2];
	wire [7:0] expected_reg_3 = expected_regs[3];
 	integer step = 0;
	integer counter = 0;
	integer address_counter = 0;
	integer failures = 0;

	//strr with 0 offset to check reg values
	task check_all_regs();
		begin
			wait(OEb != 0);
			bus_in = 0;
			wait(le_lo == 1);
			wait(OEb == 0);
			wait(le_lo == 1);
			wait(OEb == 0);
			counter = 0;
			repeat(4) begin
				if(counter == 0) begin
					address_counter = full_addr;
				end
				bus_in = 8'hC8 + counter;
				wait(full_addr == address_counter && OEb == 0);
				#1;
				failures += WEb != 1;
				wait(full_addr == (address_counter + 1) && OEb == 0);
				#1;
				bus_in = 8'h00;
				failures += WEb != 1;
				@(posedge clock);
				#3;
				if(le_hi) begin
					failures += WEb != 1;
					failures += le_lo != 0;
					failures += OEb != 1;
					@(posedge clock);
					#3;
				end
				failures += le_lo != 1;
				failures += WEb != 1;
				@(posedge clock);
				#3;
				failures += le_lo != 0;
				failures += OEb != 1;
				failures += WEb != 0;
				failures += bus_out != expected_regs[counter];
				failures += full_addr != (address_counter + 2);
				counter = counter + 1;
				address_counter = address_counter + 2;
			end
		end
	endtask

	task implied_exec(input [7:0] instr);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in <= instr;
			@(posedge clock);
		end
	endtask

	task lodr_exec(input [1:0] register, input [6:0] offset, input [7:0] value, input [15:0] indirect);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = 8'h08 + register;
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = {indirect != 0, offset};
			if(indirect != 0) begin
				wait(full_addr == (offset[6] ? address_counter - (64 - offset[5:0]) : address_counter + offset) && OEb == 0);
				bus_in = indirect[15:8];
				wait(full_addr == (offset[6] ? address_counter - (64 - offset[5:0]) : address_counter + offset) + 1 && OEb == 0);
				bus_in = indirect[7:0];
				wait(full_addr == indirect && OEb == 0);
				bus_in = value;
				@(posedge clock);
			end else begin
				wait(full_addr == (offset[6] ? address_counter - (64 - offset[5:0]) : address_counter + offset) && OEb == 0);
				bus_in = value;
				@(posedge clock);
			end
			expected_regs[register] = value;
		end
	endtask

	task strr_exec(input [1:0] register, input [6:0] offset, input [15:0] indirect);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = 8'hC8 + register;
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = {indirect != 0, offset};
			if(indirect != 0) begin
				wait(full_addr == (offset[6] ? address_counter - (64 - offset[5:0]) : address_counter + offset) && OEb == 0);
				bus_in = indirect[15:8];
				wait(full_addr == (offset[6] ? address_counter - (64 - offset[5:0]) : address_counter + offset) + 1 && OEb == 0);
				bus_in = indirect[7:0];
				wait(full_addr == indirect && OEb == 1 && WEb == 0);
				#3;
				failures += bus_out != expected_regs[register];
				@(posedge clock);
			end else begin
				wait(full_addr == (offset[6] ? address_counter - (64 - offset[5:0]) : address_counter + offset) && OEb == 1 && WEb == 0);
				#3;
				failures += bus_out != expected_regs[register];
				@(posedge clock);
			end
		end
	endtask

	task loda_exec(input [1:0] register, input [12:0] address, input [7:0] value, input [15:0] indirect, input [1:0] index_control);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = 8'h0C + register;
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = {indirect != 0, index_control, address[12:8]};
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = address[7:0];
			if(index_control == 1) expected_regs[register] = expected_regs[register] + 1;
			if(index_control == 2) expected_regs[register] = expected_regs[register] - 1;
			if(indirect != 0) begin
				wait(full_addr == address && OEb == 0);
				bus_in = indirect[15:8];
				wait(full_addr == address + 1 && OEb == 0);
				bus_in = indirect[7:0];
				wait(full_addr == (indirect + (index_control != 0 ? expected_regs[register] : 0)) % 65536 && OEb == 0);
				bus_in = value;
				@(posedge clock);
			end else begin
				wait(full_addr == (address + (index_control != 0 ? expected_regs[register] : 0)) % 65536 && OEb == 0);
				bus_in = value;
				@(posedge clock);
			end
			if(index_control != 0) expected_regs[0] = value;
			else expected_regs[register] = value;
		end
	endtask

	task stra_exec(input [1:0] register, input [12:0] address, input [15:0] indirect, input [1:0] index_control);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = 8'hCC + register;
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = {indirect != 0, index_control, address[12:8]};
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = address[7:0];
			if(index_control == 1) expected_regs[register] = expected_regs[register] + 1;
			if(index_control == 2) expected_regs[register] = expected_regs[register] - 1;
			if(indirect != 0) begin
				wait(full_addr == address && OEb == 0);
				bus_in = indirect[15:8];
				wait(full_addr == address + 1 && OEb == 0);
				bus_in = indirect[7:0];
				wait(full_addr == indirect + (index_control != 0 ? expected_regs[register] : 0) && OEb == 1 && WEb == 0);
				#3;
				failures += bus_out != expected_regs[index_control != 0 ? 0 : register];
				@(posedge clock);
			end else begin
				wait(full_addr == address + (index_control != 0 ? expected_regs[register] : 0) && OEb == 1 && WEb == 0);
				#3;
				failures += bus_out != expected_regs[index_control != 0 ? 0 : register];
				@(posedge clock);
			end
		end
	endtask

	initial begin
		@(posedge gpio);
		@(negedge gpio);
		@(posedge gpio);
		$dumpfile("load_store.vcd");
		$dumpvars(1, load_store_tb);
		$dumpvars(0, load_store_tb.uut.chip_core.mprj);
		repeat (4) @(posedge clock);
		#5;
		design_rst = 1;
		$display("Reset released");
		bus_in = 8'h00;
		@(posedge clock);
		@(posedge clock);
		@(posedge clock);
		#3;
		failures += le_lo != 0;
		failures += le_hi != 1;
		failures += bus_out != 0;
		failures += WEb != 1;
		failures += OEb != 1;
		@(negedge clock);
		#3;
		failures += le_lo != 0;
		failures += le_hi != 0;
		failures += bus_out != 0;
		failures += WEb != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		failures += le_hi != 0;
		failures += WEb != 1;
		failures += OEb != 1;
		@(negedge clock);
		#3;
		failures += le_lo != 0;
		failures += le_hi != 0;
		failures += bus_out != 0;
		failures += WEb != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_lo != 0;
		failures += le_hi != 0;
		failures += WEb != 1;
		failures += OEb != 0;
		failures += full_addr != 0;

		//lodi
		bus_in = 8'h04;
		wait(full_addr == 1 && OEb == 0);
		bus_in = 8'h01;
		wait(full_addr == 2 && OEb == 0);
		bus_in = 8'h05;
		wait(full_addr == 3 && OEb == 0);
		bus_in = 8'h02;
		wait(full_addr == 4 && OEb == 0);
		bus_in = 8'h06;
		wait(full_addr == 5 && OEb == 0);
		bus_in = 8'h03;
		wait(full_addr == 6 && OEb == 0);
		bus_in = 8'h07;
		wait(full_addr == 7 && OEb == 0);
		bus_in = 8'h04;
		@(posedge clock);

		expected_regs[0] = 8'h01;
		expected_regs[1] = 8'h02;
		expected_regs[2] = 8'h03;
		expected_regs[3] = 8'h04;
		check_all_regs();
		if(failures == 0) $display("Completed: Load Immediate");
		else @(posedge clock);
		step = step + 1;

		if(failures == 0) begin
			//lodz
			implied_exec(8'h03);
			expected_regs[0] = 8'h04;
			check_all_regs();
			implied_exec(8'h02);
			expected_regs[0] = 8'h03;
			check_all_regs();
			implied_exec(8'h01);
			expected_regs[0] = 8'h02;
			check_all_regs();
			implied_exec(8'h00);
			expected_regs[0] = 8'h02;
			check_all_regs();
			if(failures == 0) $display("Completed: Load Zero");
			step = step + 1;
		end

		if(failures == 0) begin
			//strz
			implied_exec(8'hC1);
			expected_regs[1] = 8'h02;
			check_all_regs();
			implied_exec(8'hC2);
			expected_regs[2] = 8'h02;
			check_all_regs();
			implied_exec(8'hC3);
			expected_regs[3] = 8'h02;
			check_all_regs();
			implied_exec(8'hC0);
			check_all_regs();
			if(failures == 0) $display("Completed: Store Zero");
			step = step + 1;
		end

		if(failures == 0) begin
			//lodr
			if(failures == 0) repeat(25) begin
				if(failures == 0) begin
					lodr_exec($random%4, $random%128, $random%256, 0);
					check_all_regs();
				end
			end
			if(failures == 0) $display("Completed: Load Relative");
			step = step + 1;
		end

		if(failures == 0) begin
			//lodr *
			if(failures == 0) repeat(25) begin
				if(failures == 0) begin
					lodr_exec($random%4, $random%128, $random%256, ($random%65535) + 1);
					check_all_regs();
				end
			end
			if(failures == 0) $display("Completed: Load Relative Indirect");
			step = step + 1;
		end

		if(failures == 0) begin
			//strr
			repeat(25) begin
				if(failures == 0) begin
					lodr_exec(0, $random%128, $random%256, 0);
					lodr_exec(1, $random%128, $random%256, 0);
					lodr_exec(2, $random%128, $random%256, 0);
					lodr_exec(3, $random%128, $random%256, 0);
					strr_exec($random%4, $random%128, 0);
				end
			end
			if(failures == 0) $display("Completed: Store Relative");
			step = step + 1;
		end

		if(failures == 0) begin
			//strr *
			repeat(25) begin
				if(failures == 0) begin
					lodr_exec(0, $random%128, $random%256, 0);
					lodr_exec(1, $random%128, $random%256, 0);
					lodr_exec(2, $random%128, $random%256, 0);
					lodr_exec(3, $random%128, $random%256, 0);
					strr_exec($random%4, $random%128, ($random%65535) + 1);
				end
			end
			if(failures == 0) $display("Completed: Store Relative Indirect");
			step = step + 1;
		end

		if(failures == 0) begin
			//loda
			repeat(25) begin
				if(failures == 0) begin
					loda_exec($random%4, $random%8191, $random%256, 0, 0);
					check_all_regs();
				end
			end
			if(failures == 0) $display("Completed: Load Absolute");
			step = step + 1;
		end

		if(failures == 0) begin
			//loda *
			repeat(25) begin
				if(failures == 0) begin
					loda_exec($random%4, $random%8191, $random%256, ($random%65535) + 1, 0);
					check_all_regs();
				end
			end
			if(failures == 0) $display("Completed: Load Absolute Indirect");
			step = step + 1;
		end

		if(failures == 0) begin
			//loda ,rx
			repeat(25) begin
				if(failures == 0) begin
					loda_exec($random%4, $random%8191, $random%256, 0, ($random%3) + 1);
					check_all_regs();
				end
			end
			if(failures == 0) $display("Completed: Load Absolute Indexed");
			step = step + 1;
		end

		if(failures == 0) begin
			//loda *,rx
			repeat(25) begin
				if(failures == 0) begin
					loda_exec($random%4, $random%8191, $random%256, ($random%65535) + 1, ($random%3) + 1);
					check_all_regs();
				end
			end
			if(failures == 0) $display("Completed: Load Absolute Indirect Indexed");
			step = step + 1;
		end

		if(failures == 0) begin
			//stra
			repeat(25) begin
				if(failures == 0) begin
					lodr_exec(0, $random%128, $random%256, 0);
					lodr_exec(1, $random%128, $random%256, 0);
					lodr_exec(2, $random%128, $random%256, 0);
					lodr_exec(3, $random%128, $random%256, 0);
					stra_exec($random%4, $random%8191, 0, 0);
				end
			end
			if(failures == 0) $display("Completed: Store Absolute");
			step = step + 1;
		end

		if(failures == 0) begin
			//stra *
			repeat(25) begin
				if(failures == 0) begin
					lodr_exec(0, $random%128, $random%256, 0);
					lodr_exec(1, $random%128, $random%256, 0);
					lodr_exec(2, $random%128, $random%256, 0);
					lodr_exec(3, $random%128, $random%256, 0);
					stra_exec($random%4, $random%8191, ($random%65535) + 1, 0);
				end
			end
			if(failures == 0) $display("Completed: Store Absolute Indirect");
			step = step + 1;
		end

		if(failures == 0) begin
			//stra ,rx
			repeat(25) begin
				if(failures == 0) begin
					lodr_exec(0, $random%128, $random%256, 0);
					lodr_exec(1, $random%128, $random%256, 0);
					lodr_exec(2, $random%128, $random%256, 0);
					lodr_exec(3, $random%128, $random%256, 0);
					stra_exec($random%4, $random%8191, 0, ($random%3) + 1);
				end
			end
			if(failures == 0) $display("Completed: Store Absolute Indexed");
			step = step + 1;
		end

		if(failures == 0) begin
			//stra *,rx
			repeat(25) begin
				if(failures == 0) begin
					lodr_exec(0, $random%128, $random%256, 0);
					lodr_exec(1, $random%128, $random%256, 0);
					lodr_exec(2, $random%128, $random%256, 0);
					lodr_exec(3, $random%128, $random%256, 0);
					stra_exec($random%4, $random%8191, ($random%65535) + 1, ($random%3) + 1);
				end
			end
			if(failures == 0) $display("Completed: Store Absolute Indirect Indexed");
			step = step + 1;
		end

		if(!failures) begin
			$display("%c[1;32m", 27);
			`ifdef GL
			$display("Monitor: Test (GL) Passed");
			`else
			$display("Monitor: Test (RTL) Passed");
			`endif
			$display("%c[0m", 27);
		end else begin
			$display("%c[1;31m",27);
			`ifdef GL
				$display ("Monitor: Test (GL) Failed");
			`else
				$display ("Monitor: Test (RTL) Failed");
			`endif
			$display("%c[0m",27);
		end
		$finish();
	end

	initial begin
		RSTB <= 1'b0;
		CSB  <= 1'b1;		// Force CSB high
		#2000;
		RSTB <= 1'b1;	    	// Release reset
		#3_000_000;
		CSB = 1'b0;		// CSB can be released
	end

	initial begin		// Power-up sequence
		power1 <= 1'b0;
		#100;
		power1 <= 1'b1;
	end

	wire flash_csb;
	wire flash_clk;
	wire flash_io0;
	wire flash_io1;

	wire VDD = power1;
	wire VSS = 1'b0;

	caravel uut (
		.VSS(VSS),
		.VDD(VDD),
		.clock    (clock),
		.gpio     (gpio),
		.mprj_io  (mprj_io),
		.flash_csb(flash_csb),
		.flash_clk(flash_clk),
		.flash_io0(flash_io0),
		.flash_io1(flash_io1),
		.resetb	  (RSTB)
	);

	spiflash #(
		.FILENAME("load_store.hex")
	) spiflash (
		.csb(flash_csb),
		.clk(flash_clk),
		.io0(flash_io0),
		.io1(flash_io1),
		.io2(),			// not used
		.io3()			// not used
	);

endmodule
`default_nettype wire
