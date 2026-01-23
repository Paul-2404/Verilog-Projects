// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlogical__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlogical::Vlogical(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlogical__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vlogical::Vlogical(const char* _vcname__)
    : Vlogical(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlogical::~Vlogical() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlogical___024root___eval_debug_assertions(Vlogical___024root* vlSelf);
#endif  // VL_DEBUG
void Vlogical___024root___eval_static(Vlogical___024root* vlSelf);
void Vlogical___024root___eval_initial(Vlogical___024root* vlSelf);
void Vlogical___024root___eval_settle(Vlogical___024root* vlSelf);
void Vlogical___024root___eval(Vlogical___024root* vlSelf);

void Vlogical::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlogical::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlogical___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlogical___024root___eval_static(&(vlSymsp->TOP));
        Vlogical___024root___eval_initial(&(vlSymsp->TOP));
        Vlogical___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlogical___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vlogical::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vlogical::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vlogical::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vlogical::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vlogical::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlogical___024root___eval_final(Vlogical___024root* vlSelf);

VL_ATTR_COLD void Vlogical::final() {
    Vlogical___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlogical::hierName() const { return vlSymsp->name(); }
const char* Vlogical::modelName() const { return "Vlogical"; }
unsigned Vlogical::threads() const { return 1; }
void Vlogical::prepareClone() const { contextp()->prepareClone(); }
void Vlogical::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vlogical::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlogical___024root__trace_decl_types(VerilatedVcd* tracep);

void Vlogical___024root__trace_init_top(Vlogical___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlogical___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlogical___024root*>(voidSelf);
    Vlogical__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vlogical___024root__trace_decl_types(tracep);
    Vlogical___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vlogical___024root__trace_register(Vlogical___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlogical::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vlogical::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlogical___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
