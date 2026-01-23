// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmul.h for the primary calling header

#ifndef VERILATED_VMUL___024ROOT_H_
#define VERILATED_VMUL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vmul___024unit;


class Vmul__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmul___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmul___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ mul_tb__DOT__a;
    SData/*15:0*/ mul_tb__DOT__b;
    SData/*15:0*/ __Vtrigprevexpr___TOP__mul_tb__DOT__a__0;
    SData/*15:0*/ __Vtrigprevexpr___TOP__mul_tb__DOT__b__0;
    IData/*31:0*/ mul_tb__DOT__p;
    IData/*31:0*/ __Vtrigprevexpr___TOP__mul_tb__DOT__p__0;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmul___024root(Vmul__Syms* symsp, const char* v__name);
    ~Vmul___024root();
    VL_UNCOPYABLE(Vmul___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
