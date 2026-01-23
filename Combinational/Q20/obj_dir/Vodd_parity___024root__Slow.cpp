// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vodd_parity.h for the primary calling header

#include "Vodd_parity__pch.h"
#include "Vodd_parity__Syms.h"
#include "Vodd_parity___024root.h"

void Vodd_parity___024root___ctor_var_reset(Vodd_parity___024root* vlSelf);

Vodd_parity___024root::Vodd_parity___024root(Vodd_parity__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vodd_parity___024root___ctor_var_reset(this);
}

void Vodd_parity___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vodd_parity___024root::~Vodd_parity___024root() {
}
