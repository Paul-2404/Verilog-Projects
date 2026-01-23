// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcequ_ops.h for the primary calling header

#ifndef VERILATED_VCEQU_OPS___024ROOT_H_
#define VERILATED_VCEQU_OPS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcequ_ops__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcequ_ops___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ cequ_ops_tb__DOT__a;
    CData/*3:0*/ cequ_ops_tb__DOT__a__strong__out0;
    CData/*3:0*/ cequ_ops_tb__DOT__a__strong__out1;
    CData/*3:0*/ cequ_ops_tb__DOT__a__strong__out2;
    CData/*3:0*/ cequ_ops_tb__DOT__b__strong__out3;
    CData/*3:0*/ cequ_ops_tb__DOT__b__strong__out4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcequ_ops__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcequ_ops___024root(Vcequ_ops__Syms* symsp, const char* v__name);
    ~Vcequ_ops___024root();
    VL_UNCOPYABLE(Vcequ_ops___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
