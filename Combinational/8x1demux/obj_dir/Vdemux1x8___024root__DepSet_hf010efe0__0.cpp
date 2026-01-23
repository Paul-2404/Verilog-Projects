// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux1x8.h for the primary calling header

#include "Vdemux1x8__pch.h"
#include "Vdemux1x8__Syms.h"
#include "Vdemux1x8___024root.h"

VL_INLINE_OPT VlCoroutine Vdemux1x8___024root___eval_initial__TOP__Vtiming__0(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.demux1x8_tb__DOT__A = 0U;
    vlSelfRef.demux1x8_tb__DOT__S = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         19);
    vlSelfRef.demux1x8_tb__DOT__A = 1U;
    vlSelfRef.demux1x8_tb__DOT__S = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         20);
    vlSelfRef.demux1x8_tb__DOT__S = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         21);
    vlSelfRef.demux1x8_tb__DOT__S = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         22);
    vlSelfRef.demux1x8_tb__DOT__S = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         23);
    vlSelfRef.demux1x8_tb__DOT__S = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         24);
    vlSelfRef.demux1x8_tb__DOT__S = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         25);
    vlSelfRef.demux1x8_tb__DOT__S = 6U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         26);
    vlSelfRef.demux1x8_tb__DOT__S = 7U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         28);
    vlSelfRef.demux1x8_tb__DOT__A = 0U;
    vlSelfRef.demux1x8_tb__DOT__S = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "demux1x8_tb.v", 
                                         29);
    VL_FINISH_MT("demux1x8_tb.v", 29, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemux1x8___024root___dump_triggers__act(Vdemux1x8___024root* vlSelf);
#endif  // VL_DEBUG

void Vdemux1x8___024root___eval_triggers__act(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.demux1x8_tb__DOT__A) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__demux1x8_tb__DOT__A__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.demux1x8_tb__DOT__D) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__demux1x8_tb__DOT__D__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.demux1x8_tb__DOT__S) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__demux1x8_tb__DOT__S__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__demux1x8_tb__DOT__A__0 
        = vlSelfRef.demux1x8_tb__DOT__A;
    vlSelfRef.__Vtrigprevexpr___TOP__demux1x8_tb__DOT__D__0 
        = vlSelfRef.demux1x8_tb__DOT__D;
    vlSelfRef.__Vtrigprevexpr___TOP__demux1x8_tb__DOT__S__0 
        = vlSelfRef.demux1x8_tb__DOT__S;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdemux1x8___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vdemux1x8___024root___nba_sequent__TOP__0(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("Time=  %t,D= %b,A= %b,S= %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,8,(IData)(vlSelfRef.demux1x8_tb__DOT__D),
                     1,vlSelfRef.demux1x8_tb__DOT__A,
                     3,(IData)(vlSelfRef.demux1x8_tb__DOT__S));
    }
}
