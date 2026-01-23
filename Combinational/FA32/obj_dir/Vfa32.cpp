// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfa32__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfa32::Vfa32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfa32__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vfa32::Vfa32(const char* _vcname__)
    : Vfa32(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfa32::~Vfa32() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfa32___024root___eval_debug_assertions(Vfa32___024root* vlSelf);
#endif  // VL_DEBUG
void Vfa32___024root___eval_static(Vfa32___024root* vlSelf);
void Vfa32___024root___eval_initial(Vfa32___024root* vlSelf);
void Vfa32___024root___eval_settle(Vfa32___024root* vlSelf);
void Vfa32___024root___eval(Vfa32___024root* vlSelf);

void Vfa32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfa32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfa32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfa32___024root___eval_static(&(vlSymsp->TOP));
        Vfa32___024root___eval_initial(&(vlSymsp->TOP));
        Vfa32___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfa32___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vfa32::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vfa32::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vfa32::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vfa32::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfa32::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfa32___024root___eval_final(Vfa32___024root* vlSelf);

VL_ATTR_COLD void Vfa32::final() {
    Vfa32___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfa32::hierName() const { return vlSymsp->name(); }
const char* Vfa32::modelName() const { return "Vfa32"; }
unsigned Vfa32::threads() const { return 1; }
void Vfa32::prepareClone() const { contextp()->prepareClone(); }
void Vfa32::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfa32::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfa32___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfa32___024root__trace_init_top(Vfa32___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfa32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfa32___024root*>(voidSelf);
    Vfa32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfa32___024root__trace_decl_types(tracep);
    Vfa32___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfa32___024root__trace_register(Vfa32___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfa32::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfa32::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfa32___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
