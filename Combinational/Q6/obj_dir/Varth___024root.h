// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varth.h for the primary calling header

#ifndef VERILATED_VARTH___024ROOT_H_
#define VERILATED_VARTH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Varth__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varth___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ arth_tb__DOT__a;
    CData/*1:0*/ arth_tb__DOT__b;
    CData/*1:0*/ arth_tb__DOT__s;
    CData/*1:0*/ arth_tb__DOT__d;
    CData/*1:0*/ arth_tb__DOT__p;
    CData/*1:0*/ arth_tb__DOT__q;
    CData/*1:0*/ arth_tb__DOT__m;
    CData/*1:0*/ arth_tb__DOT__r;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Varth__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varth___024root(Varth__Syms* symsp, const char* v__name);
    ~Varth___024root();
    VL_UNCOPYABLE(Varth___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
