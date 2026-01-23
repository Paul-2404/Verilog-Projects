// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vodd_parity.h for the primary calling header

#include "Vodd_parity__pch.h"
#include "Vodd_parity___024root.h"

VL_ATTR_COLD void Vodd_parity___024root___eval_static(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vodd_parity___024root___eval_final(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vodd_parity___024root___eval_settle(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vodd_parity___024root___dump_triggers__act(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vodd_parity___024root___dump_triggers__nba(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vodd_parity___024root___ctor_var_reset(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->odd_parity_tb__DOT__i = VL_RAND_RESET_I(8);
    }
