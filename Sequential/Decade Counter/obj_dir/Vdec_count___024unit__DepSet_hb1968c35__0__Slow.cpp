// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_count.h for the primary calling header

#include "Vdec_count__pch.h"
#include "Vdec_count___024unit.h"

VL_ATTR_COLD void Vdec_count___024unit___ctor_var_reset(Vdec_count___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdec_count___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
