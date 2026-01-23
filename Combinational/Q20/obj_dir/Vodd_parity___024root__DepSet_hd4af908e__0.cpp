// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vodd_parity.h for the primary calling header

#include "Vodd_parity__pch.h"
#include "Vodd_parity__Syms.h"
#include "Vodd_parity___024root.h"

VL_INLINE_OPT VlCoroutine Vodd_parity___024root___eval_initial__TOP__Vtiming__0(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x72697479U;
    __Vtemp_1[2U] = 0x645f7061U;
    __Vtemp_1[3U] = 0x6f64U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.odd_parity_tb__DOT__i = 0xd1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "odd_parity_tb.v", 
                                         17);
    vlSelfRef.odd_parity_tb__DOT__i = 0xfeU;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "odd_parity_tb.v", 
                                         19);
    vlSelfRef.odd_parity_tb__DOT__i = 0x57U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "odd_parity_tb.v", 
                                         22);
    VL_FINISH_MT("odd_parity_tb.v", 22, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vodd_parity___024root___dump_triggers__act(Vodd_parity___024root* vlSelf);
#endif  // VL_DEBUG

void Vodd_parity___024root___eval_triggers__act(Vodd_parity___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vodd_parity___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vodd_parity___024root___dump_triggers__act(vlSelf);
    }
#endif
}
