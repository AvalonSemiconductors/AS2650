`default_nettype none

module boot_rom(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	input wb_clk_i,
	
	input [7:0] last_addr,
	output [7:0] bus_out,
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

assign bus_out = rom_data;

reg [7:0] rom_data;
always @(*) begin
case(last_addr)
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
	20: rom_data = 8'h84;
	21: rom_data = 8'h3F;
	22: rom_data = 8'h00;
	23: rom_data = 8'h8D;
	24: rom_data = 8'h04;
	25: rom_data = 8'hFF;
	26: rom_data = 8'h3F;
	27: rom_data = 8'h00;
	28: rom_data = 8'h98;
	29: rom_data = 8'h3F;
	30: rom_data = 8'h00;
	31: rom_data = 8'h84;
	32: rom_data = 8'h3F;
	33: rom_data = 8'h00;
	34: rom_data = 8'h8D;
	35: rom_data = 8'h04;
	36: rom_data = 8'hAB;
	37: rom_data = 8'h3F;
	38: rom_data = 8'h00;
	39: rom_data = 8'h98;
	40: rom_data = 8'h3F;
	41: rom_data = 8'h00;
	42: rom_data = 8'h84;
	43: rom_data = 8'h3F;
	44: rom_data = 8'h00;
	45: rom_data = 8'h8D;
	46: rom_data = 8'h04;
	47: rom_data = 8'h03;
	48: rom_data = 8'h3F;
	49: rom_data = 8'h00;
	50: rom_data = 8'h98;
	51: rom_data = 8'h06;
	52: rom_data = 8'h03;
	53: rom_data = 8'h20;
	54: rom_data = 8'h3F;
	55: rom_data = 8'h00;
	56: rom_data = 8'h98;
	57: rom_data = 8'hFA;
	58: rom_data = 8'h7A;
	59: rom_data = 8'h07;
	60: rom_data = 8'hFF;
	61: rom_data = 8'h20;
	62: rom_data = 8'h3F;
	63: rom_data = 8'h00;
	64: rom_data = 8'h98;
	65: rom_data = 8'hEF;
	66: rom_data = 8'h20;
	67: rom_data = 8'hA3;
	68: rom_data = 8'h98;
	69: rom_data = 8'h26;
	70: rom_data = 8'h00;
	71: rom_data = 8'h98;
	72: rom_data = 8'h74;
	73: rom_data = 8'h77;
	74: rom_data = 8'h08;
	75: rom_data = 8'h0F;
	76: rom_data = 8'h00;
	77: rom_data = 8'h04;
	78: rom_data = 8'h0E;
	79: rom_data = 8'h00;
	80: rom_data = 8'h05;
	81: rom_data = 8'h20;
	82: rom_data = 8'h3F;
	83: rom_data = 8'h00;
	84: rom_data = 8'h98;
	85: rom_data = 8'hB7;
	86: rom_data = 8'h93;
	87: rom_data = 8'h75;
	88: rom_data = 8'h01;
	89: rom_data = 8'h86;
	90: rom_data = 8'h01;
	91: rom_data = 8'h87;
	92: rom_data = 8'h00;
	93: rom_data = 8'hEF;
	94: rom_data = 8'h00;
	95: rom_data = 8'h07;
	96: rom_data = 8'h98;
	97: rom_data = 8'h6F;
	98: rom_data = 8'hEE;
	99: rom_data = 8'h00;
	100: rom_data = 8'h08;
	101: rom_data = 8'h98;
	102: rom_data = 8'h6A;
	103: rom_data = 8'h3B;
	104: rom_data = 8'h1B;
	105: rom_data = 8'h1F;
	106: rom_data = 8'h80;
	107: rom_data = 8'h04;
	108: rom_data = 8'h3B;
	109: rom_data = 8'h16;
	110: rom_data = 8'hB4;
	111: rom_data = 8'h40;
	112: rom_data = 8'h76;
	113: rom_data = 8'h40;
	114: rom_data = 8'h98;
	115: rom_data = 8'h02;
	116: rom_data = 8'h74;
	117: rom_data = 8'h40;
	118: rom_data = 8'h06;
	119: rom_data = 8'h19;
	120: rom_data = 8'h07;
	121: rom_data = 8'hFF;
	122: rom_data = 8'h3B;
	123: rom_data = 8'h04;
	124: rom_data = 8'hFA;
	125: rom_data = 8'h7A;
	126: rom_data = 8'h1B;
	127: rom_data = 8'h6C;
	128: rom_data = 8'hC0;
	129: rom_data = 8'hFB;
	130: rom_data = 8'h7D;
	131: rom_data = 8'h17;
	132: rom_data = 8'h0C;
	133: rom_data = 8'h00;
	134: rom_data = 8'h06;
	135: rom_data = 8'hD4;
	136: rom_data = 8'h03;
	137: rom_data = 8'h07;
	138: rom_data = 8'h0A;
	139: rom_data = 8'h1B;
	140: rom_data = 8'h73;
	141: rom_data = 8'h0C;
	142: rom_data = 8'h00;
	143: rom_data = 8'h06;
	144: rom_data = 8'h24;
	145: rom_data = 8'hFF;
	146: rom_data = 8'hD4;
	147: rom_data = 8'h03;
	148: rom_data = 8'h07;
	149: rom_data = 8'h0B;
	150: rom_data = 8'h1B;
	151: rom_data = 8'h68;
	152: rom_data = 8'hD4;
	153: rom_data = 8'h85;
	154: rom_data = 8'h54;
	155: rom_data = 8'h83;
	156: rom_data = 8'h44;
	157: rom_data = 8'h03;
	158: rom_data = 8'h98;
	159: rom_data = 8'h7A;
	160: rom_data = 8'h54;
	161: rom_data = 8'h87;
	162: rom_data = 8'h17;
	163: rom_data = 8'h43;
	164: rom_data = 8'h48;
	165: rom_data = 8'h49;
	166: rom_data = 8'h52;
	167: rom_data = 8'h50;
	168: rom_data = 8'h21;
	169: rom_data = 8'h00;
endcase
end

endmodule
