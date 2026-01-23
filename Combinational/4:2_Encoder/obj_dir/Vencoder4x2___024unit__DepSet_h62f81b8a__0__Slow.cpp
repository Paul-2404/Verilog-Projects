// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder4x2.h for the primary calling header

#include "Vencoder4x2__pch.h"
#include "Vencoder4x2___024unit.h"

VL_ATTR_COLD void Vencoder4x2___024unit___ctor_var_reset(Vencoder4x2___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder4x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vencoder4x2___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
