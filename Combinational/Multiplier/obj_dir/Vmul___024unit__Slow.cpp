// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "Vmul__pch.h"
#include "Vmul__Syms.h"
#include "Vmul___024unit.h"

void Vmul___024unit___ctor_var_reset(Vmul___024unit* vlSelf);

Vmul___024unit::Vmul___024unit(Vmul__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmul___024unit___ctor_var_reset(this);
}

void Vmul___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmul___024unit::~Vmul___024unit() {
}
