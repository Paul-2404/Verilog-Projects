// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_count.h for the primary calling header

#include "Vdec_count__pch.h"
#include "Vdec_count__Syms.h"
#include "Vdec_count___024root.h"

void Vdec_count___024root___ctor_var_reset(Vdec_count___024root* vlSelf);

Vdec_count___024root::Vdec_count___024root(Vdec_count__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdec_count___024root___ctor_var_reset(this);
}

void Vdec_count___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdec_count___024root::~Vdec_count___024root() {
}
