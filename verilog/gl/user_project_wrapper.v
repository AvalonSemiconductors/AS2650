module user_project_wrapper (user_clock2,
    vdd,
    vss,
    wb_clk_i,
    wb_rst_i,
    wbs_ack_o,
    wbs_cyc_i,
    wbs_stb_i,
    wbs_we_i,
    io_in,
    io_oeb,
    io_out,
    la_data_in,
    la_data_out,
    la_oenb,
    user_irq,
    wbs_adr_i,
    wbs_dat_i,
    wbs_dat_o,
    wbs_sel_i);
 input user_clock2;
 input vdd;
 input vss;
 input wb_clk_i;
 input wb_rst_i;
 output wbs_ack_o;
 input wbs_cyc_i;
 input wbs_stb_i;
 input wbs_we_i;
 input [37:0] io_in;
 output [37:0] io_oeb;
 output [37:0] io_out;
 input [63:0] la_data_in;
 output [63:0] la_data_out;
 input [63:0] la_oenb;
 output [2:0] user_irq;
 input [31:0] wbs_adr_i;
 input [31:0] wbs_dat_i;
 output [31:0] wbs_dat_o;
 input [3:0] wbs_sel_i;

 wire \RAM_end_addr[0] ;
 wire \RAM_end_addr[10] ;
 wire \RAM_end_addr[11] ;
 wire \RAM_end_addr[12] ;
 wire \RAM_end_addr[13] ;
 wire \RAM_end_addr[14] ;
 wire \RAM_end_addr[15] ;
 wire \RAM_end_addr[1] ;
 wire \RAM_end_addr[2] ;
 wire \RAM_end_addr[3] ;
 wire \RAM_end_addr[4] ;
 wire \RAM_end_addr[5] ;
 wire \RAM_end_addr[6] ;
 wire \RAM_end_addr[7] ;
 wire \RAM_end_addr[8] ;
 wire \RAM_end_addr[9] ;
 wire \RAM_start_addr[0] ;
 wire \RAM_start_addr[10] ;
 wire \RAM_start_addr[11] ;
 wire \RAM_start_addr[12] ;
 wire \RAM_start_addr[13] ;
 wire \RAM_start_addr[14] ;
 wire \RAM_start_addr[15] ;
 wire \RAM_start_addr[1] ;
 wire \RAM_start_addr[2] ;
 wire \RAM_start_addr[3] ;
 wire \RAM_start_addr[4] ;
 wire \RAM_start_addr[5] ;
 wire \RAM_start_addr[6] ;
 wire \RAM_start_addr[7] ;
 wire \RAM_start_addr[8] ;
 wire \RAM_start_addr[9] ;
 wire RXD;
 wire TXD;
 wire WEb_raw;
 wire boot_rom_en;
 wire \bus_addr[0] ;
 wire \bus_addr[1] ;
 wire \bus_addr[2] ;
 wire \bus_addr[3] ;
 wire \bus_addr[4] ;
 wire \bus_addr[5] ;
 wire bus_cyc;
 wire \bus_data_gpios[0] ;
 wire \bus_data_gpios[1] ;
 wire \bus_data_gpios[2] ;
 wire \bus_data_gpios[3] ;
 wire \bus_data_gpios[4] ;
 wire \bus_data_gpios[5] ;
 wire \bus_data_gpios[6] ;
 wire \bus_data_gpios[7] ;
 wire \bus_data_out[0] ;
 wire \bus_data_out[1] ;
 wire \bus_data_out[2] ;
 wire \bus_data_out[3] ;
 wire \bus_data_out[4] ;
 wire \bus_data_out[5] ;
 wire \bus_data_out[6] ;
 wire \bus_data_out[7] ;
 wire \bus_data_serial_ports[0] ;
 wire \bus_data_serial_ports[1] ;
 wire \bus_data_serial_ports[2] ;
 wire \bus_data_serial_ports[3] ;
 wire \bus_data_serial_ports[4] ;
 wire \bus_data_serial_ports[5] ;
 wire \bus_data_serial_ports[6] ;
 wire \bus_data_serial_ports[7] ;
 wire \bus_data_timers[0] ;
 wire \bus_data_timers[1] ;
 wire \bus_data_timers[2] ;
 wire \bus_data_timers[3] ;
 wire \bus_data_timers[4] ;
 wire \bus_data_timers[5] ;
 wire \bus_data_timers[6] ;
 wire \bus_data_timers[7] ;
 wire bus_we_gpios;
 wire bus_we_serial_ports;
 wire bus_we_timers;
 wire \cs_port[0] ;
 wire \cs_port[1] ;
 wire \cs_port[2] ;
 wire irq0;
 wire irq1;
 wire irq2;
 wire irq3;
 wire irq5;
 wire irq6;
 wire irq7;
 wire le_hi_act;
 wire le_lo_act;
 wire pwm0;
 wire pwm1;
 wire pwm2;
 wire reset;
 wire \rom_bus_in[0] ;
 wire \rom_bus_in[1] ;
 wire \rom_bus_in[2] ;
 wire \rom_bus_in[3] ;
 wire \rom_bus_in[4] ;
 wire \rom_bus_in[5] ;
 wire \rom_bus_in[6] ;
 wire \rom_bus_in[7] ;
 wire \rom_bus_out[0] ;
 wire \rom_bus_out[1] ;
 wire \rom_bus_out[2] ;
 wire \rom_bus_out[3] ;
 wire \rom_bus_out[4] ;
 wire \rom_bus_out[5] ;
 wire \rom_bus_out[6] ;
 wire \rom_bus_out[7] ;
 wire tmr0_clk;
 wire tmr0_o;
 wire tmr1_clk;
 wire tmr1_o;

 avali_logo avali_logo (.vss(vss),
    .vdd(vdd));
 boot_rom boot_rom (.WEb_raw(WEb_raw),
    .le_hi_act(le_hi_act),
    .le_lo_act(le_lo_act),
    .rom_enabled(boot_rom_en),
    .rst(reset),
    .vdd(vdd),
    .vss(vss),
    .wb_clk_i(wb_clk_i),
    .bus_in({\rom_bus_out[7] ,
    \rom_bus_out[6] ,
    \rom_bus_out[5] ,
    \rom_bus_out[4] ,
    \rom_bus_out[3] ,
    \rom_bus_out[2] ,
    \rom_bus_out[1] ,
    \rom_bus_out[0] }),
    .bus_out({\rom_bus_in[7] ,
    \rom_bus_in[6] ,
    \rom_bus_in[5] ,
    \rom_bus_in[4] ,
    \rom_bus_in[3] ,
    \rom_bus_in[2] ,
    \rom_bus_in[1] ,
    \rom_bus_in[0] }),
    .cs_port({\cs_port[2] ,
    \cs_port[1] ,
    \cs_port[0] }),
    .ram_end({\RAM_end_addr[15] ,
    \RAM_end_addr[14] ,
    \RAM_end_addr[13] ,
    \RAM_end_addr[12] ,
    \RAM_end_addr[11] ,
    \RAM_end_addr[10] ,
    \RAM_end_addr[9] ,
    \RAM_end_addr[8] ,
    \RAM_end_addr[7] ,
    \RAM_end_addr[6] ,
    \RAM_end_addr[5] ,
    \RAM_end_addr[4] ,
    \RAM_end_addr[3] ,
    \RAM_end_addr[2] ,
    \RAM_end_addr[1] ,
    \RAM_end_addr[0] }),
    .ram_start({\RAM_start_addr[15] ,
    \RAM_start_addr[14] ,
    \RAM_start_addr[13] ,
    \RAM_start_addr[12] ,
    \RAM_start_addr[11] ,
    \RAM_start_addr[10] ,
    \RAM_start_addr[9] ,
    \RAM_start_addr[8] ,
    \RAM_start_addr[7] ,
    \RAM_start_addr[6] ,
    \RAM_start_addr[5] ,
    \RAM_start_addr[4] ,
    \RAM_start_addr[3] ,
    \RAM_start_addr[2] ,
    \RAM_start_addr[1] ,
    \RAM_start_addr[0] }));
 gpios gpios (.RXD(RXD),
    .TXD(TXD),
    .bus_cyc(bus_cyc),
    .bus_we(bus_we_gpios),
    .irq0(irq0),
    .irq6(irq6),
    .irq7(irq7),
    .pwm0(pwm0),
    .pwm1(pwm1),
    .pwm2(pwm2),
    .rst(reset),
    .tmr0_clk(tmr0_clk),
    .tmr0_o(tmr0_o),
    .tmr1_clk(tmr1_clk),
    .tmr1_o(tmr1_o),
    .vdd(vdd),
    .vss(vss),
    .wb_clk_i(wb_clk_i),
    .addr({\bus_addr[3] ,
    \bus_addr[2] ,
    \bus_addr[1] ,
    \bus_addr[0] }),
    .data_in({\bus_data_out[7] ,
    \bus_data_out[6] ,
    \bus_data_out[5] ,
    \bus_data_out[4] ,
    \bus_data_out[3] ,
    \bus_data_out[2] ,
    \bus_data_out[1] ,
    \bus_data_out[0] }),
    .data_out({\bus_data_gpios[7] ,
    \bus_data_gpios[6] ,
    \bus_data_gpios[5] ,
    \bus_data_gpios[4] ,
    \bus_data_gpios[3] ,
    \bus_data_gpios[2] ,
    \bus_data_gpios[1] ,
    \bus_data_gpios[0] }),
    .io_in({io_in[34],
    io_in[33],
    io_in[32],
    io_in[31],
    io_in[30],
    io_in[29],
    io_in[28],
    io_in[27],
    io_in[26],
    io_in[25],
    io_in[24],
    io_in[23],
    io_in[22],
    io_in[21],
    io_in[20],
    io_in[19]}),
    .io_oeb({io_oeb[34],
    io_oeb[33],
    io_oeb[32],
    io_oeb[31],
    io_oeb[30],
    io_oeb[29],
    io_oeb[28],
    io_oeb[27],
    io_oeb[26],
    io_oeb[25],
    io_oeb[24],
    io_oeb[23],
    io_oeb[22],
    io_oeb[21],
    io_oeb[20],
    io_oeb[19]}),
    .io_out({io_out[34],
    io_out[33],
    io_out[32],
    io_out[31],
    io_out[30],
    io_out[29],
    io_out[28],
    io_out[27],
    io_out[26],
    io_out[25],
    io_out[24],
    io_out[23],
    io_out[22],
    io_out[21],
    io_out[20],
    io_out[19]}),
    .la_data_out({la_data_out[63],
    la_data_out[62],
    la_data_out[61],
    la_data_out[60],
    la_data_out[59],
    la_data_out[58],
    la_data_out[57],
    la_data_out[56]}));
 serial_ports serial_ports (.RXD(RXD),
    .TXD(TXD),
    .bus_cyc(bus_cyc),
    .bus_we(bus_we_serial_ports),
    .io_in(io_in[37]),
    .irq3(irq3),
    .rst(reset),
    .vdd(vdd),
    .vss(vss),
    .wb_clk_i(wb_clk_i),
    .addr({\bus_addr[2] ,
    \bus_addr[1] ,
    \bus_addr[0] }),
    .data_in({\bus_data_out[7] ,
    \bus_data_out[6] ,
    \bus_data_out[5] ,
    \bus_data_out[4] ,
    \bus_data_out[3] ,
    \bus_data_out[2] ,
    \bus_data_out[1] ,
    \bus_data_out[0] }),
    .data_out({\bus_data_serial_ports[7] ,
    \bus_data_serial_ports[6] ,
    \bus_data_serial_ports[5] ,
    \bus_data_serial_ports[4] ,
    \bus_data_serial_ports[3] ,
    \bus_data_serial_ports[2] ,
    \bus_data_serial_ports[1] ,
    \bus_data_serial_ports[0] }),
    .io_oeb({io_oeb[37],
    io_oeb[36],
    io_oeb[35]}),
    .io_out({io_out[37],
    io_out[36],
    io_out[35]}));
 timers timers (.bus_cyc(bus_cyc),
    .bus_we(bus_we_timers),
    .irq1(irq1),
    .irq2(irq2),
    .irq5(irq5),
    .pwm0(pwm0),
    .pwm1(pwm1),
    .pwm2(pwm2),
    .rst(reset),
    .tmr0_clk(tmr0_clk),
    .tmr0_o(tmr0_o),
    .tmr1_clk(tmr1_clk),
    .tmr1_o(tmr1_o),
    .vdd(vdd),
    .vss(vss),
    .wb_clk_i(wb_clk_i),
    .addr({\bus_addr[5] ,
    \bus_addr[4] ,
    \bus_addr[3] ,
    \bus_addr[2] ,
    \bus_addr[1] ,
    \bus_addr[0] }),
    .data_in({\bus_data_out[7] ,
    \bus_data_out[6] ,
    \bus_data_out[5] ,
    \bus_data_out[4] ,
    \bus_data_out[3] ,
    \bus_data_out[2] ,
    \bus_data_out[1] ,
    \bus_data_out[0] }),
    .data_out({\bus_data_timers[7] ,
    \bus_data_timers[6] ,
    \bus_data_timers[5] ,
    \bus_data_timers[4] ,
    \bus_data_timers[3] ,
    \bus_data_timers[2] ,
    \bus_data_timers[1] ,
    \bus_data_timers[0] }));
 wrapped_as2650 wrapped_as2650 (.WEb_raw(WEb_raw),
    .boot_rom_en(boot_rom_en),
    .bus_cyc(bus_cyc),
    .bus_we_gpios(bus_we_gpios),
    .bus_we_serial_ports(bus_we_serial_ports),
    .bus_we_timers(bus_we_timers),
    .le_hi_act(le_hi_act),
    .le_lo_act(le_lo_act),
    .reset_out(reset),
    .vdd(vdd),
    .vss(vss),
    .wb_clk_i(wb_clk_i),
    .wb_rst_i(wb_rst_i),
    .wbs_ack_o(wbs_ack_o),
    .wbs_cyc_i(wbs_cyc_i),
    .wbs_stb_i(wbs_stb_i),
    .wbs_we_i(wbs_we_i),
    .RAM_end_addr({\RAM_end_addr[15] ,
    \RAM_end_addr[14] ,
    \RAM_end_addr[13] ,
    \RAM_end_addr[12] ,
    \RAM_end_addr[11] ,
    \RAM_end_addr[10] ,
    \RAM_end_addr[9] ,
    \RAM_end_addr[8] ,
    \RAM_end_addr[7] ,
    \RAM_end_addr[6] ,
    \RAM_end_addr[5] ,
    \RAM_end_addr[4] ,
    \RAM_end_addr[3] ,
    \RAM_end_addr[2] ,
    \RAM_end_addr[1] ,
    \RAM_end_addr[0] }),
    .RAM_start_addr({\RAM_start_addr[15] ,
    \RAM_start_addr[14] ,
    \RAM_start_addr[13] ,
    \RAM_start_addr[12] ,
    \RAM_start_addr[11] ,
    \RAM_start_addr[10] ,
    \RAM_start_addr[9] ,
    \RAM_start_addr[8] ,
    \RAM_start_addr[7] ,
    \RAM_start_addr[6] ,
    \RAM_start_addr[5] ,
    \RAM_start_addr[4] ,
    \RAM_start_addr[3] ,
    \RAM_start_addr[2] ,
    \RAM_start_addr[1] ,
    \RAM_start_addr[0] }),
    .bus_addr({\bus_addr[5] ,
    \bus_addr[4] ,
    \bus_addr[3] ,
    \bus_addr[2] ,
    \bus_addr[1] ,
    \bus_addr[0] }),
    .bus_data_out({\bus_data_out[7] ,
    \bus_data_out[6] ,
    \bus_data_out[5] ,
    \bus_data_out[4] ,
    \bus_data_out[3] ,
    \bus_data_out[2] ,
    \bus_data_out[1] ,
    \bus_data_out[0] }),
    .bus_in_gpios({\bus_data_gpios[7] ,
    \bus_data_gpios[6] ,
    \bus_data_gpios[5] ,
    \bus_data_gpios[4] ,
    \bus_data_gpios[3] ,
    \bus_data_gpios[2] ,
    \bus_data_gpios[1] ,
    \bus_data_gpios[0] }),
    .bus_in_serial_ports({\bus_data_serial_ports[7] ,
    \bus_data_serial_ports[6] ,
    \bus_data_serial_ports[5] ,
    \bus_data_serial_ports[4] ,
    \bus_data_serial_ports[3] ,
    \bus_data_serial_ports[2] ,
    \bus_data_serial_ports[1] ,
    \bus_data_serial_ports[0] }),
    .bus_in_timers({\bus_data_timers[7] ,
    \bus_data_timers[6] ,
    \bus_data_timers[5] ,
    \bus_data_timers[4] ,
    \bus_data_timers[3] ,
    \bus_data_timers[2] ,
    \bus_data_timers[1] ,
    \bus_data_timers[0] }),
    .cs_port({\cs_port[2] ,
    \cs_port[1] ,
    \cs_port[0] }),
    .io_in({io_in[18],
    io_in[17],
    io_in[16],
    io_in[15],
    io_in[14],
    io_in[13],
    io_in[12],
    io_in[11],
    io_in[10],
    io_in[9],
    io_in[8],
    io_in[7],
    io_in[6],
    io_in[5],
    io_in[4],
    io_in[3],
    io_in[2],
    io_in[1],
    io_in[0]}),
    .io_oeb({io_oeb[18],
    io_oeb[17],
    io_oeb[16],
    io_oeb[15],
    io_oeb[14],
    io_oeb[13],
    io_oeb[12],
    io_oeb[11],
    io_oeb[10],
    io_oeb[9],
    io_oeb[8],
    io_oeb[7],
    io_oeb[6],
    io_oeb[5],
    io_oeb[4],
    io_oeb[3],
    io_oeb[2],
    io_oeb[1],
    io_oeb[0]}),
    .io_out({io_out[18],
    io_out[17],
    io_out[16],
    io_out[15],
    io_out[14],
    io_out[13],
    io_out[12],
    io_out[11],
    io_out[10],
    io_out[9],
    io_out[8],
    io_out[7],
    io_out[6],
    io_out[5],
    io_out[4],
    io_out[3],
    io_out[2],
    io_out[1],
    io_out[0]}),
    .irq({user_irq[2],
    user_irq[1],
    user_irq[0]}),
    .irqs({irq7,
    irq6,
    irq5,
    irq3,
    irq2,
    irq1,
    irq0}),
    .la_data_out({la_data_out[55],
    la_data_out[54],
    la_data_out[53],
    la_data_out[52],
    la_data_out[51],
    la_data_out[50],
    la_data_out[49],
    la_data_out[48],
    la_data_out[47],
    la_data_out[46],
    la_data_out[45],
    la_data_out[44],
    la_data_out[43],
    la_data_out[42],
    la_data_out[41],
    la_data_out[40],
    la_data_out[39],
    la_data_out[38],
    la_data_out[37],
    la_data_out[36],
    la_data_out[35],
    la_data_out[34],
    la_data_out[33],
    la_data_out[32],
    la_data_out[31],
    la_data_out[30],
    la_data_out[29],
    la_data_out[28],
    la_data_out[27],
    la_data_out[26],
    la_data_out[25],
    la_data_out[24],
    la_data_out[23],
    la_data_out[22],
    la_data_out[21],
    la_data_out[20],
    la_data_out[19],
    la_data_out[18],
    la_data_out[17],
    la_data_out[16],
    la_data_out[15],
    la_data_out[14],
    la_data_out[13],
    la_data_out[12],
    la_data_out[11],
    la_data_out[10],
    la_data_out[9],
    la_data_out[8],
    la_data_out[7],
    la_data_out[6],
    la_data_out[5],
    la_data_out[4],
    la_data_out[3],
    la_data_out[2],
    la_data_out[1],
    la_data_out[0]}),
    .rom_bus_in({\rom_bus_in[7] ,
    \rom_bus_in[6] ,
    \rom_bus_in[5] ,
    \rom_bus_in[4] ,
    \rom_bus_in[3] ,
    \rom_bus_in[2] ,
    \rom_bus_in[1] ,
    \rom_bus_in[0] }),
    .rom_bus_out({\rom_bus_out[7] ,
    \rom_bus_out[6] ,
    \rom_bus_out[5] ,
    \rom_bus_out[4] ,
    \rom_bus_out[3] ,
    \rom_bus_out[2] ,
    \rom_bus_out[1] ,
    \rom_bus_out[0] }),
    .wbs_adr_i({wbs_adr_i[31],
    wbs_adr_i[30],
    wbs_adr_i[29],
    wbs_adr_i[28],
    wbs_adr_i[27],
    wbs_adr_i[26],
    wbs_adr_i[25],
    wbs_adr_i[24],
    wbs_adr_i[23],
    wbs_adr_i[22],
    wbs_adr_i[21],
    wbs_adr_i[20],
    wbs_adr_i[19],
    wbs_adr_i[18],
    wbs_adr_i[17],
    wbs_adr_i[16],
    wbs_adr_i[15],
    wbs_adr_i[14],
    wbs_adr_i[13],
    wbs_adr_i[12],
    wbs_adr_i[11],
    wbs_adr_i[10],
    wbs_adr_i[9],
    wbs_adr_i[8],
    wbs_adr_i[7],
    wbs_adr_i[6],
    wbs_adr_i[5],
    wbs_adr_i[4],
    wbs_adr_i[3],
    wbs_adr_i[2],
    wbs_adr_i[1],
    wbs_adr_i[0]}),
    .wbs_dat_i({wbs_dat_i[31],
    wbs_dat_i[30],
    wbs_dat_i[29],
    wbs_dat_i[28],
    wbs_dat_i[27],
    wbs_dat_i[26],
    wbs_dat_i[25],
    wbs_dat_i[24],
    wbs_dat_i[23],
    wbs_dat_i[22],
    wbs_dat_i[21],
    wbs_dat_i[20],
    wbs_dat_i[19],
    wbs_dat_i[18],
    wbs_dat_i[17],
    wbs_dat_i[16],
    wbs_dat_i[15],
    wbs_dat_i[14],
    wbs_dat_i[13],
    wbs_dat_i[12],
    wbs_dat_i[11],
    wbs_dat_i[10],
    wbs_dat_i[9],
    wbs_dat_i[8],
    wbs_dat_i[7],
    wbs_dat_i[6],
    wbs_dat_i[5],
    wbs_dat_i[4],
    wbs_dat_i[3],
    wbs_dat_i[2],
    wbs_dat_i[1],
    wbs_dat_i[0]}),
    .wbs_dat_o({wbs_dat_o[31],
    wbs_dat_o[30],
    wbs_dat_o[29],
    wbs_dat_o[28],
    wbs_dat_o[27],
    wbs_dat_o[26],
    wbs_dat_o[25],
    wbs_dat_o[24],
    wbs_dat_o[23],
    wbs_dat_o[22],
    wbs_dat_o[21],
    wbs_dat_o[20],
    wbs_dat_o[19],
    wbs_dat_o[18],
    wbs_dat_o[17],
    wbs_dat_o[16],
    wbs_dat_o[15],
    wbs_dat_o[14],
    wbs_dat_o[13],
    wbs_dat_o[12],
    wbs_dat_o[11],
    wbs_dat_o[10],
    wbs_dat_o[9],
    wbs_dat_o[8],
    wbs_dat_o[7],
    wbs_dat_o[6],
    wbs_dat_o[5],
    wbs_dat_o[4],
    wbs_dat_o[3],
    wbs_dat_o[2],
    wbs_dat_o[1],
    wbs_dat_o[0]}));
endmodule
