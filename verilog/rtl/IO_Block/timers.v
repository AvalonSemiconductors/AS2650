`default_nettype none

module timers(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	input wb_clk_i,
	input rst,
	
	input [5:0] addr,
	input [7:0] data_in,
	output reg [7:0] data_out,
	input bus_cyc,
	input bus_we,
	output reg irq1,
	output reg irq2,
	output reg irq5,
	
	output reg tmr0_o,
	output reg tmr1_o,
	
	output reg pwm0,
	output reg pwm1,
	output reg pwm2,
	
	input tmr0_clk,
	input tmr1_clk
);

/*
 * 0: TMR0 int enable
 * 1: TMR1 int enable
 * 2: TMR2 int enable
 * 3: TMR0 int clear
 * 4: TMR1 int clear
 * 5: TMR2 int clear
 * 6: TMR0 ext clock en
 * 7: TMR1 ext clock en
 */
reg [2:0] settings;
reg tmr0_ext;
reg tmr1_ext;
reg last_tmr0_clk;
reg last_tmr1_clk;

reg [15:0] timer0;
reg [15:0] timer1;
reg [15:0] timer2;
reg [15:0] t0_capture;
reg [15:0] t1_capture;
reg [15:0] t2_capture;

reg [15:0] t0pre;
reg [15:0] t1pre;
reg [15:0] t2pre;
reg [15:0] t0pre_counter;
reg [15:0] t1pre_counter;
reg [15:0] t2pre_counter;
reg [15:0] t0_top;
reg [15:0] t1_top;
reg [15:0] t2_top;

reg [7:0] pwm_ctr0;
reg [7:0] pwm_ctr1;
reg [7:0] pwm_ctr2;
reg [7:0] pw0;
reg [7:0] pw1;
reg [7:0] pw2;

reg [7:0] temp;

always @(posedge wb_clk_i) begin
	if(rst) begin
		timer0 <= 16'h0000;
		timer1 <= 16'h0000;
		timer2 <= 16'h0000;
		t0pre <= 16'hF000;
		t1pre <= 16'hF000;
		t2pre <= 16'hF000;
		t0pre_counter <= 16'h0000;
		t1pre_counter <= 16'h0000;
		t2pre_counter <= 16'h0000;
		t0_top <= 16'hFFFF;
		t1_top <= 16'hFFFF;
		t2_top <= 16'hFFFF;
		settings <= 3'h0;
		t0_capture <= 16'h0000;
		t1_capture <= 16'h0000;
		t2_capture <= 16'h0000;
		temp <= 8'h00;
		tmr0_o <= 1'b0;
		tmr1_o <= 1'b0;
		pwm_ctr0 <= 8'h00;
		pwm_ctr1 <= 8'h00;
		pwm_ctr2 <= 8'h00;
		pw0 <= 8'h80;
		pw1 <= 8'h80;
		pw2 <= 8'h80;
		irq1 <= 1'b0;
		irq2 <= 1'b0;
		irq5 <= 1'b0;
		tmr0_ext <= 1'b0;
		tmr1_ext <= 1'b0;
		last_tmr0_clk <= 1'b0;
		last_tmr1_clk <= 1'b0;
	end else begin
		if(!tmr0_ext || (!last_tmr0_clk && tmr0_clk)) begin
			t0pre_counter <= t0pre_counter + 1;
			if((t0pre_counter+1) >= t0pre) begin
				t0pre_counter <= 0;
				timer0 <= timer0 + 1;
				if(timer0 >= t0_top) begin
					timer0 <= 16'h0000;
					tmr0_o <= ~tmr0_o;
					irq1 <= settings[0];
				end
			end
		end
		if(!tmr1_ext || (!last_tmr1_clk && tmr1_clk)) begin
			t1pre_counter <= t1pre_counter + 1;
			if((t1pre_counter+1) >= t1pre) begin
				t1pre_counter <= 0;
				timer1 <= timer1 + 1;
				if(timer1 >= t1_top) begin
					timer1 <= 16'h0000;
					tmr1_o <= ~tmr1_o;
					irq2 <= settings[1];
				end
			end
		end
		t2pre_counter <= t2pre_counter + 1;
		if((t2pre_counter+1) >= t2pre) begin
			t2pre_counter <= 0;
			timer2 <= timer2 + 1;
			if(timer2 > t2_top) begin
				timer2 <= 16'h0000;
				irq5 <= settings[2];
			end
		end
		last_tmr0_clk <= tmr0_clk;
		last_tmr1_clk <= tmr1_clk;
		pwm_ctr0 <= pwm_ctr0 + 1;
		if(pwm_ctr0 == pw0) pwm0 <= 1'b1;
		else if(pwm_ctr0 == 8'hFF) pwm0 <= 1'b0;
		pwm_ctr1 <= pwm_ctr1 + 1;
		if(pwm_ctr1 == pw1) pwm1 <= 1'b1;
		else if(pwm_ctr1 == 8'hFF) pwm1 <= 1'b0;
		pwm_ctr2 <= pwm_ctr2 + 1;
		if(pwm_ctr2 == pw2) pwm2 <= 1'b1;
		else if(pwm_ctr2 == 8'hFF) pwm2 <= 1'b0;
		if(bus_cyc) begin
			case(addr)
				default: begin
					data_out <= 8'h00;
				end
				0: begin
					if(bus_we) begin
						if(data_in[5:3] == 3'b000) begin
							settings <= data_in[2:0];
							tmr0_ext <= data_in[6];
							tmr1_ext <= data_in[7];
						end
						if(data_in[3]) irq1 <= 1'b0;
						if(data_in[4]) irq2 <= 1'b0;
						if(data_in[5]) irq5 <= 1'b0;
					end
					data_out <= {2'b00, tmr1_ext, tmr0_ext, irq2, irq1, settings};
				end
				1: begin
					if(bus_we) begin
						t0_capture <= timer0;
						t1_capture <= timer1;
						t2_capture <= timer2;
					end
					data_out <= 8'hFF;
				end
				2: begin
					if(bus_we) temp <= data_in;
					data_out <= t0pre[7:0];
				end
				3: begin
					if(bus_we) t0pre <= {data_in, temp};
					data_out <= t0pre[15:8];
				end
				4: begin
					if(bus_we) temp <= data_in;
					data_out <= t1pre[7:0];
				end
				5: begin
					if(bus_we) t1pre <= {data_in, temp};
					data_out <= t1pre[15:8];
				end
				6: begin
					if(bus_we) temp <= data_in;
					data_out <= t2pre[7:0];
				end
				7: begin
					if(bus_we) t2pre <= {data_in, temp};
					data_out <= t2pre[15:8];
				end
				8: begin
					if(bus_we) temp <= data_in;
					data_out <= t0_top[7:0];
				end
				9: begin
					if(bus_we) t0_top <= {data_in, temp};
					data_out <= t0_top[15:8];
				end
				10: begin
					if(bus_we) temp <= data_in;
					data_out <= t1_top[7:0];
				end
				11: begin
					if(bus_we) t1_top <= {data_in, temp};
					data_out <= t1_top[15:8];
				end
				12: begin
					if(bus_we) temp <= data_in;
					data_out <= t2_top[7:0];
				end
				13: begin
					if(bus_we) t2_top <= {data_in, temp};
					data_out <= t2_top[15:8];
				end
				14: begin
					if(bus_we) temp <= data_in;
					data_out <= t0_capture[7:0];
				end
				15: begin
					if(bus_we) timer0 <= {data_in, temp};
					data_out <= t0_capture[15:8];
				end
				16: begin
					if(bus_we) temp <= data_in;
					data_out <= t1_capture[7:0];
				end
				17: begin
					if(bus_we) timer1 <= {data_in, temp};
					data_out <= t1_capture[15:8];
				end
				18: begin
					if(bus_we) temp <= data_in;
					data_out <= t2_capture[7:0];
				end
				19: begin
					if(bus_we) timer2 <= {data_in, temp};
					data_out <= t2_capture[15:8];
				end
				20: begin
					if(bus_we) pw0 <= data_in;
					data_out <= pw0;
				end
				21: begin
					if(bus_we) pw1 <= data_in;
					data_out <= pw1;
				end
				22: begin
					if(bus_we) pw2 <= data_in;
					data_out <= pw2;
				end
			endcase
		end
	end
end

endmodule
