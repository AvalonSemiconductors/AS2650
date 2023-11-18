`default_nettype none

module boot_rom(
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
	input rom_enabled,
	input [15:0] ram_start,
	input [15:0] ram_end,
	input [2:0] cs_port
);

reg [7:0] cs_port_bit;
always @(*) begin
	case(cs_port)
		0: cs_port_bit = 8'h01;
		1: cs_port_bit = 8'h02;
		2: cs_port_bit = 8'h04;
		3: cs_port_bit = 8'h08;
		4: cs_port_bit = 8'h10;
		5: cs_port_bit = 8'h20;
		6: cs_port_bit = 8'h40;
		7: cs_port_bit = 8'h80;
	endcase
end

reg [15:0] full_addr;
reg [15:0] writable;

always @(posedge wb_clk_i) begin
	if(rst) begin
		full_addr <= 16'h0000;
		writable <= 16'h0000;
	end else begin
		if(rom_enabled) begin
			if(le_lo_act) full_addr[7:0] <= bus_in;
			if(le_hi_act) full_addr[15:8] <= bus_in;
		end else begin
			full_addr <= 16'h0000;
		end
		if(!WEb_raw && full_addr == 16'h1FFE) writable[7:0] <= bus_in;
		if(!WEb_raw && full_addr == 16'h1FFF) writable[15:8] <= bus_in;
	end
end

assign bus_out = full_addr == 16'h1FFE ? writable[7:0] : (full_addr == 16'h1FFF ? writable[15:8] : rom_data);

wire [7:0] rom_ptr = full_addr[7:0];
reg [7:0] rom_data;
always @(*) begin
case(rom_ptr)
	default: rom_data = 8'h00;
	0: rom_data = 8'hC0;
	1: rom_data = 8'hC0;
	2: rom_data = 8'h1B;
	3: rom_data = 8'h05;
	4: rom_data = ram_start[15:8];
	5: rom_data = ram_start[7:0];
	6: rom_data = cs_port_bit;
	7: rom_data = ram_end[15:8];
	8: rom_data = ram_end[7:0];
	9: rom_data = 8'h20;
	10: rom_data = 8'h93;
	11: rom_data = 8'h04;
	12: rom_data = 8'h20;
	13: rom_data = 8'h92;
	14: rom_data = 8'h08;
	15: rom_data = 8'h76;
	16: rom_data = 8'hD4;
	17: rom_data = 8'h01;
	18: rom_data = 8'h3F;
	19: rom_data = 8'h00;
	20: rom_data = 8'h97;
	21: rom_data = 8'h3F;
	22: rom_data = 8'h00;
	23: rom_data = 8'hA0;
	24: rom_data = 8'h04;
	25: rom_data = 8'hFF;
	26: rom_data = 8'h3F;
	27: rom_data = 8'h00;
	28: rom_data = 8'hAB;
	29: rom_data = 8'h3F;
	30: rom_data = 8'h00;
	31: rom_data = 8'h97;
	32: rom_data = 8'h3F;
	33: rom_data = 8'h00;
	34: rom_data = 8'hA0;
	35: rom_data = 8'h04;
	36: rom_data = 8'hAB;
	37: rom_data = 8'h3F;
	38: rom_data = 8'h00;
	39: rom_data = 8'hAB;
	40: rom_data = 8'h3F;
	41: rom_data = 8'h00;
	42: rom_data = 8'h97;
	43: rom_data = 8'h3F;
	44: rom_data = 8'h00;
	45: rom_data = 8'hA0;
	46: rom_data = 8'h04;
	47: rom_data = 8'h03;
	48: rom_data = 8'h3F;
	49: rom_data = 8'h00;
	50: rom_data = 8'hAB;
	51: rom_data = 8'h06;
	52: rom_data = 8'h03;
	53: rom_data = 8'h20;
	54: rom_data = 8'h3F;
	55: rom_data = 8'h00;
	56: rom_data = 8'hAB;
	57: rom_data = 8'hFA;
	58: rom_data = 8'h7A;
	59: rom_data = 8'h07;
	60: rom_data = 8'hFF;
	61: rom_data = 8'h20;
	62: rom_data = 8'h3F;
	63: rom_data = 8'h00;
	64: rom_data = 8'hAB;
	65: rom_data = 8'hEF;
	66: rom_data = 8'h20;
	67: rom_data = 8'hB6;
	68: rom_data = 8'h98;
	69: rom_data = 8'h39;
	70: rom_data = 8'h00;
	71: rom_data = 8'h98;
	72: rom_data = 8'h74;
	73: rom_data = 8'h77;
	74: rom_data = 8'h08;
	75: rom_data = 8'h0C;
	76: rom_data = 8'h00;
	77: rom_data = 8'h04;
	78: rom_data = 8'hCC;
	79: rom_data = 8'h1F;
	80: rom_data = 8'hFE;
	81: rom_data = 8'h0C;
	82: rom_data = 8'h00;
	83: rom_data = 8'h05;
	84: rom_data = 8'hCC;
	85: rom_data = 8'h1F;
	86: rom_data = 8'hFF;
	87: rom_data = 8'h20;
	88: rom_data = 8'h3F;
	89: rom_data = 8'h00;
	90: rom_data = 8'hAB;
	91: rom_data = 8'hCC;
	92: rom_data = 8'h9F;
	93: rom_data = 8'hFE;
	94: rom_data = 8'h75;
	95: rom_data = 8'h01;
	96: rom_data = 8'h0C;
	97: rom_data = 8'h1F;
	98: rom_data = 8'hFF;
	99: rom_data = 8'h84;
	100: rom_data = 8'h01;
	101: rom_data = 8'hCC;
	102: rom_data = 8'h1F;
	103: rom_data = 8'hFF;
	104: rom_data = 8'h0D;
	105: rom_data = 8'h1F;
	106: rom_data = 8'hFE;
	107: rom_data = 8'h85;
	108: rom_data = 8'h00;
	109: rom_data = 8'hCD;
	110: rom_data = 8'h1F;
	111: rom_data = 8'hFE;
	112: rom_data = 8'hED;
	113: rom_data = 8'h00;
	114: rom_data = 8'h07;
	115: rom_data = 8'h98;
	116: rom_data = 8'h62;
	117: rom_data = 8'hEC;
	118: rom_data = 8'h00;
	119: rom_data = 8'h08;
	120: rom_data = 8'h98;
	121: rom_data = 8'h5D;
	122: rom_data = 8'h3B;
	123: rom_data = 8'h1B;
	124: rom_data = 8'h1F;
	125: rom_data = 8'h80;
	126: rom_data = 8'h04;
	127: rom_data = 8'h3B;
	128: rom_data = 8'h16;
	129: rom_data = 8'hB4;
	130: rom_data = 8'h40;
	131: rom_data = 8'h76;
	132: rom_data = 8'h40;
	133: rom_data = 8'h98;
	134: rom_data = 8'h02;
	135: rom_data = 8'h74;
	136: rom_data = 8'h40;
	137: rom_data = 8'h06;
	138: rom_data = 8'h19;
	139: rom_data = 8'h07;
	140: rom_data = 8'hFF;
	141: rom_data = 8'h3B;
	142: rom_data = 8'h04;
	143: rom_data = 8'hFA;
	144: rom_data = 8'h7A;
	145: rom_data = 8'h1B;
	146: rom_data = 8'h6C;
	147: rom_data = 8'hC0;
	148: rom_data = 8'hFB;
	149: rom_data = 8'h7D;
	150: rom_data = 8'h17;
	151: rom_data = 8'h0C;
	152: rom_data = 8'h00;
	153: rom_data = 8'h06;
	154: rom_data = 8'hD4;
	155: rom_data = 8'h03;
	156: rom_data = 8'h07;
	157: rom_data = 8'h0A;
	158: rom_data = 8'h1B;
	159: rom_data = 8'h73;
	160: rom_data = 8'h0C;
	161: rom_data = 8'h00;
	162: rom_data = 8'h06;
	163: rom_data = 8'h24;
	164: rom_data = 8'hFF;
	165: rom_data = 8'hD4;
	166: rom_data = 8'h03;
	167: rom_data = 8'h07;
	168: rom_data = 8'h0B;
	169: rom_data = 8'h1B;
	170: rom_data = 8'h68;
	171: rom_data = 8'hD4;
	172: rom_data = 8'h85;
	173: rom_data = 8'h54;
	174: rom_data = 8'h83;
	175: rom_data = 8'h44;
	176: rom_data = 8'h03;
	177: rom_data = 8'h98;
	178: rom_data = 8'h7A;
	179: rom_data = 8'h54;
	180: rom_data = 8'h87;
	181: rom_data = 8'h17;
	182: rom_data = 8'h43;
	183: rom_data = 8'h48;
	184: rom_data = 8'h49;
	185: rom_data = 8'h52;
	186: rom_data = 8'h50;
	187: rom_data = 8'h21;
	188: rom_data = 8'h00;
endcase
end

endmodule
