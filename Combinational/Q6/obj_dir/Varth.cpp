// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varth__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Varth::Varth(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Varth__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Varth::Varth(const char* _vcname__)
    : Varth(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Varth::~Varth() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Varth___024root___eval_debug_assertions(Varth___024root* vlSelf);
#endif  // VL_DEBUG
void Varth___024root___eval_static(Varth___024root* vlSelf);
void Varth___024root___eval_initial(Varth___024root* vlSelf);
void Varth___024root___eval_settle(Varth___024root* vlSelf);
void Varth___024root___eval(Varth___024root* vlSelf);

void Varth::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varth::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Varth___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Varth___024root___eval_static(&(vlSymsp->TOP));
        Varth___024root___eval_initial(&(vlSymsp->TOP));
        Varth___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Varth___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Varth::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Varth::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Varth::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Varth::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Varth::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Varth___024root___eval_final(Varth___024root* vlSelf);

VL_ATTR_COLD void Varth::final() {
    Varth___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Varth::hierName() const { return vlSymsp->name(); }
const char* Varth::modelName() const { return "Varth"; }
unsigned Varth::threads() const { return 1; }
void Varth::prepareClone() const { contextp()->prepareClone(); }
void Varth::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Varth::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Varth___024root__trace_decl_types(VerilatedVcd* tracep);

void Varth___024root__trace_init_top(Varth___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Varth___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varth___024root*>(voidSelf);
    Varth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Varth___024root__trace_decl_types(tracep);
    Varth___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Varth___024root__trace_register(Varth___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Varth::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Varth::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Varth___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
