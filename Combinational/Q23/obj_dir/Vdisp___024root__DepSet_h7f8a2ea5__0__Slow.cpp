// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdisp.h for the primary calling header

#include "Vdisp__pch.h"
#include "Vdisp__Syms.h"
#include "Vdisp___024root.h"

VL_ATTR_COLD void Vdisp___024root___eval_initial__TOP(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"disp.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdisp___024root___dump_triggers__stl(Vdisp___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdisp___024root___eval_triggers__stl(Vdisp___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisp___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdisp___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
