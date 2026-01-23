// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjhc.h for the primary calling header

#include "Vjhc__pch.h"
#include "Vjhc__Syms.h"
#include "Vjhc___024root.h"

VL_INLINE_OPT VlCoroutine Vjhc___024root___eval_initial__TOP__Vtiming__1(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"jhc.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.jhc_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "jhc_tb.v", 
                                         24);
    vlSelfRef.jhc_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "jhc_tb.v", 
                                         27);
    VL_FINISH_MT("jhc_tb.v", 27, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjhc___024root___dump_triggers__act(Vjhc___024root* vlSelf);
#endif  // VL_DEBUG

void Vjhc___024root___eval_triggers__act(Vjhc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjhc___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.jhc_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jhc_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.jhc_tb__DOT__reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jhc_tb__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__jhc_tb__DOT__clk__0 
        = vlSelfRef.jhc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__jhc_tb__DOT__reset__0 
        = vlSelfRef.jhc_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjhc___024root___dump_triggers__act(vlSelf);
    }
#endif
}
