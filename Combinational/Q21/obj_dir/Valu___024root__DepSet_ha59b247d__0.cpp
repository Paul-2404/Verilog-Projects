// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"
#include "Valu___024root.h"

VL_ATTR_COLD void Valu___024root___eval_initial__TOP(Valu___024root* vlSelf);
VlCoroutine Valu___024root___eval_initial__TOP__Vtiming__0(Valu___024root* vlSelf);

void Valu___024root___eval_initial(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu___024root___eval_initial__TOP(vlSelf);
    Valu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Valu___024root___eval_initial__TOP__Vtiming__0(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__control = 0U;
    vlSelfRef.alu_tb__DOT__a = 0xffa0U;
    vlSelfRef.alu_tb__DOT__b = 0xfcbU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "alu_tb.v", 
                                         21);
    vlSelfRef.alu_tb__DOT__control = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "alu_tb.v", 
                                         22);
    vlSelfRef.alu_tb__DOT__control = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "alu_tb.v", 
                                         23);
    vlSelfRef.alu_tb__DOT__control = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "alu_tb.v", 
                                         24);
    vlSelfRef.alu_tb__DOT__control = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "alu_tb.v", 
                                         25);
    vlSelfRef.alu_tb__DOT__control = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "alu_tb.v", 
                                         26);
    vlSelfRef.alu_tb__DOT__control = 6U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "alu_tb.v", 
                                         27);
    vlSelfRef.alu_tb__DOT__control = 7U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "alu_tb.v", 
                                         29);
    VL_FINISH_MT("alu_tb.v", 29, "");
}

void Valu___024root___act_sequent__TOP__0(Valu___024root* vlSelf);

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Valu___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Valu___024root___act_sequent__TOP__0(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.alu_tb__DOT__control))) {
        if ((2U & (IData)(vlSelfRef.alu_tb__DOT__control))) {
            if ((1U & (IData)(vlSelfRef.alu_tb__DOT__control))) {
                vlSelfRef.alu_tb__DOT__c = (((IData)(vlSelfRef.alu_tb__DOT__a) 
                                             == (IData)(vlSelfRef.alu_tb__DOT__b))
                                             ? 3U : 
                                            (((IData)(vlSelfRef.alu_tb__DOT__a) 
                                              < (IData)(vlSelfRef.alu_tb__DOT__b))
                                              ? 1U : 
                                             (((IData)(vlSelfRef.alu_tb__DOT__a) 
                                               > (IData)(vlSelfRef.alu_tb__DOT__b))
                                               ? 2U
                                               : 0U)));
                vlSelfRef.alu_tb__DOT__z = (0xffffU 
                                            & 0U);
            } else {
                vlSelfRef.alu_tb__DOT__c = 0U;
                vlSelfRef.alu_tb__DOT__z = (0xffffU 
                                            & (~ ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                  ^ (IData)(vlSelfRef.alu_tb__DOT__b))));
            }
        } else {
            vlSelfRef.alu_tb__DOT__c = 0U;
            vlSelfRef.alu_tb__DOT__z = (0xffffU & (
                                                   (1U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__control))
                                                    ? 
                                                   ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                    ^ (IData)(vlSelfRef.alu_tb__DOT__b))
                                                    : 
                                                   ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                    | (IData)(vlSelfRef.alu_tb__DOT__b))));
        }
    } else {
        vlSelfRef.alu_tb__DOT__c = 0U;
        vlSelfRef.alu_tb__DOT__z = (0xffffU & ((2U 
                                                & (IData)(vlSelfRef.alu_tb__DOT__control))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__control))
                                                    ? 
                                                   ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__b))
                                                    : 
                                                   ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                    - (IData)(vlSelfRef.alu_tb__DOT__b)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__control))
                                                    ? 
                                                   ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                    + (IData)(vlSelfRef.alu_tb__DOT__b))
                                                    : 0U)));
    }
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Valu___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___timing_resume(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__act(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Valu___024root___timing_resume(vlSelf);
        Valu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu___024root___eval_phase__nba(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
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
            Valu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("alu_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("alu_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Valu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Valu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
