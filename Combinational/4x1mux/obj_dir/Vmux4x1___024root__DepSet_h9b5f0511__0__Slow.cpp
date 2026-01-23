// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1.h for the primary calling header

#include "Vmux4x1__pch.h"
#include "Vmux4x1___024root.h"

VL_ATTR_COLD void Vmux4x1___024root___eval_static(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmux4x1___024root___eval_final(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1___024root___dump_triggers__stl(Vmux4x1___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmux4x1___024root___eval_phase__stl(Vmux4x1___024root* vlSelf);

VL_ATTR_COLD void Vmux4x1___024root___eval_settle(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vmux4x1___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("mux_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmux4x1___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1___024root___dump_triggers__stl(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmux4x1___024root___act_sequent__TOP__0(Vmux4x1___024root* vlSelf);

VL_ATTR_COLD void Vmux4x1___024root___eval_stl(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmux4x1___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmux4x1___024root___eval_triggers__stl(Vmux4x1___024root* vlSelf);

VL_ATTR_COLD bool Vmux4x1___024root___eval_phase__stl(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmux4x1___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmux4x1___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1___024root___dump_triggers__act(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] mux_tb.D0)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] mux_tb.D1)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] mux_tb.D2)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] mux_tb.D3)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] mux_tb.S1)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] mux_tb.S2)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] mux_tb.Z)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1___024root___dump_triggers__nba(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] mux_tb.D0)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] mux_tb.D1)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] mux_tb.D2)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] mux_tb.D3)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] mux_tb.S1)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] mux_tb.S2)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] mux_tb.Z)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux4x1___024root___ctor_var_reset(Vmux4x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->mux_tb__DOT__D0 = VL_RAND_RESET_I(1);
    vlSelf->mux_tb__DOT__D1 = VL_RAND_RESET_I(1);
    vlSelf->mux_tb__DOT__D2 = VL_RAND_RESET_I(1);
    vlSelf->mux_tb__DOT__D3 = VL_RAND_RESET_I(1);
    vlSelf->mux_tb__DOT__S1 = VL_RAND_RESET_I(1);
    vlSelf->mux_tb__DOT__S2 = VL_RAND_RESET_I(1);
    vlSelf->mux_tb__DOT__Z = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mux_tb__DOT__D0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mux_tb__DOT__D1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mux_tb__DOT__D2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mux_tb__DOT__D3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mux_tb__DOT__S1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mux_tb__DOT__S2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mux_tb__DOT__Z__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
