// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfa32.h for the primary calling header

#include "Vfa32__pch.h"
#include "Vfa32__Syms.h"
#include "Vfa32___024root.h"

void Vfa32___024root___ctor_var_reset(Vfa32___024root* vlSelf);

Vfa32___024root::Vfa32___024root(Vfa32__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfa32___024root___ctor_var_reset(this);
}

void Vfa32___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfa32___024root::~Vfa32___024root() {
}
