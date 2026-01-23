// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomparator.h for the primary calling header

#ifndef VERILATED_VCOMPARATOR___024ROOT_H_
#define VERILATED_VCOMPARATOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcomparator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcomparator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ comparator_tb__DOT__a;
    CData/*7:0*/ comparator_tb__DOT__b;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcomparator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcomparator___024root(Vcomparator__Syms* symsp, const char* v__name);
    ~Vcomparator___024root();
    VL_UNCOPYABLE(Vcomparator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
