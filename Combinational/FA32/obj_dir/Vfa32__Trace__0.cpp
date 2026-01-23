// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfa32__Syms.h"


void Vfa32___024root__trace_chg_0_sub_0(Vfa32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfa32___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root__trace_chg_0\n"); );
    // Init
    Vfa32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfa32___024root*>(voidSelf);
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfa32___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfa32___024root__trace_chg_0_sub_0(Vfa32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelfRef.fa32_tb__DOT__A),32);
    bufp->chgIData(oldp+1,(vlSelfRef.fa32_tb__DOT__B),32);
    bufp->chgIData(oldp+2,((vlSelfRef.fa32_tb__DOT__A 
                            + vlSelfRef.fa32_tb__DOT__B)),32);
    bufp->chgBit(oldp+3,((1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.fa32_tb__DOT__A)) 
                                                 + (QData)((IData)(vlSelfRef.fa32_tb__DOT__B))) 
                                                >> 0x20U))))));
}

void Vfa32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root__trace_cleanup\n"); );
    // Init
    Vfa32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfa32___024root*>(voidSelf);
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
