// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjhc__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vjhc::Vjhc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vjhc__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vjhc::Vjhc(const char* _vcname__)
    : Vjhc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vjhc::~Vjhc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vjhc___024root___eval_debug_assertions(Vjhc___024root* vlSelf);
#endif  // VL_DEBUG
void Vjhc___024root___eval_static(Vjhc___024root* vlSelf);
void Vjhc___024root___eval_initial(Vjhc___024root* vlSelf);
void Vjhc___024root___eval_settle(Vjhc___024root* vlSelf);
void Vjhc___024root___eval(Vjhc___024root* vlSelf);

void Vjhc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjhc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjhc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vjhc___024root___eval_static(&(vlSymsp->TOP));
        Vjhc___024root___eval_initial(&(vlSymsp->TOP));
        Vjhc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vjhc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vjhc::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vjhc::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vjhc::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vjhc::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vjhc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vjhc___024root___eval_final(Vjhc___024root* vlSelf);

VL_ATTR_COLD void Vjhc::final() {
    Vjhc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vjhc::hierName() const { return vlSymsp->name(); }
const char* Vjhc::modelName() const { return "Vjhc"; }
unsigned Vjhc::threads() const { return 1; }
void Vjhc::prepareClone() const { contextp()->prepareClone(); }
void Vjhc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vjhc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vjhc___024root__trace_decl_types(VerilatedVcd* tracep);

void Vjhc___024root__trace_init_top(Vjhc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vjhc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjhc___024root*>(voidSelf);
    Vjhc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vjhc___024root__trace_decl_types(tracep);
    Vjhc___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vjhc___024root__trace_register(Vjhc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vjhc::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vjhc::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vjhc___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
