// SPDX-FileCopyrightText: 2020 Efabless Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// SPDX-License-Identifier: Apache-2.0

`default_nettype none
/*
 *-------------------------------------------------------------
 *
 * user_project_wrapper
 *
 * This wrapper enumerates all of the pins available to the
 * user for the user project.
 *
 * An example user project is provided in this wrapper.  The
 * example should be removed and replaced with the actual
 * user project.
 *
 *-------------------------------------------------------------
 */

module user_project_wrapper #(
    parameter BITS = 32
)(
`ifdef USE_POWER_PINS
    inout vdd,		// User area 5.0V supply
    inout vss,		// User area ground
`endif

    // Wishbone Slave ports (WB MI A)
    input wb_clk_i,
    input wb_rst_i,
    input wbs_stb_i,
    input wbs_cyc_i,
    input wbs_we_i,
    input [3:0] wbs_sel_i,
    input [31:0] wbs_dat_i,
    input [31:0] wbs_adr_i,
    output wbs_ack_o,
    output [31:0] wbs_dat_o,

    // Logic Analyzer Signals
    input  [63:0] la_data_in,
    output [63:0] la_data_out,
    input  [63:0] la_oenb,

    // IOs
    input  [`MPRJ_IO_PADS-1:0] io_in,
    output [`MPRJ_IO_PADS-1:0] io_out,
    output [`MPRJ_IO_PADS-1:0] io_oeb,

    // Independent clock (on independent integer divider)
    input   user_clock2,

    // User maskable interrupt signals
    output [2:0] user_irq
);

/*--------------------------------------*/
/* User project is instantiated  here   */
/*--------------------------------------*/
wire reset;
wire irq0;
wire irq1;
wire irq2;
wire irq3;
wire irq5;
wire irq6;
wire irq7;
wire [7:0] bus_data_out;
wire [7:0] bus_data_gpios;
wire bus_cyc;
wire [5:0] bus_addr;
wire bus_we_gpios;
wire [7:0] bus_data_timers;
wire bus_we_timers;
wire [7:0] bus_data_serial_ports;
wire bus_we_serial_ports;
wire WEb_raw;
wire le_lo_act;
wire le_hi_act;
wire [15:0] RAM_start_addr;
wire [15:0] RAM_end_addr;
wire [2:0] cs_port;
wire boot_rom_en;
wire [7:0] rom_bus_out;
wire [7:0] rom_bus_in;
wrapped_as2650 wrapped_as2650 (
`ifdef USE_POWER_PINS
    .vdd(vdd),
    .vss(vss),
`endif
    .wb_clk_i(wb_clk_i),
    .wb_rst_i(wb_rst_i),
    
    .io_in(io_in[18:0]),
    .io_out(io_out[18:0]),
    .io_oeb(io_oeb[18:0]),
    .la_data_out(la_data_out[55:0]),
    .wbs_adr_i(wbs_adr_i),
    .wbs_dat_i(wbs_dat_i),
    .wbs_dat_o(wbs_dat_o),
    .wbs_we_i(wbs_we_i),
    .wbs_cyc_i(wbs_cyc_i),
    .wbs_stb_i(wbs_stb_i),
    .wbs_ack_o(wbs_ack_o),
    .irq(user_irq),
    .reset_out(reset),
    .irqs({irq7, irq6, irq5, irq3, irq2, irq1, irq0}),
    .bus_data_out(bus_data_out),
    .bus_cyc(bus_cyc),
    .bus_addr(bus_addr),
    .bus_we_gpios(bus_we_gpios),
    .bus_in_gpios(bus_data_gpios),
    .bus_in_timers(bus_data_timers),
    .bus_we_timers(bus_we_timers),
    .bus_in_serial_ports(bus_data_serial_ports),
    .bus_we_serial_ports(bus_we_serial_ports),
    .WEb_raw(WEb_raw),
    .le_lo_act(le_lo_act),
    .le_hi_act(le_hi_act),
    .RAM_start_addr(RAM_start_addr),
    .RAM_end_addr(RAM_end_addr),
    .cs_port(cs_port),
    .boot_rom_en(boot_rom_en),
    .rom_bus_out(rom_bus_out),
    .rom_bus_in(rom_bus_in)
);

wire tmr0_o;
wire tmr1_o;
wire pwm0;
wire pwm1;
wire pwm2;
wire TXD;
wire RXD;
wire tmr0_clk;
wire tmr1_clk;
gpios gpios(
`ifdef USE_POWER_PINS
    .vdd(vdd),
    .vss(vss),
`endif
    .io_in(io_in[34:19]),
    .io_out(io_out[34:19]),
    .io_oeb(io_oeb[34:19]),
    .wb_clk_i(wb_clk_i),
    .rst(reset),
    .addr(bus_addr[3:0]),
    .data_in(bus_data_out),
    .data_out(bus_data_gpios),
    .bus_cyc(bus_cyc),
    .bus_we(bus_we_gpios),
    .irq0(irq0),
    .irq6(irq6),
    .irq7(irq7),
    
    .tmr0_o(tmr0_o),
    .tmr1_o(tmr1_o),
    .pwm0(pwm0),
    .pwm1(pwm1),
    .pwm2(pwm2),
    .tmr0_clk(tmr0_clk),
    .tmr1_clk(tmr1_clk),
    .TXD(TXD),
    .RXD(RXD),
    
    .la_data_out(la_data_out[63:56])
);

timers timers(
`ifdef USE_POWER_PINS
    .vdd(vdd),
    .vss(vss),
`endif
    .wb_clk_i(wb_clk_i),
    .rst(reset),
    .addr(bus_addr),
    .data_in(bus_data_out),
    .data_out(bus_data_timers),
    .bus_cyc(bus_cyc),
    .bus_we(bus_we_timers),
    .irq1(irq1),
    .irq2(irq2),
    .irq5(irq5),
    .tmr0_o(tmr0_o),
    .tmr1_o(tmr1_o),
    .pwm0(pwm0),
    .pwm1(pwm1),
    .pwm2(pwm2),
    .tmr0_clk(tmr0_clk),
    .tmr1_clk(tmr1_clk)
);

serial_ports serial_ports(
`ifdef USE_POWER_PINS
    .vdd(vdd),
    .vss(vss),
`endif
    .wb_clk_i(wb_clk_i),
    .rst(reset),
    .addr(bus_addr[2:0]),
    .data_in(bus_data_out),
    .data_out(bus_data_serial_ports),
    .bus_cyc(bus_cyc),
    .bus_we(bus_we_serial_ports),
    .irq3(irq3),
    .TXD(TXD),
    .RXD(RXD),
    .io_in(io_in[37]),
    .io_out(io_out[37:35]),
    .io_oeb(io_oeb[37:35])
);

boot_rom boot_rom(
`ifdef USE_POWER_PINS
    .vdd(vdd),
    .vss(vss),
`endif
    .wb_clk_i(wb_clk_i),
    .rst(reset),
    .WEb_raw(WEb_raw),
    .le_lo_act(le_lo_act),
    .le_hi_act(le_hi_act),
    .bus_in(rom_bus_out),
    .bus_out(rom_bus_in),
    .rom_enabled(boot_rom_en),
    .ram_start(RAM_start_addr),
    .ram_end(RAM_end_addr),
    .cs_port(cs_port)
);

avali_logo avali_logo (
`ifdef USE_POWER_PINS
    .vdd(vdd),
    .vss(vss)
`endif
);

endmodule	// user_project_wrapper

`default_nettype wire
