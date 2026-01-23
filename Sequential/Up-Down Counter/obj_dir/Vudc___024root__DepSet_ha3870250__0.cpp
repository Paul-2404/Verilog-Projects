// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vudc.h for the primary calling header

#include "Vudc__pch.h"
#include "Vudc__Syms.h"
#include "Vudc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vudc___024root___dump_triggers__act(Vudc___024root* vlSelf);
#endif  // VL_DEBUG

void Vudc___024root___eval_triggers__act(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.udc_tb__DOT__down) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__down__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.udc_tb__DOT__up) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__up__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.udc_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.udc_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__down__0 
        = vlSelfRef.udc_tb__DOT__down;
    vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__up__0 
        = vlSelfRef.udc_tb__DOT__up;
    vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__clk__0 
        = vlSelfRef.udc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__rst__0 
        = vlSelfRef.udc_tb__DOT__rst;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vudc___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vudc___024root___nba_sequent__TOP__0(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF_NX("Time=  %t,Up=  %b,Down=  %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelfRef.udc_tb__DOT__up),
                     1,vlSelfRef.udc_tb__DOT__down);
    }
}
