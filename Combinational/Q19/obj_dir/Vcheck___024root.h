// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcheck.h for the primary calling header

#ifndef VERILATED_VCHECK___024ROOT_H_
#define VERILATED_VCHECK___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcheck__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcheck___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ check_tb__DOT__i;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcheck__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcheck___024root(Vcheck__Syms* symsp, const char* v__name);
    ~Vcheck___024root();
    VL_UNCOPYABLE(Vcheck___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
