`default_nettype none

module wrapped_as2650(
`ifdef USE_POWER_PINS
	inout vdd,
	inout vss,
`endif
	input [18:0] io_in,
	output [18:0] io_out,
	output [18:0] io_oeb,
	
	input wb_clk_i,
	input wb_rst_i,
	
	input [31:0] wbs_adr_i,
	input [31:0] wbs_dat_i,
	output [31:0] wbs_dat_o,
	input wbs_we_i,
	input wbs_cyc_i,
	input wbs_stb_i,
	output wbs_ack_o,
	
	output [55:0] la_data_out,
	input [6:0] irqs,
	
	output [7:0] bus_data_out,
	output bus_cyc,
	output [5:0] bus_addr,
	
	output bus_we_gpios,
	input [7:0] bus_in_gpios,
	
	output bus_we_timers,
	input [7:0] bus_in_timers,
	
	output bus_we_serial_ports,
	input [7:0] bus_in_serial_ports,
	
	output bus_we_sid,
	input [7:0] bus_in_sid,
	
	output [2:0] irq,
	output reset_out,
	
	output WEb_ram,
	output le_lo_act,
	output le_hi_act,
	output reg [15:0] RAM_start_addr,
	output reg [15:0] RAM_end_addr,
	output reg [2:0] cs_port,
	output boot_rom_en,
	output [7:0] rom_bus_out,
	input [7:0] rom_bus_in,
	input [7:0] ram_bus_in,
	output reg ram_enabled,
	output [15:0] last_addr,
	output [15:0] requested_addr
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
reg wb_reset_override_en;
reg wb_reset_override;
reg wb_io3_test;
reg wb_io3_state;
reg wb_hidden_rom_enable;

assign boot_rom_en = wb_hidden_rom_enable && cpu_hidden_rom_enable;

always @(posedge wb_clk_i) begin
	if(wb_rst_i) begin
		wb_ready <= 0;
		wb_feedback_delay <= 0;
		wbs_o_buff <= 0;
		wb_counter <= 0;
		wb_debug_cc <= 0;
		wb_debug_carry <= 0;
		web_behavior <= 0;
		wb_reset_override_en <= 0;
		wb_reset_override <= 0;
		wb_io3_test <= 0;
		wb_io3_state <= 0;
		wb_hidden_rom_enable <= 0;
		ram_enabled <= 0;
	end else begin
		wb_counter <= wb_counter + 1;
		if(wb_valid && !wb_feedback_delay) begin
			if(wbs_adr_i[22]) begin
				if(wbs_we_i) wb_counter <= wbs_dat_i;
				else wbs_o_buff <= wb_counter;
			end else if(wbs_adr_i[21]) begin
				if(wbs_we_i) begin
					wb_debug_cc <= wbs_dat_i[0];
					wb_debug_carry <= wbs_dat_i[1];
					web_behavior <= wbs_dat_i[3:2];
					wb_reset_override_en <= wbs_dat_i[4];
					wb_reset_override <= wbs_dat_i[5];
					wb_io3_test <= wbs_dat_i[6];
					wb_io3_state <= wbs_dat_i[7];
					ram_enabled <= wbs_dat_i[8];
				end
				else wbs_o_buff <= {7'h00, debug_psu, debug_psl, ram_enabled, wb_io3_state, wb_io3_test, wb_reset_override, wb_reset_override_en, web_behavior, wb_debug_carry, wb_debug_cc};
			end else if(wbs_adr_i[20] && wbs_adr_i[19]) begin
				if(wbs_we_i) begin
					wb_hidden_rom_enable <= wbs_dat_i[31];
					cs_port <= wbs_dat_i[2:0];
				end
				else wbs_o_buff <= {wb_hidden_rom_enable, 28'h6210000, cs_port};
			end else if(wbs_adr_i[20] && !wbs_adr_i[19]) begin
				if(wbs_we_i) begin
					RAM_start_addr <= wbs_dat_i[15:0];
					RAM_end_addr <= wbs_dat_i[31:16];
				end
				else wbs_o_buff <= {RAM_end_addr, RAM_start_addr};
			end else begin
				if(!wbs_we_i) wbs_o_buff <= 32'hFFFFFFFF;
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
wire cpu_hidden_rom_enable;

assign io_out[0] = 1'b0;
assign io_oeb[0] = 1'b1;
assign io_out[1] = bus_dir;
assign io_oeb[1] = 1'b0;
assign io_out[12:5] = bus_out;
assign rom_bus_out = bus_out;
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

assign io_out[3] = wb_io3_state;
assign io_oeb[3] = !wb_io3_test;

assign io_out[18:17] = wb_debug_carry ? {debug_psl[5], debug_psl[0]} : (wb_debug_cc ? debug_psl[7:6] : {IOC, IOD});
assign io_oeb[18:17] = 2'b00;

assign la_data_out[55:33] = 23'h7F00FF; //TEMP
wire the_reset = (wb_reset_override_en ? wb_reset_override : (!io_in[0])) || wb_rst_i;
assign reset_out = the_reset;

/*
 * Internal IO multiplexing
 */
wire [7:0] full_io_addr;
assign bus_addr = full_io_addr[5:0];
wire io_bus_we;
wire [1:0] device_addr = full_io_addr[7:6];

reg [7:0] bus_in_plexed;
always @(*) begin
	case(device_addr)
		0: bus_in_plexed = bus_in_gpios;
		1: bus_in_plexed = bus_in_timers;
		2: bus_in_plexed = bus_in_serial_ports;
		3: bus_in_plexed = bus_in_sid;
		default: bus_in_plexed = 8'h00;
	endcase
end
assign bus_we_gpios = io_bus_we && device_addr == 0;
assign bus_we_timers = io_bus_we && device_addr == 1;
assign bus_we_serial_ports = io_bus_we && device_addr == 2;
assign bus_we_sid = io_bus_we && device_addr == 3;

wire in_ram_range = ram_enabled && last_addr[15:12] == 0;
wire [7:0] bus_in = boot_rom_en ? rom_bus_in : (in_ram_range ? ram_bus_in : io_in[12:5]);
wire WE_ram_pre;
assign WEb_ram = !(WE_ram_pre && in_ram_range);

as2650 as2650(
	.clk(wb_clk_i),
	.rst(the_reset),
	.bus_in(bus_in),
	.bus_out(bus_out),
	.le_lo(le_lo),
	.le_hi(le_hi),
	.OEb(OEb),
	.WEb(WEb),
	.bus_dir(bus_dir),
	.irqs(irqs),
	.debug_psu(debug_psu),
	.debug_psl(debug_psl),
	.flag(flag),
	.sense(io_in[4]),
	.IOC(IOC),
	.IOD(IOD),
	.la_data_out(la_data_out[32:0]),
	
	.ext_io_addr(full_io_addr),
	.io_bus_cyc(bus_cyc),
	.io_bus_we(io_bus_we),
	.io_bus_out(bus_data_out),
	.io_bus_in(bus_in_plexed),
	
	.wb_hidden_rom_enable(wb_hidden_rom_enable),
	.cpu_hidden_rom_enable(cpu_hidden_rom_enable),
	
	.le_lo_act_o(le_lo_act),
	.le_hi_act_o(le_hi_act),
	.last_addr_o(last_addr),
	.requested_addr_o(requested_addr),
	.WE_ram(WE_ram_pre)
);

endmodule
