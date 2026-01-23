// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder4x2.h for the primary calling header

#include "Vencoder4x2__pch.h"
#include "Vencoder4x2__Syms.h"
#include "Vencoder4x2___024root.h"

VL_INLINE_OPT VlCoroutine Vencoder4x2___024root___eval_initial__TOP__Vtiming__0(Vencoder4x2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder4x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder4x2___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "encoder4x2_tb.v", 
                                         14);
    vlSelfRef.encoder4x2_tb__DOT__A = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "encoder4x2_tb.v", 
                                         15);
    vlSelfRef.encoder4x2_tb__DOT__A = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "encoder4x2_tb.v", 
                                         16);
    vlSelfRef.encoder4x2_tb__DOT__A = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "encoder4x2_tb.v", 
                                         17);
    vlSelfRef.encoder4x2_tb__DOT__A = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "encoder4x2_tb.v", 
                                         18);
    vlSelfRef.encoder4x2_tb__DOT__A = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "encoder4x2_tb.v", 
                                         19);
    vlSelfRef.encoder4x2_tb__DOT__A = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "encoder4x2_tb.v", 
                                         20);
    vlSelfRef.encoder4x2_tb__DOT__A = 8U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "encoder4x2_tb.v", 
                                         21);
    vlSelfRef.encoder4x2_tb__DOT__A = 7U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "encoder4x2_tb.v", 
                                         23);
    VL_FINISH_MT("encoder4x2_tb.v", 23, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder4x2___024root___dump_triggers__act(Vencoder4x2___024root* vlSelf);
#endif  // VL_DEBUG

void Vencoder4x2___024root___eval_triggers__act(Vencoder4x2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder4x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder4x2___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.encoder4x2_tb__DOT__A) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__encoder4x2_tb__DOT__A__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.encoder4x2_tb__DOT__Z) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__encoder4x2_tb__DOT__Z__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__encoder4x2_tb__DOT__A__0 
        = vlSelfRef.encoder4x2_tb__DOT__A;
    vlSelfRef.__Vtrigprevexpr___TOP__encoder4x2_tb__DOT__Z__0 
        = vlSelfRef.encoder4x2_tb__DOT__Z;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencoder4x2___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vencoder4x2___024root___nba_sequent__TOP__0(Vencoder4x2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder4x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder4x2___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("Time= %t,A= %b,Z= %b\n",0,64,
                     VL_TIME_UNITED_Q(1),-12,4,(IData)(vlSelfRef.encoder4x2_tb__DOT__A),
                     2,vlSelfRef.encoder4x2_tb__DOT__Z);
    }
}
