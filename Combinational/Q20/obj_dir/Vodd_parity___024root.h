// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vodd_parity.h for the primary calling header

#ifndef VERILATED_VODD_PARITY___024ROOT_H_
#define VERILATED_VODD_PARITY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vodd_parity__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vodd_parity___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ odd_parity_tb__DOT__i;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vodd_parity__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vodd_parity___024root(Vodd_parity__Syms* symsp, const char* v__name);
    ~Vodd_parity___024root();
    VL_UNCOPYABLE(Vodd_parity___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
