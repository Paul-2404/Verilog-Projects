// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjhc.h for the primary calling header

#ifndef VERILATED_VJHC___024ROOT_H_
#define VERILATED_VJHC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vjhc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vjhc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ jhc_tb__DOT__clk;
    CData/*0:0*/ jhc_tb__DOT__reset;
    CData/*3:0*/ jhc_tb__DOT__q;
    CData/*0:0*/ __Vtrigprevexpr___TOP__jhc_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__jhc_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vjhc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjhc___024root(Vjhc__Syms* symsp, const char* v__name);
    ~Vjhc___024root();
    VL_UNCOPYABLE(Vjhc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
