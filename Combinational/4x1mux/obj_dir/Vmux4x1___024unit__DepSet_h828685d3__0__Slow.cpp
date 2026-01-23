// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1.h for the primary calling header

#include "Vmux4x1__pch.h"
#include "Vmux4x1___024unit.h"

VL_ATTR_COLD void Vmux4x1___024unit___ctor_var_reset(Vmux4x1___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux4x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vmux4x1___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
