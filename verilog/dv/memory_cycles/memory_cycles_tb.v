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

module memory_cycles_tb;
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
		test = 1175;

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
		if(WEb != 1 && design_rst) begin
			$display("%c[1;31m",27);
			$display ("Monitor: WEb went low, this should never happen here. Test failed.");
			$display("%c[0m",27);
			$finish;
		end
		if((IOC || IOD) && design_rst) begin
			$display("%c[1;31m",27);
			$display ("Monitor: IOC and/or IOD went high, this should never happen here. Test failed.");
			$display("%c[0m",27);
			$finish;
		end
	end
	
	integer step = 0;
	integer counter = 0;
	integer failures = 0;
	initial begin
		@(posedge gpio);
		@(negedge gpio);
		@(posedge gpio);
		$dumpfile("memory_cycles.vcd");
		$dumpvars(1, memory_cycles_tb);
		$dumpvars(0, memory_cycles_tb.uut.chip_core.mprj);
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

		counter = 0;
		repeat(256) begin
			@(posedge clock);
			#3;
			failures += le_hi != 0;
			failures += le_lo != 1;
			failures += bus_out != counter;
			failures += WEb != 1;
			failures += OEb != 1;
			@(negedge clock);
			#3;
			failures += le_hi != 0;
			failures += le_lo != 0;
			failures += bus_out != counter;
			failures += WEb != 1;
			failures += OEb != 1;
			failures += full_addr != counter;
			@(posedge clock);
			#3;
			failures += le_lo != 0;
			failures += le_hi != 0;
			failures += WEb != 1;
			failures += OEb != 0;
			counter = counter + 1;
		end
		@(posedge clock);
		#3;
		failures += le_lo != 0;
		failures += le_hi != 1;
		failures += bus_out != 1;
		failures += WEb != 1;
		failures += OEb != 1;
		@(negedge clock);
		#3;
		failures += le_lo != 0;
		failures += le_hi != 0;
		failures += bus_out != 1;
		failures += WEb != 1;
		failures += OEb != 1;
		if(failures == 0) $display("Completed: Implicit");
		step = step + 1;

		bus_in <= 8'h65;
		counter = 0;
		repeat(6) begin
			@(posedge clock);
			#3;
			failures += le_hi != 0;
			failures += le_lo != 1;
			failures += bus_out != counter;
			failures += WEb != 1;
			failures += OEb != 1;
			@(negedge clock);
			#3;
			failures += le_hi != 0;
			failures += le_lo != 0;
			failures += bus_out != counter;
			failures += WEb != 1;
			failures += OEb != 1;
			failures += full_addr != counter + 256;
			@(posedge clock);
			#3;
			failures += le_lo != 0;
			failures += le_hi != 0;
			failures += WEb != 1;
			failures += OEb != 0;
			counter = counter + 1;
		end
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		@(negedge clock);
		#3;
		failures += le_lo != 0;
		@(posedge clock);
		#3;
		failures += OEb != 0;
		counter = full_addr + 2;
		if(failures == 0) $display("Completed: Immediate");
		step = step + 1;
		//$display("%d", counter);
		bus_in <= 8'h4A;
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		@(negedge clock);
		#3;
		failures += le_lo != 0;
		@(posedge clock);
		#3;
		failures += OEb != 0;
		bus_in <= 8'h05;
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		@(negedge clock);
		#3;
		failures += le_lo != 0;
		@(posedge clock);
		#3;
		failures += OEb != 0;
		bus_in <= 8'h00;
		//$display("%d", full_addr);
		failures += full_addr != counter + 5;
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		@(negedge clock);
		#3;
		failures += le_lo != 0;
		counter = full_addr + 2;
		//$display("%d", counter);
		@(posedge clock);
		#3;
		failures += OEb != 0;
		bus_in <= 8'h4A;
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		@(negedge clock);
		#3;
		failures += le_lo != 0;
		@(posedge clock);
		#3;
		failures += OEb != 0;
		bus_in <= 8'h40;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		failures += bus_out != 8'h00;
		@(negedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		@(negedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		//$display("%d", full_addr);
		failures += full_addr != counter - 64;
		@(posedge clock);
		#3;
		failures += OEb != 0;
		failures += le_hi != 0;
		failures += le_lo != 0;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		bus_in <= 8'h00;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		@(negedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += full_addr != counter;
		@(posedge clock);
		#3;
		failures += OEb != 0;
		failures += le_hi != 0;
		failures += le_lo != 0;
		bus_in <= 8'h4A;
		counter = full_addr + 2;
		if(failures == 0) $display("Completed: Relative");
		//$display("%d", counter);
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		@(negedge clock);
		#3;
		failures += le_lo != 0;
		@(posedge clock);
		#3;
		failures += OEb != 0;
		bus_in <= 8'h85;
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += OEb != 0;
		bus_in <= 8'hF7;
		failures += full_addr != counter + 5;
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += OEb != 0;
		bus_in <= 8'h33;
		failures += full_addr != counter + 6;
		@(posedge clock);
		#3;
		failures += le_lo != 0;
		failures += le_hi != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_lo != 1;
		failures += le_hi != 0;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_lo != 0;
		failures += le_hi != 0;
		failures += OEb != 0;
		failures += full_addr != 16'hF733;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		bus_in <= 8'h00;
		failures += full_addr != counter;
		if(failures == 0) $display("Completed: Relative Indirect");
		step = step + 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		bus_in <= 8'h6C;
		failures += full_addr != counter + 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		bus_in <= 8'h06;
		failures += full_addr != counter + 2;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		bus_in <= 8'h3A;
		failures += full_addr != counter + 3;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		bus_in <= 8'h01;
		failures += full_addr != 16'h063A;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != counter + 4;
		if(failures == 0) $display("Completed: Absolute");
		step = step + 1;
		bus_in <= 8'h6C;
		@(posedge clock);
		@(posedge clock);
		bus_in <= 8'h81;
		@(posedge clock);
		@(posedge clock);
		bus_in <= 8'hFF;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		@(posedge clock);
		#3;
		failures += full_addr != 16'h01FF;
		bus_in <= 8'h01;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != 16'h0200;
		bus_in <= 8'h02;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != 16'h0102;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != counter + 7;
		counter = full_addr;
		if(failures == 0) $display("Completed: Absolute Indirect");
		step = step + 1;
		bus_in <= 8'h05;
		@(posedge clock);
		@(posedge clock);
		bus_in <= 8'h0C;
		@(posedge clock);
		@(posedge clock);
		#4;
		failures += full_addr != counter + 2;
		bus_in <= 8'h6D;
		@(posedge clock);
		@(posedge clock);
		bus_in <= 8'h21;
		@(posedge clock);
		@(posedge clock);
		bus_in <= 8'h10;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		@(posedge clock);
		#4;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != 16'h011D;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != counter + 5;
		if(failures == 0) $display("Completed: Absolute Indexed");
		step = step + 1;
		bus_in <= 8'h6D;
		@(posedge clock);
		@(posedge clock);
		bus_in <= 8'hC3;
		@(posedge clock);
		@(posedge clock);
		bus_in <= 8'h10;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != 16'h0310;
		bus_in <= 8'h62;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != 16'h0311;
		bus_in <= 8'hBF;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != 16'h62CB;
		@(posedge clock);
		#3;
		failures += le_hi != 1;
		failures += le_lo != 0;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 1;
		failures += OEb != 1;
		@(posedge clock);
		#3;
		failures += le_hi != 0;
		failures += le_lo != 0;
		failures += OEb != 0;
		failures += full_addr != counter + 8;
		if(failures == 0) $display("Completed: Absolute Indirect Indexed");

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
		.FILENAME("memory_cycles.hex")
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
