// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgrayc.h for the primary calling header

#include "Vgrayc__pch.h"
#include "Vgrayc__Syms.h"
#include "Vgrayc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgrayc___024root___dump_triggers__act(Vgrayc___024root* vlSelf);
#endif  // VL_DEBUG

void Vgrayc___024root___eval_triggers__act(Vgrayc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgrayc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgrayc___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.grayc_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__grayc_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.grayc_tb__DOT__reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__grayc_tb__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__grayc_tb__DOT__clk__0 
        = vlSelfRef.grayc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__grayc_tb__DOT__reset__0 
        = vlSelfRef.grayc_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgrayc___024root___dump_triggers__act(vlSelf);
    }
#endif
}
