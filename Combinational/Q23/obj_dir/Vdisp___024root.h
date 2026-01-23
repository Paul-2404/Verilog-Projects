// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdisp.h for the primary calling header

#ifndef VERILATED_VDISP___024ROOT_H_
#define VERILATED_VDISP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdisp__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdisp___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ disp_tb__DOT__i;
    CData/*6:0*/ disp_tb__DOT__d;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdisp__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdisp___024root(Vdisp__Syms* symsp, const char* v__name);
    ~Vdisp___024root();
    VL_UNCOPYABLE(Vdisp___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
