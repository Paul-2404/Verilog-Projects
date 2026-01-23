// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vequ_ops.h for the primary calling header

#include "Vequ_ops__pch.h"
#include "Vequ_ops___024root.h"

VL_ATTR_COLD void Vequ_ops___024root___eval_initial__TOP(Vequ_ops___024root* vlSelf);
VlCoroutine Vequ_ops___024root___eval_initial__TOP__Vtiming__0(Vequ_ops___024root* vlSelf);
VlCoroutine Vequ_ops___024root___eval_initial__TOP__Vtiming__1(Vequ_ops___024root* vlSelf);

void Vequ_ops___024root___eval_initial(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vequ_ops___024root___eval_initial__TOP(vlSelf);
    Vequ_ops___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vequ_ops___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vequ_ops___024root___eval_initial__TOP__Vtiming__0(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.equ_ops_tb__DOT__a = 0U;
    vlSelfRef.equ_ops_tb__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "equ_ops_tb.v", 
                                         16);
    vlSelfRef.equ_ops_tb__DOT__a = 9U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "equ_ops_tb.v", 
                                         17);
    vlSelfRef.equ_ops_tb__DOT__b = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "equ_ops_tb.v", 
                                         18);
    VL_FINISH_MT("equ_ops_tb.v", 18, "");
}

VL_INLINE_OPT VlCoroutine Vequ_ops___024root___eval_initial__TOP__Vtiming__1(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "equ_ops_tb.v", 
                                             22);
        vlSelfRef.equ_ops_tb__DOT__a = (0xfU & (~ (IData)(vlSelfRef.equ_ops_tb__DOT__a)));
    }
}

void Vequ_ops___024root___eval_act(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vequ_ops___024root___eval_nba(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vequ_ops___024root___timing_resume(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vequ_ops___024root___eval_triggers__act(Vequ_ops___024root* vlSelf);

bool Vequ_ops___024root___eval_phase__act(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vequ_ops___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vequ_ops___024root___timing_resume(vlSelf);
        Vequ_ops___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vequ_ops___024root___eval_phase__nba(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vequ_ops___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vequ_ops___024root___dump_triggers__nba(Vequ_ops___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vequ_ops___024root___dump_triggers__act(Vequ_ops___024root* vlSelf);
#endif  // VL_DEBUG

void Vequ_ops___024root___eval(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval\n"); );
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
            Vequ_ops___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("equ_ops_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vequ_ops___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("equ_ops_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vequ_ops___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vequ_ops___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vequ_ops___024root___eval_debug_assertions(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
