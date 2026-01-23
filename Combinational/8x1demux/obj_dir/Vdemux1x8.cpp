// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdemux1x8__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdemux1x8::Vdemux1x8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdemux1x8__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdemux1x8::Vdemux1x8(const char* _vcname__)
    : Vdemux1x8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdemux1x8::~Vdemux1x8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdemux1x8___024root___eval_debug_assertions(Vdemux1x8___024root* vlSelf);
#endif  // VL_DEBUG
void Vdemux1x8___024root___eval_static(Vdemux1x8___024root* vlSelf);
void Vdemux1x8___024root___eval_initial(Vdemux1x8___024root* vlSelf);
void Vdemux1x8___024root___eval_settle(Vdemux1x8___024root* vlSelf);
void Vdemux1x8___024root___eval(Vdemux1x8___024root* vlSelf);

void Vdemux1x8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdemux1x8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdemux1x8___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdemux1x8___024root___eval_static(&(vlSymsp->TOP));
        Vdemux1x8___024root___eval_initial(&(vlSymsp->TOP));
        Vdemux1x8___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdemux1x8___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdemux1x8::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vdemux1x8::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vdemux1x8::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdemux1x8::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdemux1x8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdemux1x8___024root___eval_final(Vdemux1x8___024root* vlSelf);

VL_ATTR_COLD void Vdemux1x8::final() {
    Vdemux1x8___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdemux1x8::hierName() const { return vlSymsp->name(); }
const char* Vdemux1x8::modelName() const { return "Vdemux1x8"; }
unsigned Vdemux1x8::threads() const { return 1; }
void Vdemux1x8::prepareClone() const { contextp()->prepareClone(); }
void Vdemux1x8::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdemux1x8::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdemux1x8___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdemux1x8___024root__trace_init_top(Vdemux1x8___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdemux1x8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemux1x8___024root*>(voidSelf);
    Vdemux1x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdemux1x8___024root__trace_decl_types(tracep);
    Vdemux1x8___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdemux1x8___024root__trace_register(Vdemux1x8___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdemux1x8::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdemux1x8::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdemux1x8___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
