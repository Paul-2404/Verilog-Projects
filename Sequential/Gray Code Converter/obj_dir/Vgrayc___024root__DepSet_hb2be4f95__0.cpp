// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgrayc.h for the primary calling header

#include "Vgrayc__pch.h"
#include "Vgrayc___024root.h"

VL_ATTR_COLD void Vgrayc___024root___eval_initial__TOP(Vgrayc___024root* vlSelf);
VlCoroutine Vgrayc___024root___eval_initial__TOP__Vtiming__0(Vgrayc___024root* vlSelf);
VlCoroutine Vgrayc___024root___eval_initial__TOP__Vtiming__1(Vgrayc___024root* vlSelf);

void Vgrayc___024root___eval_initial(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vgrayc___024root___eval_initial__TOP(vlSelf);
    Vgrayc___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vgrayc___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__grayc_tb__DOT__clk__0 
        = vlSelfRef.grayc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__grayc_tb__DOT__reset__0 
        = vlSelfRef.grayc_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vgrayc___024root___eval_initial__TOP__Vtiming__0(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.grayc_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "grayc_tb.v", 
                                             15);
        vlSelfRef.grayc_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.grayc_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vgrayc___024root___eval_initial__TOP__Vtiming__1(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.grayc_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "grayc_tb.v", 
                                         20);
    vlSelfRef.grayc_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x12cULL, 
                                         nullptr, "grayc_tb.v", 
                                         23);
    VL_FINISH_MT("grayc_tb.v", 23, "");
}

void Vgrayc___024root___eval_act(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vgrayc___024root___nba_sequent__TOP__0(Vgrayc___024root* vlSelf);

void Vgrayc___024root___eval_nba(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgrayc___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vgrayc___024root___nba_sequent__TOP__0(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__grayc_tb__DOT__dut__DOT__b;
    __Vdly__grayc_tb__DOT__dut__DOT__b = 0;
    // Body
    __Vdly__grayc_tb__DOT__dut__DOT__b = vlSelfRef.grayc_tb__DOT__dut__DOT__b;
    if (vlSelfRef.grayc_tb__DOT__reset) {
        vlSelfRef.grayc_tb__DOT__g = 0U;
        __Vdly__grayc_tb__DOT__dut__DOT__b = 0U;
    } else {
        __Vdly__grayc_tb__DOT__dut__DOT__b = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.grayc_tb__DOT__dut__DOT__b)));
        vlSelfRef.grayc_tb__DOT__g = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.grayc_tb__DOT__dut__DOT__b), 1U) 
                                               ^ (IData)(vlSelfRef.grayc_tb__DOT__dut__DOT__b)));
    }
    vlSelfRef.grayc_tb__DOT__dut__DOT__b = __Vdly__grayc_tb__DOT__dut__DOT__b;
}

void Vgrayc___024root___timing_resume(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vgrayc___024root___eval_triggers__act(Vgrayc___024root* vlSelf);

bool Vgrayc___024root___eval_phase__act(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vgrayc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vgrayc___024root___timing_resume(vlSelf);
        Vgrayc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vgrayc___024root___eval_phase__nba(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vgrayc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgrayc___024root___dump_triggers__nba(Vgrayc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgrayc___024root___dump_triggers__act(Vgrayc___024root* vlSelf);
#endif  // VL_DEBUG

void Vgrayc___024root___eval(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval\n"); );
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
            Vgrayc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("grayc_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vgrayc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("grayc_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vgrayc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vgrayc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vgrayc___024root___eval_debug_assertions(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
