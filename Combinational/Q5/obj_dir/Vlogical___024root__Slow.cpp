// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlogical.h for the primary calling header

#include "Vlogical__pch.h"
#include "Vlogical__Syms.h"
#include "Vlogical___024root.h"

void Vlogical___024root___ctor_var_reset(Vlogical___024root* vlSelf);

Vlogical___024root::Vlogical___024root(Vlogical__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlogical___024root___ctor_var_reset(this);
}

void Vlogical___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlogical___024root::~Vlogical___024root() {
}
