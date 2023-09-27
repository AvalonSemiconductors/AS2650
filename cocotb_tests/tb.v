`default_nettype none
`timescale 1ns/1ps

module tb (
	input reset,
	input clk,
	input sense,

	output [12:0] adr,
	output rw,
	output opreq,
	output m_io,
	output d_c,
	output flag,
	output wrp,

	input [7:0] dbus_in,
	output [7:0] dbus_out,
	output oeb
	);
	
	initial begin
		$dumpfile ("tb.vcd");
		$dumpvars (0, tb);
		#1;
	end

	as2650 as2650 (
		.reset(reset),
		.clk(clk),
		.sense(sense),
		.adr(adr),
		.rw(rw),
		.opreq(opreq),
		.m_io(m_io),
		.d_c(d_c),
		.flag(flag),
		.dbus_in(dbus_in),
		.dbus_out(dbus_out),
		.oeb(oeb),
		.wrp(wrp),
		.opack(1'b1),
		.intr(1'b0)
	);
endmodule
