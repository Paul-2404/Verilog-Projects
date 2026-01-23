// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_count.h for the primary calling header

#include "Vdec_count__pch.h"
#include "Vdec_count__Syms.h"
#include "Vdec_count___024unit.h"

void Vdec_count___024unit___ctor_var_reset(Vdec_count___024unit* vlSelf);

Vdec_count___024unit::Vdec_count___024unit(Vdec_count__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdec_count___024unit___ctor_var_reset(this);
}

void Vdec_count___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdec_count___024unit::~Vdec_count___024unit() {
}
