// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vequ_ops.h for the primary calling header

#include "Vequ_ops__pch.h"
#include "Vequ_ops___024root.h"

VL_ATTR_COLD void Vequ_ops___024root___eval_static(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vequ_ops___024root___eval_final(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vequ_ops___024root___eval_settle(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vequ_ops___024root___dump_triggers__act(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vequ_ops___024root___dump_triggers__nba(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vequ_ops___024root___ctor_var_reset(Vequ_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vequ_ops___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->equ_ops_tb__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->equ_ops_tb__DOT__b = VL_RAND_RESET_I(4);
    }
