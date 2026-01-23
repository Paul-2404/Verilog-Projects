// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgrayc.h for the primary calling header

#include "Vgrayc__pch.h"
#include "Vgrayc__Syms.h"
#include "Vgrayc___024root.h"

void Vgrayc___024root___ctor_var_reset(Vgrayc___024root* vlSelf);

Vgrayc___024root::Vgrayc___024root(Vgrayc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vgrayc___024root___ctor_var_reset(this);
}

void Vgrayc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vgrayc___024root::~Vgrayc___024root() {
}
