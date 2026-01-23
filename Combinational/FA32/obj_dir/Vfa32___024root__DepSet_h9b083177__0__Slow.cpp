// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfa32.h for the primary calling header

#include "Vfa32__pch.h"
#include "Vfa32__Syms.h"
#include "Vfa32___024root.h"

VL_ATTR_COLD void Vfa32___024root___eval_initial__TOP(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"fa32.vcd"});
    vlSymsp->_traceDumpOpen();
}
