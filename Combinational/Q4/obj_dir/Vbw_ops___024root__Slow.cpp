// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbw_ops.h for the primary calling header

#include "Vbw_ops__pch.h"
#include "Vbw_ops__Syms.h"
#include "Vbw_ops___024root.h"

void Vbw_ops___024root___ctor_var_reset(Vbw_ops___024root* vlSelf);

Vbw_ops___024root::Vbw_ops___024root(Vbw_ops__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbw_ops___024root___ctor_var_reset(this);
}

void Vbw_ops___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbw_ops___024root::~Vbw_ops___024root() {
}
