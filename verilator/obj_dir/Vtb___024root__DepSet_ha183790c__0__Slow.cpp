// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    // Body
    Vtb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb__DOT__uart_init_state = 0U;
    vlSelf->tb__DOT__spiflash__DOT__reset_count = 0U;
    vlSelf->tb__DOT__spiflash__DOT__reset_monitor = 0U;
    vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
    vlSelf->tb__DOT__spiflash__DOT__bytecount = 0U;
    vlSelf->tb__DOT__spiflash__DOT__dummycount = 0U;
    vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
    vlSelf->tb__DOT__spiflash__DOT__powered_up = 0U;
    vlSelf->tb__DOT__spiflash__DOT__mode = 0U;
    vlSelf->tb__DOT__spiflash__DOT__next_mode = 0U;
    vlSelf->tb__DOT__spiflash__DOT__io0_oe = 0U;
    vlSelf->tb__DOT__spiflash__DOT__io1_oe = 0U;
    vlSelf->tb__DOT__spiflash__DOT__io2_oe = 0U;
    vlSelf->tb__DOT__spiflash__DOT__io3_oe = 0U;
    vlSelf->tb__DOT__spiflash__DOT__io0_dout = 0U;
    vlSelf->tb__DOT__spiflash__DOT__io1_dout = 0U;
    vlSelf->tb__DOT__spiflash__DOT__io2_dout = 0U;
    vlSelf->tb__DOT__spiflash__DOT__io3_dout = 0U;
}

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__ROM_CS__0 
        = vlSelf->tb__DOT__ROM_CS;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK__0 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__flag__0 
        = vlSelf->tb__DOT__flag;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__WEb__0 
        = vlSelf->tb__DOT__WEb;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_WRITEF("Reading ../pgm.txt\n");
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x2f70676dU;
    __Vtemp_1[2U] = 0x2e2eU;
    VL_READMEM_N(true, 8, 16777216, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->tb__DOT__spiflash__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF("../pgm.txt loaded into memory\nMemory 5 bytes = 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
              8,vlSelf->tb__DOT__spiflash__DOT__memory
              [0U],8,vlSelf->tb__DOT__spiflash__DOT__memory
              [1U],8,vlSelf->tb__DOT__spiflash__DOT__memory
              [2U],8,vlSelf->tb__DOT__spiflash__DOT__memory
              [3U],8,vlSelf->tb__DOT__spiflash__DOT__memory
              [4U]);
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 8> Vtb__ConstPool__TABLE_h24a07610_0;
extern const VlUnpacked<SData/*9:0*/, 32> Vtb__ConstPool__TABLE_h6c64cb64_0;
extern const VlUnpacked<SData/*10:0*/, 256> Vtb__ConstPool__TABLE_h8260c8ac_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vtb__ConstPool__TABLE_hf24594c5_0;
extern const VlUnpacked<SData/*14:0*/, 16> Vtb__ConstPool__TABLE_hc1e8b01b_0;

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb__DOT__SDI__strong__out8;
    tb__DOT__SDI__strong__out8 = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_data_fetch_cycle;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_data_fetch_cycle = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre = 0;
    CData/*7:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1 = 0;
    CData/*7:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2 = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2f264c6e__0;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2f264c6e__0 = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0 = 0;
    CData/*7:0*/ tb__DOT__uprj__DOT__boot_rom__DOT__cs_port_bit;
    tb__DOT__uprj__DOT__boot_rom__DOT__cs_port_bit = 0;
    SData/*14:0*/ tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_table;
    tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_table = 0;
    IData/*23:0*/ tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0;
    tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 = 0;
    CData/*1:0*/ tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0;
    tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0 = 0;
    SData/*10:0*/ tb__DOT__uprj__DOT__sid__DOT__filters__DOT__res_lut;
    tb__DOT__uprj__DOT__sid__DOT__filters__DOT__res_lut = 0;
    IData/*31:0*/ tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1;
    tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelf->tb__DOT__flag = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                                   >> 6U));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r1_a 
        = (1U | (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                       >> 2U)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a 
        = (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                 >> 2U));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_interrupt_cycle 
        = (0xcU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h06a17774__0 
        = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                 >> 4U));
    vlSelf->wbs_ack_o = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_ready;
    vlSelf->wbs_dat_o = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irq_num 
        = ((0x80U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
            ? 7U : ((0x40U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                     ? 6U : ((0x20U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                              ? 5U : ((0x10U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                       ? 4U : ((8U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                ? 3U
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                     ? 1U
                                                     : 0U)))))));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel 
        = (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                 >> 1U));
    if ((0U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                      >> 1U)))) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sync_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs
            [2U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs
            [2U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_1;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_1;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_1;
    } else if ((1U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                             >> 1U)))) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sync_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs
            [0U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs
            [0U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_2;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_2;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_2;
    } else if ((2U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                             >> 1U)))) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sync_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs
            [1U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs
            [1U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_3;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_3;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_3;
    } else if ((3U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                             >> 1U)))) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sync_in = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel = 0U;
    }
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack
        [(0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                  - (IData)(1U)))];
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_valid 
        = ((IData)(vlSelf->wbs_cyc_i) & (IData)(vlSelf->wbs_stb_i));
    vlSelf->tb__DOT____Vtriunconn2 = ((IData)(vlSelf->tb__DOT__spiflash__DOT__io2_dout) 
                                      & (IData)(vlSelf->tb__DOT__spiflash__DOT__io2_oe));
    vlSelf->tb__DOT____Vtriunconn4 = ((IData)(vlSelf->tb__DOT__spiflash__DOT__io3_dout) 
                                      & (IData)(vlSelf->tb__DOT__spiflash__DOT__io3_oe));
    vlSelf->tb__DOT__uprj__DOT__bus_we_gpios = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we) 
                                                & (0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))));
    vlSelf->tb__DOT__uprj__DOT__bus_we_timers = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we) 
                                                 & (0x40U 
                                                    == 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__enable = 
        ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg)) 
         | ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_ctr) 
            == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg)));
    if ((2U >= (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                      >> 1U)))) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_period 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))];
        tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))];
        tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))];
    } else {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_period = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 = 0U;
        tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 = 0U;
        tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0 = 0U;
    }
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger 
        = (1U & ((2U & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise
                  [0U]) ? ((1U & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise
                            [0U]) ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state)
                            : ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter) 
                               >> 6U)) : ((1U & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise
                                           [0U]) ? 
                                          ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter) 
                                           >> 5U) : 
                                          ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter) 
                                           >> 4U))));
    vlSelf->tb__DOT__ROM_CS = (1U & ((0x80U & (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB))
                                      ? (IData)(vlSelf->tb__DOT__uprj__DOT__DAC_clk)
                                      : ((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTB) 
                                         >> 7U)));
    vlSelf->tb__DOT__SDO = (((IData)(vlSelf->tb__DOT__spiflash__DOT__io0_dout) 
                             & (IData)(vlSelf->tb__DOT__spiflash__DOT__io0_oe)) 
                            | (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO));
    __Vtableidx1 = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirpchar 
        = Vtb__ConstPool__TABLE_h24a07610_0[__Vtableidx1];
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff_next 
        = (0x7fffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff) 
                      + ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
                          ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                         [0U] : ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
                                  ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                 [1U] : ((7U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
                                          ? VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered, 1U)
                                          : vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                         [2U])))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in_plexed 
        = ((0U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr) 
                         >> 6U))) ? (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_gpios)
            : ((1U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr) 
                             >> 6U))) ? (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_timers)
                : ((2U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr) 
                                 >> 6U))) ? (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_serial_ports)
                    : ((3U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr) 
                                     >> 6U))) ? (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_sid)
                        : 0U))));
    __Vtableidx5 = ((vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                     [0U] << 1U) | (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__0__KET____DOT__attenuation__out 
        = Vtb__ConstPool__TABLE_h6c64cb64_0[__Vtableidx5];
    __Vtableidx6 = ((vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                     [1U] << 1U) | (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__1__KET____DOT__attenuation__out 
        = Vtb__ConstPool__TABLE_h6c64cb64_0[__Vtableidx6];
    __Vtableidx7 = ((vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                     [2U] << 1U) | (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__2__KET____DOT__attenuation__out 
        = Vtb__ConstPool__TABLE_h6c64cb64_0[__Vtableidx7];
    __Vtableidx8 = ((vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                     [3U] << 1U) | (1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr)));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__3__KET____DOT__attenuation__out 
        = Vtb__ConstPool__TABLE_h6c64cb64_0[__Vtableidx8];
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered_next 
        = (vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered 
           + ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
               ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high
               : ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
                   ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low
                   : vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band)));
    vlSelf->tb__DOT__uprj__DOT____Vcellinp__wrapped_as2650__irqs 
        = (((IData)(vlSelf->tb__DOT__uprj__DOT__irq7) 
            << 6U) | (((IData)(vlSelf->tb__DOT__uprj__DOT__irq6) 
                       << 5U) | (((IData)(vlSelf->tb__DOT__uprj__DOT__irq5) 
                                  << 4U) | (((IData)(vlSelf->tb__DOT__uprj__DOT__irq3) 
                                             << 3U) 
                                            | (((IData)(vlSelf->tb__DOT__uprj__DOT__irq2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->tb__DOT__uprj__DOT__irq1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->tb__DOT__uprj__DOT__irq0)))))));
    vlSelf->tb__DOT__uprj__DOT__bus_we_sid = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we) 
                                              & (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))));
    vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we) 
           & (0x80U == (0xc0U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h5a2433b0__0 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc)) 
                 & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__read_res 
        = (0xffU & (((((((((0U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                           | (1U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                          | (2U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                         | (3U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                        | (4U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                       | (5U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                      | (6U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                     | (7U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))
                     ? ((0U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                         ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1)
                         : ((1U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                             ? ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1) 
                                >> 8U) : ((2U == (0x3fU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                           ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1)
                                           : ((3U == 
                                               (0x3fU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                               ? (0xfU 
                                                  & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1) 
                                                     >> 8U))
                                               : ((4U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                   ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_1)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                    ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_1)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                     ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_1)
                                                     : (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2))))))))
                     : (((((((((8U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                               | (9U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                              | (0xaU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                             | (0xbU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                            | (0xcU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                           | (0xdU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                          | (0xeU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                         | (0xfU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))
                         ? ((8U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                             ? ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2) 
                                >> 8U) : ((9U == (0x3fU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                           ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2)
                                           : ((0xaU 
                                               == (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                               ? (0xfU 
                                                  & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2) 
                                                     >> 8U))
                                               : ((0xbU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                   ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_2)
                                                   : 
                                                  ((0xcU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                    ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_2)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                     ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_2)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                      ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3)
                                                      : 
                                                     ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3) 
                                                      >> 8U))))))))
                         : (((((((((0x10U == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                   | (0x11U == (0x3fU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                  | (0x12U == (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                 | (0x13U == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                | (0x14U == (0x3fU 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                               | (0x15U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                              | (0x16U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                             | (0x17U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))
                             ? ((0x10U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                 ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3)
                                 : ((0x11U == (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                     ? (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3) 
                                                >> 8U))
                                     : ((0x12U == (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                         ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_3)
                                         : ((0x13U 
                                             == (0x3fU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                             ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_3)
                                             : ((0x14U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                 ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_3)
                                                 : 
                                                ((0x15U 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                  ? 
                                                 (7U 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc))
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                   ? 
                                                  ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc) 
                                                   >> 3U)
                                                   : (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))))))))
                             : ((0x18U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                 ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol)
                                 : ((0x19U == (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                     ? (0x80U | (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg))
                                     : ((0x1bU == (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                         ? (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                            [2U] >> 4U)
                                         : ((0x1cU 
                                             == (0x3fU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                             ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                            [2U] : 0U))))))));
    __Vtableidx4 = vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt;
    tb__DOT__uprj__DOT__sid__DOT__filters__DOT__res_lut 
        = Vtb__ConstPool__TABLE_h8260c8ac_0[__Vtableidx4];
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc 
        = ((4U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
           | (5U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc49c8b73__0 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
        [(4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                >> 2U))];
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_data1 
        = ((0U != (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc)) 
           & (3U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_data_fetch_cycle 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc) 
           | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc) 
              | ((3U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
                 | (0xcU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)))));
    if (((((((((0U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
               | (1U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))) 
              | (2U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))) 
             | (3U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))) 
            | (4U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))) 
           | (5U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))) 
          | (6U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))) 
         | (7U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))))) {
        vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__curr_Q 
            = ((0U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))
                ? (IData)(vlSelf->tb__DOT__uprj__DOT__Q0)
                : ((1U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))
                    ? (IData)(vlSelf->tb__DOT__uprj__DOT__Q1)
                    : ((2U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))
                        ? (IData)(vlSelf->tb__DOT__uprj__DOT__Q2)
                        : ((3U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))
                            ? (IData)(vlSelf->tb__DOT__uprj__DOT__Q3)
                            : ((4U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))
                                ? (IData)(vlSelf->tb__DOT__uprj__DOT__Q4)
                                : ((5U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))
                                    ? (IData)(vlSelf->tb__DOT__uprj__DOT__Q5)
                                    : ((6U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch)))
                                        ? (IData)(vlSelf->tb__DOT__uprj__DOT__Q6)
                                        : (IData)(vlSelf->tb__DOT__uprj__DOT__Q7))))))));
    }
    __Vtableidx2 = vlSelf->tb__DOT__uprj__DOT__cs_port;
    tb__DOT__uprj__DOT__boot_rom__DOT__cs_port_bit 
        = Vtb__ConstPool__TABLE_hf24594c5_0[__Vtableidx2];
    vlSelf->tb__DOT__io_in = ((0x3ffffffffeULL & vlSelf->tb__DOT__io_in) 
                              | (IData)((IData)(vlSelf->rst_n)));
    tb__DOT__SDI__strong__out8 = ((IData)(vlSelf->tb__DOT__spiflash__DOT__io1_dout) 
                                  & (IData)(vlSelf->tb__DOT__spiflash__DOT__io1_oe));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT____Vcellinp__tt_um_rejunity_sn76489__we 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
           & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_sid) 
              & (0x1fU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))));
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellinp__uart__start 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
           & ((3U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
              & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy)) 
                 & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports))));
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellinp__spi__start 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
           & ((5U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
              & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_busy)) 
                 & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports))));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum_next 
        = (0xffffffU & (tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                        + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq)));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__mul_sample 
        = (0xfffffU & ((((0x40U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                          ? (- (IData)(((0xfffU & (tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                   >> 0xcU)) 
                                        >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw))))
                          : 0xfffU) & (((0x20U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                         ? (tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                            >> 0xcU)
                                         : 0xfffU) 
                                       & (((0x10U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                            ? ((0xffeU 
                                                & (tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                   >> 0xbU)) 
                                               ^ ((- (IData)(
                                                             (1U 
                                                              & (tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                                 >> 0x17U)))) 
                                                  ^ 
                                                  (- (IData)(
                                                             (((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                                               >> 2U) 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in))))))
                                            : 0xfffU) 
                                          & ((0x80U 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                              ? ((0x800U 
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
                       * ((2U >= (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                        >> 1U))) ? 
                          vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                          [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                  >> 1U))] : 0U)));
    __Vtableidx3 = (0xfU & ((1U == (IData)(tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0))
                             ? ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec) 
                                >> 4U) : ((2U == (IData)(tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0))
                                           ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec)
                                           : (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel))));
    tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_table 
        = Vtb__ConstPool__TABLE_hc1e8b01b_0[__Vtableidx3];
    tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1 
        = (((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
             ? (IData)(tb__DOT__uprj__DOT__sid__DOT__filters__DOT__res_lut)
             : ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc) 
                << 6U)) * ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
                            ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high
                            : vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band));
    vlSelf->__VdfgTmp_he37690df__0 = (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry)
                                             ? ((2U 
                                                 & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)))
                                             : ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc)
                                                 ? 
                                                ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                 >> 6U)
                                                 : 
                                                ((((~ 
                                                    ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin) 
                                                     >> 6U)) 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc)) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc) 
                                                    & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin) 
                                                       >> 6U))))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__mul_res 
        = (0xffffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc49c8b73__0) 
                      * vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                      [(1U | (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                    >> 2U)))]));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle 
        = ((~ (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_data_fetch_cycle)) 
           & ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
              | ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
                 | (2U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)))));
    vlSelf->tb__DOT__uprj__DOT__boot_rom__DOT__rom_data 
        = (0xffU & (((((((((0U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                           | (1U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                          | (2U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                         | (3U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                        | (4U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                       | (5U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                      | (6U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                     | (7U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                     ? ((0U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                         ? 0xc0U : ((1U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                     ? 0xc0U : ((2U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                 ? 0x1bU
                                                 : 
                                                ((3U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                  ? 5U
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                   ? 
                                                  ((IData)(vlSelf->tb__DOT__uprj__DOT__RAM_start_addr) 
                                                   >> 8U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? (IData)(vlSelf->tb__DOT__uprj__DOT__RAM_start_addr)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? (IData)(tb__DOT__uprj__DOT__boot_rom__DOT__cs_port_bit)
                                                     : 
                                                    ((IData)(vlSelf->tb__DOT__uprj__DOT__RAM_end_addr) 
                                                     >> 8U))))))))
                     : (((((((((8U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                               | (9U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                              | (0xaU == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                             | (0xbU == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                            | (0xcU == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                           | (0xdU == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                          | (0xeU == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                         | (0xfU == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                         ? ((8U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                             ? (IData)(vlSelf->tb__DOT__uprj__DOT__RAM_end_addr)
                             : ((9U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                 ? 0x20U : ((0xaU == 
                                             (0xffU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                             ? 0x93U
                                             : ((0xbU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                 ? 4U
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                  ? 0x20U
                                                  : 
                                                 ((0xdU 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                   ? 0x92U
                                                   : 
                                                  ((0xeU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? 8U
                                                    : 0x76U)))))))
                         : (((((((((0x10U == (0xffU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                   | (0x11U == (0xffU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                  | (0x12U == (0xffU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                 | (0x13U == (0xffU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                | (0x14U == (0xffU 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                               | (0x15U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                              | (0x16U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                             | (0x17U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                             ? ((0x10U == (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                 ? 0xd4U : ((0x11U 
                                             == (0xffU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                             ? 1U : 
                                            ((0x12U 
                                              == (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                              ? 0x3fU
                                              : ((0x13U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                  ? 0U
                                                  : 
                                                 ((0x14U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                   ? 0x84U
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? 0x3fU
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? 0U
                                                     : 0x8dU)))))))
                             : (((((((((0x18U == (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                       | (0x19U == 
                                          (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                      | (0x1aU == (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                     | (0x1bU == (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                    | (0x1cU == (0xffU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                   | (0x1dU == (0xffU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                  | (0x1eU == (0xffU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                 | (0x1fU == (0xffU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                 ? ((0x18U == (0xffU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                     ? 4U : ((0x19U 
                                              == (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                              ? 0xffU
                                              : ((0x1aU 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                  ? 0x3fU
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                   ? 0U
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? 0x98U
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? 0x3fU
                                                     : 
                                                    ((0x1eU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                      ? 0U
                                                      : 0x84U)))))))
                                 : (((((((((0x20U == 
                                            (0xffU 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                           | (0x21U 
                                              == (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                          | (0x22U 
                                             == (0xffU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                         | (0x23U == 
                                            (0xffU 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                        | (0x24U == 
                                           (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                       | (0x25U == 
                                          (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                      | (0x26U == (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                     | (0x27U == (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                     ? ((0x20U == (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                         ? 0x3fU : 
                                        ((0x21U == 
                                          (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                          ? 0U : ((0x22U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                   ? 0x8dU
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? 4U
                                                    : 
                                                   ((0x24U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? 0xabU
                                                     : 
                                                    ((0x25U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                      ? 0x3fU
                                                      : 
                                                     ((0x26U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                       ? 0U
                                                       : 0x98U)))))))
                                     : (((((((((0x28U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                               | (0x29U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                              | (0x2aU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                             | (0x2bU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                            | (0x2cU 
                                               == (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                           | (0x2dU 
                                              == (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                          | (0x2eU 
                                             == (0xffU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                         | (0x2fU == 
                                            (0xffU 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                         ? ((0x28U 
                                             == (0xffU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                             ? 0x3fU
                                             : ((0x29U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                 ? 0U
                                                 : 
                                                ((0x2aU 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                  ? 0x84U
                                                  : 
                                                 ((0x2bU 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                   ? 0x3fU
                                                   : 
                                                  ((0x2cU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? 0U
                                                    : 
                                                   ((0x2dU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? 0x8dU
                                                     : 
                                                    ((0x2eU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                      ? 4U
                                                      : 3U)))))))
                                         : ((((((((
                                                   (0x30U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                   | (0x31U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                  | (0x32U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                 | (0x33U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                | (0x34U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                               | (0x35U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                              | (0x36U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                             | (0x37U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                             ? ((0x30U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                 ? 0x3fU
                                                 : 
                                                ((0x31U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                  ? 0U
                                                  : 
                                                 ((0x32U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                   ? 0x98U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? 6U
                                                    : 
                                                   ((0x34U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? 3U
                                                     : 
                                                    ((0x35U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                      ? 0x20U
                                                      : 
                                                     ((0x36U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                       ? 0x3fU
                                                       : 0U)))))))
                                             : ((((
                                                   (((((0x38U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                       | (0x39U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                      | (0x3aU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                     | (0x3bU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                    | (0x3cU 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                   | (0x3dU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                  | (0x3eU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                 | (0x3fU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                 ? 
                                                ((0x38U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                  ? 0x98U
                                                  : 
                                                 ((0x39U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                   ? 0xfaU
                                                   : 
                                                  ((0x3aU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? 0x7aU
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? 7U
                                                     : 
                                                    ((0x3cU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                      ? 0xffU
                                                      : 
                                                     ((0x3dU 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                       ? 0x20U
                                                       : 
                                                      ((0x3eU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                        ? 0x3fU
                                                        : 0U)))))))
                                                 : 
                                                (((((((((0x40U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                        | (0x41U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                       | (0x42U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                      | (0x43U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                     | (0x44U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                    | (0x45U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                   | (0x46U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                  | (0x47U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                  ? 
                                                 ((0x40U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                   ? 0x98U
                                                   : 
                                                  ((0x41U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? 0xefU
                                                    : 
                                                   ((0x42U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? 0x20U
                                                     : 
                                                    ((0x43U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                      ? 0xa3U
                                                      : 
                                                     ((0x44U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                       ? 0x98U
                                                       : 
                                                      ((0x45U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                        ? 0x26U
                                                        : 
                                                       ((0x46U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                         ? 0U
                                                         : 0x98U)))))))
                                                  : 
                                                 (((((((((0x48U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                         | (0x49U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                        | (0x4aU 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                       | (0x4bU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                      | (0x4cU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                     | (0x4dU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                    | (0x4eU 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                   | (0x4fU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                   ? 
                                                  ((0x48U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                    ? 0x74U
                                                    : 
                                                   ((0x49U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? 0x77U
                                                     : 
                                                    ((0x4aU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                      ? 8U
                                                      : 
                                                     ((0x4bU 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                       ? 0xfU
                                                       : 
                                                      ((0x4cU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                        ? 0U
                                                        : 
                                                       ((0x4dU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                         ? 4U
                                                         : 
                                                        ((0x4eU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                          ? 0xeU
                                                          : 0U)))))))
                                                   : 
                                                  (((((((((0x50U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                          | (0x51U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                         | (0x52U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                        | (0x53U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                       | (0x54U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                      | (0x55U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                     | (0x56U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                    | (0x57U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                    ? 
                                                   ((0x50U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                     ? 5U
                                                     : 
                                                    ((0x51U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                      ? 0x20U
                                                      : 
                                                     ((0x52U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                       ? 0x3fU
                                                       : 
                                                      ((0x53U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                        ? 0U
                                                        : 
                                                       ((0x54U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                         ? 0x98U
                                                         : 
                                                        ((0x55U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                          ? 0xb7U
                                                          : 
                                                         ((0x56U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                           ? 0x93U
                                                           : 0x75U)))))))
                                                    : 
                                                   (((((((((0x58U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                           | (0x59U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                          | (0x5aU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                         | (0x5bU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                        | (0x5cU 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                       | (0x5dU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                      | (0x5eU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                     | (0x5fU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                     ? 
                                                    ((0x58U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                      ? 1U
                                                      : 
                                                     ((0x59U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                       ? 0x86U
                                                       : 
                                                      ((0x5aU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                        ? 1U
                                                        : 
                                                       ((0x5bU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                         ? 0x87U
                                                         : 
                                                        ((0x5cU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                          ? 0U
                                                          : 
                                                         ((0x5dU 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                           ? 0xefU
                                                           : 
                                                          ((0x5eU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                            ? 0U
                                                            : 7U)))))))
                                                     : 
                                                    (((((((((0x60U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                            | (0x61U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                           | (0x62U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                          | (0x63U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                         | (0x64U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                        | (0x65U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                       | (0x66U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                      | (0x67U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                      ? 
                                                     ((0x60U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                       ? 0x98U
                                                       : 
                                                      ((0x61U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                        ? 0x6fU
                                                        : 
                                                       ((0x62U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                         ? 0xeeU
                                                         : 
                                                        ((0x63U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                          ? 0U
                                                          : 
                                                         ((0x64U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                           ? 8U
                                                           : 
                                                          ((0x65U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                            ? 0x98U
                                                            : 
                                                           ((0x66U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                             ? 0x6aU
                                                             : 0x3bU)))))))
                                                      : 
                                                     (((((((((0x68U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                             | (0x69U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                            | (0x6aU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                           | (0x6bU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                          | (0x6cU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                         | (0x6dU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                        | (0x6eU 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                       | (0x6fU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                       ? 
                                                      ((0x68U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                        ? 0x1bU
                                                        : 
                                                       ((0x69U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                         ? 0x1fU
                                                         : 
                                                        ((0x6aU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                          ? 0x80U
                                                          : 
                                                         ((0x6bU 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                           ? 4U
                                                           : 
                                                          ((0x6cU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                            ? 0x3bU
                                                            : 
                                                           ((0x6dU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                             ? 0x16U
                                                             : 
                                                            ((0x6eU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                              ? 0xb4U
                                                              : 0x40U)))))))
                                                       : 
                                                      (((((((((0x70U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                              | (0x71U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                             | (0x72U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                            | (0x73U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                           | (0x74U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                          | (0x75U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                         | (0x76U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                        | (0x77U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                        ? 
                                                       ((0x70U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                         ? 0x76U
                                                         : 
                                                        ((0x71U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                          ? 0x40U
                                                          : 
                                                         ((0x72U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                           ? 0x98U
                                                           : 
                                                          ((0x73U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                            ? 2U
                                                            : 
                                                           ((0x74U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                             ? 0x74U
                                                             : 
                                                            ((0x75U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                              ? 0x40U
                                                              : 
                                                             ((0x76U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                               ? 6U
                                                               : 0x19U)))))))
                                                        : 
                                                       (((((((((0x78U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                               | (0x79U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                              | (0x7aU 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                             | (0x7bU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                            | (0x7cU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                           | (0x7dU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                          | (0x7eU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                         | (0x7fU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                         ? 
                                                        ((0x78U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                          ? 7U
                                                          : 
                                                         ((0x79U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                           ? 0xffU
                                                           : 
                                                          ((0x7aU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                            ? 0x3bU
                                                            : 
                                                           ((0x7bU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                             ? 4U
                                                             : 
                                                            ((0x7cU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                              ? 0xfaU
                                                              : 
                                                             ((0x7dU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                               ? 0x7aU
                                                               : 
                                                              ((0x7eU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                ? 0x1bU
                                                                : 0x6cU)))))))
                                                         : 
                                                        (((((((((0x80U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                                | (0x81U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                               | (0x82U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                              | (0x83U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                             | (0x84U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                            | (0x85U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                           | (0x86U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                          | (0x87U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                          ? 
                                                         ((0x80U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                           ? 0xc0U
                                                           : 
                                                          ((0x81U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                            ? 0xfbU
                                                            : 
                                                           ((0x82U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                             ? 0x7dU
                                                             : 
                                                            ((0x83U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                              ? 0x17U
                                                              : 
                                                             ((0x84U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                               ? 0xcU
                                                               : 
                                                              ((0x85U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                ? 0U
                                                                : 
                                                               ((0x86U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                 ? 6U
                                                                 : 0xd4U)))))))
                                                          : 
                                                         (((((((((0x88U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                                 | (0x89U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                | (0x8aU 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                               | (0x8bU 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                              | (0x8cU 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                             | (0x8dU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                            | (0x8eU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                           | (0x8fU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                           ? 
                                                          ((0x88U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                            ? 3U
                                                            : 
                                                           ((0x89U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                             ? 7U
                                                             : 
                                                            ((0x8aU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                              ? 0xaU
                                                              : 
                                                             ((0x8bU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                               ? 0x1bU
                                                               : 
                                                              ((0x8cU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                ? 0x73U
                                                                : 
                                                               ((0x8dU 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                 ? 0xcU
                                                                 : 
                                                                ((0x8eU 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                  ? 0U
                                                                  : 6U)))))))
                                                           : 
                                                          (((((((((0x90U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                                  | (0x91U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                 | (0x92U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                | (0x93U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                               | (0x94U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                              | (0x95U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                             | (0x96U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                            | (0x97U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                            ? 
                                                           ((0x90U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                             ? 0x24U
                                                             : 
                                                            ((0x91U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                              ? 0xffU
                                                              : 
                                                             ((0x92U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                               ? 0xd4U
                                                               : 
                                                              ((0x93U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                ? 3U
                                                                : 
                                                               ((0x94U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                 ? 7U
                                                                 : 
                                                                ((0x95U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                  ? 0xbU
                                                                  : 
                                                                 ((0x96U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                   ? 0x1bU
                                                                   : 0x68U)))))))
                                                            : 
                                                           (((((((((0x98U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                                   | (0x99U 
                                                                      == 
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                  | (0x9aU 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                 | (0x9bU 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                | (0x9cU 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                               | (0x9dU 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                              | (0x9eU 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                             | (0x9fU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                             ? 
                                                            ((0x98U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                              ? 0xd4U
                                                              : 
                                                             ((0x99U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                               ? 0x85U
                                                               : 
                                                              ((0x9aU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                ? 0x54U
                                                                : 
                                                               ((0x9bU 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                 ? 0x83U
                                                                 : 
                                                                ((0x9cU 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                  ? 0x44U
                                                                  : 
                                                                 ((0x9dU 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                   ? 3U
                                                                   : 
                                                                  ((0x9eU 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                    ? 0x98U
                                                                    : 0x7aU)))))))
                                                             : 
                                                            (((((((((0xa0U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                                    | (0xa1U 
                                                                       == 
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                   | (0xa2U 
                                                                      == 
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                  | (0xa3U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                 | (0xa4U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                                | (0xa5U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                               | (0xa6U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))) 
                                                              | (0xa7U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                                                              ? 
                                                             ((0xa0U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                               ? 0x54U
                                                               : 
                                                              ((0xa1U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                ? 0x87U
                                                                : 
                                                               ((0xa2U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                 ? 0x17U
                                                                 : 
                                                                ((0xa3U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                  ? 0x43U
                                                                  : 
                                                                 ((0xa4U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                   ? 0x48U
                                                                   : 
                                                                  ((0xa5U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                    ? 0x49U
                                                                    : 
                                                                   ((0xa6U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                                     ? 0x52U
                                                                     : 0x50U)))))))
                                                              : 
                                                             ((0xa8U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)))
                                                               ? 0x21U
                                                               : 0U)))))))))))))))))))))));
    vlSelf->tb__DOT__SDI = ((IData)(tb__DOT__SDI__strong__out8) 
                            & (IData)(vlSelf->tb__DOT__spiflash__DOT__io1_oe));
    vlSelf->tb__DOT__io_in = ((0x1fffffffffULL & vlSelf->tb__DOT__io_in) 
                              | ((QData)((IData)(((IData)(tb__DOT__SDI__strong__out8) 
                                                  & (IData)(vlSelf->tb__DOT__spiflash__DOT__io1_oe)))) 
                                 << 0x25U));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_top 
        = (((2U >= (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                          >> 1U))) ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))] : 0U) == (IData)(tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_table));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high_next 
        = ((VL_SHIFTRS_III(32,32,32, tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1, 0xaU) 
            - vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low) 
           - (0xfffeU & ((((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                            ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                           [0U] : 0U) + (((2U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                           ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                          [1U] : 0U) 
                                         + ((4U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                             ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                            [2U] : 0U))) 
                         << 1U)));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band_low_next 
        = (((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
             ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band
             : vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low) 
           - VL_SHIFTRS_III(32,32,32, tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1, 0x14U));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h0482dd45__0 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle) 
           | (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_data_fetch_cycle));
    vlSelf->tb__DOT__uprj__DOT__tmr0_clk = (1U & (((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB) 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (vlSelf->tb__DOT__io_in 
                                                             >> 0x1dU))));
    vlSelf->tb__DOT__uprj__DOT__tmr1_clk = (1U & (((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB) 
                                                   >> 3U) 
                                                  & (IData)(
                                                            (vlSelf->tb__DOT__io_in 
                                                             >> 0x1eU))));
    vlSelf->tb__DOT__uprj__DOT__RXD = (1U & ((~ ((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA) 
                                                 >> 2U)) 
                                             | (IData)(
                                                       (vlSelf->tb__DOT__io_in 
                                                        >> 0x15U))));
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq0_trigger 
        = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA) 
                 & (IData)((vlSelf->tb__DOT__io_in 
                            >> 0x13U))));
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq6_trigger 
        = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB) 
                 & (IData)((vlSelf->tb__DOT__io_in 
                            >> 0x1bU))));
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq7_trigger 
        = (IData)((((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA) 
                    >> 7U) & (vlSelf->tb__DOT__io_in 
                              >> 0x1aU)));
    vlSelf->tb__DOT__uprj__DOT__reset = (1U & ((~ (IData)(vlSelf->rst_n)) 
                                               | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en)
                                                   ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override)
                                                   : 
                                                  (~ (IData)(vlSelf->tb__DOT__io_in)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in 
        = (0xffU & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__cpu_hidden_rom_enable) 
                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable))
                     ? (IData)(vlSelf->tb__DOT__uprj__DOT__boot_rom__DOT__rom_data)
                     : (((IData)(vlSelf->tb__DOT__uprj__DOT__ram_enabled) 
                         & (0U == (0xf000U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))
                         ? (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__curr_Q)
                         : (IData)((vlSelf->tb__DOT__io_in 
                                    >> 5U)))));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__reset) 
           | (0U != (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__warmup)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__zbr_target 
        = ((((0x40U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in))
              ? 7U : 0U) << 6U) | (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_eff_address 
        = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg) 
            << 0xdU) | (0x1fffU & ((IData)(1U) + ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC) 
                                                  + 
                                                  ((0x1000U 
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
                                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in))))))))))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction 
        = ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))
            ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in)
            : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_add_sub 
        = ((4U == (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                         >> 5U))) | (5U == (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                  >> 5U))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BRANCH_SUB 
        = (IData)(((0x30U == (0x30U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                   & (0xfU != (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                       >> 4U)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_LIR 
        = ((0x92U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_SIR 
        = ((0x93U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_2_param 
        = ((3U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                         >> 2U))) | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend) 
                                     & (8U == (0xcU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CPL 
        = (IData)(((0xe0U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_TRAP 
        = ((0x90U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLRT 
        = ((0x91U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_XCHG 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x91U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_PUSH 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x10U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_POP 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x11U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_PSHS 
        = ((0x10U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_POPS 
        = ((0x11U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_SVB 
        = ((0x12U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CHRP 
        = ((0x13U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_MUL 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x90U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RRR 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x50U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RRL 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0xd0U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_LPS 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x92U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_SPS 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x12U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_READ 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & ((0xcU == (0x3fU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                 >> 2U))) | (0x1cU 
                                             == (0x3fU 
                                                 & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                    >> 2U)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_TPS 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0xb4U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CPS 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x74U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_PPS 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x76U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT_IO 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & ((0x15U == (0x3fU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                  >> 2U))) | (0x35U 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                     >> 2U)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_TMI 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0xf4U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indexed 
        = ((IData)((((0xcU == (0xcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h5a2433b0__0)) 
                    & ((0U != (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch) 
                                     >> 0xdU))) & (3U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                       >> 3U)))))) 
           | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend) 
              & ((3U == (0x3fU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                  >> 2U))) | (0x33U 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                     >> 2U))))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_HALT 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x40U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_COM 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0xe0U == (0xf0U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0xb7U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLR 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0xc4U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RETURN 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & ((5U == (0x3fU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                               >> 2U))) | (0xdU == 
                                           (0x3fU & 
                                            ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                             >> 2U)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_DAR 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0x94U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre 
        = (((2U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                          >> 2U))) | (3U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                   >> 2U)))) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h5a2433b0__0));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ZBR 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & ((0x9bU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
              | (0xbbU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BXA 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & ((0x9fU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
              | (0xbfU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH 
        = ((1U == (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                           >> 4U))) | ((3U == (0xfU 
                                               & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                  >> 4U))) 
                                       | ((9U == (0xfU 
                                                  & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                     >> 4U))) 
                                          | (0xbU == 
                                             (0xfU 
                                              & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                 >> 4U))))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & ((0x2cU == (0x3fU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                  >> 2U))) | (0x3cU 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                     >> 2U)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_NOP 
        = ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
           & (0xc0U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a 
        = ((4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                  >> 2U)) | (3U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_param 
        = (((1U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                          >> 2U))) | (2U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                   >> 2U)))) 
           & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RETURN)) 
              & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_DAR)) 
                 & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLR)) 
                    & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT)) 
                       & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)))))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_p1 
        = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in) 
            >> 7U) & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_p2 
        = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch) 
            >> 0xfU) & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0 
        = ((~ ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
               >> 7U)) & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_store 
        = ((IData)((((0xc0U == (0xf0U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                     & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_NOP))) 
                    & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)))) 
           | (IData)(((0xc8U == (0xf8U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
        [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a];
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ALU_op 
        = (1U & ((~ ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                     >> 4U)) & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_store)) 
                                & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_HALT)) 
                                   & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_COM)) 
                                      & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                                         | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                            >> 3U)))))));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc 
        = (((3U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
            | ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc))) 
           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_store));
    if ((8U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl))) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrr 
            = ((0x80U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                         << 7U)) | (0x7fU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                             >> 1U)));
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrl 
            = ((0xfeU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                         << 1U)) | (1U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)));
    } else {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrr 
            = ((0x80U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                         << 7U)) | (0x7fU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                             >> 1U)));
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrl 
            = ((0xfeU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                         << 1U)) | (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                          >> 7U)));
    }
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg 
        = (0xffU & ((0xdU == (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                      >> 4U))) ? ((IData)(1U) 
                                                  + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index))
                     : ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                        - (0xfU == (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                            >> 4U))))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_data1)
            ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc49c8b73__0)
            : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index));
    if ((0U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                      >> 2U)))) {
        tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2 
            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index;
        tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1 
            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc49c8b73__0;
    } else {
        tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2 
            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in;
        tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1 
            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg;
    }
    vlSelf->tb__DOT__uprj__DOT__requested_addr = (0xffffU 
                                                  & (((3U 
                                                       == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))
                                                       ? 
                                                      (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend) 
                                                        | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc))
                                                        ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch)
                                                        : 
                                                       (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg) 
                                                         << 0xdU) 
                                                        | (0x1fffU 
                                                           & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch))))
                                                       : 
                                                      (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle)
                                                         ? 
                                                        (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg) 
                                                          << 0xdU) 
                                                         | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC))
                                                         : 
                                                        (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc) 
                                                          | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc))
                                                          ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_target)
                                                          : 0U)) 
                                                       + 
                                                       (((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle)) 
                                                         & (2U 
                                                            == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)))
                                                         ? 1U
                                                         : 0U))) 
                                                     + 
                                                     ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_data1)
                                                       ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index)
                                                       : 0U)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__should_branch 
        = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH) 
            & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                >> 7U) & ((3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                 >> 6U)) != (3U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))) 
           | (((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0) 
               & (3U == (3U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))) 
              | (((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0) 
                  & ((3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                            >> 6U)) == (3U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))) 
                 | (((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH)) 
                     & (0U != (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg))) 
                    | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ZBR) 
                       | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BXA))))));
    vlSelf->tb__DOT__uprj__DOT__le_lo_act = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h0482dd45__0) 
                                             & (((0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr)) 
                                                 != 
                                                 (0xffU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))) 
                                                & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc)) 
                                                   & ((0xffU 
                                                       & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                                                          >> 8U)) 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                                                          >> 8U))))));
    vlSelf->tb__DOT__uprj__DOT__le_hi_act = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h0482dd45__0) 
                                             & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc)) 
                                                & ((0xffU 
                                                    & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                                                       >> 8U)) 
                                                   != 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                                                       >> 8U)))));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2f264c6e__0 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
           != (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next 
        = (0x1ffU & ((1U == (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                   >> 5U))) ? ((0x100U 
                                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                   << 8U)) 
                                               | ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1) 
                                                  ^ (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2)))
                      : ((2U == (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                       >> 5U))) ? (
                                                   (0x100U 
                                                    & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                       << 8U)) 
                                                   | ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1) 
                                                      & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2)))
                          : ((3U == (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                           >> 5U)))
                              ? ((0x100U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                            << 8U)) 
                                 | ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1) 
                                    | (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2)))
                              : ((4U == (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                               >> 5U)))
                                  ? (((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1) 
                                      + (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2)) 
                                     + (1U & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                               >> 3U) 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl))))
                                  : ((5U == (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                   >> 5U)))
                                      ? (((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1) 
                                          + (0xffU 
                                             & (~ (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2)))) 
                                         + (IData)(
                                                   (8U 
                                                    != 
                                                    (9U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)))))
                                      : ((0x100U & 
                                          ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                           << 8U)) 
                                         | (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2))))))));
    vlSelf->tb__DOT__bus_out = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0)
                                          ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index)
                                          : ((IData)(vlSelf->tb__DOT__uprj__DOT__le_lo_act)
                                              ? (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr)
                                              : ((IData)(vlSelf->tb__DOT__uprj__DOT__le_hi_act)
                                                  ? 
                                                 ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                                                  >> 8U)
                                                  : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg)))));
    vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0 
        = ((~ ((~ (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc)) 
               | ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset) 
                  | (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2f264c6e__0)))) 
           & ((IData)(vlSelf->tb__DOT__uprj__DOT__ram_enabled) 
              & (0x1000U > (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb = 
        (1U & ((~ ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc) 
                   | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE) 
                      & (4U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))))) 
               | ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset) 
                  | ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc)) 
                     & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2f264c6e__0)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_ovf 
        = (((1U & ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1) 
                   >> 7U)) == (1U & ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2) 
                                     >> 7U))) & ((1U 
                                                  & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next) 
                                                     >> 7U)) 
                                                 != 
                                                 (1U 
                                                  & ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1) 
                                                     >> 7U))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_idc 
        = (1U & (((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next) 
                         >> 4U)) != (1U & ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1) 
                                           >> 4U))) 
                 ^ ((5U == (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                  >> 5U))) ? (~ ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2) 
                                                 >> 4U))
                     : ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2) 
                        >> 4U))));
    vlSelf->tb__DOT__WEb = ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior))
                             ? ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb) 
                                & (IData)(vlSelf->clk))
                             : ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior))
                                 ? ((~ (IData)(vlSelf->clk)) 
                                    & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb))
                                 : (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb)));
}

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] tb.ROM_CS)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] tb.ROM_CS or [changed] tb.uprj.serial_ports.__Vcellout__spi__SCLK)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb.uprj.serial_ports.__Vcellout__spi__SCLK)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb.flag)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge tb.WEb)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge clk)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge tb.ROM_CS or posedge tb.uprj.serial_ports.__Vcellout__spi__SCLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] tb.ROM_CS)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] tb.ROM_CS or [changed] tb.uprj.serial_ports.__Vcellout__spi__SCLK)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb.uprj.serial_ports.__Vcellout__spi__SCLK)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb.flag)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge tb.WEb)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge clk)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge tb.ROM_CS or posedge tb.uprj.serial_ports.__Vcellout__spi__SCLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->wbs_stb_i = VL_RAND_RESET_I(1);
    vlSelf->wbs_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->wbs_we_i = VL_RAND_RESET_I(1);
    vlSelf->wbs_dat_i = VL_RAND_RESET_I(32);
    vlSelf->wbs_adr_i = VL_RAND_RESET_I(32);
    vlSelf->wbs_ack_o = VL_RAND_RESET_I(1);
    vlSelf->wbs_dat_o = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__io_in = VL_RAND_RESET_Q(38);
    vlSelf->tb__DOT__ROM_CS = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__SDO = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__SDI = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__WEb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__bus_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uart_init_state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT____Vtriunconn2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT____Vtriunconn4 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__irq0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__irq1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__irq2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__irq3 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__irq5 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__irq6 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__irq7 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__bus_data_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__bus_data_gpios = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__bus_cyc = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__bus_we_gpios = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__bus_data_timers = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__bus_we_timers = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__bus_data_serial_ports = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__bus_data_sid = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__bus_we_sid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__le_lo_act = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__le_hi_act = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__RAM_start_addr = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__RAM_end_addr = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__cs_port = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__ram_enabled = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__requested_addr = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT____Vcellinp__wrapped_as2650__irqs = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__uprj__DOT__tmr0_o = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__tmr1_o = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__RXD = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__tmr0_clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__tmr1_clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__DAC_clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__la_data_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__Q0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__Q1 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__Q2 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__Q3 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__Q4 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__Q5 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__Q6 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__Q7 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_feedback_delay = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__cpu_hidden_rom_enable = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in_plexed = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irq_num = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__warmup = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_target = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_interrupt_cycle = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RETURN = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_DAR = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLR = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_HALT = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_NOP = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_XCHG = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_MUL = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ZBR = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BXA = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_LPS = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_SPS = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_param = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_2_param = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indexed = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_p1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_p2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_COM = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ALU_op = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_add_sub = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_PUSH = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_POP = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_TPS = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CPS = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_PPS = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RRR = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RRL = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_TMI = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_READ = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CPL = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_PSHS = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_POPS = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_SVB = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CHRP = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT_IO = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_TRAP = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLRT = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_LIR = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_SIR = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_eff_address = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BRANCH_SUB = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__should_branch = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__zbr_target = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r1_a = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__mul_res = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrr = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrl = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_data1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_idc = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirpchar = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0 = 0;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h0482dd45__0 = 0;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc49c8b73__0 = 0;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h5a2433b0__0 = 0;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h06a17774__0 = 0;
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRA = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRB = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTA = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTB = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq0_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irg6_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq7_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq0_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq6_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq7_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__settings = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr0_ext = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr1_ext = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr0_clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr1_clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer0 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer1 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer2 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_capture = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_capture = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_capture = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre_counter = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre_counter = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre_counter = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_top = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_top = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_top = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw1 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw2 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_ien = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_has_byte = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_div = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_rec_byte = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_rec_byte = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_busy = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellinp__uart__start = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellinp__spi__start = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__boot_rom__DOT__rom_data = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__read_res = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_1 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_1 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_1 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_2 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_2 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_2 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_3 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_3 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_3 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_ctr = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT____Vcellinp__tt_um_rejunity_sn76489__we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sync_in = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum_next = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_period = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__mul_sample = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_top = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h9c41962c__0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h63536d3f__0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h531ab05d__0 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hdd8bc3f4__0 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hded46c95__0 = VL_RAND_RESET_I(22);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hf3367c70__0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h23d5ccfe__0 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_he79b84a8__0 = VL_RAND_RESET_I(15);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_he79b84a8__1 = VL_RAND_RESET_I(15);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h8d2418fb__0 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h47606175__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h8d2418fb__1 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h47606175__1 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h47606175__2 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h8d2418fb__2 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__0 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__1 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__2 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__3 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__4 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__5 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__6 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__7 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 = 0;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff = VL_RAND_RESET_I(15);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band_low_next = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high_next = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered_next = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff_next = VL_RAND_RESET_I(15);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__restart_noise = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__0__KET____DOT__attenuation__out = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__1__KET____DOT__attenuation__out = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__2__KET____DOT__attenuation__out = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__3__KET____DOT__attenuation__out = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr = VL_RAND_RESET_I(15);
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__curr_Q = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__spiflash__DOT__buffer = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__spiflash__DOT__reset_count = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__spiflash__DOT__reset_monitor = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__spiflash__DOT__bitcount = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__spiflash__DOT__bytecount = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__spiflash__DOT__dummycount = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__spiflash__DOT__spi_cmd = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__spiflash__DOT__xip_cmd = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__spiflash__DOT__spi_addr = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__spiflash__DOT__powered_up = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__spiflash__DOT__mode = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__spiflash__DOT__next_mode = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__spiflash__DOT__io0_oe = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__spiflash__DOT__io1_oe = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__spiflash__DOT__io2_oe = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__spiflash__DOT__io3_oe = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__spiflash__DOT__io0_dout = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__spiflash__DOT__io1_dout = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__spiflash__DOT__io2_dout = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__spiflash__DOT__io3_dout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        vlSelf->tb__DOT__spiflash__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdfgTmp_he37690df__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__ROM_CS__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__flag__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__WEb__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
