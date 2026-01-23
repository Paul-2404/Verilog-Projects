// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjhc.h for the primary calling header

#include "Vjhc__pch.h"
#include "Vjhc___024root.h"

VlCoroutine Vjhc___024root___eval_initial__TOP__Vtiming__0(Vjhc___024root* vlSelf);
VlCoroutine Vjhc___024root___eval_initial__TOP__Vtiming__1(Vjhc___024root* vlSelf);

void Vjhc___024root___eval_initial(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vjhc___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vjhc___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__jhc_tb__DOT__clk__0 
        = vlSelfRef.jhc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__jhc_tb__DOT__reset__0 
        = vlSelfRef.jhc_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vjhc___024root___eval_initial__TOP__Vtiming__0(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.jhc_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "jhc_tb.v", 
                                             15);
        vlSelfRef.jhc_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.jhc_tb__DOT__clk)));
    }
}

void Vjhc___024root___eval_act(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vjhc___024root___nba_sequent__TOP__0(Vjhc___024root* vlSelf);

void Vjhc___024root___eval_nba(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vjhc___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vjhc___024root___nba_sequent__TOP__0(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.jhc_tb__DOT__q = ((IData)(vlSelfRef.jhc_tb__DOT__reset)
                                 ? 0U : ((8U & ((~ (IData)(vlSelfRef.jhc_tb__DOT__q)) 
                                                << 3U)) 
                                         | (7U & ((IData)(vlSelfRef.jhc_tb__DOT__q) 
                                                  >> 1U))));
}

void Vjhc___024root___timing_resume(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vjhc___024root___eval_triggers__act(Vjhc___024root* vlSelf);

bool Vjhc___024root___eval_phase__act(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vjhc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vjhc___024root___timing_resume(vlSelf);
        Vjhc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vjhc___024root___eval_phase__nba(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vjhc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjhc___024root___dump_triggers__nba(Vjhc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjhc___024root___dump_triggers__act(Vjhc___024root* vlSelf);
#endif  // VL_DEBUG

void Vjhc___024root___eval(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval\n"); );
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
            Vjhc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("jhc_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vjhc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("jhc_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vjhc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vjhc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vjhc___024root___eval_debug_assertions(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
