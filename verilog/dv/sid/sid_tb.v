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

module sid_tb;
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
	
	assign mprj_io[37] = 1'b0;
	wire [11:0] audio_sample;
	wire [11:0] audio_sample_denoise = audio_sample & 12'hFF8;
	wire [11:0] audio_sample_sn;
	tri0 DAC_clk = mprj_io[34];
	tri1 DAC_leb = mprj_io[33];
	tri0 DAC_dat = mprj_io[32];
	wire DAC_dat2 = mprj_io[31];
	
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
		test = 2048;

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
	integer counter, counter1, counter2, counter3;
	reg flag;
	integer address_counter = 0;
	integer failures = 0;
	reg [11:0] last_sample;

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
			wait(OEb != 0);
			wait(OEb == 0);
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
	
	reg [5:0] sid_addr;
	always @(*) begin
		case(step)
			default: sid_addr = 0;
			0: sid_addr = 0;
			1: sid_addr = 1;
			2: sid_addr = 2;
			3: sid_addr = 3;
			4: sid_addr = 5;
			5: sid_addr = 6;
			6: sid_addr = 24;
			7: sid_addr = 4;
			8: sid_addr = 4;
			9: sid_addr = 31;
			10: sid_addr = 31;
			11: sid_addr = 31;
			12: sid_addr = 31;
			13: sid_addr = 31;
			14: sid_addr = 31;
			15: sid_addr = 31;
			16: sid_addr = 31;
			17: sid_addr = 31;
		endcase
	end
	
	reg [7:0] sid_dat;
	always @(*) begin
		case(step)
			default: sid_dat = 0;
			0: sid_dat = 8'h25;
			1: sid_dat = 8'h66;
			2: sid_dat = 8'h00;
			3: sid_dat = 8'h08;
			4: sid_dat = 8'h20;
			5: sid_dat = 8'hD0;
			6: sid_dat = 8'h0F;
			7: sid_dat = 8'h11;
			8: sid_dat = 8'h10;
			9: sid_dat = 8'b10000000;
			10: sid_dat = 8'b00001100;
			11: sid_dat = 8'b10010000;
			12: sid_dat = 8'b10100000;
			13: sid_dat = 8'b00000110;
			14: sid_dat = 8'b10110000;
			15: sid_dat = 8'b11000000;
			16: sid_dat = 8'b00011000;
			17: sid_dat = 8'b11011000;
		endcase
	end

	reg [7:0] buff;
	initial begin
		@(posedge gpio);
		@(negedge gpio);
		@(posedge gpio);
		$dumpfile("sid.vcd");
		$dumpvars(1, sid_tb);
		$dumpvars(0, sid_tb.uut.chip_core.mprj);
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
		lodi_exec(1, 8'b11110000);
		immediate_exec(8'hD5, 8'b00001000);
		immediate_exec(8'hD5, 8'b00001001);
		implied_exec(8'hC0);
		
		repeat(8) begin
			lodi_exec(1, sid_dat);
			immediate_exec(8'hD5, {2'b11, sid_addr});
			step = step + 1;
		end
		#3;
		bus_in = 0;
		
		wait(audio_sample == 12'h800);
		last_sample = audio_sample_denoise;
		
		flag = 0;
		counter1 = 0;
		counter2 = 0;
		counter3 = 0;
		repeat(25) begin
			$display("%d", audio_sample_denoise);
			wait(audio_sample_denoise != last_sample);

			if(audio_sample_denoise > last_sample) begin
				counter2 = 0;
				counter1 = counter1 + 1;
				if(!flag) begin
					counter3 = counter3 + 1;
				end
				flag = 1;
			end else if(audio_sample_denoise < last_sample) begin
				counter1 = 0;
				counter2 = counter2 + 1;
				if(flag) begin
					counter3 = counter3 + 1;
				end
				flag = 0;
			end

			failures += !(counter1 < 3 && counter2 < 3);

			last_sample = audio_sample_denoise;
		end
		failures += counter3 < 8;
		
		wait(OEb == 0);
		wait(OEb != 0);
		wait(OEb == 0);
		address_counter = full_addr;
		lodi_exec(1, sid_dat);
		immediate_exec(8'hD5, {2'b11, sid_addr});
		step = step + 1;
		
		counter3 = 0;
		counter2 = 0;
		while(counter2 != 5) begin
			repeat(25) @(posedge clock);
			counter3 = counter3 + 1;
			if(audio_sample == 2048) begin
				counter2 = counter2 + 1;
			end else begin
				counter2 = 0;
			end
		end
		$display("%d", counter3);
		failures += counter3 < 144;
		
		wait(OEb == 0);
		wait(OEb != 0);
		wait(OEb == 0);
		address_counter = full_addr;
		repeat(9) begin
			lodi_exec(2, sid_dat);
			immediate_exec(8'hD6, {2'b11, sid_addr});
			step = step + 1;
		end
		#3;
		bus_in = 0;
		wait(audio_sample_sn != 0);
		wait(audio_sample_sn == 0);
		repeat(192*32) @(posedge clock);
		last_sample = audio_sample_sn;
		repeat(33) @(posedge clock);
		failures += !(audio_sample_sn > last_sample);
		repeat(95*32) @(posedge clock);
		last_sample = audio_sample_sn;
		repeat(96) @(posedge clock);
		failures += !(audio_sample_sn < last_sample);
		
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
		.FILENAME("sid.hex")
	) spiflash (
		.csb(flash_csb),
		.clk(flash_clk),
		.io0(flash_io0),
		.io1(flash_io1),
		.io2(),			// not used
		.io3()			// not used
	);
	
	DAC7611 DAC7611_A(
		.clk(DAC_clk),
		.dat(DAC_dat),
		.leb(DAC_leb),
		.rst_b(design_rst),
		.sample(audio_sample)
	);
	
	DAC7611 DAC7611_B(
		.clk(DAC_clk),
		.dat(DAC_dat2),
		.leb(DAC_leb),
		.rst_b(design_rst),
		.sample(audio_sample_sn)
	);

endmodule
module DAC7611(
	input clk,
	input dat,
	input leb,
	input rst_b,
	output [11:0] sample
);

reg [11:0] serial_buff;
reg [11:0] sample_latch;
assign sample = leb ? sample_latch : serial_buff;

always @(posedge clk or negedge rst_b) begin
	if(rst_b) begin
		serial_buff <= {serial_buff[10:0], dat};
	end else begin
		serial_buff <= 12'h000;
	end
end

always @(posedge leb or negedge rst_b) begin
	if(rst_b) begin
		sample_latch <= serial_buff;
	end else begin
		sample_latch <= 12'h000;
	end
end

endmodule
`default_nettype wire
