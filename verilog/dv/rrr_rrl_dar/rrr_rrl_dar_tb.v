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

module rrr_rrl_dar_tb;
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
	wire OEb = mprj_io[15];
	wire WEb = mprj_io[16];
	wire flag = mprj_io[2];
	reg sense;
	assign mprj_io[4] = sense;
	wire carry = mprj_io[17];
	wire idc = mprj_io[18];
	
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
		sense = 0;
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
			#2;
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

	task immediate_exec(input [7:0] instr, input [7:0] data);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in <= instr;
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in <= data;
			@(posedge clock);
		end
	endtask

	task lodi_exec(input [1:0] register, input [7:0] val);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = 8'h04 + register;
			wait(full_addr == address_counter && OEb == 0);
			address_counter = address_counter + 1;
			bus_in = val;
			expected_regs[register] = val;
			@(posedge clock);
		end
	endtask

	initial begin
		@(posedge gpio);
		@(negedge gpio);
		@(posedge gpio);
		$dumpfile("rrr_rrl_dar.vcd");
		$dumpvars(1, rrr_rrl_dar_tb);
		$dumpvars(0, rrr_rrl_dar_tb.uut.chip_core.mprj);
		repeat (4) @(posedge clock);
		#6;
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
		address_counter = 0;
		lodi_exec(0, 8'h02);
		lodi_exec(1, 10);
		lodi_exec(2, 50);
		lodi_exec(3, 200);
		check_all_regs();

		#3;
		failures += carry != 0;
		implied_exec(8'h50);
		#3;
		failures += carry != 0;
		expected_regs[0] = 8'h01;
		check_all_regs();
		implied_exec(8'h50);
		#3;
		failures += carry != 0;
		expected_regs[0] = 8'h80;
		check_all_regs();
		implied_exec(8'h50);
		#3;
		failures += carry != 0;
		expected_regs[0] = 8'h40;
		check_all_regs();
		implied_exec(8'hC1);
		implied_exec(8'hD1);
		#3;
		failures += carry != 0;
		expected_regs[1] = 8'h80;
		check_all_regs();
		implied_exec(8'hD1);
		#3;
		failures += carry != 0;
		expected_regs[1] = 8'h01;
		check_all_regs();
		implied_exec(8'hD1);
		#3;
		failures += carry != 0;
		expected_regs[1] = 8'h02;
		check_all_regs();

		immediate_exec(8'h77, 8);
		lodi_exec(3, 8'h21);
		check_all_regs();
		#3;
		failures += carry != 0;
		implied_exec(8'h53);
		#3;
		failures += carry != 1;
		expected_regs[3] = 8'h10;
		check_all_regs();
		implied_exec(8'h53);
		#3;
		failures += carry != 0;
		expected_regs[3] = 8'h88;
		check_all_regs();
		implied_exec(8'h03);
		implied_exec(8'hD0);
		#3;
		failures += carry != 1;
		expected_regs[0] = 8'h10;
		check_all_regs();
		implied_exec(8'hD0);
		#3;
		failures += carry != 0;
		expected_regs[0] = 8'h21;
		check_all_regs();
		implied_exec(8'hD0);
		#3;
		failures += carry != 0;
		expected_regs[0] = 8'h42;
		check_all_regs();

		immediate_exec(8'h75, 8);
		lodi_exec(0, 8'h12);
		lodi_exec(1, 8'h31);
		immediate_exec(8'h84, 8'h66);
		implied_exec(8'h81);
		implied_exec(8'h94);
		expected_regs[0] = 8'h43;
		check_all_regs();

		lodi_exec(0, 8'h76);
		lodi_exec(1, 8'h07);
		immediate_exec(8'h84, 8'h66);
		implied_exec(8'h81);
		implied_exec(8'hC2);
		implied_exec(8'h96);
		implied_exec(8'h02);
		expected_regs[0] = 8'h83;
		expected_regs[2] = 8'h83;
		check_all_regs();

		immediate_exec(8'h75, 8);
		lodi_exec(0, 8'h76);
		lodi_exec(1, 8'h31);
		immediate_exec(8'h84, 8'h66);
		implied_exec(8'h81);
		implied_exec(8'h94);
		expected_regs[0] = 8'h07;
		check_all_regs();

		immediate_exec(8'h75, 8);
		lodi_exec(0, 8'h76);
		lodi_exec(1, 8'h35);
		immediate_exec(8'h84, 8'h66);
		implied_exec(8'h81);
		implied_exec(8'h94);
		expected_regs[0] = 8'h11;
		check_all_regs();

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
		.FILENAME("rrr_rrl_dar.hex")
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
