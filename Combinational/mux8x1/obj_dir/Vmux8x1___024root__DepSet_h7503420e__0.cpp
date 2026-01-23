// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux8x1.h for the primary calling header

#include "Vmux8x1__pch.h"
#include "Vmux8x1___024root.h"

VL_ATTR_COLD void Vmux8x1___024root___eval_initial__TOP(Vmux8x1___024root* vlSelf);
VlCoroutine Vmux8x1___024root___eval_initial__TOP__Vtiming__0(Vmux8x1___024root* vlSelf);

void Vmux8x1___024root___eval_initial(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmux8x1___024root___eval_initial__TOP(vlSelf);
    Vmux8x1___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__mux8x1_tb__DOT__D__0 
        = vlSelfRef.mux8x1_tb__DOT__D;
    vlSelfRef.__Vtrigprevexpr___TOP__mux8x1_tb__DOT__S__0 
        = vlSelfRef.mux8x1_tb__DOT__S;
    vlSelfRef.__Vtrigprevexpr___TOP__mux8x1_tb__DOT__Z__0 
        = vlSelfRef.mux8x1_tb__DOT__Z;
}

void Vmux8x1___024root___act_sequent__TOP__0(Vmux8x1___024root* vlSelf);

void Vmux8x1___024root___eval_act(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vmux8x1___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmux8x1___024root___act_sequent__TOP__0(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mux8x1_tb__DOT__Z = (1U & ((0U == (IData)(vlSelfRef.mux8x1_tb__DOT__S))
                                          ? ((IData)(vlSelfRef.mux8x1_tb__DOT__D) 
                                             >> 7U)
                                          : ((1U == (IData)(vlSelfRef.mux8x1_tb__DOT__S))
                                              ? ((IData)(vlSelfRef.mux8x1_tb__DOT__D) 
                                                 >> 6U)
                                              : ((2U 
                                                  == (IData)(vlSelfRef.mux8x1_tb__DOT__S))
                                                  ? 
                                                 ((IData)(vlSelfRef.mux8x1_tb__DOT__D) 
                                                  >> 5U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.mux8x1_tb__DOT__S))
                                                   ? 
                                                  ((IData)(vlSelfRef.mux8x1_tb__DOT__D) 
                                                   >> 4U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.mux8x1_tb__DOT__S))
                                                    ? 
                                                   ((IData)(vlSelfRef.mux8x1_tb__DOT__D) 
                                                    >> 3U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.mux8x1_tb__DOT__S))
                                                     ? 
                                                    ((IData)(vlSelfRef.mux8x1_tb__DOT__D) 
                                                     >> 2U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.mux8x1_tb__DOT__S))
                                                      ? 
                                                     ((IData)(vlSelfRef.mux8x1_tb__DOT__D) 
                                                      >> 1U)
                                                      : (IData)(vlSelfRef.mux8x1_tb__DOT__D)))))))));
}

void Vmux8x1___024root___nba_sequent__TOP__0(Vmux8x1___024root* vlSelf);

void Vmux8x1___024root___eval_nba(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmux8x1___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vmux8x1___024root___timing_resume(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmux8x1___024root___eval_triggers__act(Vmux8x1___024root* vlSelf);

bool Vmux8x1___024root___eval_phase__act(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmux8x1___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmux8x1___024root___timing_resume(vlSelf);
        Vmux8x1___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmux8x1___024root___eval_phase__nba(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmux8x1___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux8x1___024root___dump_triggers__nba(Vmux8x1___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux8x1___024root___dump_triggers__act(Vmux8x1___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux8x1___024root___eval(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___eval\n"); );
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
            Vmux8x1___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mux8x1_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmux8x1___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mux8x1_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmux8x1___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmux8x1___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmux8x1___024root___eval_debug_assertions(Vmux8x1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
