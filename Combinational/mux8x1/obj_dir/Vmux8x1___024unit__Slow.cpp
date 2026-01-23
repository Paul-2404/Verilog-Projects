// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux8x1.h for the primary calling header

#include "Vmux8x1__pch.h"
#include "Vmux8x1__Syms.h"
#include "Vmux8x1___024unit.h"

void Vmux8x1___024unit___ctor_var_reset(Vmux8x1___024unit* vlSelf);

Vmux8x1___024unit::Vmux8x1___024unit(Vmux8x1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux8x1___024unit___ctor_var_reset(this);
}

void Vmux8x1___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmux8x1___024unit::~Vmux8x1___024unit() {
}
