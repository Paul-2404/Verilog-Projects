// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddsub.h for the primary calling header

#include "Vaddsub__pch.h"
#include "Vaddsub___024root.h"

VL_ATTR_COLD void Vaddsub___024root___eval_initial__TOP(Vaddsub___024root* vlSelf);
VlCoroutine Vaddsub___024root___eval_initial__TOP__Vtiming__0(Vaddsub___024root* vlSelf);
VlCoroutine Vaddsub___024root___eval_initial__TOP__Vtiming__1(Vaddsub___024root* vlSelf);

void Vaddsub___024root___eval_initial(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaddsub___024root___eval_initial__TOP(vlSelf);
    Vaddsub___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vaddsub___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vaddsub___024root___eval_initial__TOP__Vtiming__0(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.addsub_tb__DOT__ctrl = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "addsub_tb.v", 
                                             17);
        vlSelfRef.addsub_tb__DOT__ctrl = (1U & (~ (IData)(vlSelfRef.addsub_tb__DOT__ctrl)));
    }
}

VL_INLINE_OPT VlCoroutine Vaddsub___024root___eval_initial__TOP__Vtiming__1(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.addsub_tb__DOT__a = 3U;
    vlSelfRef.addsub_tb__DOT__b = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "addsub_tb.v", 
                                         23);
    vlSelfRef.addsub_tb__DOT__a = 0xaU;
    vlSelfRef.addsub_tb__DOT__b = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "addsub_tb.v", 
                                         26);
    vlSelfRef.addsub_tb__DOT__a = 0xfU;
    vlSelfRef.addsub_tb__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "addsub_tb.v", 
                                         29);
    vlSelfRef.addsub_tb__DOT__a = 7U;
    vlSelfRef.addsub_tb__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "addsub_tb.v", 
                                         33);
    VL_FINISH_MT("addsub_tb.v", 33, "");
}

void Vaddsub___024root___eval_act(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vaddsub___024root___eval_nba(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vaddsub___024root___timing_resume(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vaddsub___024root___eval_triggers__act(Vaddsub___024root* vlSelf);

bool Vaddsub___024root___eval_phase__act(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaddsub___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vaddsub___024root___timing_resume(vlSelf);
        Vaddsub___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vaddsub___024root___eval_phase__nba(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaddsub___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__nba(Vaddsub___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__act(Vaddsub___024root* vlSelf);
#endif  // VL_DEBUG

void Vaddsub___024root___eval(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval\n"); );
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
            Vaddsub___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("addsub_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vaddsub___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("addsub_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vaddsub___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vaddsub___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaddsub___024root___eval_debug_assertions(Vaddsub___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
