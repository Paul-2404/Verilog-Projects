// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vodd_parity__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vodd_parity::Vodd_parity(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vodd_parity__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vodd_parity::Vodd_parity(const char* _vcname__)
    : Vodd_parity(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vodd_parity::~Vodd_parity() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vodd_parity___024root___eval_debug_assertions(Vodd_parity___024root* vlSelf);
#endif  // VL_DEBUG
void Vodd_parity___024root___eval_static(Vodd_parity___024root* vlSelf);
void Vodd_parity___024root___eval_initial(Vodd_parity___024root* vlSelf);
void Vodd_parity___024root___eval_settle(Vodd_parity___024root* vlSelf);
void Vodd_parity___024root___eval(Vodd_parity___024root* vlSelf);

void Vodd_parity::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vodd_parity::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vodd_parity___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vodd_parity___024root___eval_static(&(vlSymsp->TOP));
        Vodd_parity___024root___eval_initial(&(vlSymsp->TOP));
        Vodd_parity___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vodd_parity___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vodd_parity::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vodd_parity::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vodd_parity::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vodd_parity::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vodd_parity::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vodd_parity___024root___eval_final(Vodd_parity___024root* vlSelf);

VL_ATTR_COLD void Vodd_parity::final() {
    Vodd_parity___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vodd_parity::hierName() const { return vlSymsp->name(); }
const char* Vodd_parity::modelName() const { return "Vodd_parity"; }
unsigned Vodd_parity::threads() const { return 1; }
void Vodd_parity::prepareClone() const { contextp()->prepareClone(); }
void Vodd_parity::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vodd_parity::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vodd_parity___024root__trace_decl_types(VerilatedVcd* tracep);

void Vodd_parity___024root__trace_init_top(Vodd_parity___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vodd_parity___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vodd_parity___024root*>(voidSelf);
    Vodd_parity__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vodd_parity___024root__trace_decl_types(tracep);
    Vodd_parity___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vodd_parity___024root__trace_register(Vodd_parity___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vodd_parity::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vodd_parity::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vodd_parity___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
