// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varth.h for the primary calling header

#include "Varth__pch.h"
#include "Varth__Syms.h"
#include "Varth___024root.h"

void Varth___024root___ctor_var_reset(Varth___024root* vlSelf);

Varth___024root::Varth___024root(Varth__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Varth___024root___ctor_var_reset(this);
}

void Varth___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Varth___024root::~Varth___024root() {
}
