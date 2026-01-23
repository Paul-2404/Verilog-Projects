// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjhc.h for the primary calling header

#include "Vjhc__pch.h"
#include "Vjhc__Syms.h"
#include "Vjhc___024root.h"

void Vjhc___024root___ctor_var_reset(Vjhc___024root* vlSelf);

Vjhc___024root::Vjhc___024root(Vjhc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vjhc___024root___ctor_var_reset(this);
}

void Vjhc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vjhc___024root::~Vjhc___024root() {
}
