// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->tb__DOT__ROM_CS) {
        vlSelf->tb__DOT__spiflash__DOT__reset_count = 0U;
        vlSelf->tb__DOT__spiflash__DOT__reset_monitor = 0U;
    } else if ((9U > (IData)(vlSelf->tb__DOT__spiflash__DOT__reset_count))) {
        vlSelf->tb__DOT__spiflash__DOT__reset_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__spiflash__DOT__reset_count)));
        if (vlSelf->tb__DOT__SDO) {
            vlSelf->tb__DOT__spiflash__DOT__reset_monitor 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__spiflash__DOT__reset_monitor)));
        }
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__3\n"); );
    // Body
    if ((1U & (IData)(vlSelf->__VdfgTmp_he37690df__0))) {
        if (VL_UNLIKELY((0U == (IData)(vlSelf->tb__DOT__uart_init_state)))) {
            vlSelf->tb__DOT__uart_init_state = 1U;
            VL_WRITEF("Mode word: %b\n",8,vlSelf->tb__DOT__bus_out);
        } else if (VL_LIKELY((1U == (IData)(vlSelf->tb__DOT__uart_init_state)))) {
            VL_WRITEF("Command word: %b\n",8,vlSelf->tb__DOT__bus_out);
            vlSelf->tb__DOT__uart_init_state = 2U;
        } else {
            VL_WRITEF("%c",8,vlSelf->tb__DOT__bus_out);
            Verilated::runFlushCallbacks();
        }
    } else if ((2U & (IData)(vlSelf->__VdfgTmp_he37690df__0))) {
        if (VL_UNLIKELY((0x80U & (IData)(vlSelf->tb__DOT__bus_out)))) {
            VL_WRITEF("UART Reset\n");
            vlSelf->tb__DOT__uart_init_state = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__4(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->tb__DOT__ROM_CS = (1U & ((0x80U & (IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB))
                                      ? (IData)(vlSelf->tb__DOT__uprj__DOT__DAC_clk)
                                      : ((IData)(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTB) 
                                         >> 7U)));
    vlSelf->tb__DOT__SDO = (((IData)(vlSelf->tb__DOT__spiflash__DOT__io0_dout) 
                             & (IData)(vlSelf->tb__DOT__spiflash__DOT__io0_oe)) 
                            | (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO));
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
    vlSelf->tb__DOT__bus_out = (0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0)
                                          ? (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index)
                                          : ((IData)(vlSelf->tb__DOT__uprj__DOT__le_lo_act)
                                              ? (IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr)
                                              : ((IData)(vlSelf->tb__DOT__uprj__DOT__le_hi_act)
                                                  ? 
                                                 ((IData)(vlSelf->tb__DOT__uprj__DOT__requested_addr) 
                                                  >> 8U)
                                                  : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg)))));
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__4(vlSelf);
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);
void Vtb___024root___eval_act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtb___024root___eval_phase__ico(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb.v", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->wbs_stb_i & 0xfeU))) {
        Verilated::overWidthError("wbs_stb_i");}
    if (VL_UNLIKELY((vlSelf->wbs_cyc_i & 0xfeU))) {
        Verilated::overWidthError("wbs_cyc_i");}
    if (VL_UNLIKELY((vlSelf->wbs_we_i & 0xfeU))) {
        Verilated::overWidthError("wbs_we_i");}
}
#endif  // VL_DEBUG
