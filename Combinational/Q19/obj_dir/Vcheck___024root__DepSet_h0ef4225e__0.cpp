// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcheck.h for the primary calling header

#include "Vcheck__pch.h"
#include "Vcheck__Syms.h"
#include "Vcheck___024root.h"

VL_INLINE_OPT VlCoroutine Vcheck___024root___eval_initial__TOP__Vtiming__0(Vcheck___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcheck___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6865636bU;
    __Vtemp_1[2U] = 0x63U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.check_tb__DOT__i = 0xabU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "check_tb.v", 
                                         16);
    vlSelfRef.check_tb__DOT__i = 0xffU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "check_tb.v", 
                                         18);
    vlSelfRef.check_tb__DOT__i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "check_tb.v", 
                                         20);
    vlSelfRef.check_tb__DOT__i = 0x64U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "check_tb.v", 
                                         23);
    VL_FINISH_MT("check_tb.v", 23, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcheck___024root___dump_triggers__act(Vcheck___024root* vlSelf);
#endif  // VL_DEBUG

void Vcheck___024root___eval_triggers__act(Vcheck___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcheck__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcheck___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcheck___024root___dump_triggers__act(vlSelf);
    }
#endif
}
