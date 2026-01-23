// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "Vcounter__pch.h"
#include "Vcounter___024root.h"

VL_ATTR_COLD void Vcounter___024root___eval_initial__TOP(Vcounter___024root* vlSelf);
VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__0(Vcounter___024root* vlSelf);
VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__1(Vcounter___024root* vlSelf);

void Vcounter___024root___eval_initial(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcounter___024root___eval_initial__TOP(vlSelf);
    Vcounter___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcounter___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__counter_tb__DOT__clk__0 
        = vlSelfRef.counter_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__counter_tb__DOT__rst__0 
        = vlSelfRef.counter_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__counter_tb__DOT__O__0 
        = vlSelfRef.counter_tb__DOT__O;
}

VL_INLINE_OPT VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__0(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.counter_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "counter_tb.v", 
                                             17);
        vlSelfRef.counter_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__1(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.counter_tb__DOT__c = 0xfffffffcU;
    vlSelfRef.counter_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "counter_tb.v", 
                                         23);
    vlSelfRef.counter_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "counter_tb.v", 
                                         24);
    VL_FINISH_MT("counter_tb.v", 24, "");
}

void Vcounter___024root___act_sequent__TOP__0(Vcounter___024root* vlSelf);
void Vcounter___024root___act_sequent__TOP__1(Vcounter___024root* vlSelf);

void Vcounter___024root___eval_act(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VpreTriggered.word(0U))) {
        Vcounter___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcounter___024root___act_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vcounter___024root___act_sequent__TOP__0(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__counter_tb__DOT__c = vlSelfRef.counter_tb__DOT__c;
}

VL_INLINE_OPT void Vcounter___024root___act_sequent__TOP__1(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___act_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.counter_tb__DOT__rst) {
        vlSelfRef.counter_tb__DOT__O = 0U;
        vlSelfRef.__Vdly__counter_tb__DOT__c = 0U;
    } else {
        vlSelfRef.__Vdly__counter_tb__DOT__c = ((IData)(1U) 
                                                + vlSelfRef.counter_tb__DOT__c);
        vlSelfRef.counter_tb__DOT__O = (0xffffffffU 
                                        == vlSelfRef.counter_tb__DOT__c);
    }
}

void Vcounter___024root___nba_sequent__TOP__0(Vcounter___024root* vlSelf);
void Vcounter___024root___nba_sequent__TOP__1(Vcounter___024root* vlSelf);

void Vcounter___024root___eval_nba(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcounter___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcounter___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vcounter___024root___nba_sequent__TOP__1(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.counter_tb__DOT__c = vlSelfRef.__Vdly__counter_tb__DOT__c;
}

void Vcounter___024root___timing_resume(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcounter___024root___eval_triggers__act(Vcounter___024root* vlSelf);

bool Vcounter___024root___eval_phase__act(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VactExecute;
    // Body
    Vcounter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        vlSelfRef.__VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcounter___024root___timing_resume(vlSelf);
        Vcounter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcounter___024root___eval_phase__nba(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcounter___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter___024root___dump_triggers__nba(Vcounter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter___024root___dump_triggers__act(Vcounter___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter___024root___eval(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval\n"); );
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
            Vcounter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("counter_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcounter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("counter_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcounter___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcounter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcounter___024root___eval_debug_assertions(Vcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
