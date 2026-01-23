// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux8x1.h for the primary calling header

#include "Vmux8x1__pch.h"
#include "Vmux8x1__Syms.h"
#include "Vmux8x1___024root.h"

VL_INLINE_OPT VlCoroutine Vmux8x1___024root___eval_initial__TOP__Vtiming__0(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mux8x1_tb__DOT__D = 0U;
    vlSelfRef.mux8x1_tb__DOT__S = 0U;
    VL_WRITEF_NX("TEST CASE|S|D|Z\n",0);
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux8x1_tb.v", 
                                         19);
    vlSelfRef.mux8x1_tb__DOT__D = 0x80U;
    vlSelfRef.mux8x1_tb__DOT__S = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux8x1_tb.v", 
                                         20);
    vlSelfRef.mux8x1_tb__DOT__D = 0x40U;
    vlSelfRef.mux8x1_tb__DOT__S = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux8x1_tb.v", 
                                         21);
    vlSelfRef.mux8x1_tb__DOT__D = 0x20U;
    vlSelfRef.mux8x1_tb__DOT__S = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux8x1_tb.v", 
                                         22);
    vlSelfRef.mux8x1_tb__DOT__D = 0x10U;
    vlSelfRef.mux8x1_tb__DOT__S = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux8x1_tb.v", 
                                         23);
    vlSelfRef.mux8x1_tb__DOT__D = 8U;
    vlSelfRef.mux8x1_tb__DOT__S = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux8x1_tb.v", 
                                         24);
    vlSelfRef.mux8x1_tb__DOT__D = 4U;
    vlSelfRef.mux8x1_tb__DOT__S = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux8x1_tb.v", 
                                         25);
    vlSelfRef.mux8x1_tb__DOT__D = 2U;
    vlSelfRef.mux8x1_tb__DOT__S = 6U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux8x1_tb.v", 
                                         26);
    vlSelfRef.mux8x1_tb__DOT__D = 1U;
    vlSelfRef.mux8x1_tb__DOT__S = 7U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mux8x1_tb.v", 
                                         27);
    VL_FINISH_MT("mux8x1_tb.v", 27, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux8x1___024root___dump_triggers__act(Vmux8x1___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux8x1___024root___eval_triggers__act(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.mux8x1_tb__DOT__D) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux8x1_tb__DOT__D__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.mux8x1_tb__DOT__S) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux8x1_tb__DOT__S__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.mux8x1_tb__DOT__Z) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mux8x1_tb__DOT__Z__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__mux8x1_tb__DOT__D__0 
        = vlSelfRef.mux8x1_tb__DOT__D;
    vlSelfRef.__Vtrigprevexpr___TOP__mux8x1_tb__DOT__S__0 
        = vlSelfRef.mux8x1_tb__DOT__S;
    vlSelfRef.__Vtrigprevexpr___TOP__mux8x1_tb__DOT__Z__0 
        = vlSelfRef.mux8x1_tb__DOT__Z;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux8x1___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmux8x1___024root___nba_sequent__TOP__0(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("\t%b\t%b\t%b\n",0,3,vlSelfRef.mux8x1_tb__DOT__S,
                     8,(IData)(vlSelfRef.mux8x1_tb__DOT__D),
                     1,vlSelfRef.mux8x1_tb__DOT__Z);
    }
}
