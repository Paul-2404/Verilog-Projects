// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcequ_ops__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcequ_ops::Vcequ_ops(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcequ_ops__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcequ_ops::Vcequ_ops(const char* _vcname__)
    : Vcequ_ops(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcequ_ops::~Vcequ_ops() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcequ_ops___024root___eval_debug_assertions(Vcequ_ops___024root* vlSelf);
#endif  // VL_DEBUG
void Vcequ_ops___024root___eval_static(Vcequ_ops___024root* vlSelf);
void Vcequ_ops___024root___eval_initial(Vcequ_ops___024root* vlSelf);
void Vcequ_ops___024root___eval_settle(Vcequ_ops___024root* vlSelf);
void Vcequ_ops___024root___eval(Vcequ_ops___024root* vlSelf);

void Vcequ_ops::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcequ_ops::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcequ_ops___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcequ_ops___024root___eval_static(&(vlSymsp->TOP));
        Vcequ_ops___024root___eval_initial(&(vlSymsp->TOP));
        Vcequ_ops___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcequ_ops___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vcequ_ops::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vcequ_ops::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vcequ_ops::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vcequ_ops::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcequ_ops::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcequ_ops___024root___eval_final(Vcequ_ops___024root* vlSelf);

VL_ATTR_COLD void Vcequ_ops::final() {
    Vcequ_ops___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcequ_ops::hierName() const { return vlSymsp->name(); }
const char* Vcequ_ops::modelName() const { return "Vcequ_ops"; }
unsigned Vcequ_ops::threads() const { return 1; }
void Vcequ_ops::prepareClone() const { contextp()->prepareClone(); }
void Vcequ_ops::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcequ_ops::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcequ_ops___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcequ_ops___024root__trace_init_top(Vcequ_ops___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcequ_ops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcequ_ops___024root*>(voidSelf);
    Vcequ_ops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcequ_ops___024root__trace_decl_types(tracep);
    Vcequ_ops___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcequ_ops___024root__trace_register(Vcequ_ops___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcequ_ops::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcequ_ops::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcequ_ops___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
