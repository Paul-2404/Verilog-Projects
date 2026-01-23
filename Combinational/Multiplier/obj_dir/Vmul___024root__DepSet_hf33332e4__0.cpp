// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "Vmul__pch.h"
#include "Vmul__Syms.h"
#include "Vmul___024root.h"

VL_INLINE_OPT VlCoroutine Vmul___024root___eval_initial__TOP__Vtiming__0(Vmul___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.mul_tb__DOT__a = 0U;
    vlSelfRef.mul_tb__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mul_tb.v", 
                                         15);
    vlSelfRef.mul_tb__DOT__a = 1U;
    vlSelfRef.mul_tb__DOT__b = 0xfa7U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mul_tb.v", 
                                         16);
    vlSelfRef.mul_tb__DOT__a = 0x4f8U;
    vlSelfRef.mul_tb__DOT__b = 0x7caU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mul_tb.v", 
                                         17);
    VL_FINISH_MT("mul_tb.v", 19, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__act(Vmul___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul___024root___eval_triggers__act(Vmul___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.mul_tb__DOT__a) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__a__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.mul_tb__DOT__b) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__b__0)));
    vlSelfRef.__VactTriggered.set(2U, (vlSelfRef.mul_tb__DOT__p 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__p__0));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__a__0 
        = vlSelfRef.mul_tb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__b__0 
        = vlSelfRef.mul_tb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__mul_tb__DOT__p__0 
        = vlSelfRef.mul_tb__DOT__p;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmul___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmul___024root___nba_sequent__TOP__0(Vmul___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("Time=  %t,A=  %b,D=  %b,P=  %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,16,
                     (IData)(vlSelfRef.mul_tb__DOT__a),
                     16,vlSelfRef.mul_tb__DOT__b,32,
                     vlSelfRef.mul_tb__DOT__p);
    }
}
