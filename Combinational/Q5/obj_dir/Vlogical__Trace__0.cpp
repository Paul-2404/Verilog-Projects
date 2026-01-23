// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlogical__Syms.h"


void Vlogical___024root__trace_chg_0_sub_0(Vlogical___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlogical___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root__trace_chg_0\n"); );
    // Init
    Vlogical___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlogical___024root*>(voidSelf);
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlogical___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vlogical___024root__trace_chg_0_sub_0(Vlogical___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.logical_tb__DOT__a));
    bufp->chgBit(oldp+1,(vlSelfRef.logical_tb__DOT__b));
    bufp->chgCData(oldp+2,((((IData)(vlSelfRef.logical_tb__DOT__a) 
                             & (IData)(vlSelfRef.logical_tb__DOT__b))
                             ? 1U : (((IData)(vlSelfRef.logical_tb__DOT__a) 
                                      | (IData)(vlSelfRef.logical_tb__DOT__b))
                                      ? 2U : 0U))),2);
}

void Vlogical___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlogical___024root__trace_cleanup\n"); );
    // Init
    Vlogical___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlogical___024root*>(voidSelf);
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
