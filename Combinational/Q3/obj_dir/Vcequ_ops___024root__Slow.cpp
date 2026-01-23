// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcequ_ops.h for the primary calling header

#include "Vcequ_ops__pch.h"
#include "Vcequ_ops__Syms.h"
#include "Vcequ_ops___024root.h"

void Vcequ_ops___024root___ctor_var_reset(Vcequ_ops___024root* vlSelf);

Vcequ_ops___024root::Vcequ_ops___024root(Vcequ_ops__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcequ_ops___024root___ctor_var_reset(this);
}

void Vcequ_ops___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcequ_ops___024root::~Vcequ_ops___024root() {
}
