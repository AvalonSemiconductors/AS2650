// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgQData(oldp+0,(vlSelf->tb__DOT__io_in),38);
        bufp->chgSData(oldp+2,((0xffffU & (IData)((vlSelf->tb__DOT__io_in 
                                                   >> 0x13U)))),16);
        bufp->chgBit(oldp+3,((1U & (IData)((vlSelf->tb__DOT__io_in 
                                            >> 0x25U)))));
        bufp->chgIData(oldp+4,((0x7ffffU & (IData)(vlSelf->tb__DOT__io_in))),19);
        bufp->chgBit(oldp+5,((1U & (IData)((vlSelf->tb__DOT__io_in 
                                            >> 4U)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgQData(oldp+6,((0x2000000000ULL | (
                                                   ((QData)((IData)(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__io_oeb)) 
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
        bufp->chgBit(oldp+8,(vlSelf->tb__DOT__WEb));
        bufp->chgBit(oldp+9,(vlSelf->tb__DOT__uprj__DOT__reset));
        bufp->chgBit(oldp+10,((1U & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc)) 
                                     | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset) 
                                        | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h2f264c6e__0))))));
        bufp->chgBit(oldp+11,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_lo_act));
        bufp->chgBit(oldp+12,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_hi_act));
        bufp->chgSData(oldp+13,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__requested_addr),16);
        bufp->chgBit(oldp+14,(vlSelf->tb__DOT__uprj__DOT__RXD));
        bufp->chgBit(oldp+15,(vlSelf->tb__DOT__uprj__DOT__tmr0_clk));
        bufp->chgBit(oldp+16,(vlSelf->tb__DOT__uprj__DOT__tmr1_clk));
        bufp->chgSData(oldp+17,((0x1ffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__requested_addr) 
                                           >> 3U))),9);
        bufp->chgBit(oldp+18,((1U & (~ ((0U == (7U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
        bufp->chgBit(oldp+19,((1U & (~ ((1U == (7U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
        bufp->chgBit(oldp+20,((1U & (~ ((2U == (7U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
        bufp->chgBit(oldp+21,((1U & (~ ((3U == (7U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
        bufp->chgBit(oldp+22,((1U & (~ ((4U == (7U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
        bufp->chgBit(oldp+23,((1U & (~ ((5U == (7U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
        bufp->chgBit(oldp+24,((1U & (~ ((6U == (7U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
        bufp->chgBit(oldp+25,((1U & (~ ((7U == (7U 
                                                & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))) 
                                        & (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT____VdfgTmp_h69944c46__0))))));
        bufp->chgBit(oldp+26,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq0_trigger));
        bufp->chgBit(oldp+27,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq6_trigger));
        bufp->chgBit(oldp+28,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__irq7_trigger));
        bufp->chgBit(oldp+29,(((IData)(vlSelf->tb__DOT__uprj__DOT__reset) 
                               | (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__restart_noise))));
        bufp->chgIData(oldp+30,((0x11U | ((0x1fe0U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb)) 
                                                               | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_lo_act) 
                                                                  | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_hi_act) 
                                                                     | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0))))) 
                                                             | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset))))) 
                                              << 5U)) 
                                          | (8U & (
                                                   (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test)) 
                                                   << 3U))))),19);
        bufp->chgBit(oldp+31,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_lo_act) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_ha339f3e7__0))));
        bufp->chgBit(oldp+32,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_hi_act) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_ha339f3e7__0))));
        bufp->chgBit(oldp+33,((1U & ((~ (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h0482dd45__0) 
                                          & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr) 
                                             == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__requested_addr))) 
                                         | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc) 
                                            & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_READ)))) 
                                     | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset) 
                                        | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc))))));
        bufp->chgBit(oldp+34,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb));
        bufp->chgBit(oldp+35,((1U & ((~ ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__WEb)) 
                                         | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_lo_act) 
                                            | ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__le_hi_act) 
                                               | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT____VdfgTmp_h67c18dcd__0))))) 
                                     | (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset)))));
        bufp->chgCData(oldp+36,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in),8);
        bufp->chgBit(oldp+37,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__reset));
        bufp->chgCData(oldp+38,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction),8);
        bufp->chgCData(oldp+39,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index)))),8);
        bufp->chgCData(oldp+40,((0xffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index) 
                                          - (IData)(1U)))),8);
        bufp->chgCData(oldp+41,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__index),8);
        bufp->chgBit(oldp+42,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__write_cyc));
        bufp->chgBit(oldp+43,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RETURN));
        bufp->chgBit(oldp+44,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_DAR));
        bufp->chgBit(oldp+45,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLR));
        bufp->chgBit(oldp+46,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT));
        bufp->chgBit(oldp+47,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_HALT));
        bufp->chgBit(oldp+48,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_NOP));
        bufp->chgBit(oldp+49,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0x91U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))));
        bufp->chgBit(oldp+50,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0x90U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))));
        bufp->chgBit(oldp+51,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ZBR));
        bufp->chgBit(oldp+52,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BXA));
        bufp->chgBit(oldp+53,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0x92U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
        bufp->chgBit(oldp+54,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0x12U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
        bufp->chgBit(oldp+55,((3U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                            >> 3U)))));
        bufp->chgBit(oldp+56,((((1U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                              >> 2U))) 
                                | (2U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                                >> 2U)))) 
                               & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_RETURN)) 
                                  & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_DAR)) 
                                     & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CLR)) 
                                        & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT)) 
                                           & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)))))))));
        bufp->chgBit(oldp+57,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__needs_2_param));
        bufp->chgBit(oldp+58,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indexed));
        bufp->chgBit(oldp+59,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre));
        bufp->chgBit(oldp+60,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_p1));
        bufp->chgBit(oldp+61,((((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch) 
                                >> 0xfU) & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_indirect_pre))));
        bufp->chgBit(oldp+62,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_store));
        bufp->chgBit(oldp+63,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_COM));
        bufp->chgBit(oldp+64,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_ALU_op));
        bufp->chgBit(oldp+65,((1U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                            >> 2U)))));
        bufp->chgBit(oldp+66,((0U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                            >> 2U)))));
        bufp->chgBit(oldp+67,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_add_sub));
        bufp->chgBit(oldp+68,((2U == (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                            >> 2U)))));
        bufp->chgBit(oldp+69,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0x10U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))));
        bufp->chgBit(oldp+70,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0x11U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)))));
        bufp->chgBit(oldp+71,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0xb4U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
        bufp->chgBit(oldp+72,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0x74U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
        bufp->chgBit(oldp+73,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0x76U == (0xfeU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
        bufp->chgBit(oldp+74,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0x50U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
        bufp->chgBit(oldp+75,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0xd0U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
        bufp->chgBit(oldp+76,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)) 
                               & (0xf4U == (0xfcU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))));
        bufp->chgBit(oldp+77,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_READ));
        bufp->chgBit(oldp+78,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_IO_WRITE));
        bufp->chgBit(oldp+79,((IData)(((0xe0U == (0xfcU 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))) 
                                       & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)))));
        bufp->chgBit(oldp+80,(((0x10U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
        bufp->chgBit(oldp+81,(((0x11U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
        bufp->chgBit(oldp+82,(((0x12U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
        bufp->chgBit(oldp+83,(((0x13U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
        bufp->chgBit(oldp+84,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_EXT_IO));
        bufp->chgBit(oldp+85,(((0x90U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
        bufp->chgBit(oldp+86,(((0x91U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
        bufp->chgBit(oldp+87,(((0x92U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
        bufp->chgBit(oldp+88,(((0x93U == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction)) 
                               & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend))));
        bufp->chgCData(oldp+89,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instr_reg_a),3);
        bufp->chgSData(oldp+90,((0x1fffU & ((IData)(1U) 
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
        bufp->chgSData(oldp+91,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_eff_address),16);
        bufp->chgBit(oldp+92,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH));
        bufp->chgBit(oldp+93,((1U & (~ (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH)))));
        bufp->chgBit(oldp+94,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_BRANCH_SUB));
        bufp->chgCData(oldp+95,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__branch_compare_reg),8);
        bufp->chgBit(oldp+96,((((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_CC_BRANCH) 
                                & (((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                    >> 7U) & ((3U & 
                                               ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                                >> 6U)) 
                                              != (3U 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction))))) 
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
        bufp->chgSData(oldp+97,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__zbr_target),16);
        bufp->chgCData(oldp+98,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrr),8);
        bufp->chgCData(oldp+99,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__rrl),8);
        bufp->chgCData(oldp+100,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_instr_reg),8);
        bufp->chgCData(oldp+101,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input1),8);
        bufp->chgCData(oldp+102,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_input2),8);
        bufp->chgCData(oldp+103,((7U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction) 
                                        >> 5U))),3);
        bufp->chgSData(oldp+104,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__alu_next),9);
        bufp->chgBit(oldp+105,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_idc));
        bufp->chgBit(oldp+106,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__next_ovf));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+107,(vlSelf->tb__DOT__spiflash__DOT__buffer),8);
        bufp->chgIData(oldp+108,(vlSelf->tb__DOT__spiflash__DOT__bitcount),32);
        bufp->chgIData(oldp+109,(vlSelf->tb__DOT__spiflash__DOT__bytecount),32);
        bufp->chgIData(oldp+110,(vlSelf->tb__DOT__spiflash__DOT__dummycount),32);
        bufp->chgCData(oldp+111,(vlSelf->tb__DOT__spiflash__DOT__spi_cmd),8);
        bufp->chgCData(oldp+112,(vlSelf->tb__DOT__spiflash__DOT__xip_cmd),8);
        bufp->chgIData(oldp+113,(vlSelf->tb__DOT__spiflash__DOT__spi_addr),24);
        bufp->chgCData(oldp+114,(vlSelf->tb__DOT__spiflash__DOT__spi_in),8);
        bufp->chgCData(oldp+115,(vlSelf->tb__DOT__spiflash__DOT__spi_out),8);
        bufp->chgBit(oldp+116,(vlSelf->tb__DOT__spiflash__DOT__spi_io_vld));
        bufp->chgBit(oldp+117,(vlSelf->tb__DOT__spiflash__DOT__powered_up));
        bufp->chgCData(oldp+118,(vlSelf->tb__DOT__spiflash__DOT__mode),4);
        bufp->chgCData(oldp+119,(vlSelf->tb__DOT__spiflash__DOT__next_mode),4);
        bufp->chgBit(oldp+120,(vlSelf->tb__DOT__spiflash__DOT__io0_oe));
        bufp->chgBit(oldp+121,(vlSelf->tb__DOT__spiflash__DOT__io1_oe));
        bufp->chgBit(oldp+122,(vlSelf->tb__DOT__spiflash__DOT__io2_oe));
        bufp->chgBit(oldp+123,(vlSelf->tb__DOT__spiflash__DOT__io3_oe));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+124,(vlSelf->tb__DOT__SDI));
        bufp->chgBit(oldp+125,(vlSelf->tb__DOT____Vtriunconn2));
        bufp->chgBit(oldp+126,(vlSelf->tb__DOT____Vtriunconn4));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+127,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK));
        bufp->chgBit(oldp+128,(vlSelf->tb__DOT__flag));
        bufp->chgQData(oldp+129,((0xfe01fe00000000ULL 
                                  | (((QData)((IData)(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__la_data_out)) 
                                      << 0x38U) | (
                                                   ((QData)((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__halted)) 
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
        bufp->chgBit(oldp+131,(vlSelf->tb__DOT__uprj__DOT__irq0));
        bufp->chgBit(oldp+132,(vlSelf->tb__DOT__uprj__DOT__irq1));
        bufp->chgBit(oldp+133,(vlSelf->tb__DOT__uprj__DOT__irq2));
        bufp->chgBit(oldp+134,(vlSelf->tb__DOT__uprj__DOT__irq3));
        bufp->chgBit(oldp+135,(vlSelf->tb__DOT__uprj__DOT__irq5));
        bufp->chgBit(oldp+136,(vlSelf->tb__DOT__uprj__DOT__irq6));
        bufp->chgBit(oldp+137,(vlSelf->tb__DOT__uprj__DOT__irq7));
        bufp->chgCData(oldp+138,(vlSelf->tb__DOT__uprj__DOT__bus_data_out),8);
        bufp->chgCData(oldp+139,(vlSelf->tb__DOT__uprj__DOT__bus_data_gpios),8);
        bufp->chgBit(oldp+140,(vlSelf->tb__DOT__uprj__DOT__bus_cyc));
        bufp->chgCData(oldp+141,((0x3fU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))),6);
        bufp->chgBit(oldp+142,(vlSelf->tb__DOT__uprj__DOT__bus_we_gpios));
        bufp->chgCData(oldp+143,(vlSelf->tb__DOT__uprj__DOT__bus_data_timers),8);
        bufp->chgBit(oldp+144,(vlSelf->tb__DOT__uprj__DOT__bus_we_timers));
        bufp->chgCData(oldp+145,(vlSelf->tb__DOT__uprj__DOT__bus_data_serial_ports),8);
        bufp->chgBit(oldp+146,(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports));
        bufp->chgCData(oldp+147,(vlSelf->tb__DOT__uprj__DOT__bus_data_sid),8);
        bufp->chgBit(oldp+148,(vlSelf->tb__DOT__uprj__DOT__bus_we_sid));
        bufp->chgSData(oldp+149,(vlSelf->tb__DOT__uprj__DOT__RAM_start_addr),16);
        bufp->chgSData(oldp+150,(vlSelf->tb__DOT__uprj__DOT__RAM_end_addr),16);
        bufp->chgCData(oldp+151,(vlSelf->tb__DOT__uprj__DOT__cs_port),3);
        bufp->chgBit(oldp+152,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__cpu_hidden_rom_enable) 
                                & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable))));
        bufp->chgCData(oldp+153,(vlSelf->tb__DOT__uprj__DOT__boot_rom__DOT__rom_data),8);
        bufp->chgCData(oldp+154,(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__curr_Q),8);
        bufp->chgBit(oldp+155,(vlSelf->tb__DOT__uprj__DOT__ram_enabled));
        bufp->chgSData(oldp+156,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr),16);
        bufp->chgBit(oldp+157,(vlSelf->tb__DOT__uprj__DOT__tmr0_o));
        bufp->chgBit(oldp+158,(vlSelf->tb__DOT__uprj__DOT__tmr1_o));
        bufp->chgBit(oldp+159,(vlSelf->tb__DOT__uprj__DOT__pwm0));
        bufp->chgBit(oldp+160,(vlSelf->tb__DOT__uprj__DOT__pwm1));
        bufp->chgBit(oldp+161,(vlSelf->tb__DOT__uprj__DOT__pwm2));
        bufp->chgBit(oldp+162,(vlSelf->tb__DOT__uprj__DOT__TXD));
        bufp->chgBit(oldp+163,(vlSelf->tb__DOT__uprj__DOT__DAC_clk));
        bufp->chgBit(oldp+164,(vlSelf->tb__DOT__uprj__DOT__DAC_le));
        bufp->chgBit(oldp+165,(vlSelf->tb__DOT__uprj__DOT__DAC_d1));
        bufp->chgBit(oldp+166,(vlSelf->tb__DOT__uprj__DOT__DAC_d2));
        bufp->chgCData(oldp+167,(vlSelf->tb__DOT__uprj__DOT__Q0),8);
        bufp->chgCData(oldp+168,(vlSelf->tb__DOT__uprj__DOT__Q1),8);
        bufp->chgCData(oldp+169,(vlSelf->tb__DOT__uprj__DOT__Q2),8);
        bufp->chgCData(oldp+170,(vlSelf->tb__DOT__uprj__DOT__Q3),8);
        bufp->chgCData(oldp+171,(vlSelf->tb__DOT__uprj__DOT__Q4),8);
        bufp->chgCData(oldp+172,(vlSelf->tb__DOT__uprj__DOT__Q5),8);
        bufp->chgCData(oldp+173,(vlSelf->tb__DOT__uprj__DOT__Q6),8);
        bufp->chgCData(oldp+174,(vlSelf->tb__DOT__uprj__DOT__Q7),8);
        bufp->chgCData(oldp+175,((0xffU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))),8);
        bufp->chgCData(oldp+176,(vlSelf->tb__DOT__uprj__DOT__boot_rom__DOT__cs_port_bit),8);
        bufp->chgSData(oldp+177,(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__io_oeb),16);
        bufp->chgCData(oldp+178,((0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))),4);
        bufp->chgCData(oldp+179,(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__la_data_out),8);
        bufp->chgCData(oldp+180,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRA),8);
        bufp->chgCData(oldp+181,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__DDRB),8);
        bufp->chgCData(oldp+182,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTA),8);
        bufp->chgCData(oldp+183,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__PORTB),8);
        bufp->chgCData(oldp+184,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPA),8);
        bufp->chgCData(oldp+185,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__SPB),8);
        bufp->chgBit(oldp+186,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq0_trigger));
        bufp->chgBit(oldp+187,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irg6_trigger));
        bufp->chgBit(oldp+188,(vlSelf->tb__DOT__uprj__DOT__gpios__DOT__last_irq7_trigger));
        bufp->chgSData(oldp+189,(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch),16);
        bufp->chgBit(oldp+190,((0x1000U > (IData)(vlSelf->tb__DOT__uprj__DOT__ram_controller__DOT__requested_addr_latch))));
        bufp->chgCData(oldp+191,((((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO) 
                                   << 1U) | (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK))),3);
        bufp->chgCData(oldp+192,((7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))),3);
        bufp->chgBit(oldp+193,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_ien));
        bufp->chgBit(oldp+194,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy));
        bufp->chgBit(oldp+195,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_has_byte));
        bufp->chgSData(oldp+196,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_div),16);
        bufp->chgCData(oldp+197,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_div),8);
        bufp->chgCData(oldp+198,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_rec_byte),8);
        bufp->chgCData(oldp+199,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_rec_byte),8);
        bufp->chgBit(oldp+200,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_busy));
        bufp->chgBit(oldp+201,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO));
        bufp->chgBit(oldp+202,(((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
                                & ((5U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                   & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi_busy)) 
                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports))))));
        bufp->chgCData(oldp+203,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_out_buff),8);
        bufp->chgCData(oldp+204,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__data_in_buff),8);
        bufp->chgCData(oldp+205,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__div_counter),8);
        bufp->chgCData(oldp+206,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__spi__DOT__counter),5);
        bufp->chgBit(oldp+207,(((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
                                & ((3U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                   & ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart_busy)) 
                                      & (IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports))))));
        bufp->chgBit(oldp+208,(((IData)(vlSelf->tb__DOT__uprj__DOT__bus_cyc) 
                                & ((0U == (7U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr))) 
                                   & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_we_serial_ports) 
                                      & ((IData)(vlSelf->tb__DOT__uprj__DOT__bus_data_out) 
                                         >> 1U))))));
        bufp->chgSData(oldp+209,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__data_buff),10);
        bufp->chgSData(oldp+210,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__div_counter),16);
        bufp->chgCData(oldp+211,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__counter),4);
        bufp->chgBit(oldp+212,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receiving));
        bufp->chgCData(oldp+213,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_buff),8);
        bufp->chgCData(oldp+214,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_counter),4);
        bufp->chgSData(oldp+215,(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT__uart__DOT__receive_div_counter),16);
        bufp->chgCData(oldp+216,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__read_res),8);
        bufp->chgSData(oldp+217,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_1),16);
        bufp->chgSData(oldp+218,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_1),12);
        bufp->chgCData(oldp+219,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_1),8);
        bufp->chgCData(oldp+220,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_1),8);
        bufp->chgCData(oldp+221,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_1),8);
        bufp->chgSData(oldp+222,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_2),16);
        bufp->chgSData(oldp+223,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_2),12);
        bufp->chgCData(oldp+224,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_2),8);
        bufp->chgCData(oldp+225,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_2),8);
        bufp->chgCData(oldp+226,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_2),8);
        bufp->chgSData(oldp+227,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__freq_3),16);
        bufp->chgSData(oldp+228,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__pw_3),12);
        bufp->chgCData(oldp+229,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__ctrl_3),8);
        bufp->chgCData(oldp+230,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__atk_dec_3),8);
        bufp->chgCData(oldp+231,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__sus_rel_3),8);
        bufp->chgSData(oldp+232,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc),11);
        bufp->chgCData(oldp+233,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt),8);
        bufp->chgCData(oldp+234,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol),8);
        bufp->chgSData(oldp+235,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                 [0U]),12);
        bufp->chgSData(oldp+236,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                 [1U]),12);
        bufp->chgSData(oldp+237,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                 [2U]),12);
        bufp->chgCData(oldp+238,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                 [2U]),8);
        bufp->chgCData(oldp+239,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_ctr),2);
        bufp->chgCData(oldp+240,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__clk_trg),2);
        bufp->chgBit(oldp+241,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__enable));
        bufp->chgSData(oldp+242,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff),15);
        bufp->chgBit(oldp+243,((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step))));
        bufp->chgSData(oldp+244,((0xfffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__0__KET____DOT__attenuation__out) 
                                            + ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__1__KET____DOT__attenuation__out) 
                                               + ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__2__KET____DOT__attenuation__out) 
                                                  + (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__3__KET____DOT__attenuation__out)))))),12);
        bufp->chgSData(oldp+245,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[0]),12);
        bufp->chgSData(oldp+246,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[1]),12);
        bufp->chgSData(oldp+247,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples[2]),12);
        bufp->chgBit(oldp+248,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[0]));
        bufp->chgBit(oldp+249,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[1]));
        bufp->chgBit(oldp+250,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__ring_outs[2]));
        bufp->chgBit(oldp+251,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[0]));
        bufp->chgBit(oldp+252,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[1]));
        bufp->chgBit(oldp+253,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__sync_outs[2]));
        bufp->chgSData(oldp+254,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_freq),16);
        bufp->chgSData(oldp+255,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw),12);
        bufp->chgCData(oldp+256,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg),8);
        bufp->chgCData(oldp+257,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec),8);
        bufp->chgCData(oldp+258,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel),8);
        bufp->chgBit(oldp+259,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in));
        bufp->chgBit(oldp+260,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sync_in));
        bufp->chgBit(oldp+261,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                      >> 7U))));
        bufp->chgBit(oldp+262,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                      >> 6U))));
        bufp->chgBit(oldp+263,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                      >> 5U))));
        bufp->chgBit(oldp+264,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                      >> 4U))));
        bufp->chgBit(oldp+265,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                      >> 3U))));
        bufp->chgBit(oldp+266,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                      >> 2U))));
        bufp->chgBit(oldp+267,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                      >> 1U))));
        bufp->chgBit(oldp+268,((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))));
        bufp->chgCData(oldp+269,((0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+270,((0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec))),4);
        bufp->chgCData(oldp+271,((0xfU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+272,((0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel))),4);
        bufp->chgIData(oldp+273,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[0]),23);
        bufp->chgIData(oldp+274,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[1]),23);
        bufp->chgIData(oldp+275,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__lfsr[2]),23);
        bufp->chgIData(oldp+276,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[0]),24);
        bufp->chgIData(oldp+277,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[1]),24);
        bufp->chgIData(oldp+278,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum[2]),24);
        bufp->chgBit(oldp+279,((1U & (((vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                        >> 0x16U) ^ 
                                       (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                        >> 0x11U)) 
                                      | ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                         >> 3U)))));
        bufp->chgIData(oldp+280,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__accum_next),24);
        bufp->chgCData(oldp+281,(((0x80U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                            >> 0xdU)) 
                                  | ((0x40U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                               >> 0xcU)) 
                                     | ((0x20U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                  >> 9U)) 
                                        | ((0x10U & 
                                            (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                             >> 7U)) 
                                           | ((8U & 
                                               (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                >> 6U)) 
                                              | ((4U 
                                                  & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                     >> 3U)) 
                                                 | ((2U 
                                                     & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h36ba4a2e__0))))))))),8);
        bufp->chgBit(oldp+282,(((0xfffU & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                           >> 0xcU)) 
                                >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw))));
        bufp->chgSData(oldp+283,((0xfffU & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                            >> 0xcU))),12);
        bufp->chgSData(oldp+284,((0xfffU & ((0xffeU 
                                             & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                >> 0xbU)) 
                                            ^ ((- (IData)(
                                                          (1U 
                                                           & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                              >> 0x17U)))) 
                                               ^ (- (IData)(
                                                            (((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg) 
                                                              >> 2U) 
                                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ring_in)))))))),12);
        bufp->chgSData(oldp+285,((((0x40U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                    ? (- (IData)(((0xfffU 
                                                   & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h5b92d1af__0 
                                                      >> 0xcU)) 
                                                  >= (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_pw))))
                                    : 0xfffU) & (((0x20U 
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
                                                        : 0xfffU))))),12);
        bufp->chgCData(oldp+286,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[0]),8);
        bufp->chgCData(oldp+287,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[1]),8);
        bufp->chgCData(oldp+288,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol[2]),8);
        bufp->chgCData(oldp+289,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[0]),5);
        bufp->chgCData(oldp+290,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[1]),5);
        bufp->chgCData(oldp+291,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_counter[2]),5);
        bufp->chgSData(oldp+292,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[0]),15);
        bufp->chgSData(oldp+293,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[1]),15);
        bufp->chgSData(oldp+294,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_counter[2]),15);
        bufp->chgCData(oldp+295,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[0]),2);
        bufp->chgCData(oldp+296,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[1]),2);
        bufp->chgCData(oldp+297,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_state[2]),2);
        bufp->chgCData(oldp+298,(((2U >= (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                                >> 1U)))
                                   ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                  [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                          >> 1U))] : 0U)),8);
        bufp->chgCData(oldp+299,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[0]),5);
        bufp->chgCData(oldp+300,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[1]),5);
        bufp->chgCData(oldp+301,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods[2]),5);
        bufp->chgCData(oldp+302,(((2U >= (3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                                >> 1U)))
                                   ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__exp_periods
                                  [(3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                          >> 1U))] : 0U)),5);
        bufp->chgCData(oldp+303,((0xfU & ((1U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0))
                                           ? ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec) 
                                              >> 4U)
                                           : ((2U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT____VdfgTmp_h2ba17bb6__0))
                                               ? (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_atk_dec)
                                               : (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_sus_rel))))),4);
        bufp->chgSData(oldp+304,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__adsr_table),15);
        bufp->chgIData(oldp+305,((0xfffffU & ((((0x40U 
                                                 & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__curr_ctrl_reg))
                                                 ? 
                                                (- (IData)(
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
                                              * ((2U 
                                                  >= 
                                                  (3U 
                                                   & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                                      >> 1U)))
                                                  ? 
                                                 vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_vol
                                                 [(3U 
                                                   & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                                      >> 1U))]
                                                  : 0U)))),20);
        bufp->chgCData(oldp+306,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div),3);
        bufp->chgCData(oldp+307,((3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__clk_div) 
                                        >> 1U))),2);
        bufp->chgBit(oldp+308,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__env_top));
        bufp->chgIData(oldp+309,(((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__fc) 
                                  << 6U)),17);
        bufp->chgSData(oldp+310,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__res_lut),11);
        bufp->chgBit(oldp+311,((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))));
        bufp->chgBit(oldp+312,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt) 
                                      >> 1U))));
        bufp->chgBit(oldp+313,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt) 
                                      >> 2U))));
        bufp->chgBit(oldp+314,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol) 
                                      >> 7U))));
        bufp->chgBit(oldp+315,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol) 
                                      >> 6U))));
        bufp->chgBit(oldp+316,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol) 
                                      >> 5U))));
        bufp->chgBit(oldp+317,((1U & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol) 
                                      >> 4U))));
        bufp->chgCData(oldp+318,((0xfU & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__mode_vol))),4);
        bufp->chgSData(oldp+319,((0x7fffU & (((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                               ? vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                              [0U] : 0U) 
                                             + (((2U 
                                                  & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                                  ? 
                                                 vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                                 [1U]
                                                  : 0U) 
                                                + (
                                                   (4U 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                                    ? 
                                                   vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                                   [2U]
                                                    : 0U))))),15);
        bufp->chgSData(oldp+320,((0xfffeU & ((((1U 
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
                                             << 1U))),16);
        bufp->chgIData(oldp+321,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__high),32);
        bufp->chgIData(oldp+322,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band),32);
        bufp->chgIData(oldp+323,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low),32);
        bufp->chgCData(oldp+324,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__filter_step),3);
        bufp->chgIData(oldp+325,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1),32);
        bufp->chgIData(oldp+326,(VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1, 0x14U)),32);
        bufp->chgIData(oldp+327,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__band_low_next),32);
        bufp->chgIData(oldp+328,(VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1, 0xaU)),32);
        bufp->chgIData(oldp+329,(((VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__temp1, 0xaU) 
                                   - vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__low) 
                                  - (0xfffeU & ((((1U 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__res_filt))
                                                   ? 
                                                  vlSelf->tb__DOT__uprj__DOT__sid__DOT__channels__DOT__samples
                                                  [0U]
                                                   : 0U) 
                                                 + 
                                                 (((2U 
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
        bufp->chgIData(oldp+330,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered),32);
        bufp->chgIData(oldp+331,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered_next),32);
        bufp->chgIData(oldp+332,(VL_SHIFTRS_III(32,32,32, vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_filtered, 1U)),32);
        bufp->chgSData(oldp+333,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff_next),15);
        bufp->chgSData(oldp+334,((0xfffU & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__filters__DOT__sample_buff) 
                                            >> 3U))),12);
        bufp->chgSData(oldp+335,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_0),12);
        bufp->chgSData(oldp+336,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__spi_dat_buff_1),12);
        bufp->chgCData(oldp+337,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__spi_dac_i__DOT__counter),6);
        bufp->chgBit(oldp+338,(vlSelf->tb__DOT__uprj__DOT__sid__DOT____Vcellinp__tt_um_rejunity_sn76489__we));
        bufp->chgCData(oldp+339,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter),5);
        bufp->chgBit(oldp+340,((0U == (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__clk_counter))));
        bufp->chgCData(oldp+341,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[0]),4);
        bufp->chgCData(oldp+342,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[1]),4);
        bufp->chgCData(oldp+343,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[2]),4);
        bufp->chgCData(oldp+344,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn[3]),4);
        bufp->chgSData(oldp+345,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[0]),10);
        bufp->chgSData(oldp+346,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[1]),10);
        bufp->chgSData(oldp+347,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq[2]),10);
        bufp->chgCData(oldp+348,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise[0]),3);
        bufp->chgCData(oldp+349,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__latch_control_reg),3);
        bufp->chgBit(oldp+350,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__restart_noise));
        bufp->chgBit(oldp+351,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__channels[0]));
        bufp->chgBit(oldp+352,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__channels[1]));
        bufp->chgBit(oldp+353,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__channels[2]));
        bufp->chgBit(oldp+354,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__channels[3]));
        bufp->chgSData(oldp+355,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__volumes[0]),10);
        bufp->chgSData(oldp+356,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__volumes[1]),10);
        bufp->chgSData(oldp+357,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__volumes[2]),10);
        bufp->chgSData(oldp+358,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__volumes[3]),10);
        bufp->chgBit(oldp+359,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__state));
        bufp->chgCData(oldp+360,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                                 [0U]),4);
        bufp->chgSData(oldp+361,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__0__KET____DOT__attenuation__out),10);
        bufp->chgBit(oldp+362,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__state));
        bufp->chgCData(oldp+363,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                                 [1U]),4);
        bufp->chgSData(oldp+364,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__1__KET____DOT__attenuation__out),10);
        bufp->chgBit(oldp+365,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__state));
        bufp->chgCData(oldp+366,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                                 [2U]),4);
        bufp->chgSData(oldp+367,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__2__KET____DOT__attenuation__out),10);
        bufp->chgBit(oldp+368,((1U & (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr))));
        bufp->chgCData(oldp+369,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_attn
                                 [3U]),4);
        bufp->chgSData(oldp+370,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT____Vcellout__chan__BRA__3__KET____DOT__attenuation__out),10);
        bufp->chgCData(oldp+371,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise
                                 [0U]),3);
        bufp->chgBit(oldp+372,((1U & (vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_noise
                                      [0U] >> 2U))));
        bufp->chgBit(oldp+373,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger));
        bufp->chgCData(oldp+374,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__counter),7);
        bufp->chgBit(oldp+375,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger_edge));
        bufp->chgSData(oldp+376,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__lfsr),15);
        bufp->chgBit(oldp+377,(((~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger)) 
                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_1) 
                                   != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger)))));
        bufp->chgBit(oldp+378,(((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger_edge) 
                                | ((~ (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger)) 
                                   & ((IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_1) 
                                      != (IData)(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__trigger))))));
        bufp->chgBit(oldp+379,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_0));
        bufp->chgBit(oldp+380,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__noise__BRA__0__KET____DOT__gen__DOT__signal_edge__DOT__previous_signal_state_1));
        bufp->chgSData(oldp+381,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                                 [0U]),10);
        bufp->chgSData(oldp+382,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__0__KET____DOT__gen__DOT__counter),10);
        bufp->chgSData(oldp+383,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                                 [1U]),10);
        bufp->chgSData(oldp+384,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__1__KET____DOT__gen__DOT__counter),10);
        bufp->chgSData(oldp+385,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__control_tone_freq
                                 [2U]),10);
        bufp->chgSData(oldp+386,(vlSelf->tb__DOT__uprj__DOT__sid__DOT__tt_um_rejunity_sn76489__DOT__tone__BRA__2__KET____DOT__gen__DOT__counter),10);
        bufp->chgCData(oldp+387,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__settings),3);
        bufp->chgBit(oldp+388,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr0_ext));
        bufp->chgBit(oldp+389,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__tmr1_ext));
        bufp->chgBit(oldp+390,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr0_clk));
        bufp->chgBit(oldp+391,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__last_tmr1_clk));
        bufp->chgSData(oldp+392,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer0),16);
        bufp->chgSData(oldp+393,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer1),16);
        bufp->chgSData(oldp+394,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__timer2),16);
        bufp->chgSData(oldp+395,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_capture),16);
        bufp->chgSData(oldp+396,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_capture),16);
        bufp->chgSData(oldp+397,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_capture),16);
        bufp->chgSData(oldp+398,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre),16);
        bufp->chgSData(oldp+399,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre),16);
        bufp->chgSData(oldp+400,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre),16);
        bufp->chgSData(oldp+401,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0pre_counter),16);
        bufp->chgSData(oldp+402,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1pre_counter),16);
        bufp->chgSData(oldp+403,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2pre_counter),16);
        bufp->chgSData(oldp+404,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t0_top),16);
        bufp->chgSData(oldp+405,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t1_top),16);
        bufp->chgSData(oldp+406,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__t2_top),16);
        bufp->chgCData(oldp+407,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr0),8);
        bufp->chgCData(oldp+408,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr1),8);
        bufp->chgCData(oldp+409,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pwm_ctr2),8);
        bufp->chgCData(oldp+410,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw0),8);
        bufp->chgCData(oldp+411,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw1),8);
        bufp->chgCData(oldp+412,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__pw2),8);
        bufp->chgCData(oldp+413,(vlSelf->tb__DOT__uprj__DOT__timers__DOT__temp),8);
        bufp->chgQData(oldp+414,((0xfe01fe00000000ULL 
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
        bufp->chgCData(oldp+416,(vlSelf->tb__DOT__uprj__DOT____Vcellinp__wrapped_as2650__irqs),7);
        bufp->chgBit(oldp+417,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_ready));
        bufp->chgBit(oldp+418,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_feedback_delay));
        bufp->chgIData(oldp+419,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wbs_o_buff),32);
        bufp->chgIData(oldp+420,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_counter),32);
        bufp->chgBit(oldp+421,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_cc));
        bufp->chgBit(oldp+422,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_debug_carry));
        bufp->chgCData(oldp+423,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__web_behavior),2);
        bufp->chgBit(oldp+424,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override_en));
        bufp->chgBit(oldp+425,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_reset_override));
        bufp->chgBit(oldp+426,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_test));
        bufp->chgBit(oldp+427,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_io3_state));
        bufp->chgBit(oldp+428,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_hidden_rom_enable));
        bufp->chgCData(oldp+429,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psu),8);
        bufp->chgCData(oldp+430,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl),8);
        bufp->chgBit(oldp+431,(((~ ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin) 
                                    >> 6U)) & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc))));
        bufp->chgBit(oldp+432,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc) 
                                & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin) 
                                   >> 6U))));
        bufp->chgBit(oldp+433,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__cpu_hidden_rom_enable));
        bufp->chgCData(oldp+434,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr),8);
        bufp->chgBit(oldp+435,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__io_bus_we));
        bufp->chgCData(oldp+436,((3U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__full_io_addr) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+437,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__bus_in_plexed),8);
        bufp->chgBit(oldp+438,(((IData)(vlSelf->tb__DOT__uprj__DOT__ram_enabled) 
                                & (0U == (0xf000U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__last_addr))))));
        bufp->chgQData(oldp+439,((((QData)((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__halted)) 
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
        bufp->chgBit(oldp+441,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__trap));
        bufp->chgCData(oldp+442,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch),8);
        bufp->chgCData(oldp+443,(((0x80U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                   ? 7U : ((0x40U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                            ? 6U : 
                                           ((0x20U 
                                             & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                             ? 5U : 
                                            ((0x10U 
                                              & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                              ? 4U : 
                                             ((8U & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                               ? 3U
                                               : ((4U 
                                                   & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__irqs_latch))
                                                    ? 1U
                                                    : 0U)))))))),3);
        bufp->chgCData(oldp+444,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[0]),8);
        bufp->chgCData(oldp+445,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[1]),8);
        bufp->chgCData(oldp+446,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[2]),8);
        bufp->chgCData(oldp+447,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[3]),8);
        bufp->chgCData(oldp+448,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[4]),8);
        bufp->chgCData(oldp+449,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[5]),8);
        bufp->chgCData(oldp+450,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[6]),8);
        bufp->chgCData(oldp+451,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__regs[7]),8);
        bufp->chgSData(oldp+452,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[0]),16);
        bufp->chgSData(oldp+453,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[1]),16);
        bufp->chgSData(oldp+454,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[2]),16);
        bufp->chgSData(oldp+455,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[3]),16);
        bufp->chgSData(oldp+456,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[4]),16);
        bufp->chgSData(oldp+457,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[5]),16);
        bufp->chgSData(oldp+458,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[6]),16);
        bufp->chgSData(oldp+459,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[7]),16);
        bufp->chgSData(oldp+460,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[8]),16);
        bufp->chgSData(oldp+461,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[9]),16);
        bufp->chgSData(oldp+462,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[10]),16);
        bufp->chgSData(oldp+463,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[11]),16);
        bufp->chgSData(oldp+464,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[12]),16);
        bufp->chgSData(oldp+465,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[13]),16);
        bufp->chgSData(oldp+466,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[14]),16);
        bufp->chgSData(oldp+467,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__stack[15]),16);
        bufp->chgSData(oldp+468,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__TOS),16);
        bufp->chgSData(oldp+469,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__PC),13);
        bufp->chgCData(oldp+470,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__page_reg),3);
        bufp->chgSData(oldp+471,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__ivectors_base),12);
        bufp->chgCData(oldp+472,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle),4);
        bufp->chgCData(oldp+473,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__insin),8);
        bufp->chgSData(oldp+474,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__instruction_args_latch),16);
        bufp->chgBit(oldp+475,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend));
        bufp->chgCData(oldp+476,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__warmup),2);
        bufp->chgBit(oldp+477,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__halted));
        bufp->chgBit(oldp+478,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_cyc));
        bufp->chgCData(oldp+479,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc),2);
        bufp->chgSData(oldp+480,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indirect_target),16);
        bufp->chgBit(oldp+481,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__relative_cyc));
        bufp->chgCData(oldp+482,(((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__extend)
                                   ? 3U : (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_cyc))),2);
        bufp->chgBit(oldp+483,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_data_fetch_cycle));
        bufp->chgBit(oldp+484,((0xcU == (IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__cycle))));
        bufp->chgBit(oldp+485,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__is_instr_fetch_cycle));
        bufp->chgBit(oldp+486,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__IO_cyc));
        bufp->chgCData(oldp+487,((4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                        >> 2U))),3);
        bufp->chgCData(oldp+488,((1U | (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                              >> 2U)))),3);
        bufp->chgCData(oldp+489,((2U | (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                              >> 2U)))),3);
        bufp->chgCData(oldp+490,((3U | (4U & ((IData)(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__psl) 
                                              >> 2U)))),3);
        bufp->chgSData(oldp+491,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__mul_res),16);
        bufp->chgBit(oldp+492,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__indexed_data1));
        bufp->chgCData(oldp+493,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirp_ptr),3);
        bufp->chgCData(oldp+494,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__as2650__DOT__chirpchar),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+495,(vlSelf->tb__DOT__ROM_CS));
        bufp->chgBit(oldp+496,((1U & (IData)(vlSelf->__VdfgTmp_he37690df__0))));
        bufp->chgBit(oldp+497,((1U & ((IData)(vlSelf->__VdfgTmp_he37690df__0) 
                                      >> 1U))));
        bufp->chgSData(oldp+498,(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__io_out),16);
    }
    bufp->chgBit(oldp+499,(vlSelf->clk));
    bufp->chgBit(oldp+500,(vlSelf->rst_n));
    bufp->chgBit(oldp+501,(vlSelf->wbs_stb_i));
    bufp->chgBit(oldp+502,(vlSelf->wbs_cyc_i));
    bufp->chgBit(oldp+503,(vlSelf->wbs_we_i));
    bufp->chgIData(oldp+504,(vlSelf->wbs_dat_i),32);
    bufp->chgIData(oldp+505,(vlSelf->wbs_adr_i),32);
    bufp->chgBit(oldp+506,(vlSelf->wbs_ack_o));
    bufp->chgIData(oldp+507,(vlSelf->wbs_dat_o),32);
    bufp->chgQData(oldp+508,((((QData)((IData)((((IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__DO) 
                                                 << 1U) 
                                                | (IData)(vlSelf->tb__DOT__uprj__DOT__serial_ports__DOT____Vcellout__spi__SCLK)))) 
                               << 0x23U) | (((QData)((IData)(vlSelf->tb__DOT__uprj__DOT____Vcellout__gpios__io_out)) 
                                             << 0x13U) 
                                            | (QData)((IData)(vlSelf->tb__DOT__uprj__DOT____Vcellout__wrapped_as2650__io_out))))),38);
    bufp->chgBit(oldp+510,(vlSelf->tb__DOT__SDO));
    bufp->chgCData(oldp+511,(vlSelf->tb__DOT__bus_out),8);
    bufp->chgCData(oldp+512,(vlSelf->tb__DOT__uart_init_state),2);
    bufp->chgCData(oldp+513,(vlSelf->tb__DOT__spiflash__DOT__reset_count),4);
    bufp->chgCData(oldp+514,(vlSelf->tb__DOT__spiflash__DOT__reset_monitor),4);
    bufp->chgBit(oldp+515,(vlSelf->tb__DOT__spiflash__DOT__io0_dout));
    bufp->chgBit(oldp+516,(vlSelf->tb__DOT__spiflash__DOT__io1_dout));
    bufp->chgBit(oldp+517,(vlSelf->tb__DOT__spiflash__DOT__io2_dout));
    bufp->chgBit(oldp+518,(vlSelf->tb__DOT__spiflash__DOT__io3_dout));
    bufp->chgBit(oldp+519,((1U & (~ (IData)(vlSelf->rst_n)))));
    bufp->chgIData(oldp+520,(vlSelf->tb__DOT__uprj__DOT____Vcellout__wrapped_as2650__io_out),19);
    bufp->chgBit(oldp+521,(vlSelf->tb__DOT__uprj__DOT__wrapped_as2650__DOT__wb_valid));
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
