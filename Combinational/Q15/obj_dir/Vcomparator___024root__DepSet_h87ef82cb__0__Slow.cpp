// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"
#include "Vcomparator__Syms.h"
#include "Vcomparator___024root.h"

VL_ATTR_COLD void Vcomparator___024root___eval_initial__TOP(Vcomparator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x61746f72U;
    __Vtemp_1[2U] = 0x6d706172U;
    __Vtemp_1[3U] = 0x636fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
