`default_nettype none

module ram(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	input wb_clk_i,
	input rst,
	input WEb_raw,
	input le_lo_act,
	input le_hi_act,
	input [7:0] bus_in,
	output [7:0] bus_out,
	input ram_enabled
);

reg [15:0] full_addr;
reg [7:0] ram [4095:0];

always @(posedge wb_clk_i) begin
	if(rst) begin
		full_addr <= 16'h0000;
	end else begin
		if(ram_enabled) begin
			if(le_lo_act) full_addr[7:0] <= bus_in;
			if(le_hi_act) full_addr[15:8] <= bus_in;
		end else begin
			full_addr <= 16'h0000;
		end
		if(!WEb_raw && full_addr < 4096) ram[full_addr] <= bus_in;
	end
end
assign bus_out = full_addr < 4096 ? ram[full_addr] : 8'h00;

endmodule
