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

`include "W25Q128JVxIM.v"

`timescale 1 ns / 1 ps

module boot_rom_tb;
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
	wire flag = mprj_io[2];
	reg sense;
	assign mprj_io[4] = sense;
	wire [7:0] PORTA = mprj_io[26:19];
	
	wire ROM_CS = mprj_io[34];
	wire SCLK = mprj_io[35];
	wire SDO = mprj_io[36];
	
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
	
	always @(posedge SCLK) begin
		test = 128;
	end

	integer test;
	initial begin
		test = 1024;

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
		if(flag) begin
			$display("%c[1;31m",27);
			$display ("Monitor: Boot ROM indicated boot failure. Test failed.");
			$display("%c[0m",27);
			$finish;
		end
	end
	
	initial begin
		@(posedge gpio);
		@(negedge gpio);
		@(posedge gpio);
		$dumpfile("boot_rom.vcd");
		$dumpvars(1, boot_rom_tb);
		$dumpvars(0, boot_rom_tb.W25Q128JVxIM);
		$dumpvars(0, boot_rom_tb.uut.chip_core.mprj);
		repeat (4) @(posedge clock);
		#5;
		design_rst = 1;
		$display("Reset released");
		bus_in = 8'h00;
		@(posedge clock);
		@(posedge clock);
		@(posedge clock);
		
		repeat(256) begin
			wait(SCLK == 1);
			wait(SCLK == 0);
		end
		$display("Detected SPI bus activity, data is being read from spiflash");
		repeat(50) @(posedge clock);
		wait(PORTA == 8'hA5);
		$display("Detected booted program running.");
		
		$display("%c[1;32m", 27);
		`ifdef GL
		$display("Monitor: Test (GL) Passed");
		`else
		$display("Monitor: Test (RTL) Passed");
		`endif
		$display("%c[0m", 27);
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
		.FILENAME("boot_rom.hex")
	) spiflash (
		.csb(flash_csb),
		.clk(flash_clk),
		.io0(flash_io0),
		.io1(flash_io1),
		.io2(),			// not used
		.io3()			// not used
	);

	tri1 const_one;
	W25Q128JVxIM W25Q128JVxIM(
		.CSn(ROM_CS),
		.CLK(SCLK),
		.DIO(SDO),
		.DO(mprj_io[37]),
		.WPn(const_one),
		.HOLDn(const_one)
	);

endmodule
`default_nettype wire
