// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_count.h for the primary calling header

#include "Vdec_count__pch.h"
#include "Vdec_count__Syms.h"
#include "Vdec_count___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_count___024root___dump_triggers__act(Vdec_count___024root* vlSelf);
#endif  // VL_DEBUG

void Vdec_count___024root___eval_triggers__act(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.dec_count_tb__DOT__rst) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dec_count_tb__DOT__rst__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.dec_count_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dec_count_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.dec_count_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dec_count_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__dec_count_tb__DOT__rst__0 
        = vlSelfRef.dec_count_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__dec_count_tb__DOT__clk__0 
        = vlSelfRef.dec_count_tb__DOT__clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdec_count___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vdec_count___024root___nba_sequent__TOP__0(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF_NX("Time=  %t,Reset=  %b\n",0,64,
                     VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelfRef.dec_count_tb__DOT__rst));
    }
}
