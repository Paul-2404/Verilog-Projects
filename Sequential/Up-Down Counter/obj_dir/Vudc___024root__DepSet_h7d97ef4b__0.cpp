// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vudc.h for the primary calling header

#include "Vudc__pch.h"
#include "Vudc___024root.h"

VL_ATTR_COLD void Vudc___024root___eval_initial__TOP(Vudc___024root* vlSelf);
VlCoroutine Vudc___024root___eval_initial__TOP__Vtiming__0(Vudc___024root* vlSelf);
VlCoroutine Vudc___024root___eval_initial__TOP__Vtiming__1(Vudc___024root* vlSelf);
VlCoroutine Vudc___024root___eval_initial__TOP__Vtiming__2(Vudc___024root* vlSelf);
VlCoroutine Vudc___024root___eval_initial__TOP__Vtiming__3(Vudc___024root* vlSelf);

void Vudc___024root___eval_initial(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vudc___024root___eval_initial__TOP(vlSelf);
    Vudc___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vudc___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vudc___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vudc___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__down__0 
        = vlSelfRef.udc_tb__DOT__down;
    vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__up__0 
        = vlSelfRef.udc_tb__DOT__up;
    vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__clk__0 
        = vlSelfRef.udc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__udc_tb__DOT__rst__0 
        = vlSelfRef.udc_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vudc___024root___eval_initial__TOP__Vtiming__0(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.udc_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "udc_tb.v", 
                                         16);
    vlSelfRef.udc_tb__DOT__rst = 0U;
    vlSelfRef.udc_tb__DOT__c = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x12cULL, 
                                         nullptr, "udc_tb.v", 
                                         18);
    VL_FINISH_MT("udc_tb.v", 18, "");
}

VL_INLINE_OPT VlCoroutine Vudc___024root___eval_initial__TOP__Vtiming__1(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.udc_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "udc_tb.v", 
                                             23);
        vlSelfRef.udc_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.udc_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vudc___024root___eval_initial__TOP__Vtiming__2(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.udc_tb__DOT__up = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "udc_tb.v", 
                                         28);
    vlSelfRef.udc_tb__DOT__up = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "udc_tb.v", 
                                         29);
    vlSelfRef.udc_tb__DOT__up = 0U;
}

VL_INLINE_OPT VlCoroutine Vudc___024root___eval_initial__TOP__Vtiming__3(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_initial__TOP__Vtiming__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.udc_tb__DOT__down = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "udc_tb.v", 
                                         34);
    vlSelfRef.udc_tb__DOT__down = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "udc_tb.v", 
                                         35);
    vlSelfRef.udc_tb__DOT__down = 0U;
}

void Vudc___024root___eval_act(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vudc___024root___nba_sequent__TOP__0(Vudc___024root* vlSelf);
void Vudc___024root___nba_sequent__TOP__1(Vudc___024root* vlSelf);

void Vudc___024root___eval_nba(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vudc___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vudc___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vudc___024root___nba_sequent__TOP__1(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.udc_tb__DOT__c = ((IData)(vlSelfRef.udc_tb__DOT__rst)
                                 ? 0U : (0xfU & ((IData)(vlSelfRef.udc_tb__DOT__up)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.udc_tb__DOT__c))
                                                  : 
                                                 ((IData)(vlSelfRef.udc_tb__DOT__down)
                                                   ? 
                                                  ((IData)(vlSelfRef.udc_tb__DOT__c) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelfRef.udc_tb__DOT__c)))));
}

void Vudc___024root___timing_resume(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vudc___024root___eval_triggers__act(Vudc___024root* vlSelf);

bool Vudc___024root___eval_phase__act(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vudc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vudc___024root___timing_resume(vlSelf);
        Vudc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vudc___024root___eval_phase__nba(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vudc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vudc___024root___dump_triggers__nba(Vudc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vudc___024root___dump_triggers__act(Vudc___024root* vlSelf);
#endif  // VL_DEBUG

void Vudc___024root___eval(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vudc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("udc_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vudc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("udc_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vudc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vudc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vudc___024root___eval_debug_assertions(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
