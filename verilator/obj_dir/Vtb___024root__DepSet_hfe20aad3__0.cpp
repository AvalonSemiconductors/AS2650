// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__ico(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb__DOT__ROM_CS) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__ROM_CS__0)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->tb__DOT__ROM_CS) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__ROM_CS__0)) 
                                     | ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb__DOT__flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__flag__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->tb__DOT__WEb) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__WEb__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(6U, (((IData)(vlSelf->tb__DOT__ROM_CS) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__ROM_CS__0))) 
                                     | ((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK__0)))));
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__ROM_CS__0 
        = vlSelf->tb__DOT__ROM_CS;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK__0 
        = vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__flag__0 
        = vlSelf->tb__DOT__flag;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__WEb__0 
        = vlSelf->tb__DOT__WEb;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
