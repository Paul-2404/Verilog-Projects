// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vudc.h for the primary calling header

#include "Vudc__pch.h"
#include "Vudc__Syms.h"
#include "Vudc___024root.h"

VL_ATTR_COLD void Vudc___024root___eval_initial__TOP(Vudc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"udc.vcd"});
    vlSymsp->_traceDumpOpen();
}
