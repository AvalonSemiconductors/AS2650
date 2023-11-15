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

module branches_tb;
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
	wire [1:0] CC = mprj_io[18:17];
	
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
	integer origin1 = 0;
	integer origin2 = 0;
	integer failures = 0;

	//strr with 0 offset to check reg values
	task check_all_regs();
		begin
			#1;
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
		$dumpfile("branches.vcd");
		$dumpvars(1, branches_tb);
		$dumpvars(0, branches_tb.uut.chip_core.mprj);
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
		address_counter = 0;
		lodi_exec(0, 20);
		lodi_exec(1, 10);
		lodi_exec(2, 30);
		lodi_exec(3, 0);
		check_all_regs();

		immediate_exec(8'h1B, 8'h30);
		#3;
		wait(OEb == 0);
		//$display("%d %d", address_counter, full_addr);
		failures += full_addr != address_counter + 8'h30;
		address_counter = full_addr;
		immediate_exec(8'h1B, 8'h7B);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter - 5;
		address_counter = full_addr;
		implied_exec(8'hE2);
		#3;
		failures += CC != 2'b10;
		immediate_exec(8'h1A, 8'h30);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 8'h30;
		address_counter = full_addr;
		implied_exec(8'h19);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 1;
		address_counter = address_counter + 1;
		implied_exec(8'h9A);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 1;
		address_counter = address_counter + 1;
		immediate_exec(8'h99, 8'h30);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 8'h30;
		address_counter = full_addr;
		immediate_exec(8'h99, 8'h88);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 8;
		bus_in = 8'hB2;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != address_counter + 9;
		bus_in = 8'h33;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'hB233;
		address_counter = 16'hB233;
		implied_exec(8'h19);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 1;
		address_counter = address_counter + 1;
		if(failures == 0) $display("Completed: bctr, bcfr");

		implied_exec(8'h1F);
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h01;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h12;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h8112;
		address_counter = 16'h8112;

		implied_exec(8'hE0);
		#3;
		failures += CC != 2'b00;
		implied_exec(8'h1C);
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h30;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h00;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'hB000;
		address_counter = 16'hB000;
		
		implied_exec(8'h1D);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 2;
		address_counter = address_counter + 2;
		lodi_exec(3, 9);
		check_all_regs();

		implied_exec(8'hE0);
		#3;
		failures += CC != 2'b00;
		implied_exec(8'h9C);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 2;
		address_counter = address_counter + 2;
		lodi_exec(3, 22);
		check_all_regs();

		implied_exec(8'hE1);
		#3;
		failures += CC != 2'b01;
		implied_exec(8'h9C);
		#3;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h80;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h99;
		wait(full_addr == 16'h8099 && OEb == 0);
		bus_in = 8'h40;
		wait(full_addr == 16'h809A && OEb == 0);
		bus_in = 8'h00;
		@(posedge clock);
		#3;
		wait(OEb == 0);
		failures += full_addr != 16'h4000;
		address_counter = 16'h4000;
		if(failures == 0) $display("Completed: bcta, bcfa");

		lodi_exec(3, 0);
		immediate_exec(8'h58, 8'h27);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 8'h27;
		address_counter = full_addr;
		implied_exec(8'h5B);
		#3;
		failures += full_addr != address_counter + 1;
		address_counter = full_addr;
		implied_exec(8'h5F);
		#3;
		failures += full_addr != address_counter + 2;
		address_counter = full_addr;
		implied_exec(8'h5E);
		#3;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h00;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'hF0;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h00F0;
		address_counter = full_addr;
		if(failures == 0) $display("Completed: brnr, brna");

		immediate_exec(8'hDB, 8'h10);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 8'h10;
		address_counter = full_addr;
		expected_regs[3] = expected_regs[3] + 1;
		check_all_regs();
		lodi_exec(2, 255);
		check_all_regs();
		implied_exec(8'hDA);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 1;
		address_counter = address_counter + 1;
		expected_regs[2] = 8'h00;
		check_all_regs();
		implied_exec(8'hDC);
		#3;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h22;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h00;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h2200;
		address_counter = full_addr;
		expected_regs[0] = expected_regs[0] + 1;
		check_all_regs();
		immediate_exec(8'hF9, 8'h7F);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter - 1;
		address_counter = full_addr;
		expected_regs[1] = expected_regs[1] - 1;
		check_all_regs();
		lodi_exec(0, 1);
		check_all_regs();
		implied_exec(8'hFC);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 2;
		address_counter = full_addr;
		expected_regs[0] = 8'h00;
		check_all_regs();
		lodi_exec(3, 0);
		check_all_regs();
		implied_exec(8'hFF);
		#3;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h92;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h87;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h1287;
		bus_in = 8'h07;
		wait(full_addr == 16'h1288 && OEb == 0);
		bus_in = 8'hFF;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h07FF;
		address_counter = full_addr;
		expected_regs[3] = 8'hFF;
		check_all_regs();
		if(failures == 0) $display("Completed: birr, bira, bdrr, bdra");

		implied_exec(8'h12);
		expected_regs[0] = 8'b00100000;
		check_all_regs();
		origin1 = address_counter;
		implied_exec(8'h3F);
		#3;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h80;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in = 8'h00;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h0000;
		bus_in = 8'h22;
		wait(full_addr == 16'h0001 && OEb == 0);
		bus_in = 8'h11;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h2211;
		address_counter = full_addr;
		implied_exec(8'h12);
		expected_regs[0] = 8'b00100001;
		check_all_regs();
		failures += CC != 2'b01;
		origin2 = address_counter;
		immediate_exec(8'hB8, 8'h35);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter + 8'h35;
		address_counter = full_addr;
		implied_exec(8'h12);
		expected_regs[0] = 8'b00100010;
		check_all_regs();
		failures += CC != 2'b01;
		implied_exec(8'h14);
		#3;
		wait(OEb == 0);
		failures += full_addr != address_counter;
		implied_exec(8'h15);
		#3;
		wait(OEb == 0);
		failures += full_addr != origin2 + 2;
		address_counter = full_addr;
		implied_exec(8'h12);
		expected_regs[0] = 8'b00100001;
		check_all_regs();
		implied_exec(8'h37);
		#3;
		wait(OEb == 0);
		$display("%x %x", full_addr, origin1);
		failures += full_addr != origin1 + 3;
		address_counter = full_addr;
		implied_exec(8'h12);
		expected_regs[0] = 8'b00000000;
		check_all_regs();
		immediate_exec(8'h76, 32);
		implied_exec(8'h12);
		expected_regs[0] = 8'b00100000;
		check_all_regs();
		if(failures == 0) $display("Completed: subroutine calls and returns");

		implied_exec(8'h1F);
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in <= 8'h30;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in <= 8'h00;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h3000;
		address_counter = full_addr;
		immediate_exec(8'h9B, 8'h30);
		#3;
		wait(OEb == 0);
		failures += full_addr != 16'h0030;
		address_counter = full_addr;
		immediate_exec(8'h9B, 8'h7E);
		#3;
		wait(OEb == 0);
		failures += full_addr != 16'h01FE;
		address_counter = full_addr;
		immediate_exec(8'h9B, 8'h91);
		#3;
		wait(OEb == 0);
		failures += full_addr != 16'h0011;
		bus_in <= 8'h22;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h0012;
		bus_in <= 8'h02;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h2202;
		address_counter = full_addr;
		if(failures == 0) $display("Completed: zbrr");

		lodi_exec(3, 22);
		check_all_regs();
		implied_exec(8'h9F);
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in <= 8'h40;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in <= 8'hC3;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h40C3 + 22;
		address_counter = full_addr;
		implied_exec(8'h9F);
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in <= 8'h88;
		wait(full_addr == address_counter && OEb == 0);
		address_counter = address_counter + 1;
		bus_in <= 8'hC3;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h08C3;
		bus_in = 16'hFF;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'h08C4;
		bus_in = 16'h22;
		wait(OEb != 0);
		wait(OEb == 0);
		failures += full_addr != 16'hFF22 + 22;
		address_counter = full_addr;
		implied_exec(8'h12);
		expected_regs[0] = 8'b00100000;
		check_all_regs();
		if(failures == 0) $display("Completed: bxa");

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
		.FILENAME("branches.hex")
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
