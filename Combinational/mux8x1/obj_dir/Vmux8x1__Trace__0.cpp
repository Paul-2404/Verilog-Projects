// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux8x1__Syms.h"


void Vmux8x1___024root__trace_chg_0_sub_0(Vmux8x1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux8x1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root__trace_chg_0\n"); );
    // Init
    Vmux8x1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux8x1___024root*>(voidSelf);
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux8x1___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux8x1___024root__trace_chg_0_sub_0(Vmux8x1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.mux8x1_tb__DOT__D),8);
    bufp->chgCData(oldp+1,(vlSelfRef.mux8x1_tb__DOT__S),3);
    bufp->chgBit(oldp+2,(vlSelfRef.mux8x1_tb__DOT__Z));
}

void Vmux8x1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux8x1___024root__trace_cleanup\n"); );
    // Init
    Vmux8x1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux8x1___024root*>(voidSelf);
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
