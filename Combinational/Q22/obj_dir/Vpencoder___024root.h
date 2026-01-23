// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpencoder.h for the primary calling header

#ifndef VERILATED_VPENCODER___024ROOT_H_
#define VERILATED_VPENCODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpencoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpencoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ pencoder_tb__DOT__d;
    CData/*2:0*/ pencoder_tb__DOT__o;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpencoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpencoder___024root(Vpencoder__Syms* symsp, const char* v__name);
    ~Vpencoder___024root();
    VL_UNCOPYABLE(Vpencoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
