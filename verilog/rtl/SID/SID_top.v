`default_nettype none

module sid_top(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	output DAC_clk,
	output DAC_le,
	output DAC_dat_1,
	output DAC_dat_2,
	
	input [5:0] addr,
	input [7:0] bus_in,
	output reg [7:0] bus_out,
	input bus_cyc,
	input bus_we,
	
	input clk,
	input rst
);

reg [7:0] read_res;
always @(*) begin
	case(addr)
		default: read_res = 8'h00;
		0: read_res = freq_1[7:0];
		1: read_res = freq_1[15:8];
		2: read_res = pw_1[7:0];
		3: read_res = {4'h0, pw_1[11:8]};
		4: read_res = ctrl_1;
		5: read_res = atk_dec_1;
		6: read_res = sus_rel_1;
		
		7: read_res = freq_2[7:0];
		8: read_res = freq_2[15:8];
		9: read_res = pw_2[7:0];
		10: read_res = {4'h0, pw_2[11:8]};
		11: read_res = ctrl_2;
		12: read_res = atk_dec_2;
		13: read_res = sus_rel_2;
		
		14: read_res = freq_3[7:0];
		15: read_res = freq_3[15:8];
		16: read_res = pw_3[7:0];
		17: read_res = {4'h0, pw_3[11:8]};
		18: read_res = ctrl_3;
		19: read_res = atk_dec_3;
		20: read_res = sus_rel_3;
		
		21: read_res = {5'h00, fc[2:0]};
		22: read_res = fc[10:3];
		23: read_res = res_filt;
		24: read_res = mode_vol;
		25: read_res = {6'h20, clk_trg};
		27: read_res = sample_3[11:4];
		28: read_res = ch3_env;
	endcase
end

/*
 * SID REGISTERS
 */
//Channel 1 config
reg [15:0] freq_1;
reg [11:0] pw_1;
reg [7:0]  ctrl_1;
reg [7:0]  atk_dec_1;
reg [7:0]  sus_rel_1;

//Channel 2 config
reg [15:0] freq_2;
reg [11:0] pw_2;
reg [7:0]  ctrl_2;
reg [7:0]  atk_dec_2;
reg [7:0]  sus_rel_2;

//Channel 3 config
reg [15:0] freq_3;
reg [11:0] pw_3;
reg [7:0]  ctrl_3;
reg [7:0]  atk_dec_3;
reg [7:0]  sus_rel_3;

//Filters config
reg [10:0] fc;
reg [7:0]  res_filt;
reg [7:0]  mode_vol;

/*
 * Channel sample outputs
 */
wire [11:0] sample_1;
wire [11:0] sample_2;
wire [11:0] sample_3;
wire [7:0] ch3_env;

reg [1:0] clk_ctr;
reg [1:0] clk_trg;
wire enable = clk_trg == 0 || clk_ctr == clk_trg;

always @(posedge clk) begin
    if(rst) begin
        clk_ctr   <= 0;
        clk_trg   <= 0;
        freq_1    <= 0;
        pw_1      <= 12'h800;
        ctrl_1    <= 0;
        atk_dec_1 <= 0;
        sus_rel_1 <= 0;
        
        freq_2    <= 0;
        pw_2      <= 12'h800;
        ctrl_2    <= 0;
        atk_dec_2 <= 0;
        sus_rel_2 <= 0;
        
        freq_3    <= 0;
        pw_3      <= 12'h800;
        ctrl_3    <= 0;
        atk_dec_3 <= 0;
        sus_rel_3 <= 0;
        
        fc        <= 0;
        res_filt  <= 0;
        mode_vol  <= 0;
        bus_out   <= 0;
    end else begin
        if(enable) clk_ctr <= 0;
        else clk_ctr <= clk_ctr + 1;
        if(bus_cyc) bus_out <= read_res;
        if(bus_cyc && bus_we) begin
            /*
            * SID Register Write
            */
            case(addr)
                0:  freq_1[7:0]  <= bus_in;
                1:  freq_1[15:8] <= bus_in;
                2:  pw_1[7:0]    <= bus_in;
                3:  pw_1[11:8]   <= bus_in[3:0];
                4:  ctrl_1       <= bus_in;
                5:  atk_dec_1    <= bus_in;
                6:  sus_rel_1    <= bus_in;

                7:  freq_2[7:0]  <= bus_in;
                8:  freq_2[15:8] <= bus_in;
                9:  pw_2[7:0]    <= bus_in;
                10: pw_2[11:8]   <= bus_in[3:0];
                11: ctrl_2       <= bus_in;
                12: atk_dec_2    <= bus_in;
                13: sus_rel_2    <= bus_in;

                14: freq_3[7:0]  <= bus_in;
                15: freq_3[15:8] <= bus_in;
                16: pw_3[7:0]    <= bus_in;
                17: pw_3[11:8]   <= bus_in[3:0];
                18: ctrl_3       <= bus_in;
                19: atk_dec_3    <= bus_in;
                20: sus_rel_3    <= bus_in;

                21: fc[2:0]      <= bus_in[2:0];
                22: fc[10:3]     <= bus_in;
                23: res_filt     <= bus_in;
                24: mode_vol     <= bus_in;
                25: clk_trg      <= bus_in[1:0];
                default: begin
                end
            endcase
        end
    end
end

/*
 * Module instantiations for channels
*/

SID_channels channels(
    .freq1(freq_1),
    .freq2(freq_2),
    .freq3(freq_3),
    .pw1(pw_1),
    .pw2(pw_2),
    .pw3(pw_3),
    .ctrl_reg1(ctrl_1),
    .ctrl_reg2(ctrl_2),
    .ctrl_reg3(ctrl_3),
    .atk_dec1(atk_dec_1),
    .atk_dec2(atk_dec_2),
    .atk_dec3(atk_dec_3),
    .sus_rel1(sus_rel_1),
    .sus_rel2(sus_rel_2),
    .sus_rel3(sus_rel_3),
    
    .clk(clk),
    .clk_enable(enable),
    .rst(rst),
    .sample1(sample_1),
    .sample2(sample_2),
    .sample3(sample_3),
    
    .ch3_env(ch3_env)
);

wire [14:0] full_sample_1;
wire sample_ready;
SID_filter filters(
    .sample_out(full_sample_1),
    .sample_1(sample_1),
    .sample_2(sample_2),
    .sample_3(sample_3),
    .reg_fc(fc),
    .res_filt(res_filt),
    .mode_vol(mode_vol),
    .clk(clk),
    .clk_enable(enable),
    .rst(rst),
    
    .sample_ready(sample_ready)
);

wire [11:0] full_sample_2;
spi_dac_i spi_dac_i(
    .sample_in_1(full_sample_1[14:3]),
    .sample_in_2(full_sample_2),
    .clk(clk),
    .rst(rst),
    .spi_le(DAC_le),
    .spi_clk(DAC_clk),
    .spi_dat_1(DAC_dat_1),
    .spi_dat_2(DAC_dat_2),
    .sample_ready(sample_ready)
);

tt_um_rejunity_sn76489 tt_um_rejunity_sn76489(
    .clk(clk),
    .rst(rst),
    .data(bus_in),
    .we(bus_cyc && bus_we && addr == 31),
    .spi_master(full_sample_2),
    .clk_enable(enable)
);

endmodule
