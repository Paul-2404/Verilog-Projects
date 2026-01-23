// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcequ_ops.h for the primary calling header

#include "Vcequ_ops__pch.h"
#include "Vcequ_ops___024root.h"

VL_ATTR_COLD void Vcequ_ops___024root___eval_initial__TOP(Vcequ_ops___024root* vlSelf);
VlCoroutine Vcequ_ops___024root___eval_initial__TOP__Vtiming__0(Vcequ_ops___024root* vlSelf);
VlCoroutine Vcequ_ops___024root___eval_initial__TOP__Vtiming__1(Vcequ_ops___024root* vlSelf);

void Vcequ_ops___024root___eval_initial(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcequ_ops___024root___eval_initial__TOP(vlSelf);
    Vcequ_ops___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcequ_ops___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vcequ_ops___024root___eval_initial__TOP__Vtiming__0(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cequ_ops_tb__DOT__a__strong__out0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "cequ_ops_tb.v", 
                                         14);
    vlSelfRef.cequ_ops_tb__DOT__a__strong__out1 = 8U;
    vlSelfRef.cequ_ops_tb__DOT__b__strong__out3 = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "cequ_ops_tb.v", 
                                         16);
    vlSelfRef.cequ_ops_tb__DOT__b__strong__out4 = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "cequ_ops_tb.v", 
                                         17);
    VL_FINISH_MT("cequ_ops_tb.v", 17, "");
}

VL_INLINE_OPT VlCoroutine Vcequ_ops___024root___eval_initial__TOP__Vtiming__1(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "cequ_ops_tb.v", 
                                             21);
        vlSelfRef.cequ_ops_tb__DOT__a__strong__out2 
            = (0xfU & (~ (IData)(vlSelfRef.cequ_ops_tb__DOT__a)));
    }
}

void Vcequ_ops___024root___act_sequent__TOP__0(Vcequ_ops___024root* vlSelf);

void Vcequ_ops___024root___eval_act(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcequ_ops___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcequ_ops___024root___act_sequent__TOP__0(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cequ_ops_tb__DOT__a = ((IData)(vlSelfRef.cequ_ops_tb__DOT__a__strong__out0) 
                                     | ((0xeU & (IData)(vlSelfRef.cequ_ops_tb__DOT__a__strong__out1)) 
                                        | (IData)(vlSelfRef.cequ_ops_tb__DOT__a__strong__out2)));
}

void Vcequ_ops___024root___eval_nba(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcequ_ops___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vcequ_ops___024root___timing_resume(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcequ_ops___024root___eval_triggers__act(Vcequ_ops___024root* vlSelf);

bool Vcequ_ops___024root___eval_phase__act(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcequ_ops___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcequ_ops___024root___timing_resume(vlSelf);
        Vcequ_ops___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcequ_ops___024root___eval_phase__nba(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcequ_ops___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcequ_ops___024root___dump_triggers__nba(Vcequ_ops___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcequ_ops___024root___dump_triggers__act(Vcequ_ops___024root* vlSelf);
#endif  // VL_DEBUG

void Vcequ_ops___024root___eval(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___eval\n"); );
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
            Vcequ_ops___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("cequ_ops_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcequ_ops___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("cequ_ops_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcequ_ops___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcequ_ops___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcequ_ops___024root___eval_debug_assertions(Vcequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
