// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbw_ops.h for the primary calling header

#include "Vbw_ops__pch.h"
#include "Vbw_ops___024root.h"

VL_ATTR_COLD void Vbw_ops___024root___eval_initial__TOP(Vbw_ops___024root* vlSelf);
VlCoroutine Vbw_ops___024root___eval_initial__TOP__Vtiming__0(Vbw_ops___024root* vlSelf);

void Vbw_ops___024root___eval_initial(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbw_ops___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vbw_ops___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vbw_ops___024root___eval_initial__TOP__Vtiming__0(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bw_ops_tb__DOT__a = 0U;
    vlSelfRef.bw_ops_tb__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "bw_ops_tb.v", 
                                         18);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.bw_ops_tb__DOT__a = 6U;
    vlSelfRef.bw_ops_tb__DOT__b = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "bw_ops_tb.v", 
                                         19);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.bw_ops_tb__DOT__a = 0xdU;
    vlSelfRef.bw_ops_tb__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1eULL, nullptr, 
                                         "bw_ops_tb.v", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("bw_ops_tb.v", 21, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vbw_ops___024root___eval_act(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vbw_ops___024root___eval_nba(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vbw_ops___024root___timing_resume(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vbw_ops___024root___eval_triggers__act(Vbw_ops___024root* vlSelf);

bool Vbw_ops___024root___eval_phase__act(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbw_ops___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbw_ops___024root___timing_resume(vlSelf);
        Vbw_ops___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbw_ops___024root___eval_phase__nba(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbw_ops___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbw_ops___024root___dump_triggers__nba(Vbw_ops___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbw_ops___024root___dump_triggers__act(Vbw_ops___024root* vlSelf);
#endif  // VL_DEBUG

void Vbw_ops___024root___eval(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___eval\n"); );
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
            Vbw_ops___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("bw_ops_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vbw_ops___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bw_ops_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbw_ops___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbw_ops___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbw_ops___024root___eval_debug_assertions(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
