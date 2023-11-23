module ram_controller(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	input wb_clk_i,
	input rst,
	input WEb_raw,
	input [15:0] requested_addr,
	input [7:0] bus_in,
	output [7:0] bus_out,
	input ram_enabled,
	
	output CEN_all,
	output [7:0] WEN_all,
	output [8:0] A_all,
	output [7:0] D_all,
	
	output GWEN_0,
	output GWEN_1,
	output GWEN_2,
	output GWEN_3,
	output GWEN_4,
	output GWEN_5,
	output GWEN_6,
	output GWEN_7,
	
	input [7:0] Q0,
	input [7:0] Q1,
	input [7:0] Q2,
	input [7:0] Q3,
	input [7:0] Q4,
	input [7:0] Q5,
	input [7:0] Q6,
	input [7:0] Q7
);

reg [15:0] aaaa;
always @(posedge wb_clk_i) begin
	aaaa <= requested_addr;
end

assign CEN_all = rst;
assign WEN_all = 8'h00;
assign A_all = requested_addr[11:3];
assign D_all = bus_in;

wire in_range = aaaa < 4096;
assign GWEN_0 = !(aaaa[2:0] == 3'b000 && !WEb_raw && ram_enabled && in_range);
assign GWEN_1 = !(aaaa[2:0] == 3'b001 && !WEb_raw && ram_enabled && in_range);
assign GWEN_2 = !(aaaa[2:0] == 3'b010 && !WEb_raw && ram_enabled && in_range);
assign GWEN_3 = !(aaaa[2:0] == 3'b011 && !WEb_raw && ram_enabled && in_range);
assign GWEN_4 = !(aaaa[2:0] == 3'b100 && !WEb_raw && ram_enabled && in_range);
assign GWEN_5 = !(aaaa[2:0] == 3'b101 && !WEb_raw && ram_enabled && in_range);
assign GWEN_6 = !(aaaa[2:0] == 3'b110 && !WEb_raw && ram_enabled && in_range);
assign GWEN_7 = !(aaaa[2:0] == 3'b111 && !WEb_raw && ram_enabled && in_range);

reg [7:0] curr_Q;
always @(*) begin
	case(aaaa[2:0])
		0: curr_Q = Q0;
		1: curr_Q = Q1;
		2: curr_Q = Q2;
		3: curr_Q = Q3;
		4: curr_Q = Q4;
		5: curr_Q = Q5;
		6: curr_Q = Q6;
		7: curr_Q = Q7;
	endcase
end
assign bus_out = curr_Q;

endmodule
