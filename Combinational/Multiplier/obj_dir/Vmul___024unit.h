// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmul.h for the primary calling header

#ifndef VERILATED_VMUL___024UNIT_H_
#define VERILATED_VMUL___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmul__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmul___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vmul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmul___024unit(Vmul__Syms* symsp, const char* v__name);
    ~Vmul___024unit();
    VL_UNCOPYABLE(Vmul___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
