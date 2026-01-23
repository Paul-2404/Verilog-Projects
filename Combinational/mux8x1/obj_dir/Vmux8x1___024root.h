// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux8x1.h for the primary calling header

#ifndef VERILATED_VMUX8X1___024ROOT_H_
#define VERILATED_VMUX8X1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vmux8x1___024unit;


class Vmux8x1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux8x1___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmux8x1___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mux8x1_tb__DOT__Z;
    CData/*7:0*/ mux8x1_tb__DOT__D;
    CData/*2:0*/ mux8x1_tb__DOT__S;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*7:0*/ __Vtrigprevexpr___TOP__mux8x1_tb__DOT__D__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__mux8x1_tb__DOT__S__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux8x1_tb__DOT__Z__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux8x1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux8x1___024root(Vmux8x1__Syms* symsp, const char* v__name);
    ~Vmux8x1___024root();
    VL_UNCOPYABLE(Vmux8x1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
