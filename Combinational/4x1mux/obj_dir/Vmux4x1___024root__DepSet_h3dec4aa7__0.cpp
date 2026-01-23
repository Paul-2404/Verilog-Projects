// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1.h for the primary calling header

#include "Vmux4x1__pch.h"
#include "Vmux4x1__Syms.h"
#include "Vmux4x1___024root.h"

VL_INLINE_OPT VlCoroutine Vmux4x1___024root___eval_initial__TOP__Vtiming__0(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mux_tb__DOT__D0 = 0U;
    vlSelfRef.mux_tb__DOT__D1 = 0U;
    vlSelfRef.mux_tb__DOT__D2 = 0U;
    vlSelfRef.mux_tb__DOT__D3 = 0U;
    vlSelfRef.mux_tb__DOT__S1 = 0U;
    vlSelfRef.mux_tb__DOT__S2 = 0U;
    VL_WRITEF_NX("Test Case|S1 S2|D0 D1 D2 D3|Z\n",0);
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux_tb.v", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_tb__DOT__D0 = 1U;
    vlSelfRef.mux_tb__DOT__D1 = 0U;
    vlSelfRef.mux_tb__DOT__D2 = 0U;
    vlSelfRef.mux_tb__DOT__D3 = 0U;
    vlSelfRef.mux_tb__DOT__S1 = 0U;
    vlSelfRef.mux_tb__DOT__S2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux_tb.v", 
                                         24);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_tb__DOT__D0 = 0U;
    vlSelfRef.mux_tb__DOT__D1 = 1U;
    vlSelfRef.mux_tb__DOT__D2 = 0U;
    vlSelfRef.mux_tb__DOT__D3 = 0U;
    vlSelfRef.mux_tb__DOT__S1 = 0U;
    vlSelfRef.mux_tb__DOT__S2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux_tb.v", 
                                         25);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_tb__DOT__D0 = 0U;
    vlSelfRef.mux_tb__DOT__D1 = 0U;
    vlSelfRef.mux_tb__DOT__D2 = 1U;
    vlSelfRef.mux_tb__DOT__D3 = 0U;
    vlSelfRef.mux_tb__DOT__S1 = 1U;
    vlSelfRef.mux_tb__DOT__S2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux_tb.v", 
                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_tb__DOT__D0 = 0U;
    vlSelfRef.mux_tb__DOT__D1 = 0U;
    vlSelfRef.mux_tb__DOT__D2 = 0U;
    vlSelfRef.mux_tb__DOT__D3 = 1U;
    vlSelfRef.mux_tb__DOT__S1 = 1U;
    vlSelfRef.mux_tb__DOT__S2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux_tb.v", 
                                         27);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_tb__DOT__D0 = 0U;
    vlSelfRef.mux_tb__DOT__D1 = 1U;
    vlSelfRef.mux_tb__DOT__D2 = 1U;
    vlSelfRef.mux_tb__DOT__D3 = 1U;
    vlSelfRef.mux_tb__DOT__S1 = 0U;
    vlSelfRef.mux_tb__DOT__S2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux_tb.v", 
                                         28);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_tb__DOT__D0 = 1U;
    vlSelfRef.mux_tb__DOT__D1 = 0U;
    vlSelfRef.mux_tb__DOT__D2 = 1U;
    vlSelfRef.mux_tb__DOT__D3 = 1U;
    vlSelfRef.mux_tb__DOT__S1 = 0U;
    vlSelfRef.mux_tb__DOT__S2 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux_tb.v", 
                                         29);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_tb__DOT__D0 = 1U;
    vlSelfRef.mux_tb__DOT__D1 = 1U;
    vlSelfRef.mux_tb__DOT__D2 = 0U;
    vlSelfRef.mux_tb__DOT__D3 = 1U;
    vlSelfRef.mux_tb__DOT__S1 = 1U;
    vlSelfRef.mux_tb__DOT__S2 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux_tb.v", 
                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.mux_tb__DOT__D0 = 1U;
    vlSelfRef.mux_tb__DOT__D1 = 1U;
    vlSelfRef.mux_tb__DOT__D2 = 1U;
    vlSelfRef.mux_tb__DOT__D3 = 0U;
    vlSelfRef.mux_tb__DOT__S1 = 1U;
    vlSelfRef.mux_tb__DOT__S2 = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1___024root___dump_triggers__act(Vmux4x1___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux4x1___024root___eval_triggers__act(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.mux_tb__DOT__D0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__D0__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.mux_tb__DOT__D1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__D1__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.mux_tb__DOT__D2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__D2__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.mux_tb__DOT__D3) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__D3__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.mux_tb__DOT__S1) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__S1__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.mux_tb__DOT__S2) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__S2__0)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.mux_tb__DOT__Z) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__Z__0)));
    vlSelfRef.__VactTriggered.set(7U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__D0__0 
        = vlSelfRef.mux_tb__DOT__D0;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__D1__0 
        = vlSelfRef.mux_tb__DOT__D1;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__D2__0 
        = vlSelfRef.mux_tb__DOT__D2;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__D3__0 
        = vlSelfRef.mux_tb__DOT__D3;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__S1__0 
        = vlSelfRef.mux_tb__DOT__S1;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__S2__0 
        = vlSelfRef.mux_tb__DOT__S2;
    vlSelfRef.__Vtrigprevexpr___TOP__mux_tb__DOT__Z__0 
        = vlSelfRef.mux_tb__DOT__Z;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux4x1___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmux4x1___024root___nba_sequent__TOP__0(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("\t%b %b   %b %b %b %b|%b\n",0,
                     1,vlSelfRef.mux_tb__DOT__S1,1,
                     (IData)(vlSelfRef.mux_tb__DOT__S2),
                     1,vlSelfRef.mux_tb__DOT__D0,1,
                     (IData)(vlSelfRef.mux_tb__DOT__D1),
                     1,vlSelfRef.mux_tb__DOT__D2,1,
                     (IData)(vlSelfRef.mux_tb__DOT__D3),
                     1,vlSelfRef.mux_tb__DOT__Z);
    }
}
