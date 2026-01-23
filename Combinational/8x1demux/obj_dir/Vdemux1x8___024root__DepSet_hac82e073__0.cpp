// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux1x8.h for the primary calling header

#include "Vdemux1x8__pch.h"
#include "Vdemux1x8___024root.h"

VL_ATTR_COLD void Vdemux1x8___024root___eval_initial__TOP(Vdemux1x8___024root* vlSelf);
VlCoroutine Vdemux1x8___024root___eval_initial__TOP__Vtiming__0(Vdemux1x8___024root* vlSelf);

void Vdemux1x8___024root___eval_initial(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdemux1x8___024root___eval_initial__TOP(vlSelf);
    Vdemux1x8___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__demux1x8_tb__DOT__A__0 
        = vlSelfRef.demux1x8_tb__DOT__A;
    vlSelfRef.__Vtrigprevexpr___TOP__demux1x8_tb__DOT__D__0 
        = vlSelfRef.demux1x8_tb__DOT__D;
    vlSelfRef.__Vtrigprevexpr___TOP__demux1x8_tb__DOT__S__0 
        = vlSelfRef.demux1x8_tb__DOT__S;
}

void Vdemux1x8___024root___act_sequent__TOP__0(Vdemux1x8___024root* vlSelf);

void Vdemux1x8___024root___eval_act(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdemux1x8___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdemux1x8___024root___act_sequent__TOP__0(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.demux1x8_tb__DOT__D = ((((IData)(vlSelfRef.demux1x8_tb__DOT__A) 
                                       & (7U == (IData)(vlSelfRef.demux1x8_tb__DOT__S))) 
                                      << 7U) | ((((IData)(vlSelfRef.demux1x8_tb__DOT__A) 
                                                  & (6U 
                                                     == (IData)(vlSelfRef.demux1x8_tb__DOT__S))) 
                                                 << 6U) 
                                                | ((((IData)(vlSelfRef.demux1x8_tb__DOT__A) 
                                                     & (5U 
                                                        == (IData)(vlSelfRef.demux1x8_tb__DOT__S))) 
                                                    << 5U) 
                                                   | ((((IData)(vlSelfRef.demux1x8_tb__DOT__A) 
                                                        & (4U 
                                                           == (IData)(vlSelfRef.demux1x8_tb__DOT__S))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelfRef.demux1x8_tb__DOT__A) 
                                                           & (3U 
                                                              == (IData)(vlSelfRef.demux1x8_tb__DOT__S))) 
                                                          << 3U) 
                                                         | ((((IData)(vlSelfRef.demux1x8_tb__DOT__A) 
                                                              & (2U 
                                                                 == (IData)(vlSelfRef.demux1x8_tb__DOT__S))) 
                                                             << 2U) 
                                                            | ((((IData)(vlSelfRef.demux1x8_tb__DOT__A) 
                                                                 & (1U 
                                                                    == (IData)(vlSelfRef.demux1x8_tb__DOT__S))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.demux1x8_tb__DOT__A) 
                                                                  & (0U 
                                                                     == (IData)(vlSelfRef.demux1x8_tb__DOT__S))))))))));
}

void Vdemux1x8___024root___nba_sequent__TOP__0(Vdemux1x8___024root* vlSelf);

void Vdemux1x8___024root___eval_nba(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdemux1x8___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdemux1x8___024root___timing_resume(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdemux1x8___024root___eval_triggers__act(Vdemux1x8___024root* vlSelf);

bool Vdemux1x8___024root___eval_phase__act(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdemux1x8___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdemux1x8___024root___timing_resume(vlSelf);
        Vdemux1x8___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdemux1x8___024root___eval_phase__nba(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdemux1x8___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemux1x8___024root___dump_triggers__nba(Vdemux1x8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemux1x8___024root___dump_triggers__act(Vdemux1x8___024root* vlSelf);
#endif  // VL_DEBUG

void Vdemux1x8___024root___eval(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___eval\n"); );
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
            Vdemux1x8___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("demux1x8_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdemux1x8___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("demux1x8_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdemux1x8___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdemux1x8___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdemux1x8___024root___eval_debug_assertions(Vdemux1x8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux1x8___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
