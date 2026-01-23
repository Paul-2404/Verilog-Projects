// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfa32.h for the primary calling header

#ifndef VERILATED_VFA32___024ROOT_H_
#define VERILATED_VFA32___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfa32__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfa32___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ fa32_tb__DOT__A;
    IData/*31:0*/ fa32_tb__DOT__B;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfa32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfa32___024root(Vfa32__Syms* symsp, const char* v__name);
    ~Vfa32___024root();
    VL_UNCOPYABLE(Vfa32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
