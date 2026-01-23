// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_count.h for the primary calling header

#include "Vdec_count__pch.h"
#include "Vdec_count__Syms.h"
#include "Vdec_count___024root.h"

VL_ATTR_COLD void Vdec_count___024root___eval_initial__TOP(Vdec_count___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_count__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_count___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6f756e74U;
    __Vtemp_1[2U] = 0x65635f63U;
    __Vtemp_1[3U] = 0x64U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
