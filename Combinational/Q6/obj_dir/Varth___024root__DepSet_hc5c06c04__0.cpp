// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varth.h for the primary calling header

#include "Varth__pch.h"
#include "Varth___024root.h"

VL_ATTR_COLD void Varth___024root___eval_initial__TOP(Varth___024root* vlSelf);
VlCoroutine Varth___024root___eval_initial__TOP__Vtiming__0(Varth___024root* vlSelf);

void Varth___024root___eval_initial(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Varth___024root___eval_initial__TOP(vlSelf);
    Varth___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Varth___024root___eval_initial__TOP__Vtiming__0(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.arth_tb__DOT__a = 2U;
    vlSelfRef.arth_tb__DOT__b = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "arth_tb.v", 
                                         20);
    VL_FINISH_MT("arth_tb.v", 20, "");
}

void Varth___024root___act_sequent__TOP__0(Varth___024root* vlSelf);

void Varth___024root___eval_act(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Varth___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Varth__ConstPool__TABLE_h54327add_0;
extern const VlUnpacked<CData/*1:0*/, 16> Varth__ConstPool__TABLE_h0d5a0968_0;
extern const VlUnpacked<CData/*1:0*/, 16> Varth__ConstPool__TABLE_h2a301f27_0;
extern const VlUnpacked<CData/*1:0*/, 16> Varth__ConstPool__TABLE_habc2f548_0;
extern const VlUnpacked<CData/*1:0*/, 16> Varth__ConstPool__TABLE_h2ebc24be_0;
extern const VlUnpacked<CData/*1:0*/, 16> Varth__ConstPool__TABLE_h76525d41_0;

VL_INLINE_OPT void Varth___024root___act_sequent__TOP__0(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.arth_tb__DOT__b) 
                     << 2U) | (IData)(vlSelfRef.arth_tb__DOT__a));
    vlSelfRef.arth_tb__DOT__s = Varth__ConstPool__TABLE_h54327add_0
        [__Vtableidx1];
    vlSelfRef.arth_tb__DOT__d = Varth__ConstPool__TABLE_h0d5a0968_0
        [__Vtableidx1];
    vlSelfRef.arth_tb__DOT__p = Varth__ConstPool__TABLE_h2a301f27_0
        [__Vtableidx1];
    vlSelfRef.arth_tb__DOT__q = Varth__ConstPool__TABLE_habc2f548_0
        [__Vtableidx1];
    vlSelfRef.arth_tb__DOT__m = Varth__ConstPool__TABLE_h2ebc24be_0
        [__Vtableidx1];
    vlSelfRef.arth_tb__DOT__r = Varth__ConstPool__TABLE_h76525d41_0
        [__Vtableidx1];
}

void Varth___024root___eval_nba(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Varth___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Varth___024root___timing_resume(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Varth___024root___eval_triggers__act(Varth___024root* vlSelf);

bool Varth___024root___eval_phase__act(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Varth___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Varth___024root___timing_resume(vlSelf);
        Varth___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Varth___024root___eval_phase__nba(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Varth___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varth___024root___dump_triggers__nba(Varth___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Varth___024root___dump_triggers__act(Varth___024root* vlSelf);
#endif  // VL_DEBUG

void Varth___024root___eval(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval\n"); );
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
            Varth___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("arth_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Varth___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("arth_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Varth___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Varth___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Varth___024root___eval_debug_assertions(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
