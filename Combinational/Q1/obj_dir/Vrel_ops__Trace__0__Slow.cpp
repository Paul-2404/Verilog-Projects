// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrel_ops__Syms.h"


VL_ATTR_COLD void Vrel_ops___024root__trace_init_sub__TOP__0(Vrel_ops___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrel_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrel_ops___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("rel_ops_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrel_ops___024root__trace_init_top(Vrel_ops___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrel_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrel_ops___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrel_ops___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrel_ops___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vrel_ops___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrel_ops___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrel_ops___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrel_ops___024root__trace_register(Vrel_ops___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrel_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrel_ops___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vrel_ops___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vrel_ops___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vrel_ops___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vrel_ops___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrel_ops___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrel_ops___024root__trace_const_0\n"); );
    // Init
    Vrel_ops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrel_ops___024root*>(voidSelf);
    Vrel_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vrel_ops___024root__trace_full_0_sub_0(Vrel_ops___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrel_ops___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrel_ops___024root__trace_full_0\n"); );
    // Init
    Vrel_ops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrel_ops___024root*>(voidSelf);
    Vrel_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrel_ops___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrel_ops___024root__trace_full_0_sub_0(Vrel_ops___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrel_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrel_ops___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.rel_ops_tb__DOT__a),4);
    bufp->fullCData(oldp+2,(vlSelfRef.rel_ops_tb__DOT__b),4);
    bufp->fullCData(oldp+3,((((IData)(vlSelfRef.rel_ops_tb__DOT__a) 
                              < (IData)(vlSelfRef.rel_ops_tb__DOT__b))
                              ? 1U : (((IData)(vlSelfRef.rel_ops_tb__DOT__a) 
                                       > (IData)(vlSelfRef.rel_ops_tb__DOT__b))
                                       ? 2U : (((IData)(vlSelfRef.rel_ops_tb__DOT__a) 
                                                == (IData)(vlSelfRef.rel_ops_tb__DOT__b))
                                                ? 4U
                                                : 0U)))),4);
}
