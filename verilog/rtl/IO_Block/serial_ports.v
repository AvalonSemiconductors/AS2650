`default_nettype none

module serial_ports(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	input wb_clk_i,
	input rst,
	output TXD,
	input RXD,
	
	input io_in,
	output [2:0] io_out,
	output [2:0] io_oeb,
	
	input [2:0] addr,
	input [7:0] data_in,
	output reg [7:0] data_out,
	input bus_cyc,
	input bus_we,
	output reg irq3
);

reg uart_ien;
assign io_oeb[0] = 1'b0;
assign io_oeb[1] = 1'b0;
assign io_oeb[2] = 1'b1;
assign io_out[2] = 1'b0;

wire uart_busy;
wire uart_has_byte;
reg [15:0] uart_div;
reg [7:0] spi_div;
wire [7:0] uart_rec_byte;
wire [7:0] spi_rec_byte;
wire spi_busy;

always @(posedge wb_clk_i) begin
	if(rst) begin
		irq3 <= 1'b0;
		uart_ien <= 1'b0;
		uart_div <= 16'h00FF;
		spi_div <= 8'h0F;
		data_out <= 8'h00;
	end else begin
		irq3 <= uart_ien && uart_has_byte;
		if(bus_cyc) begin
			case(addr)
				default: data_out <= 8'h00;
				0: begin
					if(bus_we) begin
						uart_ien <= data_in[0];
					end
					data_out <= {7'h00, uart_ien};
				end
				1: begin
					if(bus_we) uart_div[7:0] <= data_in;
					data_out <= uart_div[7:0];
				end
				2: begin
					if(bus_we) uart_div[15:8] <= data_in;
					data_out <= uart_div[15:8];
				end
				3: data_out <= {5'h00, uart_has_byte, spi_busy, uart_busy};
				4: begin
					if(bus_we) spi_div <= data_in;
					data_out <= spi_div;
				end
				6: begin
					data_out <= uart_rec_byte;
				end
				7: begin
					data_out <= spi_rec_byte;
				end
			endcase
		end
	end
end

uart uart(
	.divisor(uart_div),
	.din(data_in),
	.dout(uart_rec_byte),
	.TX(TXD),
	.RX(RXD),
	.start(bus_cyc && addr == 3 && bus_we && !uart_busy),
	.busy(uart_busy),
	.has_byte(uart_has_byte),
	.clr_hb(bus_cyc && addr == 0 && bus_we && data_in[1]),
	.clk(wb_clk_i),
	.rst(rst)
);

spi spi(
	.divisor(spi_div),
	.din(data_in),
	.dout(spi_rec_byte),
	.SCLK(io_out[0]),
	.DO(io_out[1]),
	.DI(io_in),
	.start(bus_cyc && addr == 5 && bus_we && !spi_busy),
	.busy(spi_busy),
	.clk(wb_clk_i),
	.rst(rst)
);

endmodule
