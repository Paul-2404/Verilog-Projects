// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Varth__Syms.h"


void Varth___024root__trace_chg_0_sub_0(Varth___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Varth___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root__trace_chg_0\n"); );
    // Init
    Varth___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varth___024root*>(voidSelf);
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Varth___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Varth___024root__trace_chg_0_sub_0(Varth___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.arth_tb__DOT__s),2);
        bufp->chgCData(oldp+1,(vlSelfRef.arth_tb__DOT__d),2);
        bufp->chgCData(oldp+2,(vlSelfRef.arth_tb__DOT__p),2);
        bufp->chgCData(oldp+3,(vlSelfRef.arth_tb__DOT__q),2);
        bufp->chgCData(oldp+4,(vlSelfRef.arth_tb__DOT__m),2);
        bufp->chgCData(oldp+5,(vlSelfRef.arth_tb__DOT__r),2);
    }
    bufp->chgCData(oldp+6,(vlSelfRef.arth_tb__DOT__a),2);
    bufp->chgCData(oldp+7,(vlSelfRef.arth_tb__DOT__b),2);
}

void Varth___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varth___024root__trace_cleanup\n"); );
    // Init
    Varth___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varth___024root*>(voidSelf);
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
