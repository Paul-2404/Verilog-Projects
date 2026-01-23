// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpencoder.h for the primary calling header

#include "Vpencoder__pch.h"
#include "Vpencoder__Syms.h"
#include "Vpencoder___024root.h"

void Vpencoder___024root___ctor_var_reset(Vpencoder___024root* vlSelf);

Vpencoder___024root::Vpencoder___024root(Vpencoder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpencoder___024root___ctor_var_reset(this);
}

void Vpencoder___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpencoder___024root::~Vpencoder___024root() {
}
