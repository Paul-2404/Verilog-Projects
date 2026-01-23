// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpencoder.h for the primary calling header

#include "Vpencoder__pch.h"
#include "Vpencoder___024root.h"

VL_ATTR_COLD void Vpencoder___024root___eval_initial__TOP(Vpencoder___024root* vlSelf);
VlCoroutine Vpencoder___024root___eval_initial__TOP__Vtiming__0(Vpencoder___024root* vlSelf);

void Vpencoder___024root___eval_initial(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpencoder___024root___eval_initial__TOP(vlSelf);
    Vpencoder___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vpencoder___024root___eval_initial__TOP__Vtiming__0(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pencoder_tb__DOT__d = 0xffU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         13);
    vlSelfRef.pencoder_tb__DOT__d = 0x80U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         14);
    vlSelfRef.pencoder_tb__DOT__d = 0x7fU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         15);
    vlSelfRef.pencoder_tb__DOT__d = 0x40U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         16);
    vlSelfRef.pencoder_tb__DOT__d = 0x3fU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         17);
    vlSelfRef.pencoder_tb__DOT__d = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         18);
    vlSelfRef.pencoder_tb__DOT__d = 0x1fU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         19);
    vlSelfRef.pencoder_tb__DOT__d = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         20);
    vlSelfRef.pencoder_tb__DOT__d = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         21);
    vlSelfRef.pencoder_tb__DOT__d = 8U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         22);
    vlSelfRef.pencoder_tb__DOT__d = 7U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         23);
    vlSelfRef.pencoder_tb__DOT__d = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         24);
    vlSelfRef.pencoder_tb__DOT__d = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         25);
    vlSelfRef.pencoder_tb__DOT__d = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         26);
    vlSelfRef.pencoder_tb__DOT__d = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "pencoder_tb.v", 
                                         28);
    VL_FINISH_MT("pencoder_tb.v", 28, "");
}

void Vpencoder___024root___act_sequent__TOP__0(Vpencoder___024root* vlSelf);

void Vpencoder___024root___eval_act(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpencoder___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 256> Vpencoder__ConstPool__TABLE_h256e4c84_0;

VL_INLINE_OPT void Vpencoder___024root___act_sequent__TOP__0(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.pencoder_tb__DOT__d;
    vlSelfRef.pencoder_tb__DOT__o = Vpencoder__ConstPool__TABLE_h256e4c84_0
        [__Vtableidx1];
}

void Vpencoder___024root___eval_nba(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpencoder___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vpencoder___024root___timing_resume(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vpencoder___024root___eval_triggers__act(Vpencoder___024root* vlSelf);

bool Vpencoder___024root___eval_phase__act(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpencoder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpencoder___024root___timing_resume(vlSelf);
        Vpencoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpencoder___024root___eval_phase__nba(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpencoder___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpencoder___024root___dump_triggers__nba(Vpencoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpencoder___024root___dump_triggers__act(Vpencoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vpencoder___024root___eval(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___eval\n"); );
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
            Vpencoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("pencoder_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpencoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("pencoder_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpencoder___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpencoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpencoder___024root___eval_debug_assertions(Vpencoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpencoder___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
