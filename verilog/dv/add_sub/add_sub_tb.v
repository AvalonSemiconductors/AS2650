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

module add_sub_tb;
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

	reg [7:0] prev_in1;
	integer test;
	initial begin
		test = 1300;
		prev_in1 = 0;

		while(test > 2)  begin
			repeat (50) @(posedge clock);
			$fflush();
			test -= 1;
			if(prev_in1 != in1) test = 500;
			prev_in1 = in1;
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
	
	integer counter = 0;
	integer address_counter = 0;
	integer failures = 0;

	task implied_exec(input [7:0] instr);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = (address_counter + 1) % 8192;
			bus_in <= instr;
			@(posedge clock);
		end
	endtask

	task immediate_exec(input [7:0] instr, input [7:0] data);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = (address_counter + 1) % 8192;
			bus_in <= instr;
			wait(full_addr == address_counter && OEb == 0);
			address_counter = (address_counter + 1) % 8192;
			bus_in <= data;
			@(posedge clock);
		end
	endtask

	task lodi_exec(input [1:0] register, input [7:0] val);
		begin
			wait(full_addr == address_counter && OEb == 0);
			address_counter = (address_counter + 1) % 8192;
			bus_in = 8'h04 + register;
			wait(full_addr == address_counter && OEb == 0);
			address_counter = (address_counter + 1) % 8192;
			bus_in = val;
			@(posedge clock);
		end
	endtask

	reg [7:0] in1;
	reg [7:0] in2;
	reg [8:0] expected;
	initial begin
		@(posedge gpio);
		@(negedge gpio);
		@(posedge gpio);
		$dumpfile("add_sub.vcd");
		$dumpvars(1, add_sub_tb);
		$dumpvars(0, add_sub_tb.uut.chip_core.mprj);
		repeat (4) @(posedge clock);
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

		immediate_exec(8'h77, 8);
		in1 = 0;
		repeat(256) begin
			lodi_exec(1, in1);
			in2 = 0;
			if(failures == 0) repeat(256) begin
				immediate_exec(8'h75, 1);
				lodi_exec(0, in2);
				expected = in1 + in2;
				implied_exec(8'h81);

				wait(full_addr == address_counter && OEb == 0);
				bus_in = 8'hC8;
				address_counter = (address_counter + 1) % 8192;
				wait(full_addr == address_counter && OEb == 0);
				bus_in = 8'h00;
				address_counter = (address_counter + 1) % 8192;
				wait(full_addr == address_counter && OEb == 1 && WEb == 0);
				address_counter = (address_counter + 1) % 8192;
				#3;
				failures += bus_out != expected[7:0];
				failures += carry != expected[8];
				@(posedge clock);

				in2 = in2 + 1;
			end
			$display("%d", in1);
			in1 = in1 + 1;
		end
		if(failures == 0) $display("Completed: Add");

		in1 = 0;
		if(failures == 0) repeat(256) begin
			lodi_exec(1, in1);
			in2 = 0;
			if(failures == 0) repeat(256) begin
				lodi_exec(0, in2);
				immediate_exec(8'h77, 1);
				expected = in1 + in2 + 8'h01;
				implied_exec(8'h81);

				wait(full_addr == address_counter && OEb == 0);
				bus_in = 8'hC8;
				address_counter = (address_counter + 1) % 8192;
				wait(full_addr == address_counter && OEb == 0);
				bus_in = 8'h00;
				address_counter = (address_counter + 1) % 8192;
				wait(full_addr == address_counter && OEb == 1 && WEb == 0);
				address_counter = (address_counter + 1) % 8192;
				#3;
				failures += bus_out != expected[7:0];
				failures += carry != expected[8];
				@(posedge clock);

				in2 = in2 + 1;
			end
			$display("%d", in1);
			in1 = in1 + 1;
		end
		if(failures == 0) $display("Completed: Add with carry");

		immediate_exec(8'h77, 8);
		in1 = 0;
		if(failures == 0) repeat(256) begin
			lodi_exec(1, in1);
			in2 = 0;
			if(failures == 0) repeat(256) begin
				immediate_exec(8'h77, 1);
				lodi_exec(0, in2);
				expected = {1'b1, in2} - {1'b0, in1};
				implied_exec(8'hA1);

				wait(full_addr == address_counter && OEb == 0);
				bus_in = 8'hC8;
				address_counter = (address_counter + 1) % 8192;
				wait(full_addr == address_counter && OEb == 0);
				bus_in = 8'h00;
				address_counter = (address_counter + 1) % 8192;
				wait(full_addr == address_counter && OEb == 1 && WEb == 0);
				address_counter = (address_counter + 1) % 8192;
				#3;
				failures += bus_out != expected[7:0];
				failures += carry != expected[8];
				if(failures != 0) $display("%b %b %b %b %b %b", in2, in1, expected[7:0], bus_out, expected[8], carry);
				@(posedge clock);

				in2 = in2 + 1;
			end
			$display("%d", in1);
			in1 = in1 + 1;
		end
		if(failures == 0) $display("Completed: Subtract");

		in1 = 0;
		if(failures == 0) repeat(256) begin
			lodi_exec(1, in1);
			in2 = 0;
			if(failures == 0) repeat(256) begin
				lodi_exec(0, in2);
				immediate_exec(8'h75, 1);
				expected = {1'b1, in2} - {1'b0, in1} - 9'h001;
				implied_exec(8'hA1);

				wait(full_addr == address_counter && OEb == 0);
				bus_in = 8'hC8;
				address_counter = (address_counter + 1) % 8192;
				wait(full_addr == address_counter && OEb == 0);
				bus_in = 8'h00;
				address_counter = (address_counter + 1) % 8192;
				wait(full_addr == address_counter && OEb == 1 && WEb == 0);
				address_counter = (address_counter + 1) % 8192;
				#3;
				failures += bus_out != expected[7:0];
				failures += carry != expected[8];
				@(posedge clock);

				in2 = in2 + 1;
			end
			$display("%d", in1);
			in1 = in1 + 1;
		end
		if(failures == 0) $display("Completed: Subtract without carry");

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
		.FILENAME("add_sub.hex")
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
