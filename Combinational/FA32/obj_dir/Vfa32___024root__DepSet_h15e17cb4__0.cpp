// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfa32.h for the primary calling header

#include "Vfa32__pch.h"
#include "Vfa32___024root.h"

VL_ATTR_COLD void Vfa32___024root___eval_initial__TOP(Vfa32___024root* vlSelf);
VlCoroutine Vfa32___024root___eval_initial__TOP__Vtiming__0(Vfa32___024root* vlSelf);

void Vfa32___024root___eval_initial(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfa32___024root___eval_initial__TOP(vlSelf);
    Vfa32___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vfa32___024root___eval_initial__TOP__Vtiming__0(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fa32_tb__DOT__A = 0xffffffffU;
    vlSelfRef.fa32_tb__DOT__B = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "fa32_tb.v", 
                                         18);
    vlSelfRef.fa32_tb__DOT__A = 0xfffffff0U;
    vlSelfRef.fa32_tb__DOT__B = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "fa32_tb.v", 
                                         21);
    VL_FINISH_MT("fa32_tb.v", 21, "");
}

void Vfa32___024root___eval_act(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vfa32___024root___eval_nba(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vfa32___024root___timing_resume(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfa32___024root___eval_triggers__act(Vfa32___024root* vlSelf);

bool Vfa32___024root___eval_phase__act(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfa32___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfa32___024root___timing_resume(vlSelf);
        Vfa32___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfa32___024root___eval_phase__nba(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfa32___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfa32___024root___dump_triggers__nba(Vfa32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfa32___024root___dump_triggers__act(Vfa32___024root* vlSelf);
#endif  // VL_DEBUG

void Vfa32___024root___eval(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval\n"); );
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
            Vfa32___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fa32_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vfa32___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fa32_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfa32___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfa32___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfa32___024root___eval_debug_assertions(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
