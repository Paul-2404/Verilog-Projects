// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbw_ops__Syms.h"


void Vbw_ops___024root__trace_chg_0_sub_0(Vbw_ops___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbw_ops___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root__trace_chg_0\n"); );
    // Init
    Vbw_ops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbw_ops___024root*>(voidSelf);
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbw_ops___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbw_ops___024root__trace_chg_0_sub_0(Vbw_ops___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.bw_ops_tb__DOT__a),4);
        bufp->chgCData(oldp+1,(vlSelfRef.bw_ops_tb__DOT__b),4);
        bufp->chgCData(oldp+2,(((IData)(vlSelfRef.bw_ops_tb__DOT__a) 
                                & (IData)(vlSelfRef.bw_ops_tb__DOT__b))),4);
        bufp->chgCData(oldp+3,(((IData)(vlSelfRef.bw_ops_tb__DOT__a) 
                                | (IData)(vlSelfRef.bw_ops_tb__DOT__b))),4);
        bufp->chgCData(oldp+4,((0xfU & (~ (IData)(vlSelfRef.bw_ops_tb__DOT__a)))),4);
        bufp->chgCData(oldp+5,((0xfU & (~ (IData)(vlSelfRef.bw_ops_tb__DOT__b)))),4);
        bufp->chgCData(oldp+6,(((IData)(vlSelfRef.bw_ops_tb__DOT__a) 
                                ^ (IData)(vlSelfRef.bw_ops_tb__DOT__b))),4);
    }
}

void Vbw_ops___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root__trace_cleanup\n"); );
    // Init
    Vbw_ops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbw_ops___024root*>(voidSelf);
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
