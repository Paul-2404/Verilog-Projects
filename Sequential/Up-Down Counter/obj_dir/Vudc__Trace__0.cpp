// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vudc__Syms.h"


void Vudc___024root__trace_chg_0_sub_0(Vudc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vudc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root__trace_chg_0\n"); );
    // Init
    Vudc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vudc___024root*>(voidSelf);
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vudc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vudc___024root__trace_chg_0_sub_0(Vudc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.udc_tb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.udc_tb__DOT__rst));
    bufp->chgBit(oldp+2,(vlSelfRef.udc_tb__DOT__up));
    bufp->chgBit(oldp+3,(vlSelfRef.udc_tb__DOT__down));
    bufp->chgCData(oldp+4,(vlSelfRef.udc_tb__DOT__c),4);
}

void Vudc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vudc___024root__trace_cleanup\n"); );
    // Init
    Vudc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vudc___024root*>(voidSelf);
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
