// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder4x2.h for the primary calling header

#include "Vencoder4x2__pch.h"
#include "Vencoder4x2__Syms.h"
#include "Vencoder4x2___024root.h"

VL_ATTR_COLD void Vencoder4x2___024root___eval_initial__TOP(Vencoder4x2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder4x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder4x2___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x72347832U;
    __Vtemp_1[2U] = 0x636f6465U;
    __Vtemp_1[3U] = 0x656eU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder4x2___024root___dump_triggers__stl(Vencoder4x2___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vencoder4x2___024root___eval_triggers__stl(Vencoder4x2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder4x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder4x2___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencoder4x2___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
