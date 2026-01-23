// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_count.h for the primary calling header

#include "Vdec_count__pch.h"
#include "Vdec_count___024root.h"

VL_ATTR_COLD void Vdec_count___024root___eval_initial__TOP(Vdec_count___024root* vlSelf);
VlCoroutine Vdec_count___024root___eval_initial__TOP__Vtiming__0(Vdec_count___024root* vlSelf);
VlCoroutine Vdec_count___024root___eval_initial__TOP__Vtiming__1(Vdec_count___024root* vlSelf);

void Vdec_count___024root___eval_initial(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdec_count___024root___eval_initial__TOP(vlSelf);
    Vdec_count___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdec_count___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__dec_count_tb__DOT__rst__0 
        = vlSelfRef.dec_count_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__dec_count_tb__DOT__clk__0 
        = vlSelfRef.dec_count_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vdec_count___024root___eval_initial__TOP__Vtiming__0(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dec_count_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "dec_count_tb.v", 
                                             15);
        vlSelfRef.dec_count_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.dec_count_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vdec_count___024root___eval_initial__TOP__Vtiming__1(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dec_count_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "dec_count_tb.v", 
                                         20);
    vlSelfRef.dec_count_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "dec_count_tb.v", 
                                         21);
    VL_FINISH_MT("dec_count_tb.v", 21, "");
}

void Vdec_count___024root___eval_act(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vdec_count___024root___nba_sequent__TOP__0(Vdec_count___024root* vlSelf);
void Vdec_count___024root___nba_sequent__TOP__1(Vdec_count___024root* vlSelf);

void Vdec_count___024root___eval_nba(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdec_count___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdec_count___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vdec_count___024root___nba_sequent__TOP__1(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dec_count_tb__DOT__c = ((IData)(vlSelfRef.dec_count_tb__DOT__rst)
                                       ? 0U : ((9U 
                                                == (IData)(vlSelfRef.dec_count_tb__DOT__c))
                                                ? 0U
                                                : (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.dec_count_tb__DOT__c)))));
}

void Vdec_count___024root___timing_resume(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdec_count___024root___eval_triggers__act(Vdec_count___024root* vlSelf);

bool Vdec_count___024root___eval_phase__act(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdec_count___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdec_count___024root___timing_resume(vlSelf);
        Vdec_count___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdec_count___024root___eval_phase__nba(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdec_count___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_count___024root___dump_triggers__nba(Vdec_count___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_count___024root___dump_triggers__act(Vdec_count___024root* vlSelf);
#endif  // VL_DEBUG

void Vdec_count___024root___eval(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval\n"); );
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
            Vdec_count___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dec_count_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdec_count___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dec_count_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdec_count___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdec_count___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdec_count___024root___eval_debug_assertions(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
