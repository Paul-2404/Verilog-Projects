// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder4x2.h for the primary calling header

#include "Vencoder4x2__pch.h"
#include "Vencoder4x2__Syms.h"
#include "Vencoder4x2___024root.h"

void Vencoder4x2___024root___ctor_var_reset(Vencoder4x2___024root* vlSelf);

Vencoder4x2___024root::Vencoder4x2___024root(Vencoder4x2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vencoder4x2___024root___ctor_var_reset(this);
}

void Vencoder4x2___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vencoder4x2___024root::~Vencoder4x2___024root() {
}
