// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlogical.h for the primary calling header

#include "Vlogical__pch.h"
#include "Vlogical___024root.h"

VL_ATTR_COLD void Vlogical___024root___eval_initial__TOP(Vlogical___024root* vlSelf);
VlCoroutine Vlogical___024root___eval_initial__TOP__Vtiming__0(Vlogical___024root* vlSelf);
VlCoroutine Vlogical___024root___eval_initial__TOP__Vtiming__1(Vlogical___024root* vlSelf);

void Vlogical___024root___eval_initial(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vlogical___024root___eval_initial__TOP(vlSelf);
    Vlogical___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vlogical___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vlogical___024root___eval_initial__TOP__Vtiming__0(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.logical_tb__DOT__a = 0U;
    vlSelfRef.logical_tb__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "logical_tb.v", 
                                         15);
    VL_FINISH_MT("logical_tb.v", 15, "");
}

VL_INLINE_OPT VlCoroutine Vlogical___024root___eval_initial__TOP__Vtiming__1(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "logical_tb.v", 
                                             19);
        vlSelfRef.logical_tb__DOT__a = (1U & (~ (IData)(vlSelfRef.logical_tb__DOT__a)));
    }
}

void Vlogical___024root___eval_act(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vlogical___024root___eval_nba(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vlogical___024root___timing_resume(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vlogical___024root___eval_triggers__act(Vlogical___024root* vlSelf);

bool Vlogical___024root___eval_phase__act(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vlogical___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vlogical___024root___timing_resume(vlSelf);
        Vlogical___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlogical___024root___eval_phase__nba(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vlogical___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlogical___024root___dump_triggers__nba(Vlogical___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlogical___024root___dump_triggers__act(Vlogical___024root* vlSelf);
#endif  // VL_DEBUG

void Vlogical___024root___eval(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___eval\n"); );
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
            Vlogical___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("logical_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vlogical___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("logical_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vlogical___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vlogical___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vlogical___024root___eval_debug_assertions(Vlogical___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
