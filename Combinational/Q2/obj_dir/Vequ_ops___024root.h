// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vequ_ops.h for the primary calling header

#ifndef VERILATED_VEQU_OPS___024ROOT_H_
#define VERILATED_VEQU_OPS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vequ_ops__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vequ_ops___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ equ_ops_tb__DOT__a;
    CData/*3:0*/ equ_ops_tb__DOT__b;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vequ_ops__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vequ_ops___024root(Vequ_ops__Syms* symsp, const char* v__name);
    ~Vequ_ops___024root();
    VL_UNCOPYABLE(Vequ_ops___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
