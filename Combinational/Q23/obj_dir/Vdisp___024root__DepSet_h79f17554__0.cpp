// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdisp.h for the primary calling header

#include "Vdisp__pch.h"
#include "Vdisp___024root.h"

VL_ATTR_COLD void Vdisp___024root___eval_initial__TOP(Vdisp___024root* vlSelf);
VlCoroutine Vdisp___024root___eval_initial__TOP__Vtiming__0(Vdisp___024root* vlSelf);

void Vdisp___024root___eval_initial(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdisp___024root___eval_initial__TOP(vlSelf);
    Vdisp___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vdisp___024root___eval_initial__TOP__Vtiming__0(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.disp_tb__DOT__i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         13);
    vlSelfRef.disp_tb__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         14);
    vlSelfRef.disp_tb__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         15);
    vlSelfRef.disp_tb__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         16);
    vlSelfRef.disp_tb__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         17);
    vlSelfRef.disp_tb__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         18);
    vlSelfRef.disp_tb__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         19);
    vlSelfRef.disp_tb__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         20);
    vlSelfRef.disp_tb__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         21);
    vlSelfRef.disp_tb__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         22);
    vlSelfRef.disp_tb__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         23);
    vlSelfRef.disp_tb__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         24);
    vlSelfRef.disp_tb__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "disp_tb.v", 
                                         26);
    VL_FINISH_MT("disp_tb.v", 26, "");
}

void Vdisp___024root___act_sequent__TOP__0(Vdisp___024root* vlSelf);

void Vdisp___024root___eval_act(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdisp___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*6:0*/, 16> Vdisp__ConstPool__TABLE_h1452b4ec_0;

VL_INLINE_OPT void Vdisp___024root___act_sequent__TOP__0(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.disp_tb__DOT__i;
    vlSelfRef.disp_tb__DOT__d = Vdisp__ConstPool__TABLE_h1452b4ec_0
        [__Vtableidx1];
}

void Vdisp___024root___eval_nba(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdisp___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdisp___024root___timing_resume(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdisp___024root___eval_triggers__act(Vdisp___024root* vlSelf);

bool Vdisp___024root___eval_phase__act(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdisp___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdisp___024root___timing_resume(vlSelf);
        Vdisp___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdisp___024root___eval_phase__nba(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdisp___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdisp___024root___dump_triggers__nba(Vdisp___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdisp___024root___dump_triggers__act(Vdisp___024root* vlSelf);
#endif  // VL_DEBUG

void Vdisp___024root___eval(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval\n"); );
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
            Vdisp___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("disp_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdisp___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("disp_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdisp___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdisp___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdisp___024root___eval_debug_assertions(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
