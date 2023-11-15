`default_nettype none

module wrapped_as2650(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	input [37:0] io_in,
	output [37:0] io_out,
	output [37:0] io_oeb,
	
	input wb_clk_i,
	input wb_rst_i,
	
	input [31:0] wbs_adr_i,
	input [31:0] wbs_dat_i,
	output [31:0] wbs_dat_o,
	input wbs_we_i,
	input wbs_cyc_i,
	input wbs_stb_i,
	output wbs_ack_o,
	
	output [63:0] la_data_out,
	
	output [2:0] irq
);
assign irq = 3'b000;

reg wb_ready;
reg wb_feedback_delay;
reg [31:0] wbs_o_buff;
reg [31:0] wb_counter;
assign wbs_dat_o = wbs_o_buff;
assign wbs_ack_o = wb_ready;

wire wb_valid = wbs_cyc_i && wbs_stb_i;

reg wb_debug_cc;
reg wb_debug_carry;
reg [1:0] web_behavior;

always @(posedge wb_clk_i) begin
	if(wb_rst_i) begin
		wb_ready <= 0;
		wb_feedback_delay <= 0;
		wbs_o_buff <= 0;
		wb_counter <= 0;
		wb_debug_cc <= 0;
		wb_debug_carry <= 0;
		web_behavior <= 0;
	end else begin
		wb_counter <= wb_counter + 1;
		if(wb_valid && !wb_feedback_delay) begin
			if(wbs_adr_i[22]) begin
				if(wbs_we_i) wb_counter <= wbs_dat_i;
				wbs_o_buff <= wb_counter;
			end else if(wbs_adr_i[21]) begin
				if(wbs_we_i) begin
					wb_debug_cc <= wbs_dat_i[0];
					wb_debug_carry <= wbs_dat_i[1];
					web_behavior <= wbs_dat_i[3:2];
				end
				wbs_o_buff <= {16'h0000, debug_psu, debug_psl};
			end else begin
				wbs_o_buff <= 32'hFFFFFFFF;
			end
		end
		wb_feedback_delay <= wb_valid;
		wb_ready <= wb_feedback_delay;
	end
end

wire le_lo;
wire le_hi;
wire OEb;
wire WEb;
wire bus_dir;
wire [7:0] bus_out;
wire [7:0] debug_psu;
wire [7:0] debug_psl;
wire flag;
wire IOC;
wire IOD;

assign io_out[0] = 1'b0;
assign io_oeb[0] = 1'b1;
assign io_out[1] = bus_dir;
assign io_oeb[1] = 1'b0;
assign io_out[12:5] = bus_out;
assign io_oeb[12:5] = {8{bus_dir}};
assign io_out[13] = le_lo;
assign io_out[14] = le_hi;
assign io_out[15] = OEb;
assign io_out[16] = web_behavior == 1 ? WEb & wb_clk_i : (web_behavior == 2 ? WEb & (~wb_clk_i) : WEb);
assign io_oeb[16:13] = 4'h0;
assign io_out[2] = flag;
assign io_oeb[2] = 1'b0;
assign io_out[4] = 1'b0;
assign io_oeb[4] = 1'b1;

//TODO: do something with this
assign io_out[3] = 1'b0;
assign io_oeb[3] = 1'b1;

assign io_out[18:17] = wb_debug_carry ? {debug_psl[5], debug_psl[0]} : (wb_debug_cc ? debug_psl[7:6] : {IOC, IOD});
assign io_oeb[18:17] = 2'b00;

//TEMP
assign la_data_out[63:33] = 31'h7F00FF00;
assign io_oeb[37:19] = 19'h7FFFF;
assign io_out[37:19] = 19'h00000;

as2650 as2650(
	.clk(wb_clk_i),
	.rst((!io_in[0]) || wb_rst_i),
	.bus_in(io_in[12:5]),
	.bus_out(bus_out),
	.le_lo(le_lo),
	.le_hi(le_hi),
	.OEb(OEb),
	.WEb(WEb),
	.bus_dir(bus_dir),
	.irq(1'b0),
	.debug_psu(debug_psu),
	.debug_psl(debug_psl),
	.flag(flag),
	.sense(io_in[4]),
	.IOC(IOC),
	.IOD(IOD),
	.la_data_out(la_data_out[32:0])
);

endmodule
