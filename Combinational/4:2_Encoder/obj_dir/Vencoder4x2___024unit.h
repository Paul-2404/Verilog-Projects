// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencoder4x2.h for the primary calling header

#ifndef VERILATED_VENCODER4X2___024UNIT_H_
#define VERILATED_VENCODER4X2___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vencoder4x2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vencoder4x2___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vencoder4x2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencoder4x2___024unit(Vencoder4x2__Syms* symsp, const char* v__name);
    ~Vencoder4x2___024unit();
    VL_UNCOPYABLE(Vencoder4x2___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
