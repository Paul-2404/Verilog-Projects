// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1.h for the primary calling header

#include "Vmux4x1__pch.h"
#include "Vmux4x1__Syms.h"
#include "Vmux4x1___024unit.h"

void Vmux4x1___024unit___ctor_var_reset(Vmux4x1___024unit* vlSelf);

Vmux4x1___024unit::Vmux4x1___024unit(Vmux4x1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux4x1___024unit___ctor_var_reset(this);
}

void Vmux4x1___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmux4x1___024unit::~Vmux4x1___024unit() {
}
