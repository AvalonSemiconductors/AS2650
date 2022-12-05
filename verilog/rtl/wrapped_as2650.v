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
	assign io_oeb = {'b0000000000000000000, 'b1, oeb, oeb, oeb, oeb, oeb, oeb, oeb, oeb};

	wire reset = wb_rst_i;
	
	as2650 as2650(
		.clk(wb_clk_i),
		.reset(reset),
		.adr(io_out[27:15]),
		.dbus_in(io_in[7:0]),
		.dbus_out(io_out[7:0]),
		.oeb(oeb),
		.sense(io_in[8]),
		.d_c(io_out[9]),
		.m_io(io_out[10]),
		.wrp(io_out[11]),
		.opreq(io_out[12]),
		.rw(io_out[13]),
		.flag(io_out[14])
	);
endmodule
`default_nettype wire
