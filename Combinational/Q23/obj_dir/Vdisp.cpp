// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdisp__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdisp::Vdisp(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdisp__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdisp::Vdisp(const char* _vcname__)
    : Vdisp(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdisp::~Vdisp() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdisp___024root___eval_debug_assertions(Vdisp___024root* vlSelf);
#endif  // VL_DEBUG
void Vdisp___024root___eval_static(Vdisp___024root* vlSelf);
void Vdisp___024root___eval_initial(Vdisp___024root* vlSelf);
void Vdisp___024root___eval_settle(Vdisp___024root* vlSelf);
void Vdisp___024root___eval(Vdisp___024root* vlSelf);

void Vdisp::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdisp::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdisp___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdisp___024root___eval_static(&(vlSymsp->TOP));
        Vdisp___024root___eval_initial(&(vlSymsp->TOP));
        Vdisp___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdisp___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdisp::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vdisp::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vdisp::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdisp::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdisp::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdisp___024root___eval_final(Vdisp___024root* vlSelf);

VL_ATTR_COLD void Vdisp::final() {
    Vdisp___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdisp::hierName() const { return vlSymsp->name(); }
const char* Vdisp::modelName() const { return "Vdisp"; }
unsigned Vdisp::threads() const { return 1; }
void Vdisp::prepareClone() const { contextp()->prepareClone(); }
void Vdisp::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdisp::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdisp___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdisp___024root__trace_init_top(Vdisp___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdisp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdisp___024root*>(voidSelf);
    Vdisp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdisp___024root__trace_decl_types(tracep);
    Vdisp___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdisp___024root__trace_register(Vdisp___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdisp::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdisp::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdisp___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
