// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdec_count.h for the primary calling header

#ifndef VERILATED_VDEC_COUNT___024UNIT_H_
#define VERILATED_VDEC_COUNT___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdec_count__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdec_count___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vdec_count__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdec_count___024unit(Vdec_count__Syms* symsp, const char* v__name);
    ~Vdec_count___024unit();
    VL_UNCOPYABLE(Vdec_count___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
