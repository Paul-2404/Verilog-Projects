// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfa32.h for the primary calling header

#include "Vfa32__pch.h"
#include "Vfa32__Syms.h"
#include "Vfa32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfa32___024root___dump_triggers__act(Vfa32___024root* vlSelf);
#endif  // VL_DEBUG

void Vfa32___024root___eval_triggers__act(Vfa32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfa32___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfa32___024root___dump_triggers__act(vlSelf);
    }
#endif
}
