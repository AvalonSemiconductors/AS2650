`default_nettype none
`timescale 1ns/100ps

module tb(
	input clk,
	input rst_n,
	
	input wbs_stb_i,
	input wbs_cyc_i,
	input wbs_we_i,
	input [31:0] wbs_dat_i,
	input [31:0] wbs_adr_i,
	output wbs_ack_o,
	output [31:0] wbs_dat_o
);

`ifdef TRACE_ON
	initial begin
		$dumpfile("tb.vcd");
		$dumpvars(0, tb);
		#1;
	end
`endif

wire [37:0] io_in;
wire [37:0] io_out;
wire [37:0] io_oeb;

assign io_in[0] = rst_n;

wire ROM_CS = io_out[34];
wire SCLK = io_out[35];
wire SDO = io_out[36];
wire SDI;
assign io_in[37] = SDI;
wire flag = io_out[2];
wire WEb = io_out[16];
wire IOD = io_out[17];
wire IOC = io_out[18];
wire [7:0] bus_out = io_out[12:5];

always @(posedge flag) $finish();

reg [1:0] uart_init_state = 2'b00;
always @(posedge WEb) begin
	if(IOD) begin
		if(uart_init_state == 0) begin
			uart_init_state = 1;
			$display("Mode word: %b", bus_out);
		end else if(uart_init_state == 1) begin
			uart_init_state = 2;
			$display("Command word: %b", bus_out);
		end else begin
			$write("%c", bus_out);
			$fflush();
		end
	end else if(IOC) begin
		if(bus_out[7]) begin
			uart_init_state = 2'b00;
			$display("UART Reset");
		end
	end
end

user_project_wrapper uprj(
	.wb_clk_i(clk),
	.wb_rst_i(!rst_n),
	.wbs_stb_i(wbs_stb_i),
	.wbs_cyc_i(wbs_cyc_i),
	.wbs_we_i(wbs_we_i),
	.wbs_sel_i(4'b0000),
	.wbs_dat_i(wbs_dat_i),
	.wbs_adr_i(wbs_adr_i),
	.wbs_ack_o(wbs_ack_o),
	.wbs_dat_o(wbs_dat_o),
	.la_data_in(64'h0000000000000000),
	.la_oenb(64'hFFFFFFFFFFFFFFFF),
	.io_in(io_in),
	.io_out(io_out),
	.io_oeb(io_oeb),
	.user_clock2(clk)
);

spiflash spiflash(
	.csb(ROM_CS),
	.clk(SCLK),
	.io0(SDO),
	.io1(SDI),
	.io2(),
	.io3()
);

endmodule
