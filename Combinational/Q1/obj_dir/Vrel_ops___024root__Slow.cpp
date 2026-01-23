// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrel_ops.h for the primary calling header

#include "Vrel_ops__pch.h"
#include "Vrel_ops__Syms.h"
#include "Vrel_ops___024root.h"

void Vrel_ops___024root___ctor_var_reset(Vrel_ops___024root* vlSelf);

Vrel_ops___024root::Vrel_ops___024root(Vrel_ops__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrel_ops___024root___ctor_var_reset(this);
}

void Vrel_ops___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrel_ops___024root::~Vrel_ops___024root() {
}
