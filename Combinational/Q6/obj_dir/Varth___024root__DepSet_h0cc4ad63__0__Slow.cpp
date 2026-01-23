// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varth.h for the primary calling header

#include "Varth__pch.h"
#include "Varth__Syms.h"
#include "Varth___024root.h"

VL_ATTR_COLD void Varth___024root___eval_initial__TOP(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"arth.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Varth___024root___dump_triggers__stl(Varth___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Varth___024root___eval_triggers__stl(Varth___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varth___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
