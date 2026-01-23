// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff.h for the primary calling header

#include "Vff__pch.h"
#include "Vff__Syms.h"
#include "Vff___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vff___024root___dump_triggers__act(Vff___024root* vlSelf);
#endif  // VL_DEBUG

void Vff___024root___eval_triggers__act(Vff___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.ff_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ff_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.ff_tb__DOT__reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ff_tb__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__ff_tb__DOT__clk__0 
        = vlSelfRef.ff_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ff_tb__DOT__reset__0 
        = vlSelfRef.ff_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vff___024root___dump_triggers__act(vlSelf);
    }
#endif
}
