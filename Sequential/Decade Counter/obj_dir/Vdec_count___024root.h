// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdec_count.h for the primary calling header

#ifndef VERILATED_VDEC_COUNT___024ROOT_H_
#define VERILATED_VDEC_COUNT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vdec_count___024unit;


class Vdec_count__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdec_count___024root final : public VerilatedModule {
  public:
    // CELLS
    Vdec_count___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ dec_count_tb__DOT__clk;
    CData/*0:0*/ dec_count_tb__DOT__rst;
    CData/*3:0*/ dec_count_tb__DOT__c;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dec_count_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dec_count_tb__DOT__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdec_count__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdec_count___024root(Vdec_count__Syms* symsp, const char* v__name);
    ~Vdec_count___024root();
    VL_UNCOPYABLE(Vdec_count___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
