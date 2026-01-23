// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgrayc.h for the primary calling header

#ifndef VERILATED_VGRAYC___024ROOT_H_
#define VERILATED_VGRAYC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vgrayc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgrayc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ grayc_tb__DOT__clk;
    CData/*0:0*/ grayc_tb__DOT__reset;
    CData/*7:0*/ grayc_tb__DOT__g;
    CData/*7:0*/ grayc_tb__DOT__dut__DOT__b;
    CData/*0:0*/ __Vtrigprevexpr___TOP__grayc_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__grayc_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vgrayc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgrayc___024root(Vgrayc__Syms* symsp, const char* v__name);
    ~Vgrayc___024root();
    VL_UNCOPYABLE(Vgrayc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
