// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_INLINE_OPT void Vtb___024root___ico_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre = 0;
    CData/*7:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1 = 0;
    CData/*7:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2 = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0 = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0 = 0;
    // Body
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_valid 
        = ((IData)(vlSelf->wbs_cyc_i) & (IData)(vlSelf->wbs_stb_i));
    vlSelf->tb__DOT__io_in = ((0x3ffffffffeULL & vlSelf->tb__DOT__io_in) 
                              | (IData)((IData)(vlSelf->rst_n)));
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
                     : ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__in_ram_range)
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
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
           == (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb = 
        (1U & ((~ ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc) 
                   | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE) 
                      & (4U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))))) 
               | ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset) 
                  | ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc)) 
                     & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                        != (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr))))));
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
    vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0 
        = ((((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc) 
             & ((~ (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset)) 
                & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0))) 
            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__in_ram_range)) 
           & ((IData)(vlSelf->tb__DOT__uprj__DOT__ram_enabled) 
              & (0x1000U > (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))));
    vlSelf->tb__DOT__WEb = ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior))
                             ? ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb) 
                                & (IData)(vlSelf->clk))
                             : ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior))
                                 ? ((~ (IData)(vlSelf->clk)) 
                                    & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb))
                                 : (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb)));
    vlSelf->tb__DOT__bus_out = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0)
                                          ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index)
                                          : ((IData)(vlSelf->tb__DOT__uprj__DOT__le_lo_act)
                                              ? (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr)
                                              : ((IData)(vlSelf->tb__DOT__uprj__DOT__le_hi_act)
                                                  ? 
                                                 ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                                                  >> 8U)
                                                  : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg)))));
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
}

void Vtb___024root___eval_ico(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtb___024root___eval_triggers__ico(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__ico(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb__DOT__ROM_CS) {
        vlSelf->tb__DOT__spiflash__DOT__io2_oe = 0U;
        vlSelf->tb__DOT__spiflash__DOT__io3_oe = 0U;
        vlSelf->tb__DOT__spiflash__DOT__io0_oe = 0U;
        vlSelf->tb__DOT__spiflash__DOT__buffer = 0U;
        vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
        vlSelf->tb__DOT__spiflash__DOT__bytecount = 0U;
        vlSelf->tb__DOT__spiflash__DOT__mode = 1U;
        if ((((0xbbU == (IData)(vlSelf->tb__DOT__spiflash__DOT__xip_cmd)) 
              | (0xebU == (IData)(vlSelf->tb__DOT__spiflash__DOT__xip_cmd))) 
             | (0xedU == (IData)(vlSelf->tb__DOT__spiflash__DOT__xip_cmd)))) {
            if (((8U == (IData)(vlSelf->tb__DOT__spiflash__DOT__reset_count)) 
                 & (8U == (IData)(vlSelf->tb__DOT__spiflash__DOT__reset_monitor)))) {
                vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
                vlSelf->tb__DOT__spiflash__DOT__spi_cmd = 3U;
            }
        }
        vlSelf->tb__DOT__spiflash__DOT__io1_oe = 0U;
    } else if ((0U != (IData)(vlSelf->tb__DOT__spiflash__DOT__xip_cmd))) {
        vlSelf->tb__DOT__spiflash__DOT__buffer = vlSelf->tb__DOT__spiflash__DOT__xip_cmd;
        vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
        vlSelf->tb__DOT__spiflash__DOT__bytecount = 1U;
        vlSelf->tb__DOT__spiflash__DOT__spi_cmd = vlSelf->tb__DOT__spiflash__DOT__buffer;
        if ((0xabU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
            vlSelf->tb__DOT__spiflash__DOT__powered_up = 1U;
        }
        if ((0xb9U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
            vlSelf->tb__DOT__spiflash__DOT__powered_up = 0U;
        }
        if ((0xffU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
            vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
        }
        if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
             & (3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
            if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
            }
            if (VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__buffer 
                    = vlSelf->tb__DOT__spiflash__DOT__memory
                    [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
            }
        }
        if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
             & (0xbbU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
            if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__mode = 2U;
            }
            if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
            }
            if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                    = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                        ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                        : 0U);
                vlSelf->tb__DOT__spiflash__DOT__mode = 3U;
                vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
            }
            if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__buffer 
                    = vlSelf->tb__DOT__spiflash__DOT__memory
                    [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
            }
        }
        if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
             & (0xebU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
            if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__mode = 4U;
            }
            if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
            }
            if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                    = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                        ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                        : 0U);
                vlSelf->tb__DOT__spiflash__DOT__mode = 5U;
                vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
            }
            if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__buffer 
                    = vlSelf->tb__DOT__spiflash__DOT__memory
                    [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
            }
        }
        if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
             & (0xedU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
            if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__next_mode = 6U;
            }
            if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                          << 0x10U));
            }
            if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                          << 8U));
            }
            if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                       | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
            }
            if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                    = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                        ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                        : 0U);
                vlSelf->tb__DOT__spiflash__DOT__mode = 7U;
                vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
            }
            if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                vlSelf->tb__DOT__spiflash__DOT__buffer 
                    = vlSelf->tb__DOT__spiflash__DOT__memory
                    [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                    = (0xffffffU & ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
            }
        }
    }
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__1\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->tb__DOT__ROM_CS)))) {
        if (VL_LTS_III(32, 0U, vlSelf->tb__DOT__spiflash__DOT__dummycount)) {
            vlSelf->tb__DOT__spiflash__DOT__dummycount 
                = (vlSelf->tb__DOT__spiflash__DOT__dummycount 
                   - (IData)(1U));
        } else if ((1U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__buffer 
                = ((0xfeU & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                             << 1U)) | (IData)(vlSelf->tb__DOT__SDO));
            vlSelf->tb__DOT__spiflash__DOT__bitcount 
                = ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__bitcount);
            if ((8U == vlSelf->tb__DOT__spiflash__DOT__bitcount)) {
                vlSelf->tb__DOT__spiflash__DOT__bytecount 
                    = ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__bytecount);
                vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
                if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                    vlSelf->tb__DOT__spiflash__DOT__spi_cmd 
                        = vlSelf->tb__DOT__spiflash__DOT__buffer;
                    if ((0xabU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 1U;
                    }
                    if ((0xb9U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 0U;
                    }
                    if ((0xffU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
                    }
                }
                if (((0x90U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)) 
                     & VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount))) {
                    vlSelf->tb__DOT__spiflash__DOT__buffer = 0xabU;
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if (VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xbbU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 2U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 3U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xebU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 4U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 5U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xedU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__next_mode = 6U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 7U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
            }
        } else if (((2U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode)) 
                    || (3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode)))) {
            vlSelf->tb__DOT__spiflash__DOT__buffer 
                = ((0xfcU & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                             << 2U)) | (((IData)(vlSelf->tb__DOT__SDI) 
                                         << 1U) | (IData)(vlSelf->tb__DOT__SDO)));
            vlSelf->tb__DOT__spiflash__DOT__bitcount 
                = ((IData)(2U) + vlSelf->tb__DOT__spiflash__DOT__bitcount);
            if ((8U == vlSelf->tb__DOT__spiflash__DOT__bitcount)) {
                vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
                vlSelf->tb__DOT__spiflash__DOT__bytecount 
                    = ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__bytecount);
                if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                    vlSelf->tb__DOT__spiflash__DOT__spi_cmd 
                        = vlSelf->tb__DOT__spiflash__DOT__buffer;
                    if ((0xabU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 1U;
                    }
                    if ((0xb9U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 0U;
                    }
                    if ((0xffU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
                    }
                }
                if (((0x90U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)) 
                     & VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount))) {
                    vlSelf->tb__DOT__spiflash__DOT__buffer = 0xabU;
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if (VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xbbU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 2U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 3U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xebU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 4U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 5U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xedU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__next_mode = 6U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 7U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
            }
        } else if (((4U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode)) 
                    || (5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode)))) {
            vlSelf->tb__DOT__spiflash__DOT__buffer 
                = ((0xf0U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                             << 4U)) | (((IData)(vlSelf->tb__DOT____Vtriunconn4) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->tb__DOT____Vtriunconn2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->tb__DOT__SDI) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->tb__DOT__SDO)))));
            vlSelf->tb__DOT__spiflash__DOT__bitcount 
                = ((IData)(4U) + vlSelf->tb__DOT__spiflash__DOT__bitcount);
            if ((8U == vlSelf->tb__DOT__spiflash__DOT__bitcount)) {
                vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
                vlSelf->tb__DOT__spiflash__DOT__bytecount 
                    = ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__bytecount);
                if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                    vlSelf->tb__DOT__spiflash__DOT__spi_cmd 
                        = vlSelf->tb__DOT__spiflash__DOT__buffer;
                    if ((0xabU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 1U;
                    }
                    if ((0xb9U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 0U;
                    }
                    if ((0xffU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
                    }
                }
                if (((0x90U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)) 
                     & VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount))) {
                    vlSelf->tb__DOT__spiflash__DOT__buffer = 0xabU;
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if (VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xbbU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 2U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 3U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xebU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 4U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 5U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xedU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__next_mode = 6U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 7U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
            }
        } else if ((6U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__buffer 
                = ((0xf0U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                             << 4U)) | (((IData)(vlSelf->tb__DOT____Vtriunconn4) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->tb__DOT____Vtriunconn2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->tb__DOT__SDI) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->tb__DOT__SDO)))));
            vlSelf->tb__DOT__spiflash__DOT__bitcount 
                = ((IData)(4U) + vlSelf->tb__DOT__spiflash__DOT__bitcount);
            if ((8U == vlSelf->tb__DOT__spiflash__DOT__bitcount)) {
                vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
                vlSelf->tb__DOT__spiflash__DOT__bytecount 
                    = ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__bytecount);
                if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                    vlSelf->tb__DOT__spiflash__DOT__spi_cmd 
                        = vlSelf->tb__DOT__spiflash__DOT__buffer;
                    if ((0xabU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 1U;
                    }
                    if ((0xb9U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 0U;
                    }
                    if ((0xffU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
                    }
                }
                if (((0x90U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)) 
                     & VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount))) {
                    vlSelf->tb__DOT__spiflash__DOT__buffer = 0xabU;
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if (VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xbbU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 2U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 3U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xebU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 4U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 5U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xedU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__next_mode = 6U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 7U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
            }
        } else if ((7U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__io0_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io1_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io2_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io3_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io0_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 4U));
            vlSelf->tb__DOT__spiflash__DOT__io1_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 5U));
            vlSelf->tb__DOT__spiflash__DOT__io2_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 6U));
            vlSelf->tb__DOT__spiflash__DOT__io3_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 7U));
            vlSelf->tb__DOT__spiflash__DOT__buffer 
                = (0xf0U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                            << 4U));
            vlSelf->tb__DOT__spiflash__DOT__bitcount 
                = ((IData)(4U) + vlSelf->tb__DOT__spiflash__DOT__bitcount);
            if ((8U == vlSelf->tb__DOT__spiflash__DOT__bitcount)) {
                vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
                vlSelf->tb__DOT__spiflash__DOT__bytecount 
                    = ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__bytecount);
                if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                    vlSelf->tb__DOT__spiflash__DOT__spi_cmd 
                        = vlSelf->tb__DOT__spiflash__DOT__buffer;
                    if ((0xabU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 1U;
                    }
                    if ((0xb9U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 0U;
                    }
                    if ((0xffU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
                    }
                }
                if (((0x90U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)) 
                     & VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount))) {
                    vlSelf->tb__DOT__spiflash__DOT__buffer = 0xabU;
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if (VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xbbU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 2U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 3U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xebU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 4U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 5U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xedU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__next_mode = 6U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 7U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__2(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__2\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->tb__DOT__ROM_CS)) 
               & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK))))) {
        if (VL_LTS_III(32, 0U, vlSelf->tb__DOT__spiflash__DOT__dummycount)) {
            vlSelf->tb__DOT__spiflash__DOT__io0_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io1_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io2_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io3_oe = 0U;
        } else if ((1U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__io0_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io1_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io2_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io3_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io1_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 7U));
        } else if ((2U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__io0_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io1_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io2_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io3_oe = 0U;
        } else if ((3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__io0_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io1_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io2_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io3_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io0_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 6U));
            vlSelf->tb__DOT__spiflash__DOT__io1_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 7U));
        } else if ((4U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__io0_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io1_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io2_oe = 0U;
            vlSelf->tb__DOT__spiflash__DOT__io3_oe = 0U;
        } else if ((5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__io0_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io1_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io2_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io3_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io0_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 4U));
            vlSelf->tb__DOT__spiflash__DOT__io1_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 5U));
            vlSelf->tb__DOT__spiflash__DOT__io2_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 6U));
            vlSelf->tb__DOT__spiflash__DOT__io3_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 7U));
        } else if ((6U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__buffer 
                = ((0xf0U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                             << 4U)) | (((IData)(vlSelf->tb__DOT____Vtriunconn4) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->tb__DOT____Vtriunconn2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->tb__DOT__SDI) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->tb__DOT__SDO)))));
            vlSelf->tb__DOT__spiflash__DOT__bitcount 
                = ((IData)(4U) + vlSelf->tb__DOT__spiflash__DOT__bitcount);
            if ((8U == vlSelf->tb__DOT__spiflash__DOT__bitcount)) {
                vlSelf->tb__DOT__spiflash__DOT__bytecount 
                    = ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__bytecount);
                vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
                if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                    vlSelf->tb__DOT__spiflash__DOT__spi_cmd 
                        = vlSelf->tb__DOT__spiflash__DOT__buffer;
                    if ((0xabU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 1U;
                    }
                    if ((0xb9U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 0U;
                    }
                    if ((0xffU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
                    }
                }
                if (((0x90U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)) 
                     & VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount))) {
                    vlSelf->tb__DOT__spiflash__DOT__buffer = 0xabU;
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if (VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xbbU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 2U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 3U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xebU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 4U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 5U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xedU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__next_mode = 6U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 7U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
            }
        } else if ((7U == (IData)(vlSelf->tb__DOT__spiflash__DOT__mode))) {
            vlSelf->tb__DOT__spiflash__DOT__io0_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io1_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io2_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io3_oe = 1U;
            vlSelf->tb__DOT__spiflash__DOT__io0_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 4U));
            vlSelf->tb__DOT__spiflash__DOT__io1_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 5U));
            vlSelf->tb__DOT__spiflash__DOT__io2_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 6U));
            vlSelf->tb__DOT__spiflash__DOT__io3_dout 
                = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                         >> 7U));
            vlSelf->tb__DOT__spiflash__DOT__buffer 
                = (0xf0U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                            << 4U));
            vlSelf->tb__DOT__spiflash__DOT__bitcount 
                = ((IData)(4U) + vlSelf->tb__DOT__spiflash__DOT__bitcount);
            if ((8U == vlSelf->tb__DOT__spiflash__DOT__bitcount)) {
                vlSelf->tb__DOT__spiflash__DOT__bitcount = 0U;
                vlSelf->tb__DOT__spiflash__DOT__bytecount 
                    = ((IData)(1U) + vlSelf->tb__DOT__spiflash__DOT__bytecount);
                if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                    vlSelf->tb__DOT__spiflash__DOT__spi_cmd 
                        = vlSelf->tb__DOT__spiflash__DOT__buffer;
                    if ((0xabU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 1U;
                    }
                    if ((0xb9U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__powered_up = 0U;
                    }
                    if ((0xffU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd))) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd = 0U;
                    }
                }
                if (((0x90U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)) 
                     & VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount))) {
                    vlSelf->tb__DOT__spiflash__DOT__buffer = 0xabU;
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (3U == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if (VL_LTES_III(32, 4U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xbbU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 2U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 3U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xebU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__mode = 4U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 5U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
                if (((IData)(vlSelf->tb__DOT__spiflash__DOT__powered_up) 
                     & (0xedU == (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)))) {
                    if ((1U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__next_mode = 6U;
                    }
                    if ((2U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 0x10U));
                    }
                    if ((3U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xff00ffU & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                                  << 8U));
                    }
                    if ((4U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = ((0xffff00U & vlSelf->tb__DOT__spiflash__DOT__spi_addr) 
                               | (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer));
                    }
                    if ((5U == vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__xip_cmd 
                            = ((0xa5U == (IData)(vlSelf->tb__DOT__spiflash__DOT__buffer))
                                ? (IData)(vlSelf->tb__DOT__spiflash__DOT__spi_cmd)
                                : 0U);
                        vlSelf->tb__DOT__spiflash__DOT__mode = 7U;
                        vlSelf->tb__DOT__spiflash__DOT__dummycount = 8U;
                    }
                    if (VL_LTES_III(32, 5U, vlSelf->tb__DOT__spiflash__DOT__bytecount)) {
                        vlSelf->tb__DOT__spiflash__DOT__buffer 
                            = vlSelf->tb__DOT__spiflash__DOT__memory
                            [vlSelf->tb__DOT__spiflash__DOT__spi_addr];
                        vlSelf->tb__DOT__spiflash__DOT__spi_addr 
                            = (0xffffffU & ((IData)(1U) 
                                            + vlSelf->tb__DOT__spiflash__DOT__spi_addr));
                    }
                }
            }
        }
        if ((0U != (IData)(vlSelf->tb__DOT__spiflash__DOT__next_mode))) {
            if ((6U == (IData)(vlSelf->tb__DOT__spiflash__DOT__next_mode))) {
                vlSelf->tb__DOT__spiflash__DOT__io0_oe = 0U;
                vlSelf->tb__DOT__spiflash__DOT__io1_oe = 0U;
                vlSelf->tb__DOT__spiflash__DOT__io2_oe = 0U;
                vlSelf->tb__DOT__spiflash__DOT__io3_oe = 0U;
            } else if ((7U == (IData)(vlSelf->tb__DOT__spiflash__DOT__next_mode))) {
                vlSelf->tb__DOT__spiflash__DOT__io0_oe = 1U;
                vlSelf->tb__DOT__spiflash__DOT__io1_oe = 1U;
                vlSelf->tb__DOT__spiflash__DOT__io2_oe = 1U;
                vlSelf->tb__DOT__spiflash__DOT__io3_oe = 1U;
                vlSelf->tb__DOT__spiflash__DOT__io0_dout 
                    = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                             >> 4U));
                vlSelf->tb__DOT__spiflash__DOT__io1_dout 
                    = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                             >> 5U));
                vlSelf->tb__DOT__spiflash__DOT__io2_dout 
                    = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                             >> 6U));
                vlSelf->tb__DOT__spiflash__DOT__io3_dout 
                    = (1U & ((IData)(vlSelf->tb__DOT__spiflash__DOT__buffer) 
                             >> 7U));
            }
            vlSelf->tb__DOT__spiflash__DOT__mode = vlSelf->tb__DOT__spiflash__DOT__next_mode;
            vlSelf->tb__DOT__spiflash__DOT__next_mode = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb__DOT__SDI__strong__out8;
    tb__DOT__SDI__strong__out8 = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre = 0;
    CData/*7:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1 = 0;
    CData/*7:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2 = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0 = 0;
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc9759c1c__0 = 0;
    // Body
    vlSelf->tb__DOT____Vtriunconn2 = ((IData)(vlSelf->tb__DOT__spiflash__DOT__io2_dout) 
                                      & (IData)(vlSelf->tb__DOT__spiflash__DOT__io2_oe));
    vlSelf->tb__DOT____Vtriunconn4 = ((IData)(vlSelf->tb__DOT__spiflash__DOT__io3_dout) 
                                      & (IData)(vlSelf->tb__DOT__spiflash__DOT__io3_oe));
    vlSelf->tb__DOT__SDO = (((IData)(vlSelf->tb__DOT__spiflash__DOT__io0_dout) 
                             & (IData)(vlSelf->tb__DOT__spiflash__DOT__io0_oe)) 
                            | (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO));
    tb__DOT__SDI__strong__out8 = ((IData)(vlSelf->tb__DOT__spiflash__DOT__io1_dout) 
                                  & (IData)(vlSelf->tb__DOT__spiflash__DOT__io1_oe));
    vlSelf->tb__DOT__SDI = ((IData)(tb__DOT__SDI__strong__out8) 
                            & (IData)(vlSelf->tb__DOT__spiflash__DOT__io1_oe));
    vlSelf->tb__DOT__io_in = ((0x1fffffffffULL & vlSelf->tb__DOT__io_in) 
                              | ((QData)((IData)(((IData)(tb__DOT__SDI__strong__out8) 
                                                  & (IData)(vlSelf->tb__DOT__spiflash__DOT__io1_oe)))) 
                                 << 0x25U));
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
                     : ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__in_ram_range)
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
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
           == (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb = 
        (1U & ((~ ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc) 
                   | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE) 
                      & (4U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))))) 
               | ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset) 
                  | ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc)) 
                     & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                        != (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr))))));
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
    vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0 
        = ((((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc) 
             & ((~ (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset)) 
                & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0))) 
            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__in_ram_range)) 
           & ((IData)(vlSelf->tb__DOT__uprj__DOT__ram_enabled) 
              & (0x1000U > (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))));
    vlSelf->tb__DOT__WEb = ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior))
                             ? ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb) 
                                & (IData)(vlSelf->clk))
                             : ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior))
                                 ? ((~ (IData)(vlSelf->clk)) 
                                    & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb))
                                 : (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb)));
    vlSelf->tb__DOT__bus_out = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0)
                                          ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index)
                                          : ((IData)(vlSelf->tb__DOT__uprj__DOT__le_lo_act)
                                              ? (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr)
                                              : ((IData)(vlSelf->tb__DOT__uprj__DOT__le_hi_act)
                                                  ? 
                                                 ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                                                  >> 8U)
                                                  : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg)))));
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
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    // Body
    VL_FINISH_MT("tb.v", 42, "");
}

extern const VlUnpacked<SData/*9:0*/, 32> Vtb__ConstPool__TABLE_h6c64cb64_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vtb__ConstPool__TABLE_hf24594c5_0;
extern const VlUnpacked<SData/*14:0*/, 16> Vtb__ConstPool__TABLE_hc1e8b01b_0;
extern const VlUnpacked<SData/*10:0*/, 256> Vtb__ConstPool__TABLE_h8260c8ac_0;
extern const VlUnpacked<CData/*6:0*/, 8> Vtb__ConstPool__TABLE_h24a07610_0;

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    // Init
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
    CData/*0:0*/ tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0;
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0 = 0;
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
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in1;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in1 = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in2;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in2 = 0;
    CData/*2:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__1__targ_reg;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__1__targ_reg = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__2__val;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__2__val = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__3__val;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__3__val = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__4__val;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__4__val = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__5__val;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__5__val = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__6__val;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__6__val = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__7__val;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__7__val = 0;
    CData/*2:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__8__targ_reg;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__8__targ_reg = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__9__val;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__9__val = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in1;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in1 = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in2;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in2 = 0;
    SData/*15:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__11__target;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__11__target = 0;
    SData/*15:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__12__target;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__12__target = 0;
    SData/*15:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__13__target;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__13__target = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in1;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in1 = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in2;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in2 = 0;
    CData/*2:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__15__targ_reg;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__15__targ_reg = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__16__val;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__16__val = 0;
    CData/*7:0*/ __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__17__val;
    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__17__val = 0;
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
    IData/*31:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry = 0;
    CData/*1:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__ram_enabled;
    __Vdly__tb__DOT__uprj__DOT__ram_enabled = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uprj__DOT__cs_port;
    __Vdly__tb__DOT__uprj__DOT__cs_port = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__RAM_start_addr;
    __Vdly__tb__DOT__uprj__DOT__RAM_start_addr = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__RAM_end_addr;
    __Vdly__tb__DOT__uprj__DOT__RAM_end_addr = 0;
    CData/*7:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl = 0;
    CData/*7:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu = 0;
    CData/*3:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch = 0;
    SData/*12:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v0 = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg = 0;
    SData/*11:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v1;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v8;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v8;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v8 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v9;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v9;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v13;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v13 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v13;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v13 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v15;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v15 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v15;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v17;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v17 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v17;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v17 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4 = 0;
    SData/*15:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34;
    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34;
    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer0;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer0 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer1;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer1 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer2;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer2 = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre_counter;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre_counter = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre_counter;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre_counter = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre_counter;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre_counter = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_top;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_top = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_top;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_top = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_top;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_top = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_capture;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_capture = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_capture;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_capture = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_capture;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_capture = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__tmr0_o;
    __Vdly__tb__DOT__uprj__DOT__tmr0_o = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__tmr1_o;
    __Vdly__tb__DOT__uprj__DOT__tmr1_o = 0;
    CData/*7:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0 = 0;
    CData/*7:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1 = 0;
    CData/*7:0*/ __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2 = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__irq1;
    __Vdly__tb__DOT__uprj__DOT__irq1 = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__irq2;
    __Vdly__tb__DOT__uprj__DOT__irq2 = 0;
    CData/*3:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter = 0;
    SData/*9:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff = 0;
    SData/*15:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving = 0;
    CData/*7:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff = 0;
    CData/*3:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter = 0;
    CData/*4:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter = 0;
    CData/*7:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter = 0;
    CData/*7:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff = 0;
    CData/*7:0*/ __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v0 = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3 = 0;
    CData/*4:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3 = 0;
    CData/*0:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3 = 0;
    SData/*11:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3 = 0;
    SData/*14:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4 = 0;
    SData/*14:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3 = 0;
    CData/*0:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3;
    __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 = 0;
    IData/*21:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4;
    __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4 = 0;
    CData/*0:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3 = 0;
    CData/*1:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4 = 0;
    CData/*1:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5 = 0;
    CData/*1:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3 = 0;
    IData/*23:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3 = 0;
    CData/*4:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4 = 0;
    CData/*4:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5 = 0;
    CData/*4:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6 = 0;
    CData/*4:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7 = 0;
    CData/*4:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8 = 0;
    CData/*4:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9 = 0;
    CData/*4:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10 = 0;
    CData/*4:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10 = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step = 0;
    CData/*5:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter = 0;
    SData/*11:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0 = 0;
    SData/*11:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v0 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v4;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v4;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v4 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v5;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v5;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v5 = 0;
    CData/*3:0*/ __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3;
    __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v6;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v6 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v6;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v6 = 0;
    CData/*3:0*/ __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4;
    __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v7;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v7;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v7 = 0;
    CData/*3:0*/ __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5;
    __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v8;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v8;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v8 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v9;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v9;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v9 = 0;
    CData/*3:0*/ __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6;
    __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6 = 0;
    CData/*5:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v10;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v10 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v10;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v10 = 0;
    CData/*3:0*/ __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7;
    __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7 = 0;
    CData/*5:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7 = 0;
    CData/*3:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v11;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v11 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v11;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v11 = 0;
    CData/*3:0*/ __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8;
    __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8 = 0;
    CData/*5:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v0 = 0;
    CData/*2:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v1;
    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v1;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v1 = 0;
    CData/*4:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter = 0;
    SData/*9:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state = 0;
    SData/*9:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state = 0;
    SData/*9:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state = 0;
    CData/*6:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter = 0;
    SData/*14:0*/ __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr = 0;
    SData/*8:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvval__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvval__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvval__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvval__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvval__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvval__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvval__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvdim0__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvval__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0;
    __Vdlyvset__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0 = 0;
    // Body
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state;
    __Vdlyvset__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5 = 0U;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v0 = 0U;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable;
    __Vdly__tb__DOT__uprj__DOT__RAM_end_addr = vlSelf->tb__DOT__uprj__DOT__RAM_end_addr;
    __Vdly__tb__DOT__uprj__DOT__RAM_start_addr = vlSelf->tb__DOT__uprj__DOT__RAM_start_addr;
    __Vdly__tb__DOT__uprj__DOT__cs_port = vlSelf->tb__DOT__uprj__DOT__cs_port;
    __Vdly__tb__DOT__uprj__DOT__ram_enabled = vlSelf->tb__DOT__uprj__DOT__ram_enabled;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4 = 0U;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v1 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v8 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v9 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v17 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v0 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v1 = 0U;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle;
    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v4 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v5 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v6 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v7 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v8 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v9 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v10 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v11 = 0U;
    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v0 = 0U;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving;
    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0;
    __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter 
        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0;
    __Vdly__tb__DOT__uprj__DOT__tmr1_o = vlSelf->tb__DOT__uprj__DOT__tmr1_o;
    __Vdly__tb__DOT__uprj__DOT__tmr0_o = vlSelf->tb__DOT__uprj__DOT__tmr0_o;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_capture 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_capture;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_capture 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_capture;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_capture 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_capture;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_top 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_top;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_top 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_top;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_top 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_top;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre_counter 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre_counter;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre_counter 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre_counter;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre_counter 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre_counter;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer2 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer2;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer1 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer1;
    __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer0 
        = vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer0;
    __Vdly__tb__DOT__uprj__DOT__irq2 = vlSelf->tb__DOT__uprj__DOT__irq2;
    __Vdly__tb__DOT__uprj__DOT__irq1 = vlSelf->tb__DOT__uprj__DOT__irq1;
    if (((IData)(vlSelf->tb__DOT__uprj__DOT__reset) 
         | (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__restart_noise))) {
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr = 0x4000U;
    } else if ((((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_0) 
                 != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger)) 
                & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger))) {
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr 
            = ((4U & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise
                [0U]) ? ((0x4000U & (((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr) 
                                      << 0xeU) ^ (0xffffc000U 
                                                  & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr) 
                                                     << 0xdU)))) 
                         | (0x3fffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr) 
                                       >> 1U))) : (
                                                   (0x4000U 
                                                    & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr) 
                                                       << 0xeU)) 
                                                   | (0x3fffU 
                                                      & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr) 
                                                         >> 1U))));
    }
    if (vlSelf->tb__DOT__uprj__DOT__reset) {
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_ctr = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state = 0U;
        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v0 = 1U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div = 0U;
        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v0 = 1U;
        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v0 = 1U;
        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v0 = 1U;
        vlSelf->tb__DOT__uprj__DOT__bus_data_sid = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_2 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1 = 0x800U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2 = 0x800U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3 = 0x800U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_3 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_1 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_2 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_2 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_1 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_1 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_3 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_3 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc = 0U;
        vlSelf->tb__DOT__uprj__DOT__DAC_clk = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0 = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1 = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer0 = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer1 = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer2 = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre = 0xf000U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre = 0xf000U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre = 0xf000U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre_counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre_counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre_counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_top = 0xffffU;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_top = 0xffffU;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_top = 0xffffU;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_capture = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_capture = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_capture = 0U;
        __Vdly__tb__DOT__uprj__DOT__tmr0_o = 0U;
        __Vdly__tb__DOT__uprj__DOT__tmr1_o = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0 = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1 = 0U;
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2 = 0U;
        __Vdly__tb__DOT__uprj__DOT__irq1 = 0U;
        __Vdly__tb__DOT__uprj__DOT__irq2 = 0U;
        vlSelf->tb__DOT__uprj__DOT__irq5 = 0U;
        vlSelf->tb__DOT__uprj__DOT__bus_data_gpios = 0U;
        vlSelf->tb__DOT__uprj__DOT__irq3 = 0U;
        vlSelf->tb__DOT__uprj__DOT__bus_data_serial_ports = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__restart_noise = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff = 0U;
        __Vdly__tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step = 0U;
        vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr0_ext = 0U;
        vlSelf->tb__DOT__uprj__DOT__timers__DOT__settings = 0U;
        vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr1_ext = 0U;
        vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp = 0U;
        vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw0 = 0x80U;
        vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw1 = 0x80U;
        vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw2 = 0x80U;
        vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRA = 0U;
        vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRB = 0U;
        vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTA = 0U;
        vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__la_data_out = 0U;
        vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTB = 0U;
        vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA = 0U;
        vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB = 0U;
        vlSelf->tb__DOT__uprj__DOT__irq7 = 0U;
        vlSelf->tb__DOT__uprj__DOT__irq6 = 0U;
        vlSelf->tb__DOT__uprj__DOT__irq0 = 0U;
        vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_ien = 0U;
        vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter = 0x1fU;
        vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_rec_byte = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving = 0U;
        vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_rec_byte = 0U;
        vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_has_byte = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff = 0U;
        __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt = 0U;
        vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_div = 0xfU;
        vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div = 0xffU;
    } else {
        if ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter))) {
            __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter)));
            if ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter))) {
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state 
                    = (1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state)));
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter 
                    = (0x3ffU & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                                 [1U] - (IData)(1U)));
            } else {
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter 
                    = (0x3ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter) 
                                 - (IData)(1U)));
            }
            if ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter))) {
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state 
                    = (1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state)));
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter 
                    = (0x3ffU & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                                 [0U] - (IData)(1U)));
            } else {
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter 
                    = (0x3ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter) 
                                 - (IData)(1U)));
            }
            if ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter))) {
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state 
                    = (1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state)));
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter 
                    = (0x3ffU & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                                 [2U] - (IData)(1U)));
            } else {
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter 
                    = (0x3ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter) 
                                 - (IData)(1U)));
            }
        }
        if ((IData)((0x18U == (0x18U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter))))) {
            __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0 
                = (0xfffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff) 
                             >> 3U));
            __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1 
                = (0xfffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__0__KET____DOT__attenuation__out) 
                             + ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__1__KET____DOT__attenuation__out) 
                                + ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__2__KET____DOT__attenuation__out) 
                                   + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__3__KET____DOT__attenuation__out)))));
            if ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) {
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter = 0U;
            }
            vlSelf->tb__DOT__uprj__DOT__DAC_clk = 0U;
        } else {
            __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter)));
            if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter))) {
                vlSelf->tb__DOT__uprj__DOT__DAC_clk = 1U;
            } else {
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0 
                    = (0xffeU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0) 
                                 << 1U));
                __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1 
                    = (0xffeU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1) 
                                 << 1U));
                vlSelf->tb__DOT__uprj__DOT__DAC_clk = 0U;
            }
        }
        if (vlSelf->tb__DOT__uprj__DOT__sid__DOT__enable) {
            __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter)));
            vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_ctr = 0U;
            __Vdly__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div 
                = (7U & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div)));
            if (((3U != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel)) 
                 & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div)))) {
                vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h9c41962c__0 
                    = (IData)(((vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum_next 
                                >> 0x17U) & (~ (((2U 
                                                  >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                                  ? 
                                                 vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum
                                                 [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                                  : 0U) 
                                                >> 0x17U))));
                vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h531ab05d__0 
                    = (0xfffU & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__mul_sample 
                                 >> 8U));
                vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hdd8bc3f4__0 
                    = ((1U & ((((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                >> 1U) & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sync_in)) 
                              | ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                 >> 3U))) ? 0U : (0xffffffU 
                                                  & vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum_next));
                vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h23d5ccfe__0 
                    = ((((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                          ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter
                         [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                          : 0U) == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_period))
                        ? 0U : (0x1fU & ((IData)(1U) 
                                         + ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                             ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter
                                            [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                             : 0U))));
                if (((0U == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                              ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter
                             [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                              : 0U)) | (1U == ((2U 
                                                >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                                ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state
                                               [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                                : 0U)))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_he79b84a8__0 
                        = (0x7fffU & ((IData)(1U) + 
                                      ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                        ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter
                                       [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                        : 0U)));
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_he79b84a8__0;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                }
                vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h63536d3f__0 
                    = (1U & (((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                               ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum
                              [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                               : 0U) >> 0x17U));
                if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h23d5ccfe__0;
                    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3 = 1U;
                    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h9c41962c__0;
                    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3 = 1U;
                    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h531ab05d__0;
                    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3 = 1U;
                    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h63536d3f__0;
                    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3 = 1U;
                    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hdd8bc3f4__0;
                    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3 = 1U;
                    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                }
                if (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_top) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_he79b84a8__1 = 0U;
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_he79b84a8__1;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                }
                if ((1U & (((~ ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                >> 3U)) & (~ (((2U 
                                                >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                                ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum
                                               [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                                : 0U) 
                                              >> 0x13U))) 
                           & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum_next 
                              >> 0x13U)))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hf3367c70__0 
                        = (1U & (((vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                   >> 0x16U) ^ (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                >> 0x11U)) 
                                 | ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                    >> 3U)));
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hded46c95__0 
                            = (0x3fffffU & vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr
                               [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]);
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hded46c95__0;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 = 1U;
                        __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hf3367c70__0;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4 = 1U;
                        __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4 = 0U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    } else {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hded46c95__0 = 0U;
                    }
                }
                if ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg)))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h8d2418fb__0 = 3U;
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h8d2418fb__0;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                }
                if ((1U == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                             ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state
                            [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                             : 0U))) {
                    if (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_top) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h47606175__0 
                            = (0xffU & ((IData)(1U) 
                                        + ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                            ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                           [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                            : 0U)));
                        if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h47606175__0;
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3 = 1U;
                            __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                        }
                    }
                    if ((0xffU == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                    ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                   [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                    : 0U))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h8d2418fb__1 = 2U;
                        if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h8d2418fb__1;
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4 = 1U;
                            __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                        }
                    }
                } else if ((2U == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                    ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state
                                   [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                    : 0U))) {
                    if (((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_top) 
                         & (((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                              ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                             [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                              : 0U) != (0xffU & ((0xf0U 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel)) 
                                                 | (0xfU 
                                                    & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel) 
                                                       >> 4U))))))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h47606175__1 
                            = (0xffU & (((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                          ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                         [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                          : 0U) - (IData)(1U)));
                        if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h47606175__1;
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4 = 1U;
                            __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                        }
                    }
                } else if ((3U == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                    ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state
                                   [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                    : 0U))) {
                    if (((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_top) 
                         & (0U != ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                    ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                   [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                    : 0U)))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h47606175__2 
                            = (0xffU & (((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                          ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                         [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                          : 0U) - (IData)(1U)));
                        if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h47606175__2;
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5 = 1U;
                            __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                        }
                    }
                    if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h8d2418fb__2 = 1U;
                        if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_h8d2418fb__2;
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5 = 1U;
                            __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                        }
                    }
                }
            } else if (((3U != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel)) 
                        & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div))) {
                if ((0xffU == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                               [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                : 0U))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__0 = 1U;
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__0;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                } else if ((0x5dU == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                       ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                      [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                       : 0U))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__1 = 2U;
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__1;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                } else if ((0x36U == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                       ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                      [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                       : 0U))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__2 = 4U;
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__2;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                } else if ((0x1aU == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                       ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                      [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                       : 0U))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__3 = 8U;
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__3;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                } else if ((0xeU == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                      ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                     [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                      : 0U))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__4 = 0x10U;
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__4;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                } else if ((6U == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                    ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                   [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                    : 0U))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__5 = 0x1eU;
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__5;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                } else if ((0U == ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))
                                    ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                   [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel]
                                    : 0U))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__6 = 1U;
                    if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__6;
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                    }
                } else if ((2U >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__7 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods
                        [vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel];
                    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__7;
                    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10 = 1U;
                    __Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel;
                } else {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____Vlvbound_hff9cd4f8__7 = 0U;
                }
            }
            vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__restart_noise = 0U;
            if (vlSelf->tb__DOT__uprj__DOT__sid__DOT____Vcellinp__tt_um_rejunity_sn76489__we) {
                if ((0x80U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                    if ((0x40U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                        if ((0x20U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                            if ((1U & (~ ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                          >> 4U)))) {
                                __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v1 
                                    = (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                                __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v1 = 1U;
                                vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__restart_noise = 1U;
                            }
                            if ((0x10U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                                __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v4 
                                    = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                                __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v4 = 1U;
                            }
                        } else if ((0x10U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v5 
                                = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v5 = 1U;
                        } else {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3 
                                = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3 = 1U;
                            __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3 = 0U;
                        }
                    } else if ((0x20U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                        if ((0x10U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v6 
                                = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v6 = 1U;
                        } else {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4 
                                = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4 = 1U;
                            __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4 = 0U;
                        }
                    } else if ((0x10U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v7 
                            = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v7 = 1U;
                    } else {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5 
                            = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5 = 1U;
                        __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5 = 0U;
                    }
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg 
                        = (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                 >> 4U));
                } else if ((4U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg))) {
                    if ((2U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg))) {
                        if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v8 
                                = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                            __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v8 = 1U;
                        }
                    } else if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v9 
                            = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v9 = 1U;
                    } else {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6 
                            = (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6 = 1U;
                        __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6 = 4U;
                    }
                } else if ((2U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg))) {
                    if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v10 
                            = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v10 = 1U;
                    } else {
                        __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7 
                            = (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                        __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7 = 1U;
                        __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7 = 4U;
                    }
                } else if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg))) {
                    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v11 
                        = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v11 = 1U;
                } else {
                    __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8 
                        = (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                    __Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8 = 1U;
                    __Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8 = 4U;
                }
            }
            __Vdly__tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step 
                = (7U & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step)));
            if (((((((((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step)) 
                       | (1U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) 
                      | (2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) 
                     | (3U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) 
                    | (4U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) 
                   | (5U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) 
                  | (6U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) 
                 | (7U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step)))) {
                if ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high_next;
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered = 0U;
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff = 0x4000U;
                } else if ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band_low_next;
                    if ((0x40U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered_next;
                    }
                    if ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt)))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff_next;
                    }
                } else if ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band 
                        = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band_low_next;
                    if ((0x10U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered_next;
                    }
                    if ((1U & (~ ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt) 
                                  >> 1U)))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff_next;
                    }
                } else if ((3U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) {
                    if ((0x20U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered_next;
                    }
                    if ((1U & ((~ ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt) 
                                   >> 2U)) & (~ ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol) 
                                                 >> 7U))))) {
                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff 
                            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff_next;
                    }
                } else if ((4U != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) {
                    if ((5U != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) {
                        if ((6U != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))) {
                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff 
                                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff_next;
                        }
                    }
                }
            }
        } else {
            vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_ctr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_ctr)));
        }
        if (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
             & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_sid))) {
            if ((1U & (~ ((((((((0U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                | (1U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                               | (2U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                              | (3U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                             | (4U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                            | (5U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                           | (6U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                          | (7U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))))) {
                if ((1U & (~ ((((((((8U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                    | (9U == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                   | (0xaU == (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                  | (0xbU == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                 | (0xcU == (0x3fU 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                | (0xdU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                               | (0xeU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                              | (0xfU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))))) {
                    if ((1U & (~ ((((((((0x10U == (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                        | (0x11U == 
                                           (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                       | (0x12U == 
                                          (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                      | (0x13U == (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                     | (0x14U == (0x3fU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                    | (0x15U == (0x3fU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                   | (0x16U == (0x3fU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                  | (0x17U == (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))))) {
                        if ((0x18U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((0x19U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg 
                                    = (3U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                            }
                        }
                        if ((0x18U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol 
                                = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                        }
                    }
                    if (((((((((0x10U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                               | (0x11U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                              | (0x12U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                             | (0x13U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                            | (0x14U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                           | (0x15U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                          | (0x16U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                         | (0x17U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))) {
                        if ((0x10U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3 
                                = ((0xf00U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3)) 
                                   | (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                        } else if ((0x11U == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3 
                                = ((0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3)) 
                                   | (0xf00U & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                                << 8U)));
                        }
                        if ((0x10U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((0x11U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if ((0x12U == (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_3 
                                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                }
                                if ((0x12U != (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if ((0x13U == (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_3 
                                            = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                    }
                                    if ((0x13U != (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        if ((0x14U 
                                             == (0x3fU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_3 
                                                = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                        }
                                        if ((0x14U 
                                             != (0x3fU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            if ((0x15U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                                vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc 
                                                    = 
                                                    ((0x7f8U 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc)) 
                                                     | (7U 
                                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out)));
                                            } else if (
                                                       (0x16U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                                vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc 
                                                    = 
                                                    ((7U 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc)) 
                                                     | ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                                        << 3U));
                                            }
                                            if ((0x15U 
                                                 != 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                                if (
                                                    (0x16U 
                                                     != 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt 
                                                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (((((((((8U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                           | (9U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                          | (0xaU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                         | (0xbU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                        | (0xcU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                       | (0xdU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                      | (0xeU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                     | (0xfU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))) {
                    if ((8U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if ((9U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((0xaU != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if ((0xbU != (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if ((0xcU != (0x3fU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        if ((0xdU != 
                                             (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3 
                                                = (
                                                   (0xeU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                    ? 
                                                   ((0xff00U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3)) 
                                                    | (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))
                                                    : 
                                                   ((0xffU 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3)) 
                                                    | ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                                       << 8U)));
                                        }
                                        if ((0xdU == 
                                             (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_2 
                                                = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                        }
                                    }
                                    if ((0xcU == (0x3fU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_2 
                                            = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                    }
                                }
                                if ((0xbU == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_2 
                                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                }
                            }
                        }
                        if ((9U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2 
                                = ((0xf00U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2)) 
                                   | (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                        } else if ((0xaU == (0x3fU 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2 
                                = ((0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2)) 
                                   | (0xf00U & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                                << 8U)));
                        }
                    }
                }
            }
            if (((((((((0U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                       | (1U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                      | (2U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                     | (3U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                    | (4U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                   | (5U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                  | (6U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                 | (7U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))) {
                if ((0U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1 
                        = ((0xff00U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1)) 
                           | (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                } else if ((1U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1 
                        = ((0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1)) 
                           | ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                              << 8U));
                }
                if ((0U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if ((1U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if ((2U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((3U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if ((4U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if ((5U != (0x3fU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        if ((6U != 
                                             (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2)) 
                                                   | (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                                        }
                                        if ((6U == 
                                             (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_1 
                                                = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                        }
                                    }
                                    if ((5U == (0x3fU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_1 
                                            = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                    }
                                }
                                if ((4U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_1 
                                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                }
                            }
                        }
                        if ((2U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1 
                                = ((0xf00U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1)) 
                                   | (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                        } else if ((3U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1 
                                = ((0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1)) 
                                   | (0xf00U & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                                << 8U)));
                        }
                    }
                }
            } else if (((((((((8U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                              | (9U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                             | (0xaU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                            | (0xbU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                           | (0xcU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                          | (0xdU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                         | (0xeU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                        | (0xfU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))) {
                if ((8U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2 
                        = ((0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2)) 
                           | ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                              << 8U));
                }
            }
        }
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0)));
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1)));
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2)));
        if ((1U & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr0_ext)) 
                   | ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr0_clk)) 
                      & (IData)(vlSelf->tb__DOT__uprj__DOT__tmr0_clk))))) {
            __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre_counter)));
            if ((((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre_counter)) 
                 >= (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre))) {
                __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre_counter = 0U;
                __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer0 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer0)));
                if (((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer0) 
                     >= (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_top))) {
                    __Vdly__tb__DOT__uprj__DOT__tmr0_o 
                        = (1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__tmr0_o)));
                    __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer0 = 0U;
                    __Vdly__tb__DOT__uprj__DOT__irq1 
                        = (1U & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__settings));
                }
            }
        }
        if ((1U & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr1_ext)) 
                   | ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr1_clk)) 
                      & (IData)(vlSelf->tb__DOT__uprj__DOT__tmr1_clk))))) {
            __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre_counter)));
            if ((((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre_counter)) 
                 >= (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre))) {
                __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre_counter = 0U;
                __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer1 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer1)));
                if (((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer1) 
                     >= (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_top))) {
                    __Vdly__tb__DOT__uprj__DOT__tmr1_o 
                        = (1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__tmr1_o)));
                    __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer1 = 0U;
                    __Vdly__tb__DOT__uprj__DOT__irq2 
                        = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__settings) 
                                 >> 1U));
                }
            }
        }
        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre_counter 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre_counter)));
        if ((((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre_counter)) 
             >= (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre))) {
            __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre_counter = 0U;
            __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer2 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer2)));
            if (((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer2) 
                 > (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_top))) {
                __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer2 = 0U;
                vlSelf->tb__DOT__uprj__DOT__irq5 = 
                    (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__settings) 
                           >> 2U));
            }
        }
        vlSelf->tb__DOT__uprj__DOT__irq3 = ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_ien) 
                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_has_byte));
        if (vlSelf->tb__DOT__uprj__DOT__bus_cyc) {
            vlSelf->tb__DOT__uprj__DOT__bus_data_sid 
                = vlSelf->tb__DOT__uprj__DOT__sid__DOT__read_res;
            if (((((((((0U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                       | (1U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                      | (2U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                     | (3U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                    | (4U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                   | (5U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                  | (6U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                 | (7U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))) {
                if ((0U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = ((0xc0U & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr1_ext) 
                                     << 6U)) | (((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr0_ext) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->tb__DOT__uprj__DOT__irq2) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->tb__DOT__uprj__DOT__irq1) 
                                                       << 3U) 
                                                      | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__settings)))));
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                        if ((8U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                            __Vdly__tb__DOT__uprj__DOT__irq1 = 0U;
                        }
                        if ((0x10U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                            __Vdly__tb__DOT__uprj__DOT__irq2 = 0U;
                        }
                        if ((0x20U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                            vlSelf->tb__DOT__uprj__DOT__irq5 = 0U;
                        }
                        if ((0U == (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                          >> 3U)))) {
                            vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr0_ext 
                                = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                         >> 6U));
                            vlSelf->tb__DOT__uprj__DOT__timers__DOT__settings 
                                = (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                            vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr1_ext 
                                = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                         >> 7U));
                        }
                    }
                } else if ((1U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_capture 
                            = vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer0;
                        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_capture 
                            = vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer1;
                        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_capture 
                            = vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer2;
                    }
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers = 0xffU;
                } else if ((2U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre));
                } else if ((3U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre) 
                                    >> 8U));
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre 
                            = (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp));
                    }
                } else if ((4U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre));
                } else if ((5U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre) 
                                    >> 8U));
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre 
                            = (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp));
                    }
                } else if ((6U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre));
                } else {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre) 
                                    >> 8U));
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                        __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre 
                            = (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp));
                    }
                }
                if ((0U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if ((1U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if ((2U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                                vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp 
                                    = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                            }
                        } else if ((3U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((4U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                                    vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp 
                                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                }
                            } else if ((5U != (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if ((6U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                                        vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp 
                                            = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if (((((((((8U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                              | (9U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                             | (0xaU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                            | (0xbU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                           | (0xcU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                          | (0xdU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                         | (0xeU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                        | (0xfU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))) {
                if ((8U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_top));
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                        vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp 
                            = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                    }
                } else {
                    if ((9U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                            = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_top) 
                                        >> 8U));
                        if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                            __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_top 
                                = (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                    << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp));
                        }
                    } else if ((0xaU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_top));
                    } else if ((0xbU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                            = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_top) 
                                        >> 8U));
                        if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                            __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_top 
                                = (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                    << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp));
                        }
                    } else if ((0xcU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_top));
                    } else if ((0xdU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                            = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_top) 
                                        >> 8U));
                        if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                            __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_top 
                                = (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                    << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp));
                        }
                    } else if ((0xeU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_capture));
                    } else {
                        if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                            __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer0 
                                = (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                    << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp));
                        }
                        vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                            = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_capture) 
                                        >> 8U));
                    }
                    if ((9U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if ((0xaU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                                vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp 
                                    = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                            }
                        } else if ((0xbU != (0x3fU 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((0xcU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                                    vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp 
                                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                }
                            } else if ((0xdU != (0x3fU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if ((0xeU == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                                        vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp 
                                            = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                    = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_capture));
                if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                    vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp 
                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                }
            } else {
                if ((0x11U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                        __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer1 
                            = (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp));
                    }
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_capture) 
                                    >> 8U));
                } else if ((0x12U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_capture));
                } else if ((0x13U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                        __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer2 
                            = (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp));
                    }
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_capture) 
                                    >> 8U));
                } else {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_timers 
                        = ((0x14U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                            ? (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw0)
                            : ((0x15U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                ? (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw1)
                                : ((0x16U == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                    ? (IData)(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw2)
                                    : 0U)));
                }
                if ((0x11U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if ((0x12U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                            vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp 
                                = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                        }
                    }
                }
            }
            if (((((((((0U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                       | (1U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                      | (2U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                     | (3U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                    | (4U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                   | (5U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                  | (6U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                 | (7U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))) {
                if ((0U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_gpios 
                        = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRA));
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                        vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRA 
                            = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                    }
                } else {
                    vlSelf->tb__DOT__uprj__DOT__bus_data_gpios 
                        = (0xffU & ((1U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                     ? (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRB)
                                     : ((2U == (0xfU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                         ? (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTA)
                                         : ((3U == 
                                             (0xfU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                             ? (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTB)
                                             : ((4U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                 ? (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA)
                                                 : 
                                                ((5U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                  ? (IData)(
                                                            (vlSelf->tb__DOT__io_in 
                                                             >> 0x13U))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                   ? (IData)(
                                                             (vlSelf->tb__DOT__io_in 
                                                              >> 0x1bU))
                                                   : 
                                                  (((IData)(vlSelf->tb__DOT__uprj__DOT__irq7) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->tb__DOT__uprj__DOT__irq6) 
                                                       << 6U) 
                                                      | (IData)(vlSelf->tb__DOT__uprj__DOT__irq0))))))))));
                }
                if ((0U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if ((1U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                            vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRB 
                                = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                        }
                    }
                    if ((1U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if ((2U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                                vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTA 
                                    = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                            }
                        }
                        if ((2U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((3U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                                    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTB 
                                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                }
                            }
                            if ((3U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if ((4U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                                        vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA 
                                            = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                    }
                                }
                                if ((4U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if ((5U != (0xfU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        if ((6U != 
                                             (0xfU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                                                if (
                                                    (0x80U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                                                    vlSelf->tb__DOT__uprj__DOT__irq7 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->tb__DOT__uprj__DOT__bus_data_gpios 
                    = (0xffU & ((8U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                 ? (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB)
                                 : ((9U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                     ? (IData)(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__la_data_out)
                                     : 0xaaU)));
            }
            vlSelf->tb__DOT__uprj__DOT__bus_data_serial_ports 
                = (0xffU & ((0U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                             ? (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_ien)
                             : ((1U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                 ? (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div)
                                 : ((2U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                     ? ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div) 
                                        >> 8U) : ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                   ? 
                                                  (((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_has_byte) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_busy) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy)))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                    ? (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_div)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                     ? (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_rec_byte)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))
                                                      ? (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_rec_byte)
                                                      : 0U))))))));
            if ((1U & (~ ((((((((0U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                | (1U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                               | (2U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                              | (3U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                             | (4U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                            | (5U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                           | (6U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                          | (7U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))))) {
                if ((1U & (~ ((((((((8U == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                    | (9U == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                   | (0xaU == (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                  | (0xbU == (0x3fU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                 | (0xcU == (0x3fU 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                                | (0xdU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                               | (0xeU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                              | (0xfU == (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))))) {
                    if ((0x10U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if ((0x11U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((0x12U != (0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if ((0x13U != (0x3fU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if ((0x14U == (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                                            vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw0 
                                                = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                        }
                                    }
                                    if ((0x14U != (0x3fU 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        if ((0x15U 
                                             == (0x3fU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                                                vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw1 
                                                    = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                            }
                                        }
                                        if ((0x15U 
                                             != (0x3fU 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            if ((0x16U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                                if (vlSelf->tb__DOT__uprj__DOT__bus_we_timers) {
                                                    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw2 
                                                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((((((((0U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                | (1U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                               | (2U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                              | (3U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                             | (4U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                            | (5U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                           | (6U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                          | (7U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))))) {
                if ((8U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if ((9U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                            vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__la_data_out 
                                = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                        }
                    }
                }
                if ((8U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                        vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB 
                            = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                    }
                }
            }
        }
        if (((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq7_trigger) 
             & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq7_trigger)))) {
            vlSelf->tb__DOT__uprj__DOT__irq7 = 1U;
        }
        if (vlSelf->tb__DOT__uprj__DOT__bus_cyc) {
            if (((((((((0U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                       | (1U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                      | (2U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                     | (3U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                    | (4U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                   | (5U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                  | (6U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                 | (7U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))) {
                if ((0U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if ((1U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if ((2U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((3U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if ((4U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if ((5U != (0xfU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        if ((6U != 
                                             (0xfU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                                                    vlSelf->tb__DOT__uprj__DOT__irq6 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq6_trigger) 
             & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irg6_trigger)))) {
            vlSelf->tb__DOT__uprj__DOT__irq6 = 1U;
        }
        if (vlSelf->tb__DOT__uprj__DOT__bus_cyc) {
            if (((((((((0U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                       | (1U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                      | (2U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                     | (3U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                    | (4U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                   | (5U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                  | (6U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) 
                 | (7U == (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))))) {
                if ((0U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if ((1U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if ((2U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((3U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if ((4U != (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                    if ((5U != (0xfU 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                        if ((6U != 
                                             (0xfU 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                            if (vlSelf->tb__DOT__uprj__DOT__bus_we_gpios) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out))) {
                                                    vlSelf->tb__DOT__uprj__DOT__irq0 = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq0_trigger) 
             & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq0_trigger)))) {
            vlSelf->tb__DOT__uprj__DOT__irq0 = 1U;
        }
        if (vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellinp__uart__start) {
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter = 0xaU;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter = 0U;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff 
                = (0x200U | ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                             << 1U));
        }
        if ((0U != (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter))) {
            vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy = 1U;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter)));
            if (((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter) 
                 == (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div))) {
                __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter 
                    = (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter) 
                               - (IData)(1U)));
                __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff 
                    = (0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff) 
                                 >> 1U));
                __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter = 0U;
            }
        } else {
            vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy = 0U;
        }
        if (vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellinp__spi__start) {
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter = 0x10U;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter = 0U;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff 
                = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff = 1U;
            vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK = 0U;
        }
        if ((0x1fU != (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter))) {
            vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_busy = 1U;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter)));
            if (((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter) 
                 == (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_div))) {
                __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter 
                    = (0x1fU & ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter) 
                                - (IData)(1U)));
                __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter = 0U;
                if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter))) {
                    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff 
                        = ((0xfeU & ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff) 
                                     << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->tb__DOT__io_in 
                                                           >> 0x25U))));
                    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK = 1U;
                } else {
                    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO 
                        = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff) 
                                 >> 7U));
                    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK = 0U;
                    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff 
                        = (0xfeU & ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff) 
                                    << 1U));
                }
            }
        } else {
            vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK = 0U;
            vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO = 0U;
            vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_busy = 0U;
            vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_rec_byte 
                = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff;
        }
        if (((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
             & ((0U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports) 
                   & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                      >> 1U))))) {
            vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_has_byte = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving)) 
                   & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__RXD))))) {
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving = 1U;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter = 8U;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff = 0U;
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter = 0U;
        }
        if (vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving) {
            __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter)));
            if (((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter) 
                 == (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div))) {
                __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter 
                    = (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter) 
                               - (IData)(1U)));
                __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter = 0U;
                if ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter))) {
                    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving = 0U;
                    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_rec_byte 
                        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff;
                    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_has_byte = 1U;
                } else {
                    __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff 
                        = (((IData)(vlSelf->tb__DOT__uprj__DOT__RXD) 
                            << 7U) | (0x7fU & ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff) 
                                               >> 1U)));
                }
            }
        }
        if (vlSelf->tb__DOT__uprj__DOT__bus_cyc) {
            if ((0U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                if (vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports) {
                    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_ien 
                        = (1U & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                }
            }
            if ((0U != (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                if ((1U != (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if ((2U != (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                        if ((3U != (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                            if ((4U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                                if (vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports) {
                                    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_div 
                                        = vlSelf->tb__DOT__uprj__DOT__bus_data_out;
                                }
                            }
                        }
                    }
                }
                if ((1U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports) {
                        vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div 
                            = ((0xff00U & (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div)) 
                               | (IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out));
                    }
                } else if ((2U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr)))) {
                    if (vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports) {
                        vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div 
                            = ((0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div)) 
                               | ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                  << 8U));
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__reset)))) {
        vlSelf->tb__DOT__uprj__DOT__Q7 = vlSelf->tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory
            [(0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                        >> 3U))];
        if (((7U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
             & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))) {
            __Vdlyvval__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0 
                = vlSelf->tb__DOT__bus_out;
            __Vdlyvset__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0 = 1U;
            __Vdlyvdim0__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0 
                = (0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                             >> 3U));
        }
        vlSelf->tb__DOT__uprj__DOT__Q6 = vlSelf->tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory
            [(0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                        >> 3U))];
        if (((6U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
             & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))) {
            __Vdlyvval__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0 
                = vlSelf->tb__DOT__bus_out;
            __Vdlyvset__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0 = 1U;
            __Vdlyvdim0__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0 
                = (0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                             >> 3U));
        }
        vlSelf->tb__DOT__uprj__DOT__Q5 = vlSelf->tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory
            [(0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                        >> 3U))];
        if (((5U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
             & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))) {
            __Vdlyvval__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0 
                = vlSelf->tb__DOT__bus_out;
            __Vdlyvset__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0 = 1U;
            __Vdlyvdim0__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0 
                = (0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                             >> 3U));
        }
        vlSelf->tb__DOT__uprj__DOT__Q4 = vlSelf->tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory
            [(0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                        >> 3U))];
        if (((4U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
             & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))) {
            __Vdlyvval__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0 
                = vlSelf->tb__DOT__bus_out;
            __Vdlyvset__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0 = 1U;
            __Vdlyvdim0__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0 
                = (0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                             >> 3U));
        }
        vlSelf->tb__DOT__uprj__DOT__Q3 = vlSelf->tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory
            [(0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                        >> 3U))];
        if (((3U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
             & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))) {
            __Vdlyvval__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0 
                = vlSelf->tb__DOT__bus_out;
            __Vdlyvset__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0 = 1U;
            __Vdlyvdim0__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0 
                = (0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                             >> 3U));
        }
        vlSelf->tb__DOT__uprj__DOT__Q2 = vlSelf->tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory
            [(0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                        >> 3U))];
        if (((2U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
             & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))) {
            __Vdlyvval__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0 
                = vlSelf->tb__DOT__bus_out;
            __Vdlyvset__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0 = 1U;
            __Vdlyvdim0__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0 
                = (0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                             >> 3U));
        }
        vlSelf->tb__DOT__uprj__DOT__Q1 = vlSelf->tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory
            [(0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                        >> 3U))];
        if (((1U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
             & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))) {
            __Vdlyvval__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0 
                = vlSelf->tb__DOT__bus_out;
            __Vdlyvset__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0 = 1U;
            __Vdlyvdim0__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0 
                = (0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                             >> 3U));
        }
        vlSelf->tb__DOT__uprj__DOT__Q0 = vlSelf->tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory
            [(0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                        >> 3U))];
        if (((0U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
             & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))) {
            __Vdlyvval__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0 
                = vlSelf->tb__DOT__bus_out;
            __Vdlyvset__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0 = 1U;
            __Vdlyvdim0__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0 
                = (0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                             >> 3U));
        }
    }
    if (vlSelf->rst_n) {
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter 
            = ((IData)(1U) + vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter);
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_ready 
            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_feedback_delay;
        if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_valid) 
             & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_feedback_delay)))) {
            if ((0x400000U & vlSelf->wbs_adr_i)) {
                if (vlSelf->wbs_we_i) {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter 
                        = vlSelf->wbs_dat_i;
                } else {
                    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff 
                        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter;
                }
            } else if ((0x200000U & vlSelf->wbs_adr_i)) {
                if (vlSelf->wbs_we_i) {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc 
                        = (1U & vlSelf->wbs_dat_i);
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry 
                        = (1U & (vlSelf->wbs_dat_i 
                                 >> 1U));
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior 
                        = (3U & (vlSelf->wbs_dat_i 
                                 >> 2U));
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en 
                        = (1U & (vlSelf->wbs_dat_i 
                                 >> 4U));
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override 
                        = (1U & (vlSelf->wbs_dat_i 
                                 >> 5U));
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test 
                        = (1U & (vlSelf->wbs_dat_i 
                                 >> 6U));
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state 
                        = (1U & (vlSelf->wbs_dat_i 
                                 >> 7U));
                    __Vdly__tb__DOT__uprj__DOT__ram_enabled 
                        = (1U & (vlSelf->wbs_dat_i 
                                 >> 8U));
                } else {
                    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff 
                        = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                            << 0x11U) | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                          << 9U) | 
                                         (((IData)(vlSelf->tb__DOT__uprj__DOT__ram_enabled) 
                                           << 8U) | 
                                          (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state) 
                                            << 7U) 
                                           | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test) 
                                               << 6U) 
                                              | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc))))))))));
                }
            } else if ((IData)((0x180000U == (0x180000U 
                                              & vlSelf->wbs_adr_i)))) {
                if (vlSelf->wbs_we_i) {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable 
                        = (vlSelf->wbs_dat_i >> 0x1fU);
                    __Vdly__tb__DOT__uprj__DOT__cs_port 
                        = (7U & vlSelf->wbs_dat_i);
                } else {
                    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff 
                        = (0x31080000U | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable) 
                                           << 0x1fU) 
                                          | (IData)(vlSelf->tb__DOT__uprj__DOT__cs_port)));
                }
            } else if ((IData)((0x100000U == (0x180000U 
                                              & vlSelf->wbs_adr_i)))) {
                if (vlSelf->wbs_we_i) {
                    __Vdly__tb__DOT__uprj__DOT__RAM_start_addr 
                        = (0xffffU & vlSelf->wbs_dat_i);
                    __Vdly__tb__DOT__uprj__DOT__RAM_end_addr 
                        = (vlSelf->wbs_dat_i >> 0x10U);
                } else {
                    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff 
                        = (((IData)(vlSelf->tb__DOT__uprj__DOT__RAM_end_addr) 
                            << 0x10U) | (IData)(vlSelf->tb__DOT__uprj__DOT__RAM_start_addr));
                }
            } else if ((1U & (~ (IData)(vlSelf->wbs_we_i)))) {
                vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff = 0xffffffffU;
            }
        }
    } else {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_ready = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable = 0U;
        __Vdly__tb__DOT__uprj__DOT__ram_enabled = 0U;
    }
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div;
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[0U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[0U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[0U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[0U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[0U] = 0x555555U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[0U] = 0x7fffffU;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[0U] = 3U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[0U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[0U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[1U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[2U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[1U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[2U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[1U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[2U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[1U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[2U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[1U] = 0x555555U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[2U] = 0x555555U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[1U] = 0x7fffffU;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[2U] = 0x7fffffU;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[1U] = 3U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[2U] = 3U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[0U] = 1U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[1U] = 1U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[2U] = 1U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[1U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[2U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[1U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[2U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter__v4;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3] 
            = (((~ ((IData)(0x3fffffU) << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3))) 
                & vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr
                [__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3]) 
               | (0x7fffffU & (__Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3 
                               << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v3))));
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4))) 
                & vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr
                [__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4]) 
               | (0x7fffffU & ((IData)(__Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4) 
                               << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr__v4))));
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v4;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state__v5;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v4;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v5;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v6;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v7;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v8;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v9;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods__v10;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v4;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[__Vdlyvdim0__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol__v5;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise[0U] = 4U;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v1) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise[0U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise__v1;
    }
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr;
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v0) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[0U] = 1U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[1U] = 1U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[2U] = 1U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[0U] = 0xfU;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[1U] = 0xfU;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[2U] = 0xfU;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[3U] = 0xfU;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[2U] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3))) 
                & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                [2U]) | (0x3ffU & ((IData)(__Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3) 
                                   << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v3))));
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[1U] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4))) 
                & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                [1U]) | (0x3ffU & ((IData)(__Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4) 
                                   << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v4))));
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[0U] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5))) 
                & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                [0U]) | (0x3ffU & ((IData)(__Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5) 
                                   << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v5))));
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[2U] 
            = (((~ ((IData)(0x3fU) << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6))) 
                & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                [2U]) | (0x3ffU & ((IData)(__Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6) 
                                   << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v6))));
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[1U] 
            = (((~ ((IData)(0x3fU) << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7))) 
                & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                [1U]) | (0x3ffU & ((IData)(__Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7) 
                                   << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v7))));
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[0U] 
            = (((~ ((IData)(0x3fU) << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8))) 
                & vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                [0U]) | (0x3ffU & ((IData)(__Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8) 
                                   << (IData)(__Vdlyvlsb__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq__v8))));
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v4) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[3U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v4;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v5) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[2U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v5;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v6) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[1U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v6;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v7) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[0U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v7;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v8) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[3U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v8;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v9) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[2U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v9;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v10) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[1U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v10;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v11) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[0U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn__v11;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0) {
        vlSelf->tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory[__Vdlyvdim0__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sram7__DOT__sram512x8__DOT__memory__v0;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0) {
        vlSelf->tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory[__Vdlyvdim0__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sram6__DOT__sram512x8__DOT__memory__v0;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0) {
        vlSelf->tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory[__Vdlyvdim0__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sram5__DOT__sram512x8__DOT__memory__v0;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0) {
        vlSelf->tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory[__Vdlyvdim0__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sram4__DOT__sram512x8__DOT__memory__v0;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0) {
        vlSelf->tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory[__Vdlyvdim0__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sram3__DOT__sram512x8__DOT__memory__v0;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0) {
        vlSelf->tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory[__Vdlyvdim0__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sram2__DOT__sram512x8__DOT__memory__v0;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0) {
        vlSelf->tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory[__Vdlyvdim0__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sram1__DOT__sram512x8__DOT__memory__v0;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0) {
        vlSelf->tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory[__Vdlyvdim0__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0] 
            = __Vdlyvval__tb__DOT__uprj__DOT__sram0__DOT__sram512x8__DOT__memory__v0;
    }
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override;
    vlSelf->tb__DOT__uprj__DOT__RAM_start_addr = __Vdly__tb__DOT__uprj__DOT__RAM_start_addr;
    vlSelf->tb__DOT__uprj__DOT__RAM_end_addr = __Vdly__tb__DOT__uprj__DOT__RAM_end_addr;
    vlSelf->tb__DOT__uprj__DOT__cs_port = __Vdly__tb__DOT__uprj__DOT__cs_port;
    vlSelf->tb__DOT__uprj__DOT__ram_enabled = __Vdly__tb__DOT__uprj__DOT__ram_enabled;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer0 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer0;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer1 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer1;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer2 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__timer2;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre_counter 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0pre_counter;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre_counter 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1pre_counter;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre_counter 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2pre_counter;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_top 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_top;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_top 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_top;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_top 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_top;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_capture 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t0_capture;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_capture 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t1_capture;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_capture 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__t2_capture;
    vlSelf->tb__DOT__uprj__DOT__tmr0_o = __Vdly__tb__DOT__uprj__DOT__tmr0_o;
    vlSelf->tb__DOT__uprj__DOT__tmr1_o = __Vdly__tb__DOT__uprj__DOT__tmr1_o;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1;
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2 
        = __Vdly__tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2;
    vlSelf->tb__DOT__uprj__DOT__irq1 = __Vdly__tb__DOT__uprj__DOT__irq1;
    vlSelf->tb__DOT__uprj__DOT__irq2 = __Vdly__tb__DOT__uprj__DOT__irq2;
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_channel 
        = (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                 >> 1U));
    if ((0U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                      >> 1U)))) {
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sync_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs
            [2U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs
            [2U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1;
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
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs
            [0U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2;
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
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs
            [1U];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3;
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
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel = 0U;
    }
    if ((2U >= (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                      >> 1U)))) {
        tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))];
        tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))];
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_period 
            = vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))];
    } else {
        tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 = 0U;
        tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0 = 0U;
        vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_period = 0U;
    }
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_0 
        = ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__reset))) 
           && (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger));
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
    vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch 
        = vlSelf->tb__DOT__uprj__DOT__requested_addr;
    vlSelf->wbs_ack_o = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_ready;
    vlSelf->wbs_dat_o = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_feedback_delay 
        = ((IData)(vlSelf->rst_n) && (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_valid));
    __Vtableidx2 = vlSelf->tb__DOT__uprj__DOT__cs_port;
    tb__DOT__uprj__DOT__boot_rom__DOT__cs_port_bit 
        = Vtb__ConstPool__TABLE_hf24594c5_0[__Vtableidx2];
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr0_clk 
        = ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__reset))) 
           && (IData)(vlSelf->tb__DOT__uprj__DOT__tmr0_clk));
    vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr1_clk 
        = ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__reset))) 
           && (IData)(vlSelf->tb__DOT__uprj__DOT__tmr1_clk));
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
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__enable = 
        ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg)) 
         | ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_ctr) 
            == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg)));
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step 
        = __Vdly__tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff;
    vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter 
        = __Vdly__tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter;
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
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_top 
        = (((2U >= (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                          >> 1U))) ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter
            [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                    >> 1U))] : 0U) == (IData)(tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_table));
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
    vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered_next 
        = (vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered 
           + ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
               ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high
               : ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
                   ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low
                   : vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band)));
    vlSelf->tb__DOT__uprj__DOT__RXD = (1U & ((~ ((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA) 
                                                 >> 2U)) 
                                             | (IData)(
                                                       (vlSelf->tb__DOT__io_in 
                                                        >> 0x15U))));
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
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq7_trigger 
        = ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__reset))) 
           && (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq7_trigger));
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irg6_trigger 
        = ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__reset))) 
           && (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq6_trigger));
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq0_trigger 
        = ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__reset))) 
           && (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq0_trigger));
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq7_trigger 
        = (IData)((((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA) 
                    >> 7U) & (vlSelf->tb__DOT__io_in 
                              >> 0x1aU)));
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq6_trigger 
        = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB) 
                 & (IData)((vlSelf->tb__DOT__io_in 
                            >> 0x1bU))));
    vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq0_trigger 
        = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA) 
                 & (IData)((vlSelf->tb__DOT__io_in 
                            >> 0x13U))));
    __Vtableidx4 = vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt;
    tb__DOT__uprj__DOT__sid__DOT__filters__DOT__res_lut 
        = Vtb__ConstPool__TABLE_h8260c8ac_0[__Vtableidx4];
    if (((IData)(vlSelf->tb__DOT__uprj__DOT__reset) 
         | (0U != (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__warmup)))) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__warmup 
            = ((IData)(vlSelf->tb__DOT__uprj__DOT__reset)
                ? 3U : (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__warmup) 
                              - (IData)(1U))));
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu = 0x20U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr = 0xaaaaU;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_target = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc = 0U;
        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v0 = 1U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr = 0U;
        vlSelf->tb__DOT__uprj__DOT__bus_cyc = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we = 0U;
        vlSelf->tb__DOT__uprj__DOT__bus_data_out = 0U;
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__cpu_hidden_rom_enable 
            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable;
        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v1 = 1U;
    } else {
        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
            = ((0x7fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu)) 
               | (0x80U & ((IData)((vlSelf->tb__DOT__io_in 
                                    >> 4U)) << 7U)));
        if ((0x10U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl))) {
            __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v8 
                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                [4U];
            __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v8 = 1U;
        } else {
            __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v9 
                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                [0U];
            __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v9 = 1U;
        }
        if ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc = 0U;
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc = 0U;
            vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc = 0U;
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch = 0U;
            if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                 == (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr))) {
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
                    = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC)));
                vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin 
                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in;
                if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_LIR) {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch 
                        = ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                            [(3U | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h06a17774__0) 
                                    << 2U))] << 8U) 
                           | vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                           [(2U | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h06a17774__0) 
                                   << 2U))]);
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 3U;
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend = 0U;
                    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin = 0xcU;
                } else if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_SIR) {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch 
                        = ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                            [(3U | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h06a17774__0) 
                                    << 2U))] << 8U) 
                           | vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                           [(2U | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h06a17774__0) 
                                   << 2U))]);
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 3U;
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend = 0U;
                    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin = 0xccU;
                } else if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_param) 
                            | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_2_param))) {
                    if ((IData)(((0x18U == (0x18U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                                 & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__should_branch))))) {
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
                            = (0x1fffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC) 
                                          + ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_2_param)
                                              ? 3U : 2U)));
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0U;
                        if ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH)))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg;
                            __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10 = 1U;
                            __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                        }
                    } else {
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 1U;
                    }
                } else {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend 
                        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT;
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CPL) {
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11 
                            = (0xffU & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index)));
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_TRAP) {
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap = 1U;
                    }
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle 
                        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_HALT)
                            ? 7U : (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_READ) 
                                     | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE))
                                     ? 4U : 0U));
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLRT) {
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap = 0U;
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_XCHG) {
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                            [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r1_a];
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a;
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v13 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                            [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a];
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v13 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r1_a;
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_PUSH) {
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0 
                            = ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r1_a] 
                                << 8U) | vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                               [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a]);
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0 
                            = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu));
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                            = ((0xf0U & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu)) 
                               | (0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu))));
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_POP) {
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                            = ((0xf0U & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu)) 
                               | (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                                          - (IData)(1U))));
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS));
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a;
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v15 
                            = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS) 
                                        >> 8U));
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v15 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r1_a;
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_PSHS) {
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1 
                            = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                                << 8U) | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl));
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1 
                            = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu));
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                            = ((0xf0U & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu)) 
                               | (0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu))));
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_POPS) {
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                            = ((0xf0U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS) 
                                         >> 8U)) | 
                               (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                                        - (IData)(1U))));
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS));
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_SVB) {
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base 
                            = ((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r1_a] 
                                << 4U) | (0xfU & (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                                  [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a] 
                                                  >> 4U)));
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CHRP) {
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr)));
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirpchar;
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a;
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = (0x40U | (0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)));
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLR) {
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v17 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v17 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RETURN) {
                        if (((3U == (3U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                             | ((3U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                                == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                          >> 6U))))) {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                                = ((0xf0U & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu)) 
                                   | (0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                                              - (IData)(1U))));
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
                                = (0x1fffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS));
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg 
                                = (7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS) 
                                         >> 0xdU));
                            if ((0x20U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) {
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                                    = (0xdfU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu));
                            }
                        }
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_MUL) {
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__mul_res));
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a;
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                               | (((0x7fffU < (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__mul_res))
                                    ? 2U : ((0U != (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__mul_res))
                                             ? 1U : 0U)) 
                                  << 6U));
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19 
                            = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__mul_res) 
                                        >> 8U));
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r1_a;
                    }
                    if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_COM) 
                         & (0U == (0xcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))) {
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in2 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                            [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a];
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in1 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                            [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a];
                        if (((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in1) 
                             == (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in2))) {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = (0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl));
                        } else if ((1U & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                           >> 1U) | 
                                          ((1U & ((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in1) 
                                                  >> 7U)) 
                                           == (1U & 
                                               ((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in2) 
                                                >> 7U)))))) {
                            if (((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in1) 
                                 > (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in2))) {
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                    = (0x40U | (0x3fU 
                                                & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)));
                            } else if (((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in1) 
                                        < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in2))) {
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                    = (0x80U | (0x3fU 
                                                & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)));
                            }
                        } else {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (((0x80U & (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__0__in1))
                                        ? 2U : 1U) 
                                      << 6U));
                        }
                    } else if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ALU_op) 
                                & (0U == (0xcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))) {
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__1__targ_reg 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a;
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next));
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20 
                            = __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__1__targ_reg;
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = ((0xfeU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                               | (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next) 
                                        >> 8U)));
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__2__val 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next));
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                               | (((0x7fU < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__2__val))
                                    ? 2U : ((0U != (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__2__val))
                                             ? 1U : 0U)) 
                                  << 6U));
                        if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_add_sub) {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0xdfU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_idc) 
                                      << 5U));
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0xfbU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_ovf) 
                                      << 2U));
                        }
                    } else if ((((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_store) 
                                 & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_NOP))) 
                                & (0U == (0xcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                            [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a];
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__3__val 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                            [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a];
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                               | (((0x7fU < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__3__val))
                                    ? 2U : ((0U != (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__3__val))
                                             ? 1U : 0U)) 
                                  << 6U));
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_DAR) {
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22 
                            = ((0xf0U & (((vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                           [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a] 
                                           >> 4U) + 
                                          ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl))
                                            ? 0U : 0xaU)) 
                                         << 4U)) | 
                               (0xfU & (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                        [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a] 
                                        + ((0x20U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl))
                                            ? 0U : 0xaU))));
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RRR) {
                        if ((8U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl))) {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0xfeU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (1U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index)));
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0xdfU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (0x20U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                               >> 1U)));
                        }
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__4__val 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrr;
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrr;
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                               | (((0x7fU < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__4__val))
                                    ? 2U : ((0U != (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__4__val))
                                             ? 1U : 0U)) 
                                  << 6U));
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RRL) {
                        if ((8U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl))) {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0xfeU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                            >> 7U)));
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0xdfU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (0x20U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                               << 1U)));
                        }
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__5__val 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrl;
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrl;
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                               | (((0x7fU < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__5__val))
                                    ? 2U : ((0U != (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__5__val))
                                             ? 1U : 0U)) 
                                  << 6U));
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_LPS) {
                        if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a];
                        } else {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a];
                        }
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_SPS) {
                        if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) {
                            __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl;
                            __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25 = 1U;
                            __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a;
                            __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__6__val 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl;
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (((0x7fU < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__6__val))
                                        ? 2U : ((0U 
                                                 != (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__6__val))
                                                 ? 1U
                                                 : 0U)) 
                                      << 6U));
                        } else {
                            __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu;
                            __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26 = 1U;
                            __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a;
                            __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__7__val 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu;
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (((0x7fU < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__7__val))
                                        ? 2U : ((0U 
                                                 != (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__7__val))
                                                 ? 1U
                                                 : 0U)) 
                                      << 6U));
                        }
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                 == (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr))) {
                if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle) {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
                        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC)));
                }
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch 
                    = ((0xffU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch)) 
                       | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in) 
                          << 8U));
                if (((1U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                   >> 2U))) | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc))) {
                    if ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_store)))) {
                        if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ALU_op) {
                            __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__8__targ_reg 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                            __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27 
                                = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next));
                            __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27 = 1U;
                            __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27 
                                = __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__8__targ_reg;
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0xfeU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next) 
                                            >> 8U)));
                            __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__9__val 
                                = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next));
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (((0x7fU < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__9__val))
                                        ? 2U : ((0U 
                                                 != (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__9__val))
                                                 ? 1U
                                                 : 0U)) 
                                      << 6U));
                            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_add_sub) {
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                    = ((0xdfU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                       | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_idc) 
                                          << 5U));
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                    = ((0xfbU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                       | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_ovf) 
                                          << 2U));
                            }
                        } else {
                            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_TPS) {
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                    = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                       | ((((((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))
                                               ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)
                                               : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu)) 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in)) 
                                            == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in))
                                            ? 0U : 1U) 
                                          << 6U));
                            }
                            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT_IO) {
                                vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr 
                                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in;
                            }
                            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CPS) {
                                if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) {
                                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                           & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in)));
                                } else {
                                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                                        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                                           & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in)));
                                }
                            }
                            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_PPS) {
                                if ((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) {
                                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                           | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in));
                                } else {
                                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                                        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                                           | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in));
                                }
                            }
                            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_COM) {
                                __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in2 
                                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in;
                                __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in1 
                                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg;
                                if (((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in1) 
                                     == (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in2))) {
                                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                        = (0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl));
                                } else if ((1U & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                   >> 1U) 
                                                  | ((1U 
                                                      & ((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in1) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in2) 
                                                         >> 7U)))))) {
                                    if (((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in1) 
                                         > (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in2))) {
                                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                            = (0x40U 
                                               | (0x3fU 
                                                  & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)));
                                    } else if (((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in1) 
                                                < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in2))) {
                                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                            = (0x80U 
                                               | (0x3fU 
                                                  & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)));
                                    }
                                } else {
                                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                        = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                           | (((0x80U 
                                                & (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__10__in1))
                                                ? 2U
                                                : 1U) 
                                              << 6U));
                                }
                            }
                            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_TMI) {
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                    = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                       | (((((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in)) 
                                            == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index))
                                            ? 0U : 1U) 
                                          << 6U));
                            }
                        }
                    }
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle 
                        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT_IO)
                            ? 8U : 0U);
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend = 0U;
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc = 0U;
                } else if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_2_param) 
                            | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc))) {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 2U;
                } else if ((IData)(((8U == (0xcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_p1)))) {
                    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_target 
                        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ZBR)
                            ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__zbr_target)
                            : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_eff_address));
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc = 1U;
                } else if ((IData)(((8U == (0xcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                                    & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_p1))))) {
                    if ((3U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                      >> 3U)))) {
                        if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ZBR) {
                            __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__11__target 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__zbr_target;
                            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BRANCH_SUB) {
                                __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2 
                                    = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg) 
                                        << 0xdU) | 
                                       (0x1fffU & (
                                                   ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc) 
                                                    | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_interrupt_cycle))
                                                    ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC)))));
                                __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2 = 1U;
                                __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2 
                                    = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu));
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                                    = ((0xf0U & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu)) 
                                       | (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu))));
                            }
                            if ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH)))) {
                                __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28 
                                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg;
                                __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28 = 1U;
                                __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28 
                                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                            }
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
                                = (0x1fffU & (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__11__target));
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg 
                                = (7U & ((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__11__target) 
                                         >> 0xdU));
                        } else {
                            __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__12__target 
                                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_eff_address;
                            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BRANCH_SUB) {
                                __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3 
                                    = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg) 
                                        << 0xdU) | 
                                       (0x1fffU & (
                                                   ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc) 
                                                    | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_interrupt_cycle))
                                                    ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC)))));
                                __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3 = 1U;
                                __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3 
                                    = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu));
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                                    = ((0xf0U & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu)) 
                                       | (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu))));
                            }
                            if ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH)))) {
                                __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29 
                                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg;
                                __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29 = 1U;
                                __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29 
                                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                            }
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
                                = (0x1fffU & (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__12__target));
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg 
                                = (7U & ((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__12__target) 
                                         >> 0xdU));
                        }
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend = 0U;
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0U;
                    } else {
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc = 1U;
                        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_target 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_eff_address;
                    }
                }
            }
        }
        if ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                 == (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr))) {
                if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle) {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
                        = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC)));
                }
                if ((((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc)) 
                      & (0U != (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch) 
                                      >> 0xdU)))) & 
                     (3U != (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                   >> 3U))))) {
                    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc 
                        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indexed)
                            ? (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch) 
                                     >> 0xdU)) : 0U);
                    __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30 
                        = (0xffU & ((1U & (((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indexed)) 
                                            | (3U == 
                                               (3U 
                                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch) 
                                                   >> 0xdU)))) 
                                           | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)))
                                     ? vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                    [vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a]
                                     : ((1U == (3U 
                                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch) 
                                                   >> 0xdU)))
                                         ? ((IData)(1U) 
                                            + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index))
                                         : ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                            - (IData)(1U)))));
                    __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30 = 1U;
                    __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30 
                        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                }
                if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_p2) 
                     & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc)))) {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc = 1U;
                    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_target 
                        = ((3U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                         >> 3U))) ? 
                           ((0x8000U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg) 
                                        << 0xdU)) | 
                            ((0x7f00U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch)) 
                             | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in)))
                            : (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg) 
                                << 0xdU) | ((0x1f00U 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch)) 
                                            | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in))));
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 1U;
                } else if ((3U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                         >> 3U)))) {
                    __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__13__target 
                        = (0xffffU & ((((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc) 
                                        | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))
                                        ? ((0xff00U 
                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch)) 
                                           | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in))
                                        : ((0x8000U 
                                            & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg) 
                                               << 0xdU)) 
                                           | ((0x7f00U 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch)) 
                                              | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in)))) 
                                      + ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BXA)
                                          ? vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
                                         [(3U | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h06a17774__0) 
                                                 << 2U))]
                                          : 0U)));
                    if ((0x1fU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) {
                        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__cpu_hidden_rom_enable = 0U;
                    }
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BRANCH_SUB) {
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4 
                            = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg) 
                                << 0xdU) | (0x1fffU 
                                            & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc) 
                                                | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_interrupt_cycle))
                                                ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC)))));
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4 
                            = (0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu));
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                            = ((0xf0U & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu)) 
                               | (0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu))));
                    }
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0U;
                    if ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH)))) {
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg;
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                    }
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend = 0U;
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
                        = (0x1fffU & (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__13__target));
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg 
                        = (7U & ((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_branch__13__target) 
                                 >> 0xdU));
                } else {
                    __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 3U;
                }
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch 
                    = ((0xff00U & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch)) 
                       | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in));
            }
        }
        if ((3U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            if (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                 == (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr))) {
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc = 0U;
                vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc = 0U;
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch = 0U;
                if ((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_store)))) {
                    if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_COM) {
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in2 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in;
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in1 
                            = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg;
                        if (((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in1) 
                             == (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in2))) {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = (0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl));
                        } else if ((1U & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                           >> 1U) | 
                                          ((1U & ((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in1) 
                                                  >> 7U)) 
                                           == (1U & 
                                               ((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in2) 
                                                >> 7U)))))) {
                            if (((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in1) 
                                 > (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in2))) {
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                    = (0x40U | (0x3fU 
                                                & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)));
                            } else if (((IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in1) 
                                        < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in2))) {
                                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                    = (0x80U | (0x3fU 
                                                & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)));
                            }
                        } else {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | (((0x80U & (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_compare__14__in1))
                                        ? 2U : 1U) 
                                      << 6U));
                        }
                    } else if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ALU_op) {
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__15__targ_reg 
                            = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_data1)
                                ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a)
                                : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a));
                        __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next));
                        __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32 = 1U;
                        __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32 
                            = __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__perform_alu_op__15__targ_reg;
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = ((0xfeU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                               | (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next) 
                                        >> 8U)));
                        __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__16__val 
                            = (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next));
                        __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                            = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                               | (((0x7fU < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__16__val))
                                    ? 2U : ((0U != (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__16__val))
                                             ? 1U : 0U)) 
                                  << 6U));
                        if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_add_sub) {
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0xdfU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_idc) 
                                      << 5U));
                            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                                = ((0xfbU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                                   | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_ovf) 
                                      << 2U));
                        }
                    }
                }
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0U;
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend = 0U;
            }
        }
        if ((4U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 5U;
        }
        if ((5U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            if (vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_READ) {
                __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33 
                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in;
                __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33 = 1U;
                __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33 
                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                    = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                       | (((0x7fU < (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in))
                            ? 2U : ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in))
                                     ? 0U : 1U)) << 6U));
            }
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0U;
        }
        if ((8U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            vlSelf->tb__DOT__uprj__DOT__bus_cyc = 0U;
            vlSelf->tb__DOT__uprj__DOT__bus_data_out 
                = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index;
            vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we 
                = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                         >> 7U));
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 9U;
        }
        if ((9U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            vlSelf->tb__DOT__uprj__DOT__bus_cyc = 1U;
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0xaU;
        }
        if ((0xaU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0xbU;
        }
        if ((0xbU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            vlSelf->tb__DOT__uprj__DOT__bus_cyc = 0U;
            if ((1U & (~ ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                          >> 7U)))) {
                __Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__17__val 
                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in_plexed;
                __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34 
                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in_plexed;
                __Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34 = 1U;
                __Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34 
                    = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a;
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
                    = ((0x3fU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl)) 
                       | (((0x7fU < (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__17__val))
                            ? 2U : ((0U != (IData)(__Vtask_tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__set_cc_for__17__val))
                                     ? 1U : 0U)) << 6U));
            }
            vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we = 0U;
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0U;
        }
        if ((0xcU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))) {
            vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin = 0x3fU;
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc = 1U;
            vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_target 
                = (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base) 
                    << 4U) | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irq_num) 
                              << 1U));
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
                = (0x20U | (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu));
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 1U;
        }
        if (((7U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
             | ((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
                & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                   != (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr))))) {
            if (((0U != (IData)(vlSelf->tb__DOT__uprj__DOT____Vcellinp__wrapped_as2650__irqs)) 
                 & (~ ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                       >> 5U)))) {
                vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch 
                    = ((0xe0U & ((IData)(vlSelf->tb__DOT__uprj__DOT____Vcellinp__wrapped_as2650__irqs) 
                                 << 1U)) | (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap) 
                                             << 4U) 
                                            | (0xfU 
                                               & (IData)(vlSelf->tb__DOT__uprj__DOT____Vcellinp__wrapped_as2650__irqs))));
                __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle = 0xcU;
            }
        }
        if (vlSelf->tb__DOT__uprj__DOT__le_lo_act) {
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr 
                = ((0xff00U & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)) 
                   | (0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr)));
        }
        if (vlSelf->tb__DOT__uprj__DOT__le_hi_act) {
            __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr 
                = ((0xffU & (IData)(__Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr)) 
                   | (0xff00U & (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr)));
        }
    }
    tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1 
        = (((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
             ? (IData)(tb__DOT__uprj__DOT__sid__DOT__filters__DOT__res_lut)
             : ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc) 
                << 6U)) * ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))
                            ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high
                            : vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap;
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
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu;
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v0;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v1;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v2;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v3;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack__v4;
    }
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch;
    vlSelf->tb__DOT__uprj__DOT__reset = (1U & ((~ (IData)(vlSelf->rst_n)) 
                                               | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en)
                                                   ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override)
                                                   : 
                                                  (~ (IData)(vlSelf->tb__DOT__io_in)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl;
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v0) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[0U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v1) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[1U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[2U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[3U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[4U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[5U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[6U] = 0U;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[7U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v8) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[0U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v8;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v9) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[4U] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v9;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v10;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v11;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v12;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v13] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v13;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v14;
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v15] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v15;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v16;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v17) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v17] = 0U;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v18;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v19;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v20;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v21;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v22;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v23;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v24;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v25;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v26;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v27;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v28;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v29;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v30;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v31;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v32;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v33;
    }
    if (__Vdlyvset__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34) {
        vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[__Vdlyvdim0__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34] 
            = __Vdlyvval__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs__v34;
    }
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr 
        = __Vdly__tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr;
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
    __Vtableidx1 = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr;
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirpchar 
        = Vtb__ConstPool__TABLE_h24a07610_0[__Vtableidx1];
    vlSelf->tb__DOT__flag = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                                   >> 6U));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack
        [(0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu) 
                  - (IData)(1U)))];
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
    vlSelf->tb__DOT__uprj__DOT__bus_we_sid = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we) 
                                              & (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))));
    vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we) 
           & (0x80U == (0xc0U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))));
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
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__reset) 
           | (0U != (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__warmup)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r1_a 
        = (1U | (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                       >> 2U)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__r0_a 
        = (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                 >> 2U));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h06a17774__0 
        = (1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                 >> 4U));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_hc49c8b73__0 
        = vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs
        [(4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                >> 2U))];
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h5a2433b0__0 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc)) 
                 & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_interrupt_cycle 
        = (0xcU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc 
        = ((4U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
           | (5U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_data1 
        = ((0U != (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc)) 
           & (3U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)));
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_data_fetch_cycle 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc) 
           | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc) 
              | ((3U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)) 
                 | (0xcU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle)))));
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
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__in_ram_range 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__ram_enabled) 
           & (0U == (0xf000U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))));
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
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in 
        = (0xffU & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__cpu_hidden_rom_enable) 
                     & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable))
                     ? (IData)(vlSelf->tb__DOT__uprj__DOT__boot_rom__DOT__rom_data)
                     : ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__in_ram_range)
                         ? (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__curr_Q)
                         : (IData)((vlSelf->tb__DOT__io_in 
                                    >> 5U)))));
    vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h0482dd45__0 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle) 
           | (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_data_fetch_cycle));
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
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0 
        = ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
           == (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr));
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
    tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb = 
        (1U & ((~ ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc) 
                   | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE) 
                      & (4U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))))) 
               | ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset) 
                  | ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc)) 
                     & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                        != (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr))))));
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
    vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0 
        = ((((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc) 
             & ((~ (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset)) 
                & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2fcd7d02__0))) 
            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__in_ram_range)) 
           & ((IData)(vlSelf->tb__DOT__uprj__DOT__ram_enabled) 
              & (0x1000U > (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))));
    vlSelf->tb__DOT__WEb = ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior))
                             ? ((IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb) 
                                & (IData)(vlSelf->clk))
                             : ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior))
                                 ? ((~ (IData)(vlSelf->clk)) 
                                    & (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb))
                                 : (IData)(tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb)));
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
}
