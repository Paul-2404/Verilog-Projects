// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrcounter.h for the primary calling header

#include "Vrcounter__pch.h"
#include "Vrcounter__Syms.h"
#include "Vrcounter___024root.h"

VL_ATTR_COLD void Vrcounter___024root___eval_initial__TOP(Vrcounter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrcounter___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6e746572U;
    __Vtemp_1[2U] = 0x72636f75U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
