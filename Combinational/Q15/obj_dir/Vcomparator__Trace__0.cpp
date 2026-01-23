// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcomparator__Syms.h"


void Vcomparator___024root__trace_chg_0_sub_0(Vcomparator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcomparator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_chg_0\n"); );
    // Init
    Vcomparator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomparator___024root*>(voidSelf);
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcomparator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcomparator___024root__trace_chg_0_sub_0(Vcomparator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.comparator_tb__DOT__a),8);
    bufp->chgCData(oldp+1,(vlSelfRef.comparator_tb__DOT__b),8);
    bufp->chgCData(oldp+2,((((IData)(vlSelfRef.comparator_tb__DOT__a) 
                             == (IData)(vlSelfRef.comparator_tb__DOT__b))
                             ? 3U : (((IData)(vlSelfRef.comparator_tb__DOT__a) 
                                      <= (IData)(vlSelfRef.comparator_tb__DOT__b))
                                      ? 1U : (((IData)(vlSelfRef.comparator_tb__DOT__a) 
                                               >= (IData)(vlSelfRef.comparator_tb__DOT__b))
                                               ? 2U
                                               : 0U)))),2);
}

void Vcomparator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_cleanup\n"); );
    // Init
    Vcomparator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomparator___024root*>(voidSelf);
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
