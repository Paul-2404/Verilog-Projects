// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencoder4x2.h for the primary calling header

#ifndef VERILATED_VENCODER4X2___024ROOT_H_
#define VERILATED_VENCODER4X2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vencoder4x2___024unit;


class Vencoder4x2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vencoder4x2___024root final : public VerilatedModule {
  public:
    // CELLS
    Vencoder4x2___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ encoder4x2_tb__DOT__A;
    CData/*1:0*/ encoder4x2_tb__DOT__Z;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*3:0*/ __Vtrigprevexpr___TOP__encoder4x2_tb__DOT__A__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__encoder4x2_tb__DOT__Z__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vencoder4x2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencoder4x2___024root(Vencoder4x2__Syms* symsp, const char* v__name);
    ~Vencoder4x2___024root();
    VL_UNCOPYABLE(Vencoder4x2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
