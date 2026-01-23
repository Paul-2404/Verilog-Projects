// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbw_ops.h for the primary calling header

#ifndef VERILATED_VBW_OPS___024ROOT_H_
#define VERILATED_VBW_OPS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbw_ops__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbw_ops___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ bw_ops_tb__DOT__a;
    CData/*3:0*/ bw_ops_tb__DOT__b;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbw_ops__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbw_ops___024root(Vbw_ops__Syms* symsp, const char* v__name);
    ~Vbw_ops___024root();
    VL_UNCOPYABLE(Vbw_ops___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
