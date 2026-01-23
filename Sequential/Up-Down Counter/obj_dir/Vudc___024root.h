// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vudc.h for the primary calling header

#ifndef VERILATED_VUDC___024ROOT_H_
#define VERILATED_VUDC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vudc___024unit;


class Vudc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vudc___024root final : public VerilatedModule {
  public:
    // CELLS
    Vudc___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ udc_tb__DOT__clk;
    CData/*0:0*/ udc_tb__DOT__rst;
    CData/*0:0*/ udc_tb__DOT__up;
    CData/*0:0*/ udc_tb__DOT__down;
    CData/*3:0*/ udc_tb__DOT__c;
    CData/*0:0*/ __Vtrigprevexpr___TOP__udc_tb__DOT__down__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__udc_tb__DOT__up__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__udc_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__udc_tb__DOT__rst__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vudc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vudc___024root(Vudc__Syms* symsp, const char* v__name);
    ~Vudc___024root();
    VL_UNCOPYABLE(Vudc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
