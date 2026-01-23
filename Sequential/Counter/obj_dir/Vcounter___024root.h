// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter.h for the primary calling header

#ifndef VERILATED_VCOUNTER___024ROOT_H_
#define VERILATED_VCOUNTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcounter___024unit;


class Vcounter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcounter___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ counter_tb__DOT__clk;
    CData/*0:0*/ counter_tb__DOT__rst;
    CData/*0:0*/ counter_tb__DOT__O;
    CData/*0:0*/ __Vtrigprevexpr___TOP__counter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__counter_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__counter_tb__DOT__O__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ counter_tb__DOT__c;
    IData/*31:0*/ __Vdly__counter_tb__DOT__c;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VpreTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcounter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounter___024root(Vcounter__Syms* symsp, const char* v__name);
    ~Vcounter___024root();
    VL_UNCOPYABLE(Vcounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
