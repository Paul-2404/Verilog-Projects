// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrcounter.h for the primary calling header

#include "Vrcounter__pch.h"
#include "Vrcounter___024root.h"

VL_ATTR_COLD void Vrcounter___024root___eval_initial__TOP(Vrcounter___024root* vlSelf);
VlCoroutine Vrcounter___024root___eval_initial__TOP__Vtiming__0(Vrcounter___024root* vlSelf);
VlCoroutine Vrcounter___024root___eval_initial__TOP__Vtiming__1(Vrcounter___024root* vlSelf);

void Vrcounter___024root___eval_initial(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrcounter___024root___eval_initial__TOP(vlSelf);
    Vrcounter___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vrcounter___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__rcounter_tb__DOT__clk__0 
        = vlSelfRef.rcounter_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rcounter_tb__DOT__reset__0 
        = vlSelfRef.rcounter_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vrcounter___024root___eval_initial__TOP__Vtiming__0(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rcounter_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "rcounter_tb.v", 
                                             17);
        vlSelfRef.rcounter_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.rcounter_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vrcounter___024root___eval_initial__TOP__Vtiming__1(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rcounter_tb__DOT__reset = 1U;
    vlSelfRef.rcounter_tb__DOT__enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "rcounter_tb.v", 
                                         23);
    vlSelfRef.rcounter_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "rcounter_tb.v", 
                                         24);
    vlSelfRef.rcounter_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "rcounter_tb.v", 
                                         25);
    vlSelfRef.rcounter_tb__DOT__enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "rcounter_tb.v", 
                                         27);
    VL_FINISH_MT("rcounter_tb.v", 27, "");
}

void Vrcounter___024root___eval_act(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vrcounter___024root___nba_sequent__TOP__0(Vrcounter___024root* vlSelf);

void Vrcounter___024root___eval_nba(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrcounter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vrcounter___024root___nba_sequent__TOP__0(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rcounter_tb__DOT__q = ((IData)(vlSelfRef.rcounter_tb__DOT__reset)
                                      ? 0U : (0xfU 
                                              & ((IData)(vlSelfRef.rcounter_tb__DOT__enable)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.rcounter_tb__DOT__q))
                                                  : (IData)(vlSelfRef.rcounter_tb__DOT__q))));
}

void Vrcounter___024root___timing_resume(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vrcounter___024root___eval_triggers__act(Vrcounter___024root* vlSelf);

bool Vrcounter___024root___eval_phase__act(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrcounter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vrcounter___024root___timing_resume(vlSelf);
        Vrcounter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vrcounter___024root___eval_phase__nba(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrcounter___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrcounter___024root___dump_triggers__nba(Vrcounter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrcounter___024root___dump_triggers__act(Vrcounter___024root* vlSelf);
#endif  // VL_DEBUG

void Vrcounter___024root___eval(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval\n"); );
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
            Vrcounter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rcounter_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vrcounter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rcounter_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vrcounter___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vrcounter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrcounter___024root___eval_debug_assertions(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
