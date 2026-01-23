// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vequ_ops.h for the primary calling header

#include "Vequ_ops__pch.h"
#include "Vequ_ops__Syms.h"
#include "Vequ_ops___024root.h"

void Vequ_ops___024root___ctor_var_reset(Vequ_ops___024root* vlSelf);

Vequ_ops___024root::Vequ_ops___024root(Vequ_ops__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vequ_ops___024root___ctor_var_reset(this);
}

void Vequ_ops___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vequ_ops___024root::~Vequ_ops___024root() {
}
