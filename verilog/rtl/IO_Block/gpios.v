`default_nettype none

module gpios(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	input [15:0] io_in,
	output [15:0] io_out,
	output [15:0] io_oeb,
	input wb_clk_i,
	input rst,
	
	input [3:0] addr,
	input [7:0] data_in,
	output reg [7:0] data_out,
	input bus_cyc,
	input bus_we,
	output reg irq0,
	output reg irq6,
	output reg irq7,
	
	input tmr0_o,
	input tmr1_o,
	input pwm0,
	input pwm1,
	input pwm2,
	
	output tmr0_clk,
	output tmr1_clk,
	
	input TXD,
	output RXD,
	
	input DAC_clk,
	input DAC_le,
	input DAC_d1,
	input DAC_d2,
	
	output reg [7:0] la_data_out
);

reg [7:0] DDRA;
reg [7:0] DDRB;
reg [7:0] PORTA;
reg [7:0] PORTB;
reg [7:0] SPA;
reg [7:0] SPB;

/*
 * PA0 - IRQ0
 * PA1 - TXD
 * PA2 - RXD
 * PA3 - TMR0
 * PA4 - TMR1
 * PA5 - PWM0
 * PA6 - PWM1
 * PA7 - IRQ7
 */
 
 /*
  * PB0 - IRQ6
  * PB1 - PWM2
  * PB2 - TMR0 CLK
  * PB3 - TMR1 CLK
  * PB4 - DAC DAT1
  * PB5 - DAC DAT0
  * PB6 - DAC LE
  * PB7 - DAC CLK
  */

assign io_out[0] = SPA[0] ? 1'b0 : PORTA[0];
assign io_out[1] = SPA[1] ? TXD : PORTA[1];
assign io_out[2] = SPA[2] ? 1'b0 : PORTA[2];
assign io_out[3] = SPA[3] ? tmr0_o : PORTA[3];
assign io_out[4] = SPA[4] ? tmr1_o : PORTA[4];
assign io_out[5] = SPA[5] ? pwm0 : PORTA[5];
assign io_out[6] = SPA[6] ? pwm1 : PORTA[6];
assign io_out[7] = SPA[7] ? 1'b0 : PORTA[7];
assign io_oeb[0] = SPA[0] ? 1'b1 : !DDRA[0];
assign io_oeb[1] = SPA[1] ? 1'b0 : !DDRA[1];
assign io_oeb[2] = SPA[2] ? 1'b1 : !DDRA[2];
assign io_oeb[3] = SPA[3] ? 1'b0 : !DDRA[3];
assign io_oeb[4] = SPA[4] ? 1'b0 : !DDRA[4];
assign io_oeb[5] = SPA[5] ? 1'b0 : !DDRA[5];
assign io_oeb[6] = SPA[6] ? 1'b0 : !DDRA[6];
assign io_oeb[7] = SPA[7] ? 1'b1 : !DDRA[7];
assign RXD = SPA[2] ? io_in[2] : 1'b1;

assign io_out[8] = SPB[0] ? 1'b0 : PORTB[0];
assign io_out[9] = SPB[1] ? pwm2 : PORTB[1];
assign io_out[10] = SPB[2] ? 1'b0 : PORTB[2];
assign io_out[11] = SPB[3] ? 1'b0 : PORTB[3];
assign io_out[12] = SPB[4] ? DAC_d2 : PORTB[4];
assign io_out[13] = SPB[5] ? DAC_d1 : PORTB[5];
assign io_out[14] = SPB[6] ? DAC_le : PORTB[6];
assign io_out[15] = SPB[7] ? DAC_clk : PORTB[7];
assign io_oeb[8] = SPB[0] ? 1'b1 : !DDRB[0];
assign io_oeb[9] = SPB[1] ? 1'b0 : !DDRB[1];
assign io_oeb[10] = SPB[2] ? 1'b1 : !DDRB[2];
assign io_oeb[11] = SPB[3] ? 1'b1 : !DDRB[3];
assign io_oeb[12] = SPB[4] ? 1'b0 : !DDRB[4];
assign io_oeb[13] = SPB[5] ? 1'b0 : !DDRB[5];
assign io_oeb[14] = SPB[6] ? 1'b0 : !DDRB[6];
assign io_oeb[15] = SPB[7] ? 1'b0 : !DDRB[7];

reg last_irq0_trigger;
reg last_irg6_trigger;
reg last_irq7_trigger;
wire irq0_trigger = SPA[0] ? io_in[0] : 1'b0;
wire irq6_trigger = SPB[0] ? io_in[8] : 1'b0;
wire irq7_trigger = SPA[7] ? io_in[7] : 1'b0;
assign tmr0_clk = SPB[2] ? io_in[10] : 1'b0;
assign tmr1_clk = SPB[3] ? io_in[11] : 1'b0;

always @(posedge wb_clk_i) begin
	if(rst) begin
		data_out <= 8'h00;
		DDRA <= 8'h00;
		DDRB <= 8'h00;
		PORTA <= 8'h00;
		PORTB <= 8'h00;
		SPA <= 8'h00;
		SPB <= 8'h00;
		irq0 <= 1'b0;
		irq6 <= 1'b0;
		irq7 <= 1'b0;
		last_irq0_trigger <= 1'b0;
		last_irg6_trigger <= 1'b0;
		last_irq7_trigger <= 1'b0;
		la_data_out <= 8'h00;
	end else begin
		if(bus_cyc) begin
			case(addr)
				0: begin
					if(bus_we) DDRA <= data_in;
					data_out <= DDRA;
				end
				1: begin
					if(bus_we) DDRB <= data_in;
					data_out <= DDRB;
				end
				2: begin
					if(bus_we) PORTA <= data_in;
					data_out <= PORTA;
				end
				3: begin
					if(bus_we) PORTB <= data_in;
					data_out <= PORTB;
				end
				4: begin
					if(bus_we) SPA <= data_in;
					data_out <= SPA;
				end
				5: data_out <= io_in[7:0];
				6: data_out <= io_in[15:8];
				7: begin
					if(bus_we) begin
						if(data_in[0]) irq0 <= 1'b0;
						if(data_in[6]) irq6 <= 1'b0;
						if(data_in[7]) irq7 <= 1'b0;
					end
					data_out <= {irq7, irq6, 5'h00, irq0};
				end
				8: begin
					if(bus_we) SPB <= data_in;
					data_out <= SPB;
				end
				9: begin
					if(bus_we) la_data_out <= data_in;
					data_out <= la_data_out;
				end
				default: data_out <= 8'hAA;
			endcase
		end
		if(irq0_trigger && !last_irq0_trigger) irq0 <= 1'b1;
		if(irq6_trigger && !last_irg6_trigger) irq6 <= 1'b1;
		if(irq7_trigger && !last_irq7_trigger) irq7 <= 1'b1;
		last_irq0_trigger <= irq0_trigger;
		last_irg6_trigger <= irq6_trigger;
		last_irq7_trigger <= irq7_trigger;
	end
end

endmodule
