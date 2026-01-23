// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vodd_parity.h for the primary calling header

#include "Vodd_parity__pch.h"
#include "Vodd_parity___024root.h"

VlCoroutine Vodd_parity___024root___eval_initial__TOP__Vtiming__0(Vodd_parity___024root* vlSelf);

void Vodd_parity___024root___eval_initial(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vodd_parity___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vodd_parity___024root___eval_act(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vodd_parity___024root___eval_nba(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vodd_parity___024root___timing_resume(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vodd_parity___024root___eval_triggers__act(Vodd_parity___024root* vlSelf);

bool Vodd_parity___024root___eval_phase__act(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vodd_parity___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vodd_parity___024root___timing_resume(vlSelf);
        Vodd_parity___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vodd_parity___024root___eval_phase__nba(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vodd_parity___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vodd_parity___024root___dump_triggers__nba(Vodd_parity___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vodd_parity___024root___dump_triggers__act(Vodd_parity___024root* vlSelf);
#endif  // VL_DEBUG

void Vodd_parity___024root___eval(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval\n"); );
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
            Vodd_parity___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("odd_parity_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vodd_parity___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("odd_parity_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vodd_parity___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vodd_parity___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vodd_parity___024root___eval_debug_assertions(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
