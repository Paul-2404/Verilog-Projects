// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vff.h for the primary calling header

#ifndef VERILATED_VFF___024ROOT_H_
#define VERILATED_VFF___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vff__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vff___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ff_tb__DOT__clk;
    CData/*0:0*/ ff_tb__DOT__reset;
    CData/*3:0*/ ff_tb__DOT__a;
    CData/*3:0*/ ff_tb__DOT__q;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ff_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ff_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vff__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vff___024root(Vff__Syms* symsp, const char* v__name);
    ~Vff___024root();
    VL_UNCOPYABLE(Vff___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
