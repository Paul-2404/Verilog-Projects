// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vudc.h for the primary calling header

#include "Vudc__pch.h"
#include "Vudc__Syms.h"
#include "Vudc___024unit.h"

void Vudc___024unit___ctor_var_reset(Vudc___024unit* vlSelf);

Vudc___024unit::Vudc___024unit(Vudc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vudc___024unit___ctor_var_reset(this);
}

void Vudc___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vudc___024unit::~Vudc___024unit() {
}
