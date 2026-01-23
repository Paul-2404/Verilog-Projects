// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdemux1x8.h for the primary calling header

#ifndef VERILATED_VDEMUX1X8___024UNIT_H_
#define VERILATED_VDEMUX1X8___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdemux1x8__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdemux1x8___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vdemux1x8__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdemux1x8___024unit(Vdemux1x8__Syms* symsp, const char* v__name);
    ~Vdemux1x8___024unit();
    VL_UNCOPYABLE(Vdemux1x8___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
