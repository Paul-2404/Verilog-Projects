// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbw_ops.h for the primary calling header

#include "Vbw_ops__pch.h"
#include "Vbw_ops__Syms.h"
#include "Vbw_ops___024root.h"

VL_ATTR_COLD void Vbw_ops___024root___eval_initial__TOP(Vbw_ops___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbw_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbw_ops___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f6f7073U;
    __Vtemp_1[2U] = 0x6277U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
