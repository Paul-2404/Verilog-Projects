// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcheck.h for the primary calling header

#include "Vcheck__pch.h"
#include "Vcheck__Syms.h"
#include "Vcheck___024root.h"

void Vcheck___024root___ctor_var_reset(Vcheck___024root* vlSelf);

Vcheck___024root::Vcheck___024root(Vcheck__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcheck___024root___ctor_var_reset(this);
}

void Vcheck___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcheck___024root::~Vcheck___024root() {
}
