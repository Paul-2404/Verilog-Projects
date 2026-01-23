// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdemux1x8.h for the primary calling header

#ifndef VERILATED_VDEMUX1X8___024ROOT_H_
#define VERILATED_VDEMUX1X8___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vdemux1x8___024unit;


class Vdemux1x8__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdemux1x8___024root final : public VerilatedModule {
  public:
    // CELLS
    Vdemux1x8___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ demux1x8_tb__DOT__A;
    CData/*2:0*/ demux1x8_tb__DOT__S;
    CData/*7:0*/ demux1x8_tb__DOT__D;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__demux1x8_tb__DOT__A__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__demux1x8_tb__DOT__D__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__demux1x8_tb__DOT__S__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdemux1x8__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdemux1x8___024root(Vdemux1x8__Syms* symsp, const char* v__name);
    ~Vdemux1x8___024root();
    VL_UNCOPYABLE(Vdemux1x8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
