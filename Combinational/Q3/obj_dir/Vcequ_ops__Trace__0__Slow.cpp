// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcequ_ops__Syms.h"


VL_ATTR_COLD void Vcequ_ops___024root__trace_init_sub__TOP__0(Vcequ_ops___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("cequ_ops_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcequ_ops___024root__trace_init_top(Vcequ_ops___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcequ_ops___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcequ_ops___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcequ_ops___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcequ_ops___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcequ_ops___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcequ_ops___024root__trace_register(Vcequ_ops___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcequ_ops___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcequ_ops___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcequ_ops___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcequ_ops___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcequ_ops___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root__trace_const_0\n"); );
    // Init
    Vcequ_ops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcequ_ops___024root*>(voidSelf);
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vcequ_ops___024root__trace_full_0_sub_0(Vcequ_ops___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcequ_ops___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root__trace_full_0\n"); );
    // Init
    Vcequ_ops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcequ_ops___024root*>(voidSelf);
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcequ_ops___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcequ_ops___024root__trace_full_0_sub_0(Vcequ_ops___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcequ_ops___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(((IData)(vlSelfRef.cequ_ops_tb__DOT__a__strong__out0) 
                             | ((0xeU & (IData)(vlSelfRef.cequ_ops_tb__DOT__a__strong__out1)) 
                                | (IData)(vlSelfRef.cequ_ops_tb__DOT__a__strong__out2)))),4);
    bufp->fullCData(oldp+2,(((IData)(vlSelfRef.cequ_ops_tb__DOT__b__strong__out3) 
                             | (0xeU & (IData)(vlSelfRef.cequ_ops_tb__DOT__b__strong__out4)))),4);
    bufp->fullBit(oldp+3,((((IData)(vlSelfRef.cequ_ops_tb__DOT__a__strong__out0) 
                            | ((0xeU & (IData)(vlSelfRef.cequ_ops_tb__DOT__a__strong__out1)) 
                               | (IData)(vlSelfRef.cequ_ops_tb__DOT__a__strong__out2))) 
                           == ((IData)(vlSelfRef.cequ_ops_tb__DOT__b__strong__out3) 
                               | (0xeU & (IData)(vlSelfRef.cequ_ops_tb__DOT__b__strong__out4))))));
}
