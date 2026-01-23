// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux4x1.h for the primary calling header

#ifndef VERILATED_VMUX4X1___024ROOT_H_
#define VERILATED_VMUX4X1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vmux4x1___024unit;


class Vmux4x1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux4x1___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmux4x1___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mux_tb__DOT__D0;
    CData/*0:0*/ mux_tb__DOT__D1;
    CData/*0:0*/ mux_tb__DOT__D2;
    CData/*0:0*/ mux_tb__DOT__D3;
    CData/*0:0*/ mux_tb__DOT__S1;
    CData/*0:0*/ mux_tb__DOT__S2;
    CData/*0:0*/ mux_tb__DOT__Z;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__D0__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__D1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__D2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__D3__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__S1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__S2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mux_tb__DOT__Z__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<8> __VactTriggered;
    VlTriggerVec<8> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux4x1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux4x1___024root(Vmux4x1__Syms* symsp, const char* v__name);
    ~Vmux4x1___024root();
    VL_UNCOPYABLE(Vmux4x1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
