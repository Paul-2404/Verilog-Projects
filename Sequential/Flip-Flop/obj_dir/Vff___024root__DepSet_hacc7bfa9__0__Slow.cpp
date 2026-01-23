// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff.h for the primary calling header

#include "Vff__pch.h"
#include "Vff__Syms.h"
#include "Vff___024root.h"

VL_ATTR_COLD void Vff___024root___eval_initial__TOP(Vff___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"ff.vcd"});
    vlSymsp->_traceDumpOpen();
}
