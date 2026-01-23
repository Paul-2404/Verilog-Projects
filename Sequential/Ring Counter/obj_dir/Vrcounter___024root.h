// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrcounter.h for the primary calling header

#ifndef VERILATED_VRCOUNTER___024ROOT_H_
#define VERILATED_VRCOUNTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrcounter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrcounter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ rcounter_tb__DOT__clk;
    CData/*0:0*/ rcounter_tb__DOT__reset;
    CData/*0:0*/ rcounter_tb__DOT__enable;
    CData/*3:0*/ rcounter_tb__DOT__q;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rcounter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rcounter_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrcounter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrcounter___024root(Vrcounter__Syms* symsp, const char* v__name);
    ~Vrcounter___024root();
    VL_UNCOPYABLE(Vrcounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
