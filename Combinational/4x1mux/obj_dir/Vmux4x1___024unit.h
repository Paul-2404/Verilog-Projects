// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux4x1.h for the primary calling header

#ifndef VERILATED_VMUX4X1___024UNIT_H_
#define VERILATED_VMUX4X1___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux4x1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux4x1___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vmux4x1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux4x1___024unit(Vmux4x1__Syms* symsp, const char* v__name);
    ~Vmux4x1___024unit();
    VL_UNCOPYABLE(Vmux4x1___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
