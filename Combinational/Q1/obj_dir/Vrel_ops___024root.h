// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrel_ops.h for the primary calling header

#ifndef VERILATED_VREL_OPS___024ROOT_H_
#define VERILATED_VREL_OPS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrel_ops__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrel_ops___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ rel_ops_tb__DOT__a;
    CData/*3:0*/ rel_ops_tb__DOT__b;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrel_ops__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrel_ops___024root(Vrel_ops__Syms* symsp, const char* v__name);
    ~Vrel_ops___024root();
    VL_UNCOPYABLE(Vrel_ops___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
