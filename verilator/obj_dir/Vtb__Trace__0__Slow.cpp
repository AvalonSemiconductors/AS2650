// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP__0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"wbs_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"wbs_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"wbs_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"wbs_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"wbs_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"wbs_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+508,0,"wbs_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"wbs_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"wbs_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"wbs_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"wbs_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"wbs_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"wbs_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+508,0,"wbs_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1,0,"io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+509,0,"io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+7,0,"io_oeb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+496,0,"ROM_CS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"SCLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"SDO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"SDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"WEb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"IOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"IOC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"bus_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+513,0,"uart_init_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("spiflash", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+523,0,"FILENAME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBit(c+496,0,"csb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"io0",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"io2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io3",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+526,0,"verbose",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+527,0,"latency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+108,0,"buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+514,0,"reset_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+515,0,"reset_monitor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"bitcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+110,0,"bytecount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+111,0,"dummycount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+112,0,"spi_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"xip_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"spi_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+115,0,"spi_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+116,0,"spi_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+117,0,"spi_io_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"powered_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"mode_spi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+529,0,"mode_dspi_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+530,0,"mode_dspi_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+531,0,"mode_qspi_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+532,0,"mode_qspi_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+533,0,"mode_qspi_ddr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+534,0,"mode_qspi_ddr_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"next_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+121,0,"io0_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io1_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"io2_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io3_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"io0_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"io1_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"io2_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"io3_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"io0_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io1_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"io2_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io3_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("uprj", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+535,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+500,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"wbs_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"wbs_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"wbs_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+536,0,"wbs_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+505,0,"wbs_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"wbs_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+507,0,"wbs_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+508,0,"wbs_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+537,0,"la_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"la_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+539,0,"la_oenb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+509,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+7,0,"io_oeb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+500,0,"user_clock2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"user_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+10,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"irq0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"irq1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"irq2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"irq3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"irq5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"irq6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"irq7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"bus_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"bus_data_gpios",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+141,0,"bus_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"bus_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+143,0,"bus_we_gpios",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"bus_data_timers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+145,0,"bus_we_timers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"bus_data_serial_ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+147,0,"bus_we_serial_ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"bus_data_sid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+149,0,"bus_we_sid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"WEb_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"le_lo_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"le_hi_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"RAM_start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+151,0,"RAM_end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+152,0,"cs_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+153,0,"boot_rom_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"rom_bus_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"rom_bus_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"ram_bus_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+156,0,"ram_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"last_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"requested_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+158,0,"tmr0_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"tmr1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"pwm0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"pwm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"pwm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"TXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"RXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"tmr0_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"tmr1_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"DAC_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"DAC_le",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"DAC_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"DAC_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+19,0,"GWEN_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"GWEN_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"GWEN_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"GWEN_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"GWEN_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"GWEN_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"GWEN_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"GWEN_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"Q0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"Q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"Q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"Q3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"Q4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"Q5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"Q6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"Q7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("boot_rom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"last_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"ram_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+151,0,"ram_end",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+152,0,"cs_port",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+177,0,"cs_port_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"rom_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("gpios", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+499,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+178,0,"io_oeb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+500,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+139,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+141,0,"bus_cyc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"bus_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"irq0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"irq6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"irq7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"tmr0_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"tmr1_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"pwm0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"pwm1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"pwm2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"tmr0_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"tmr1_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"TXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"RXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"DAC_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"DAC_le",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"DAC_d1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"DAC_d2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"la_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"DDRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"DDRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"PORTA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+184,0,"PORTB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"SPA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"SPB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+187,0,"last_irq0_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"last_irg6_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"last_irq7_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"irq0_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"irq6_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"irq7_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ram_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"WEb_ram",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"requested_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+512,0,"bus_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+156,0,"ram_enabled",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D_all",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+19,0,"GWEN_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"GWEN_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"GWEN_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"GWEN_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"GWEN_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"GWEN_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"GWEN_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"GWEN_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"Q0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"Q1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"Q2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"Q3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"Q4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"Q5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"Q6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"Q7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+190,0,"requested_addr_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+191,0,"in_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"curr_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("serial_ports", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"TXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"RXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+543,0,"io_oeb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+193,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+139,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+141,0,"bus_cyc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"bus_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"irq3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"uart_ien",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"uart_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"uart_has_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"uart_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+198,0,"spi_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+199,0,"uart_rec_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+200,0,"spi_rec_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+201,0,"spi_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("spi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+198,0,"divisor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+200,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+128,0,"SCLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"data_out_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+205,0,"data_in_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+206,0,"div_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+207,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("uart", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+197,0,"divisor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+139,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+199,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+163,0,"TX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"RX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"has_byte",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"clr_hb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"data_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+211,0,"div_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+212,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+213,0,"receiving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"receive_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"receive_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+216,0,"receive_div_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sid", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"DAC_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"DAC_le",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"DAC_dat_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"DAC_dat_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+139,0,"bus_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+141,0,"bus_cyc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"bus_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"read_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"freq_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+219,0,"pw_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+220,0,"ctrl_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"atk_dec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"sus_rel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"freq_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+224,0,"pw_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+225,0,"ctrl_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+226,0,"atk_dec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+227,0,"sus_rel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"freq_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+229,0,"pw_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+230,0,"ctrl_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"atk_dec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"sus_rel_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"fc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+234,0,"res_filt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"mode_vol",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"sample_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+237,0,"sample_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+238,0,"sample_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+239,0,"ch3_env",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"clk_ctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+241,0,"clk_trg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+242,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"full_sample_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+244,0,"sample_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"full_sample_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("channels", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"freq1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+223,0,"freq2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+228,0,"freq3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+219,0,"pw1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+224,0,"pw2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+229,0,"pw3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+220,0,"ctrl_reg1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+225,0,"ctrl_reg2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"ctrl_reg3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"atk_dec1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+226,0,"atk_dec2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"atk_dec3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"sus_rel1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+227,0,"sus_rel2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"sus_rel3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"clk_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"sample1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+237,0,"sample2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+238,0,"sample3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+239,0,"ch3_env",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("samples", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+246+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ring_outs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+249+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("sync_outs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+252+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+255,0,"curr_freq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+256,0,"curr_pw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+257,0,"curr_ctrl_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"curr_atk_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+259,0,"curr_sus_rel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+260,0,"curr_ring_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"curr_sync_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"square",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"sawtooth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"triangle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"ringm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"gate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"attack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+271,0,"decay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+272,0,"sustain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+273,0,"releas",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("lfsr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+274+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 22,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("accum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+277+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+280,0,"lfsr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"accum_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+282,0,"noise_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+283,0,"pulse_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"saw_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+285,0,"triangle_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+286,0,"osc_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("env_vol", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+287+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("exp_counter", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+290+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("env_counter", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+293+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 14,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("adsr_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+296+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+299,0,"env_vol_curr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("exp_periods", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+300+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+303,0,"exp_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+304,0,"table_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"adsr_table",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+306,0,"mul_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+307,0,"clk_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+308,0,"curr_channel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+309,0,"env_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("filters", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+243,0,"sample_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+236,0,"sample_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+237,0,"sample_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+238,0,"sample_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+233,0,"reg_fc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+234,0,"res_filt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"mode_vol",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"clk_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"sample_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"cutoff_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+311,0,"res_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+312,0,"filt_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"filt_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"filt_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"three_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"hp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"bp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"lp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"vol",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+243,0,"sample_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+320,0,"filt_in_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+321,0,"filt_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+322,0,"high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"band",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"filter_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+326,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"temp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"band_low_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"temp4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"high_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"sample_filtered",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"sample_filtered_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"sample_filtered_adj",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"sample_buff_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->pushPrefix("spi_dac_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+335,0,"sample_in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+245,0,"sample_in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"spi_le",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"spi_dat_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"spi_dat_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"sample_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"spi_dat_buff_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+337,0,"spi_dat_buff_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+338,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("tt_um_rejunity_sn76489", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"CHANNEL_OUTPUT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"MASTER_OUTPUT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+546,0,"SPI_MASTER_OUTPUT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+339,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"spi_master",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+242,0,"clk_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"NUM_TONES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+548,0,"NUM_NOISES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"ATTENUATION_CONTROL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"FREQUENCY_COUNTER_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+547,0,"NOISE_CONTROL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"clk_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+341,0,"clk_master_strobe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+549,0,"NUM_CHANNELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("control_attn", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+342+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("control_tone_freq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+346+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("control_noise", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+349+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+350,0,"latch_control_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+351,0,"restart_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("channels", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+352+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("volumes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+356+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("chan[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("attenuation", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+549,0,"CONTROL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"VOLUME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+360,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+362,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declDouble(c+550,0,"MAX_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("chan[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("attenuation", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+549,0,"CONTROL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"VOLUME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+363,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+365,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declDouble(c+550,0,"MAX_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("chan[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("attenuation", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+549,0,"CONTROL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"VOLUME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+366,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+367,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+368,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declDouble(c+550,0,"MAX_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("chan[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("attenuation", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+549,0,"CONTROL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"VOLUME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+369,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+371,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declDouble(c+550,0,"MAX_VOLUME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("noise[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+552,0,"LFSR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,0,"LFSR_TAP0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+548,0,"LFSR_TAP1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"COUNTER_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"restart_noise",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+372,0,"control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+366,0,"driven_by_tone",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"SHIFT_RATE_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"SHIFT_RATE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+554,0,"SHIFT_RATE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+554,0,"SHIFT_RATE_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"is_white_noise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+376,0,"trigger_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"reset_lfsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"lfsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->pushPrefix("signal_edge", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"on_posedge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"on_negedge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"on_edge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"previous_signal_state_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"previous_signal_state_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tone[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"COUNTER_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+360,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+383,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+360,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tone[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"COUNTER_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+363,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+363,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tone[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"COUNTER_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+366,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+366,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("sram512x8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+555,0,"VDD",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"VSS",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("sram512x8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+555,0,"VDD",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"VSS",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("sram512x8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+555,0,"VDD",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"VSS",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("sram512x8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+555,0,"VDD",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"VSS",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("sram512x8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+555,0,"VDD",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"VSS",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("sram512x8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+555,0,"VDD",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"VSS",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("sram512x8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+555,0,"VDD",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"VSS",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sram7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("sram512x8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"CEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"GWEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+512,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+555,0,"VDD",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"VSS",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("timers", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+139,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+141,0,"bus_cyc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"bus_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"irq1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"irq2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"irq5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"tmr0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"tmr1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"pwm0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"pwm1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"pwm2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"tmr0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"tmr1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"settings",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+389,0,"tmr0_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"tmr1_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"last_tmr0_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"last_tmr1_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+393,0,"timer0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+394,0,"timer1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+395,0,"timer2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+396,0,"t0_capture",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+397,0,"t1_capture",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+398,0,"t2_capture",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+399,0,"t0pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+400,0,"t1pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+401,0,"t2pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+402,0,"t0pre_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+403,0,"t1pre_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+404,0,"t2pre_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+405,0,"t0_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+406,0,"t1_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+407,0,"t2_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+408,0,"pwm_ctr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+409,0,"pwm_ctr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+410,0,"pwm_ctr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+411,0,"pw0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+412,0,"pw1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+413,0,"pw2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+414,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("wrapped_as2650", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+521,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+31,0,"io_oeb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+500,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"wbs_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"wbs_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"wbs_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+504,0,"wbs_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"wbs_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"wbs_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"wbs_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+415,0,"la_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+417,0,"irqs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+139,0,"bus_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+141,0,"bus_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"bus_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+143,0,"bus_we_gpios",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"bus_in_gpios",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+145,0,"bus_we_timers",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"bus_in_timers",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+147,0,"bus_we_serial_ports",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"bus_in_serial_ports",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+149,0,"bus_we_sid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"bus_in_sid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+541,0,"irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+10,0,"reset_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"WEb_ram",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"le_lo_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"le_hi_act",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"RAM_start_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+151,0,"RAM_end_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+152,0,"cs_port",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+153,0,"boot_rom_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"rom_bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"rom_bus_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"ram_bus_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+156,0,"ram_enabled",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"last_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"requested_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+418,0,"wb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"wb_feedback_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"wbs_o_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"wb_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+522,0,"wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"wb_debug_cc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"wb_debug_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"web_behavior",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+425,0,"wb_reset_override_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"wb_reset_override",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"wb_io3_test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"wb_io3_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"wb_hidden_rom_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"le_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"le_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"OEb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"WEb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"bus_dir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"bus_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+430,0,"debug_psu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+431,0,"debug_psl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+129,0,"flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"IOC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"IOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"cpu_hidden_rom_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"the_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"full_io_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+436,0,"io_bus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"device_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"bus_in_plexed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+439,0,"in_ram_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"bus_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("as2650", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"bus_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+512,0,"bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"le_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"le_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"OEb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"WEb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"bus_dir",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"IOC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"IOD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"irqs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+129,0,"flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"sense",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"ext_io_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+141,0,"io_bus_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"io_bus_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"io_bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"io_bus_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+431,0,"debug_psl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+430,0,"debug_psu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+440,0,"la_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+429,0,"wb_hidden_rom_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"cpu_hidden_rom_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"le_lo_act_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"le_hi_act_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"last_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"requested_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+11,0,"WEb_ram",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"irqs_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+444,0,"irq_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+445+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+430,0,"psu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+431,0,"psl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("stack", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+453+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+469,0,"TOS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+470,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+471,0,"page_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+472,0,"ivectors_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+157,0,"last_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+473,0,"cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+474,0,"insin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+475,0,"instruction_args_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+476,0,"extend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+477,0,"warmup",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+478,0,"halted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"indirect_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+480,0,"indexed_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+481,0,"indirect_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+482,0,"relative_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+526,0,"FETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+548,0,"PARAM1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"PARAM2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+547,0,"DATA1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"IO1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+557,0,"IO2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+558,0,"INVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"HALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"EXT_IO1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"EXT_IO2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"EXT_IO3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"EXT_IO4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+546,0,"INTERRUPT_ACTION1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"reg_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"reg_minus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+483,0,"index_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+484,0,"is_data_fetch_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"is_interrupt_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"is_instr_fetch_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"le_lo_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"le_hi_act",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"requested_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+43,0,"write_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"IO_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"is_RETURN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"is_DAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"is_CLR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_EXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_HALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_XCHG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_ZBR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"is_BXA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_LPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_SPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"needs_param",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"needs_2_param",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"is_indexed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"is_indirect_pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"is_indirect_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"is_indirect_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"is_COM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_ALU_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"is_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"is_zero_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_relative",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_PUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"is_POP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_TPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_CPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"is_PPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"is_RRR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_RRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"is_TMI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"is_IO_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"is_IO_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"is_CPL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"is_PSHS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"is_POPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"is_SVB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"is_CHRP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"is_EXT_IO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"is_TRAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"is_CLRT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"is_LIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"is_SIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"instr_reg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"instr_reg_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"relative_eff_address_pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+92,0,"relative_eff_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+93,0,"is_CC_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"is_REG_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"is_BRANCH_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"branch_compare_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+97,0,"should_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"zbr_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+488,0,"r0_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+489,0,"r1_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+490,0,"r2_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+491,0,"r3_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+492,0,"mul_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+99,0,"rrr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"rrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+493,0,"indexed_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"alu_instr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+102,0,"alu_input1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"alu_input2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"alu_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+106,0,"next_idc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"next_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"chirp_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+495,0,"chirpchar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_const_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x2f70676dU;
    __Vtemp_1[2U] = 0x2e2eU;
    bufp->fullWData(oldp+523,(__Vtemp_1),80);
    bufp->fullIData(oldp+526,(0U),32);
    bufp->fullIData(oldp+527,(8U),32);
    bufp->fullCData(oldp+528,(1U),4);
    bufp->fullCData(oldp+529,(2U),4);
    bufp->fullCData(oldp+530,(3U),4);
    bufp->fullCData(oldp+531,(4U),4);
    bufp->fullCData(oldp+532,(5U),4);
    bufp->fullCData(oldp+533,(6U),4);
    bufp->fullCData(oldp+534,(7U),4);
    bufp->fullIData(oldp+535,(0x20U),32);
    bufp->fullCData(oldp+536,(0U),4);
    bufp->fullQData(oldp+537,(0ULL),64);
    bufp->fullQData(oldp+539,(0xffffffffffffffffULL),64);
    bufp->fullCData(oldp+541,(0U),3);
    bufp->fullCData(oldp+542,(0U),8);
    bufp->fullCData(oldp+543,(4U),3);
    bufp->fullIData(oldp+544,(0xaU),32);
    bufp->fullIData(oldp+545,(8U),32);
    bufp->fullIData(oldp+546,(0xcU),32);
    bufp->fullIData(oldp+547,(3U),32);
    bufp->fullIData(oldp+548,(1U),32);
    bufp->fullIData(oldp+549,(4U),32);
    bufp->fullDouble(oldp+550,(1.02300000000000000e+03));
    bufp->fullIData(oldp+552,(0xfU),32);
    bufp->fullIData(oldp+553,(0x10U),32);
    bufp->fullIData(oldp+554,(0x40U),32);
    bufp->fullBit(oldp+555,(0U));
    bufp->fullIData(oldp+556,(2U),32);
    bufp->fullIData(oldp+557,(5U),32);
    bufp->fullIData(oldp+558,(6U),32);
    bufp->fullIData(oldp+559,(7U),32);
    bufp->fullIData(oldp+560,(9U),32);
    bufp->fullIData(oldp+561,(0xbU),32);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->tb__DOT__io_in),38);
    bufp->fullSData(oldp+3,((0xffffU & (IData)((vlSelf->tb__DOT__io_in 
                                                >> 0x13U)))),16);
    bufp->fullBit(oldp+4,((1U & (IData)((vlSelf->tb__DOT__io_in 
                                         >> 0x25U)))));
    bufp->fullIData(oldp+5,((0x7ffffU & (IData)(vlSelf->tb__DOT__io_in))),19);
    bufp->fullBit(oldp+6,((1U & (IData)((vlSelf->tb__DOT__io_in 
                                         >> 4U)))));
    bufp->fullQData(oldp+7,((0x2000000000ULL | (((QData)((IData)(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__io_oeb)) 
                                                 << 0x13U) 
                                                | (QData)((IData)(
                                                                  (0x11U 
                                                                   | ((0x1fe0U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb)) 
                                                                                | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_lo_act) 
                                                                                | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_hi_act) 
                                                                                | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0))))) 
                                                                                | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset))))) 
                                                                          << 5U)) 
                                                                      | (8U 
                                                                         & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test)) 
                                                                            << 3U))))))))),38);
    bufp->fullBit(oldp+9,(vlSelf->tb__DOT__WEb));
    bufp->fullBit(oldp+10,(vlSelf->tb__DOT__uprj__DOT__reset));
    bufp->fullBit(oldp+11,((1U & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc)) 
                                  | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset) 
                                     | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2f264c6e__0))))));
    bufp->fullBit(oldp+12,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_lo_act));
    bufp->fullBit(oldp+13,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_hi_act));
    bufp->fullSData(oldp+14,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__requested_addr),16);
    bufp->fullBit(oldp+15,(vlSelf->tb__DOT__uprj__DOT__RXD));
    bufp->fullBit(oldp+16,(vlSelf->tb__DOT__uprj__DOT__tmr0_clk));
    bufp->fullBit(oldp+17,(vlSelf->tb__DOT__uprj__DOT__tmr1_clk));
    bufp->fullSData(oldp+18,((0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__requested_addr) 
                                        >> 3U))),9);
    bufp->fullBit(oldp+19,((1U & (~ ((0U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
    bufp->fullBit(oldp+20,((1U & (~ ((1U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
    bufp->fullBit(oldp+21,((1U & (~ ((2U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
    bufp->fullBit(oldp+22,((1U & (~ ((3U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
    bufp->fullBit(oldp+23,((1U & (~ ((4U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
    bufp->fullBit(oldp+24,((1U & (~ ((5U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
    bufp->fullBit(oldp+25,((1U & (~ ((6U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
    bufp->fullBit(oldp+26,((1U & (~ ((7U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
    bufp->fullBit(oldp+27,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq0_trigger));
    bufp->fullBit(oldp+28,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq6_trigger));
    bufp->fullBit(oldp+29,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq7_trigger));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->tb__DOT__uprj__DOT__reset) 
                            | (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__restart_noise))));
    bufp->fullIData(oldp+31,((0x11U | ((0x1fe0U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((~ 
                                                                   ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb)) 
                                                                    | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_lo_act) 
                                                                       | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_hi_act) 
                                                                          | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0))))) 
                                                                  | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset))))) 
                                                   << 5U)) 
                                       | (8U & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test)) 
                                                << 3U))))),19);
    bufp->fullBit(oldp+32,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_lo_act) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_ha339f3e7__0))));
    bufp->fullBit(oldp+33,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_hi_act) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_ha339f3e7__0))));
    bufp->fullBit(oldp+34,((1U & ((~ (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h0482dd45__0) 
                                       & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                                          == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__requested_addr))) 
                                      | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc) 
                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_READ)))) 
                                  | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset) 
                                     | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc))))));
    bufp->fullBit(oldp+35,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb));
    bufp->fullBit(oldp+36,((1U & ((~ ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb)) 
                                      | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_lo_act) 
                                         | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_hi_act) 
                                            | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0))))) 
                                  | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset)))));
    bufp->fullCData(oldp+37,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in),8);
    bufp->fullBit(oldp+38,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset));
    bufp->fullCData(oldp+39,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction),8);
    bufp->fullCData(oldp+40,((0xffU & ((IData)(1U) 
                                       + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index)))),8);
    bufp->fullCData(oldp+41,((0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                       - (IData)(1U)))),8);
    bufp->fullCData(oldp+42,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index),8);
    bufp->fullBit(oldp+43,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc));
    bufp->fullBit(oldp+44,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RETURN));
    bufp->fullBit(oldp+45,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_DAR));
    bufp->fullBit(oldp+46,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLR));
    bufp->fullBit(oldp+47,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT));
    bufp->fullBit(oldp+48,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_HALT));
    bufp->fullBit(oldp+49,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_NOP));
    bufp->fullBit(oldp+50,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0x91U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))));
    bufp->fullBit(oldp+51,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0x90U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))));
    bufp->fullBit(oldp+52,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ZBR));
    bufp->fullBit(oldp+53,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BXA));
    bufp->fullBit(oldp+54,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0x92U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
    bufp->fullBit(oldp+55,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0x12U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
    bufp->fullBit(oldp+56,((3U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                         >> 3U)))));
    bufp->fullBit(oldp+57,((((1U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                           >> 2U))) 
                             | (2U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                             >> 2U)))) 
                            & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RETURN)) 
                               & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_DAR)) 
                                  & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLR)) 
                                     & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT)) 
                                        & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)))))))));
    bufp->fullBit(oldp+58,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_2_param));
    bufp->fullBit(oldp+59,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indexed));
    bufp->fullBit(oldp+60,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre));
    bufp->fullBit(oldp+61,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_p1));
    bufp->fullBit(oldp+62,((((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch) 
                             >> 0xfU) & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre))));
    bufp->fullBit(oldp+63,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_store));
    bufp->fullBit(oldp+64,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_COM));
    bufp->fullBit(oldp+65,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ALU_op));
    bufp->fullBit(oldp+66,((1U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                         >> 2U)))));
    bufp->fullBit(oldp+67,((0U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                         >> 2U)))));
    bufp->fullBit(oldp+68,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_add_sub));
    bufp->fullBit(oldp+69,((2U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                         >> 2U)))));
    bufp->fullBit(oldp+70,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0x10U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))));
    bufp->fullBit(oldp+71,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0x11U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))));
    bufp->fullBit(oldp+72,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0xb4U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
    bufp->fullBit(oldp+73,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0x74U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
    bufp->fullBit(oldp+74,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0x76U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
    bufp->fullBit(oldp+75,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0x50U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
    bufp->fullBit(oldp+76,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0xd0U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
    bufp->fullBit(oldp+77,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                            & (0xf4U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
    bufp->fullBit(oldp+78,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_READ));
    bufp->fullBit(oldp+79,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE));
    bufp->fullBit(oldp+80,((IData)(((0xe0U == (0xfcU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)))));
    bufp->fullBit(oldp+81,(((0x10U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    bufp->fullBit(oldp+82,(((0x11U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    bufp->fullBit(oldp+83,(((0x12U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    bufp->fullBit(oldp+84,(((0x13U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    bufp->fullBit(oldp+85,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT_IO));
    bufp->fullBit(oldp+86,(((0x90U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    bufp->fullBit(oldp+87,(((0x91U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    bufp->fullBit(oldp+88,(((0x92U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    bufp->fullBit(oldp+89,(((0x93U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    bufp->fullCData(oldp+90,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a),3);
    bufp->fullSData(oldp+91,((0x1fffU & ((IData)(1U) 
                                         + ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC) 
                                            + ((0x1000U 
                                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in) 
                                                   << 6U)) 
                                               | ((0x800U 
                                                   & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in) 
                                                      << 5U)) 
                                                  | ((0x400U 
                                                      & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in) 
                                                         << 4U)) 
                                                     | ((0x200U 
                                                         & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in) 
                                                            << 3U)) 
                                                        | ((0x100U 
                                                            & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in) 
                                                               << 2U)) 
                                                           | ((0x80U 
                                                               & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in) 
                                                                  << 1U)) 
                                                              | (0x7fU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in)))))))))))),13);
    bufp->fullSData(oldp+92,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_eff_address),16);
    bufp->fullBit(oldp+93,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH));
    bufp->fullBit(oldp+94,((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH)))));
    bufp->fullBit(oldp+95,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BRANCH_SUB));
    bufp->fullCData(oldp+96,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg),8);
    bufp->fullBit(oldp+97,((((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH) 
                             & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                 >> 7U) & ((3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                  >> 6U)) 
                                           != (3U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))) 
                            | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0) 
                                & (3U == (3U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))) 
                               | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0) 
                                   & ((3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                             >> 6U)) 
                                      == (3U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))) 
                                  | (((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH)) 
                                      & (0U != (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg))) 
                                     | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ZBR) 
                                        | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BXA))))))));
    bufp->fullSData(oldp+98,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__zbr_target),16);
    bufp->fullCData(oldp+99,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrr),8);
    bufp->fullCData(oldp+100,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrl),8);
    bufp->fullCData(oldp+101,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg),8);
    bufp->fullCData(oldp+102,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1),8);
    bufp->fullCData(oldp+103,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2),8);
    bufp->fullCData(oldp+104,((7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                     >> 5U))),3);
    bufp->fullSData(oldp+105,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next),9);
    bufp->fullBit(oldp+106,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_idc));
    bufp->fullBit(oldp+107,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_ovf));
    bufp->fullCData(oldp+108,(vlSelf->tb__DOT__spiflash__DOT__buffer),8);
    bufp->fullIData(oldp+109,(vlSelf->tb__DOT__spiflash__DOT__bitcount),32);
    bufp->fullIData(oldp+110,(vlSelf->tb__DOT__spiflash__DOT__bytecount),32);
    bufp->fullIData(oldp+111,(vlSelf->tb__DOT__spiflash__DOT__dummycount),32);
    bufp->fullCData(oldp+112,(vlSelf->tb__DOT__spiflash__DOT__spi_cmd),8);
    bufp->fullCData(oldp+113,(vlSelf->tb__DOT__spiflash__DOT__xip_cmd),8);
    bufp->fullIData(oldp+114,(vlSelf->tb__DOT__spiflash__DOT__spi_addr),24);
    bufp->fullCData(oldp+115,(vlSelf->tb__DOT__spiflash__DOT__spi_in),8);
    bufp->fullCData(oldp+116,(vlSelf->tb__DOT__spiflash__DOT__spi_out),8);
    bufp->fullBit(oldp+117,(vlSelf->tb__DOT__spiflash__DOT__spi_io_vld));
    bufp->fullBit(oldp+118,(vlSelf->tb__DOT__spiflash__DOT__powered_up));
    bufp->fullCData(oldp+119,(vlSelf->tb__DOT__spiflash__DOT__mode),4);
    bufp->fullCData(oldp+120,(vlSelf->tb__DOT__spiflash__DOT__next_mode),4);
    bufp->fullBit(oldp+121,(vlSelf->tb__DOT__spiflash__DOT__io0_oe));
    bufp->fullBit(oldp+122,(vlSelf->tb__DOT__spiflash__DOT__io1_oe));
    bufp->fullBit(oldp+123,(vlSelf->tb__DOT__spiflash__DOT__io2_oe));
    bufp->fullBit(oldp+124,(vlSelf->tb__DOT__spiflash__DOT__io3_oe));
    bufp->fullBit(oldp+125,(vlSelf->tb__DOT__SDI));
    bufp->fullBit(oldp+126,(vlSelf->tb__DOT____Vtriunconn2));
    bufp->fullBit(oldp+127,(vlSelf->tb__DOT____Vtriunconn4));
    bufp->fullBit(oldp+128,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK));
    bufp->fullBit(oldp+129,(vlSelf->tb__DOT__flag));
    bufp->fullQData(oldp+130,((0xfe01fe00000000ULL 
                               | (((QData)((IData)(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__la_data_out)) 
                                   << 0x38U) | (((QData)((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__halted)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                                    [
                                                                    (3U 
                                                                     | (4U 
                                                                        & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                                           >> 2U)))] 
                                                                    << 0x18U) 
                                                                   | ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                                       [
                                                                       (2U 
                                                                        | (4U 
                                                                           & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                                              >> 2U)))] 
                                                                       << 0x10U) 
                                                                      | ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                                          [
                                                                          (1U 
                                                                           | (4U 
                                                                              & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                                                >> 2U)))] 
                                                                          << 8U) 
                                                                         | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc49c8b73__0)))))))))),64);
    bufp->fullBit(oldp+132,(vlSelf->tb__DOT__uprj__DOT__irq0));
    bufp->fullBit(oldp+133,(vlSelf->tb__DOT__uprj__DOT__irq1));
    bufp->fullBit(oldp+134,(vlSelf->tb__DOT__uprj__DOT__irq2));
    bufp->fullBit(oldp+135,(vlSelf->tb__DOT__uprj__DOT__irq3));
    bufp->fullBit(oldp+136,(vlSelf->tb__DOT__uprj__DOT__irq5));
    bufp->fullBit(oldp+137,(vlSelf->tb__DOT__uprj__DOT__irq6));
    bufp->fullBit(oldp+138,(vlSelf->tb__DOT__uprj__DOT__irq7));
    bufp->fullCData(oldp+139,(vlSelf->tb__DOT__uprj__DOT__bus_data_out),8);
    bufp->fullCData(oldp+140,(vlSelf->tb__DOT__uprj__DOT__bus_data_gpios),8);
    bufp->fullBit(oldp+141,(vlSelf->tb__DOT__uprj__DOT__bus_cyc));
    bufp->fullCData(oldp+142,((0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))),6);
    bufp->fullBit(oldp+143,(vlSelf->tb__DOT__uprj__DOT__bus_we_gpios));
    bufp->fullCData(oldp+144,(vlSelf->tb__DOT__uprj__DOT__bus_data_timers),8);
    bufp->fullBit(oldp+145,(vlSelf->tb__DOT__uprj__DOT__bus_we_timers));
    bufp->fullCData(oldp+146,(vlSelf->tb__DOT__uprj__DOT__bus_data_serial_ports),8);
    bufp->fullBit(oldp+147,(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports));
    bufp->fullCData(oldp+148,(vlSelf->tb__DOT__uprj__DOT__bus_data_sid),8);
    bufp->fullBit(oldp+149,(vlSelf->tb__DOT__uprj__DOT__bus_we_sid));
    bufp->fullSData(oldp+150,(vlSelf->tb__DOT__uprj__DOT__RAM_start_addr),16);
    bufp->fullSData(oldp+151,(vlSelf->tb__DOT__uprj__DOT__RAM_end_addr),16);
    bufp->fullCData(oldp+152,(vlSelf->tb__DOT__uprj__DOT__cs_port),3);
    bufp->fullBit(oldp+153,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__cpu_hidden_rom_enable) 
                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable))));
    bufp->fullCData(oldp+154,(vlSelf->tb__DOT__uprj__DOT__boot_rom__DOT__rom_data),8);
    bufp->fullCData(oldp+155,(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__curr_Q),8);
    bufp->fullBit(oldp+156,(vlSelf->tb__DOT__uprj__DOT__ram_enabled));
    bufp->fullSData(oldp+157,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr),16);
    bufp->fullBit(oldp+158,(vlSelf->tb__DOT__uprj__DOT__tmr0_o));
    bufp->fullBit(oldp+159,(vlSelf->tb__DOT__uprj__DOT__tmr1_o));
    bufp->fullBit(oldp+160,(vlSelf->tb__DOT__uprj__DOT__pwm0));
    bufp->fullBit(oldp+161,(vlSelf->tb__DOT__uprj__DOT__pwm1));
    bufp->fullBit(oldp+162,(vlSelf->tb__DOT__uprj__DOT__pwm2));
    bufp->fullBit(oldp+163,(vlSelf->tb__DOT__uprj__DOT__TXD));
    bufp->fullBit(oldp+164,(vlSelf->tb__DOT__uprj__DOT__DAC_clk));
    bufp->fullBit(oldp+165,(vlSelf->tb__DOT__uprj__DOT__DAC_le));
    bufp->fullBit(oldp+166,(vlSelf->tb__DOT__uprj__DOT__DAC_d1));
    bufp->fullBit(oldp+167,(vlSelf->tb__DOT__uprj__DOT__DAC_d2));
    bufp->fullCData(oldp+168,(vlSelf->tb__DOT__uprj__DOT__Q0),8);
    bufp->fullCData(oldp+169,(vlSelf->tb__DOT__uprj__DOT__Q1),8);
    bufp->fullCData(oldp+170,(vlSelf->tb__DOT__uprj__DOT__Q2),8);
    bufp->fullCData(oldp+171,(vlSelf->tb__DOT__uprj__DOT__Q3),8);
    bufp->fullCData(oldp+172,(vlSelf->tb__DOT__uprj__DOT__Q4),8);
    bufp->fullCData(oldp+173,(vlSelf->tb__DOT__uprj__DOT__Q5),8);
    bufp->fullCData(oldp+174,(vlSelf->tb__DOT__uprj__DOT__Q6),8);
    bufp->fullCData(oldp+175,(vlSelf->tb__DOT__uprj__DOT__Q7),8);
    bufp->fullCData(oldp+176,((0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))),8);
    bufp->fullCData(oldp+177,(vlSelf->tb__DOT__uprj__DOT__boot_rom__DOT__cs_port_bit),8);
    bufp->fullSData(oldp+178,(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__io_oeb),16);
    bufp->fullCData(oldp+179,((0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))),4);
    bufp->fullCData(oldp+180,(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__la_data_out),8);
    bufp->fullCData(oldp+181,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRA),8);
    bufp->fullCData(oldp+182,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRB),8);
    bufp->fullCData(oldp+183,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTA),8);
    bufp->fullCData(oldp+184,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTB),8);
    bufp->fullCData(oldp+185,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA),8);
    bufp->fullCData(oldp+186,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB),8);
    bufp->fullBit(oldp+187,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq0_trigger));
    bufp->fullBit(oldp+188,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irg6_trigger));
    bufp->fullBit(oldp+189,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq7_trigger));
    bufp->fullSData(oldp+190,(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch),16);
    bufp->fullBit(oldp+191,((0x1000U > (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))));
    bufp->fullCData(oldp+192,((((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO) 
                                << 1U) | (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK))),3);
    bufp->fullCData(oldp+193,((7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))),3);
    bufp->fullBit(oldp+194,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_ien));
    bufp->fullBit(oldp+195,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy));
    bufp->fullBit(oldp+196,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_has_byte));
    bufp->fullSData(oldp+197,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div),16);
    bufp->fullCData(oldp+198,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_div),8);
    bufp->fullCData(oldp+199,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_rec_byte),8);
    bufp->fullCData(oldp+200,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_rec_byte),8);
    bufp->fullBit(oldp+201,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_busy));
    bufp->fullBit(oldp+202,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO));
    bufp->fullBit(oldp+203,(((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
                             & ((5U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_busy)) 
                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports))))));
    bufp->fullCData(oldp+204,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff),8);
    bufp->fullCData(oldp+205,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff),8);
    bufp->fullCData(oldp+206,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter),8);
    bufp->fullCData(oldp+207,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter),5);
    bufp->fullBit(oldp+208,(((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
                             & ((3U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy)) 
                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports))))));
    bufp->fullBit(oldp+209,(((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
                             & ((0U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports) 
                                   & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                      >> 1U))))));
    bufp->fullSData(oldp+210,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff),10);
    bufp->fullSData(oldp+211,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter),16);
    bufp->fullCData(oldp+212,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter),4);
    bufp->fullBit(oldp+213,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving));
    bufp->fullCData(oldp+214,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff),8);
    bufp->fullCData(oldp+215,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter),4);
    bufp->fullSData(oldp+216,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter),16);
    bufp->fullCData(oldp+217,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__read_res),8);
    bufp->fullSData(oldp+218,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1),16);
    bufp->fullSData(oldp+219,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1),12);
    bufp->fullCData(oldp+220,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_1),8);
    bufp->fullCData(oldp+221,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_1),8);
    bufp->fullCData(oldp+222,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_1),8);
    bufp->fullSData(oldp+223,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2),16);
    bufp->fullSData(oldp+224,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2),12);
    bufp->fullCData(oldp+225,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_2),8);
    bufp->fullCData(oldp+226,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_2),8);
    bufp->fullCData(oldp+227,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_2),8);
    bufp->fullSData(oldp+228,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3),16);
    bufp->fullSData(oldp+229,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3),12);
    bufp->fullCData(oldp+230,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_3),8);
    bufp->fullCData(oldp+231,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_3),8);
    bufp->fullCData(oldp+232,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_3),8);
    bufp->fullSData(oldp+233,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc),11);
    bufp->fullCData(oldp+234,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt),8);
    bufp->fullCData(oldp+235,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol),8);
    bufp->fullSData(oldp+236,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                              [0U]),12);
    bufp->fullSData(oldp+237,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                              [1U]),12);
    bufp->fullSData(oldp+238,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                              [2U]),12);
    bufp->fullCData(oldp+239,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                              [2U]),8);
    bufp->fullCData(oldp+240,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_ctr),2);
    bufp->fullCData(oldp+241,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg),2);
    bufp->fullBit(oldp+242,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__enable));
    bufp->fullSData(oldp+243,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff),15);
    bufp->fullBit(oldp+244,((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))));
    bufp->fullSData(oldp+245,((0xfffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__0__KET____DOT__attenuation__out) 
                                         + ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__1__KET____DOT__attenuation__out) 
                                            + ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__2__KET____DOT__attenuation__out) 
                                               + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__3__KET____DOT__attenuation__out)))))),12);
    bufp->fullSData(oldp+246,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[0]),12);
    bufp->fullSData(oldp+247,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[1]),12);
    bufp->fullSData(oldp+248,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[2]),12);
    bufp->fullBit(oldp+249,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[0]));
    bufp->fullBit(oldp+250,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[1]));
    bufp->fullBit(oldp+251,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[2]));
    bufp->fullBit(oldp+252,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[0]));
    bufp->fullBit(oldp+253,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[1]));
    bufp->fullBit(oldp+254,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[2]));
    bufp->fullSData(oldp+255,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq),16);
    bufp->fullSData(oldp+256,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw),12);
    bufp->fullCData(oldp+257,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg),8);
    bufp->fullCData(oldp+258,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec),8);
    bufp->fullCData(oldp+259,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel),8);
    bufp->fullBit(oldp+260,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in));
    bufp->fullBit(oldp+261,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sync_in));
    bufp->fullBit(oldp+262,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                   >> 7U))));
    bufp->fullBit(oldp+263,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                   >> 6U))));
    bufp->fullBit(oldp+264,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                   >> 5U))));
    bufp->fullBit(oldp+265,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                   >> 4U))));
    bufp->fullBit(oldp+266,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                   >> 3U))));
    bufp->fullBit(oldp+267,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                   >> 2U))));
    bufp->fullBit(oldp+268,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                   >> 1U))));
    bufp->fullBit(oldp+269,((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))));
    bufp->fullCData(oldp+270,((0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+271,((0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec))),4);
    bufp->fullCData(oldp+272,((0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+273,((0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel))),4);
    bufp->fullIData(oldp+274,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[0]),23);
    bufp->fullIData(oldp+275,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[1]),23);
    bufp->fullIData(oldp+276,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[2]),23);
    bufp->fullIData(oldp+277,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[0]),24);
    bufp->fullIData(oldp+278,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[1]),24);
    bufp->fullIData(oldp+279,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[2]),24);
    bufp->fullBit(oldp+280,((1U & (((vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                     >> 0x16U) ^ (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                  >> 0x11U)) 
                                   | ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                      >> 3U)))));
    bufp->fullIData(oldp+281,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum_next),24);
    bufp->fullCData(oldp+282,(((0x80U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                         >> 0xdU)) 
                               | ((0x40U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                            >> 0xcU)) 
                                  | ((0x20U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                               >> 9U)) 
                                     | ((0x10U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                  >> 7U)) 
                                        | ((8U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                  >> 6U)) 
                                           | ((4U & 
                                               (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                >> 3U)) 
                                              | ((2U 
                                                  & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0))))))))),8);
    bufp->fullBit(oldp+283,(((0xfffU & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                        >> 0xcU)) >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw))));
    bufp->fullSData(oldp+284,((0xfffU & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                         >> 0xcU))),12);
    bufp->fullSData(oldp+285,((0xfffU & ((0xffeU & 
                                          (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                           >> 0xbU)) 
                                         ^ ((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                           >> 0x17U)))) 
                                            ^ (- (IData)(
                                                         (((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                                           >> 2U) 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in)))))))),12);
    bufp->fullSData(oldp+286,((((0x40U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                 ? (- (IData)(((0xfffU 
                                                & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                   >> 0xcU)) 
                                               >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw))))
                                 : 0xfffU) & (((0x20U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                                ? (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                   >> 0xcU)
                                                : 0xfffU) 
                                              & (((0x10U 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                                   ? 
                                                  ((0xffeU 
                                                    & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                       >> 0xbU)) 
                                                   ^ 
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                                   >> 0x17U)))) 
                                                    ^ 
                                                    (- (IData)(
                                                               (((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                                                 >> 2U) 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in))))))
                                                   : 0xfffU) 
                                                 & ((0x80U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                                     ? 
                                                    ((0x800U 
                                                      & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                         >> 9U)) 
                                                     | ((0x400U 
                                                         & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                            >> 8U)) 
                                                        | ((0x200U 
                                                            & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                               >> 5U)) 
                                                           | ((0x100U 
                                                               & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                  >> 3U)) 
                                                              | ((0x80U 
                                                                  & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                     >> 2U)) 
                                                                 | ((0x40U 
                                                                     & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                        << 1U)) 
                                                                    | ((0x20U 
                                                                        & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                           << 3U)) 
                                                                       | (0x10U 
                                                                          & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                             << 4U)))))))))
                                                     : 0xfffU))))),12);
    bufp->fullCData(oldp+287,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[0]),8);
    bufp->fullCData(oldp+288,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[1]),8);
    bufp->fullCData(oldp+289,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[2]),8);
    bufp->fullCData(oldp+290,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[0]),5);
    bufp->fullCData(oldp+291,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[1]),5);
    bufp->fullCData(oldp+292,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[2]),5);
    bufp->fullSData(oldp+293,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[0]),15);
    bufp->fullSData(oldp+294,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[1]),15);
    bufp->fullSData(oldp+295,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[2]),15);
    bufp->fullCData(oldp+296,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[0]),2);
    bufp->fullCData(oldp+297,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[1]),2);
    bufp->fullCData(oldp+298,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[2]),2);
    bufp->fullCData(oldp+299,(((2U >= (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                             >> 1U)))
                                ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                               [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                       >> 1U))] : 0U)),8);
    bufp->fullCData(oldp+300,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[0]),5);
    bufp->fullCData(oldp+301,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[1]),5);
    bufp->fullCData(oldp+302,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[2]),5);
    bufp->fullCData(oldp+303,(((2U >= (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                             >> 1U)))
                                ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods
                               [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                       >> 1U))] : 0U)),5);
    bufp->fullCData(oldp+304,((0xfU & ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0))
                                        ? ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec) 
                                           >> 4U) : 
                                       ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0))
                                         ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec)
                                         : (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel))))),4);
    bufp->fullSData(oldp+305,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_table),15);
    bufp->fullIData(oldp+306,((0xfffffU & ((((0x40U 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                              ? (- (IData)(
                                                           ((0xfffU 
                                                             & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                                >> 0xcU)) 
                                                            >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw))))
                                              : 0xfffU) 
                                            & (((0x20U 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                                 ? 
                                                (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                 >> 0xcU)
                                                 : 0xfffU) 
                                               & (((0x10U 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                                    ? 
                                                   ((0xffeU 
                                                     & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    ((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                                    >> 0x17U)))) 
                                                     ^ 
                                                     (- (IData)(
                                                                (((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                                                  >> 2U) 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in))))))
                                                    : 0xfffU) 
                                                  & ((0x80U 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                                      ? 
                                                     ((0x800U 
                                                       & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                          >> 9U)) 
                                                      | ((0x400U 
                                                          & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                             >> 8U)) 
                                                         | ((0x200U 
                                                             & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                >> 5U)) 
                                                            | ((0x100U 
                                                                & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                   >> 3U)) 
                                                               | ((0x80U 
                                                                   & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                      >> 2U)) 
                                                                  | ((0x40U 
                                                                      & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                         << 1U)) 
                                                                     | ((0x20U 
                                                                         & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                            << 3U)) 
                                                                        | (0x10U 
                                                                           & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                                              << 4U)))))))))
                                                      : 0xfffU)))) 
                                           * ((2U >= 
                                               (3U 
                                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                                   >> 1U)))
                                               ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                              [(3U 
                                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                                   >> 1U))]
                                               : 0U)))),20);
    bufp->fullCData(oldp+307,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div),3);
    bufp->fullCData(oldp+308,((3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+309,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_top));
    bufp->fullIData(oldp+310,(((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc) 
                               << 6U)),17);
    bufp->fullSData(oldp+311,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__res_lut),11);
    bufp->fullBit(oldp+312,((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))));
    bufp->fullBit(oldp+313,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt) 
                                   >> 1U))));
    bufp->fullBit(oldp+314,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt) 
                                   >> 2U))));
    bufp->fullBit(oldp+315,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol) 
                                   >> 7U))));
    bufp->fullBit(oldp+316,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol) 
                                   >> 6U))));
    bufp->fullBit(oldp+317,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol) 
                                   >> 5U))));
    bufp->fullBit(oldp+318,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol) 
                                   >> 4U))));
    bufp->fullCData(oldp+319,((0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol))),4);
    bufp->fullSData(oldp+320,((0x7fffU & (((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                            ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                           [0U] : 0U) 
                                          + (((2U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                               ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                              [1U] : 0U) 
                                             + ((4U 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                                 ? 
                                                vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                                [2U]
                                                 : 0U))))),15);
    bufp->fullSData(oldp+321,((0xfffeU & ((((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                             ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                            [0U] : 0U) 
                                           + (((2U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                                ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                               [1U]
                                                : 0U) 
                                              + ((4U 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                                  ? 
                                                 vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                                 [2U]
                                                  : 0U))) 
                                          << 1U))),16);
    bufp->fullIData(oldp+322,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high),32);
    bufp->fullIData(oldp+323,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band),32);
    bufp->fullIData(oldp+324,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low),32);
    bufp->fullCData(oldp+325,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step),3);
    bufp->fullIData(oldp+326,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1),32);
    bufp->fullIData(oldp+327,(VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1, 0x14U)),32);
    bufp->fullIData(oldp+328,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band_low_next),32);
    bufp->fullIData(oldp+329,(VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1, 0xaU)),32);
    bufp->fullIData(oldp+330,(((VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1, 0xaU) 
                                - vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low) 
                               - (0xfffeU & ((((1U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                                ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                               [0U]
                                                : 0U) 
                                              + (((2U 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                                   ? 
                                                  vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                                  [1U]
                                                   : 0U) 
                                                 + 
                                                 ((4U 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                                   ? 
                                                  vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                                  [2U]
                                                   : 0U))) 
                                             << 1U)))),32);
    bufp->fullIData(oldp+331,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered),32);
    bufp->fullIData(oldp+332,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered_next),32);
    bufp->fullIData(oldp+333,(VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered, 1U)),32);
    bufp->fullSData(oldp+334,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff_next),15);
    bufp->fullSData(oldp+335,((0xfffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff) 
                                         >> 3U))),12);
    bufp->fullSData(oldp+336,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0),12);
    bufp->fullSData(oldp+337,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1),12);
    bufp->fullCData(oldp+338,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter),6);
    bufp->fullBit(oldp+339,(vlSelf->tb__DOT__uprj__DOT__sid__DOT____Vcellinp__tt_um_rejunity_sn76489__we));
    bufp->fullCData(oldp+340,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter),5);
    bufp->fullBit(oldp+341,((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter))));
    bufp->fullCData(oldp+342,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[0]),4);
    bufp->fullCData(oldp+343,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[1]),4);
    bufp->fullCData(oldp+344,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[2]),4);
    bufp->fullCData(oldp+345,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[3]),4);
    bufp->fullSData(oldp+346,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[0]),10);
    bufp->fullSData(oldp+347,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[1]),10);
    bufp->fullSData(oldp+348,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[2]),10);
    bufp->fullCData(oldp+349,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise[0]),3);
    bufp->fullCData(oldp+350,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg),3);
    bufp->fullBit(oldp+351,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__restart_noise));
    bufp->fullBit(oldp+352,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__channels[0]));
    bufp->fullBit(oldp+353,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__channels[1]));
    bufp->fullBit(oldp+354,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__channels[2]));
    bufp->fullBit(oldp+355,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__channels[3]));
    bufp->fullSData(oldp+356,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__volumes[0]),10);
    bufp->fullSData(oldp+357,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__volumes[1]),10);
    bufp->fullSData(oldp+358,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__volumes[2]),10);
    bufp->fullSData(oldp+359,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__volumes[3]),10);
    bufp->fullBit(oldp+360,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state));
    bufp->fullCData(oldp+361,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                              [0U]),4);
    bufp->fullSData(oldp+362,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__0__KET____DOT__attenuation__out),10);
    bufp->fullBit(oldp+363,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state));
    bufp->fullCData(oldp+364,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                              [1U]),4);
    bufp->fullSData(oldp+365,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__1__KET____DOT__attenuation__out),10);
    bufp->fullBit(oldp+366,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state));
    bufp->fullCData(oldp+367,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                              [2U]),4);
    bufp->fullSData(oldp+368,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__2__KET____DOT__attenuation__out),10);
    bufp->fullBit(oldp+369,((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr))));
    bufp->fullCData(oldp+370,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                              [3U]),4);
    bufp->fullSData(oldp+371,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__3__KET____DOT__attenuation__out),10);
    bufp->fullCData(oldp+372,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise
                              [0U]),3);
    bufp->fullBit(oldp+373,((1U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise
                                   [0U] >> 2U))));
    bufp->fullBit(oldp+374,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger));
    bufp->fullCData(oldp+375,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter),7);
    bufp->fullBit(oldp+376,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger_edge));
    bufp->fullSData(oldp+377,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr),15);
    bufp->fullBit(oldp+378,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger)) 
                             & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_1) 
                                != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger)))));
    bufp->fullBit(oldp+379,(((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger_edge) 
                             | ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger)) 
                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_1) 
                                   != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger))))));
    bufp->fullBit(oldp+380,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_0));
    bufp->fullBit(oldp+381,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_1));
    bufp->fullSData(oldp+382,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                              [0U]),10);
    bufp->fullSData(oldp+383,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter),10);
    bufp->fullSData(oldp+384,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                              [1U]),10);
    bufp->fullSData(oldp+385,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter),10);
    bufp->fullSData(oldp+386,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                              [2U]),10);
    bufp->fullSData(oldp+387,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter),10);
    bufp->fullCData(oldp+388,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__settings),3);
    bufp->fullBit(oldp+389,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr0_ext));
    bufp->fullBit(oldp+390,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr1_ext));
    bufp->fullBit(oldp+391,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr0_clk));
    bufp->fullBit(oldp+392,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr1_clk));
    bufp->fullSData(oldp+393,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer0),16);
    bufp->fullSData(oldp+394,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer1),16);
    bufp->fullSData(oldp+395,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer2),16);
    bufp->fullSData(oldp+396,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_capture),16);
    bufp->fullSData(oldp+397,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_capture),16);
    bufp->fullSData(oldp+398,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_capture),16);
    bufp->fullSData(oldp+399,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre),16);
    bufp->fullSData(oldp+400,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre),16);
    bufp->fullSData(oldp+401,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre),16);
    bufp->fullSData(oldp+402,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre_counter),16);
    bufp->fullSData(oldp+403,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre_counter),16);
    bufp->fullSData(oldp+404,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre_counter),16);
    bufp->fullSData(oldp+405,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_top),16);
    bufp->fullSData(oldp+406,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_top),16);
    bufp->fullSData(oldp+407,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_top),16);
    bufp->fullCData(oldp+408,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0),8);
    bufp->fullCData(oldp+409,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1),8);
    bufp->fullCData(oldp+410,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2),8);
    bufp->fullCData(oldp+411,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw0),8);
    bufp->fullCData(oldp+412,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw1),8);
    bufp->fullCData(oldp+413,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw2),8);
    bufp->fullCData(oldp+414,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp),8);
    bufp->fullQData(oldp+415,((0xfe01fe00000000ULL 
                               | (((QData)((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__halted)) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                                 [
                                                                 (3U 
                                                                  | (4U 
                                                                     & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                                        >> 2U)))] 
                                                                 << 0x18U) 
                                                                | ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                                    [
                                                                    (2U 
                                                                     | (4U 
                                                                        & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                                           >> 2U)))] 
                                                                    << 0x10U) 
                                                                   | ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                                       [
                                                                       (1U 
                                                                        | (4U 
                                                                           & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                                              >> 2U)))] 
                                                                       << 8U) 
                                                                      | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc49c8b73__0))))))))),56);
    bufp->fullCData(oldp+417,(vlSelf->tb__DOT__uprj__DOT____Vcellinp__wrapped_as2650__irqs),7);
    bufp->fullBit(oldp+418,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_ready));
    bufp->fullBit(oldp+419,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_feedback_delay));
    bufp->fullIData(oldp+420,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff),32);
    bufp->fullIData(oldp+421,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter),32);
    bufp->fullBit(oldp+422,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc));
    bufp->fullBit(oldp+423,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry));
    bufp->fullCData(oldp+424,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior),2);
    bufp->fullBit(oldp+425,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en));
    bufp->fullBit(oldp+426,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override));
    bufp->fullBit(oldp+427,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test));
    bufp->fullBit(oldp+428,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state));
    bufp->fullBit(oldp+429,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable));
    bufp->fullCData(oldp+430,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu),8);
    bufp->fullCData(oldp+431,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl),8);
    bufp->fullBit(oldp+432,(((~ ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin) 
                                 >> 6U)) & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc))));
    bufp->fullBit(oldp+433,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc) 
                             & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin) 
                                >> 6U))));
    bufp->fullBit(oldp+434,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__cpu_hidden_rom_enable));
    bufp->fullCData(oldp+435,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr),8);
    bufp->fullBit(oldp+436,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we));
    bufp->fullCData(oldp+437,((3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+438,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in_plexed),8);
    bufp->fullBit(oldp+439,(((IData)(vlSelf->tb__DOT__uprj__DOT__ram_enabled) 
                             & (0U == (0xf000U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))));
    bufp->fullQData(oldp+440,((((QData)((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__halted)) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                              [
                                                              (3U 
                                                               | (4U 
                                                                  & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                                     >> 2U)))] 
                                                              << 0x18U) 
                                                             | ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                                 [
                                                                 (2U 
                                                                  | (4U 
                                                                     & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                                        >> 2U)))] 
                                                                 << 0x10U) 
                                                                | ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                                    [
                                                                    (1U 
                                                                     | (4U 
                                                                        & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                                           >> 2U)))] 
                                                                    << 8U) 
                                                                   | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc49c8b73__0)))))))),33);
    bufp->fullBit(oldp+442,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap));
    bufp->fullCData(oldp+443,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch),8);
    bufp->fullCData(oldp+444,(((0x80U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                ? 7U : ((0x40U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                         ? 6U : ((0x20U 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                  ? 5U
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                   ? 4U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                    ? 3U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                     ? 2U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                      ? 1U
                                                      : 0U)))))))),3);
    bufp->fullCData(oldp+445,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[0]),8);
    bufp->fullCData(oldp+446,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[1]),8);
    bufp->fullCData(oldp+447,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[2]),8);
    bufp->fullCData(oldp+448,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[3]),8);
    bufp->fullCData(oldp+449,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[4]),8);
    bufp->fullCData(oldp+450,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[5]),8);
    bufp->fullCData(oldp+451,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[6]),8);
    bufp->fullCData(oldp+452,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[7]),8);
    bufp->fullSData(oldp+453,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[0]),16);
    bufp->fullSData(oldp+454,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[1]),16);
    bufp->fullSData(oldp+455,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[2]),16);
    bufp->fullSData(oldp+456,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[3]),16);
    bufp->fullSData(oldp+457,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[4]),16);
    bufp->fullSData(oldp+458,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[5]),16);
    bufp->fullSData(oldp+459,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[6]),16);
    bufp->fullSData(oldp+460,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[7]),16);
    bufp->fullSData(oldp+461,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[8]),16);
    bufp->fullSData(oldp+462,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[9]),16);
    bufp->fullSData(oldp+463,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[10]),16);
    bufp->fullSData(oldp+464,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[11]),16);
    bufp->fullSData(oldp+465,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[12]),16);
    bufp->fullSData(oldp+466,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[13]),16);
    bufp->fullSData(oldp+467,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[14]),16);
    bufp->fullSData(oldp+468,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[15]),16);
    bufp->fullSData(oldp+469,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS),16);
    bufp->fullSData(oldp+470,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC),13);
    bufp->fullCData(oldp+471,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg),3);
    bufp->fullSData(oldp+472,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base),12);
    bufp->fullCData(oldp+473,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle),4);
    bufp->fullCData(oldp+474,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin),8);
    bufp->fullSData(oldp+475,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch),16);
    bufp->fullBit(oldp+476,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
    bufp->fullCData(oldp+477,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__warmup),2);
    bufp->fullBit(oldp+478,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__halted));
    bufp->fullBit(oldp+479,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc));
    bufp->fullCData(oldp+480,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc),2);
    bufp->fullSData(oldp+481,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_target),16);
    bufp->fullBit(oldp+482,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc));
    bufp->fullCData(oldp+483,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)
                                ? 3U : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc))),2);
    bufp->fullBit(oldp+484,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_data_fetch_cycle));
    bufp->fullBit(oldp+485,((0xcU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))));
    bufp->fullBit(oldp+486,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle));
    bufp->fullBit(oldp+487,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc));
    bufp->fullCData(oldp+488,((4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                     >> 2U))),3);
    bufp->fullCData(oldp+489,((1U | (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                           >> 2U)))),3);
    bufp->fullCData(oldp+490,((2U | (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                           >> 2U)))),3);
    bufp->fullCData(oldp+491,((3U | (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                           >> 2U)))),3);
    bufp->fullSData(oldp+492,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__mul_res),16);
    bufp->fullBit(oldp+493,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_data1));
    bufp->fullCData(oldp+494,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr),3);
    bufp->fullCData(oldp+495,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirpchar),7);
    bufp->fullBit(oldp+496,(vlSelf->tb__DOT__ROM_CS));
    bufp->fullBit(oldp+497,((1U & (IData)(vlSelf->__VdfgTmp_he37690df__0))));
    bufp->fullBit(oldp+498,((1U & ((IData)(vlSelf->__VdfgTmp_he37690df__0) 
                                   >> 1U))));
    bufp->fullSData(oldp+499,(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__io_out),16);
    bufp->fullBit(oldp+500,(vlSelf->clk));
    bufp->fullBit(oldp+501,(vlSelf->rst_n));
    bufp->fullBit(oldp+502,(vlSelf->wbs_stb_i));
    bufp->fullBit(oldp+503,(vlSelf->wbs_cyc_i));
    bufp->fullBit(oldp+504,(vlSelf->wbs_we_i));
    bufp->fullIData(oldp+505,(vlSelf->wbs_dat_i),32);
    bufp->fullIData(oldp+506,(vlSelf->wbs_adr_i),32);
    bufp->fullBit(oldp+507,(vlSelf->wbs_ack_o));
    bufp->fullIData(oldp+508,(vlSelf->wbs_dat_o),32);
    bufp->fullQData(oldp+509,((((QData)((IData)((((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK)))) 
                                << 0x23U) | (((QData)((IData)(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__io_out)) 
                                              << 0x13U) 
                                             | (QData)((IData)(vlSelf->tb__DOT__uprj__DOT____Vcellout__wrapped_as2650__io_out))))),38);
    bufp->fullBit(oldp+511,(vlSelf->tb__DOT__SDO));
    bufp->fullCData(oldp+512,(vlSelf->tb__DOT__bus_out),8);
    bufp->fullCData(oldp+513,(vlSelf->tb__DOT__uart_init_state),2);
    bufp->fullCData(oldp+514,(vlSelf->tb__DOT__spiflash__DOT__reset_count),4);
    bufp->fullCData(oldp+515,(vlSelf->tb__DOT__spiflash__DOT__reset_monitor),4);
    bufp->fullBit(oldp+516,(vlSelf->tb__DOT__spiflash__DOT__io0_dout));
    bufp->fullBit(oldp+517,(vlSelf->tb__DOT__spiflash__DOT__io1_dout));
    bufp->fullBit(oldp+518,(vlSelf->tb__DOT__spiflash__DOT__io2_dout));
    bufp->fullBit(oldp+519,(vlSelf->tb__DOT__spiflash__DOT__io3_dout));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSelf->rst_n)))));
    bufp->fullIData(oldp+521,(vlSelf->tb__DOT__uprj__DOT____Vcellout__wrapped_as2650__io_out),19);
    bufp->fullBit(oldp+522,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_valid));
}
