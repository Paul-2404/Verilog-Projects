// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff.h for the primary calling header

#include "Vff__pch.h"
#include "Vff__Syms.h"
#include "Vff___024root.h"

void Vff___024root___ctor_var_reset(Vff___024root* vlSelf);

Vff___024root::Vff___024root(Vff__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vff___024root___ctor_var_reset(this);
}

void Vff___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vff___024root::~Vff___024root() {
}
