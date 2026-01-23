// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux1x8.h for the primary calling header

#include "Vdemux1x8__pch.h"
#include "Vdemux1x8___024unit.h"

VL_ATTR_COLD void Vdemux1x8___024unit___ctor_var_reset(Vdemux1x8___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdemux1x8___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
