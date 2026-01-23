// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vudc.h for the primary calling header

#include "Vudc__pch.h"
#include "Vudc__Syms.h"
#include "Vudc___024root.h"

void Vudc___024root___ctor_var_reset(Vudc___024root* vlSelf);

Vudc___024root::Vudc___024root(Vudc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vudc___024root___ctor_var_reset(this);
}

void Vudc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vudc___024root::~Vudc___024root() {
}
