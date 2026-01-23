// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vudc.h for the primary calling header

#ifndef VERILATED_VUDC___024UNIT_H_
#define VERILATED_VUDC___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vudc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vudc___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vudc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vudc___024unit(Vudc__Syms* symsp, const char* v__name);
    ~Vudc___024unit();
    VL_UNCOPYABLE(Vudc___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
