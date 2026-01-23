// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux1x8.h for the primary calling header

#include "Vdemux1x8__pch.h"
#include "Vdemux1x8__Syms.h"
#include "Vdemux1x8___024unit.h"

void Vdemux1x8___024unit___ctor_var_reset(Vdemux1x8___024unit* vlSelf);

Vdemux1x8___024unit::Vdemux1x8___024unit(Vdemux1x8__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdemux1x8___024unit___ctor_var_reset(this);
}

void Vdemux1x8___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdemux1x8___024unit::~Vdemux1x8___024unit() {
}
