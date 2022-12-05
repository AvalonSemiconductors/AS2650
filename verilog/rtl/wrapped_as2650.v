`default_nettype none

module wrapped_as2650(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	input wire wb_clk_i,
	input wire wb_rst_i,

	input wire [`MPRJ_IO_PADS-1:0] io_in,
	output wire [`MPRJ_IO_PADS-1:0] io_out,
	output wire [`MPRJ_IO_PADS-1:0] io_oeb
);

	wire oeb;
	assign io_oeb = {19'b0000000000000000000, 1'b1, oeb, oeb, oeb, oeb, oeb, oeb, oeb, oeb, 5'b11111};

	wire reset = wb_rst_i;
	
	as2650 as2650(
		.clk(wb_clk_i),
		.reset(reset),
		.adr(io_out[32:20]),
		.dbus_in(io_in[12:5]),
		.dbus_out(io_out[12:5]),
		.oeb(oeb),
		.sense(io_in[13]),
		.d_c(io_out[14]),
		.m_io(io_out[15]),
		.wrp(io_out[16]),
		.opreq(io_out[17]),
		.rw(io_out[18]),
		.flag(io_out[19])
	);
endmodule
`default_nettype wire
