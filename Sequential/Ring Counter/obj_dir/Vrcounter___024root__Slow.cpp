// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrcounter.h for the primary calling header

#include "Vrcounter__pch.h"
#include "Vrcounter__Syms.h"
#include "Vrcounter___024root.h"

void Vrcounter___024root___ctor_var_reset(Vrcounter___024root* vlSelf);

Vrcounter___024root::Vrcounter___024root(Vrcounter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrcounter___024root___ctor_var_reset(this);
}

void Vrcounter___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrcounter___024root::~Vrcounter___024root() {
}
