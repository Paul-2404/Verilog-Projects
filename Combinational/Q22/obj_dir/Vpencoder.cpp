// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpencoder__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpencoder::Vpencoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpencoder__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpencoder::Vpencoder(const char* _vcname__)
    : Vpencoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpencoder::~Vpencoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpencoder___024root___eval_debug_assertions(Vpencoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vpencoder___024root___eval_static(Vpencoder___024root* vlSelf);
void Vpencoder___024root___eval_initial(Vpencoder___024root* vlSelf);
void Vpencoder___024root___eval_settle(Vpencoder___024root* vlSelf);
void Vpencoder___024root___eval(Vpencoder___024root* vlSelf);

void Vpencoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpencoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpencoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpencoder___024root___eval_static(&(vlSymsp->TOP));
        Vpencoder___024root___eval_initial(&(vlSymsp->TOP));
        Vpencoder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpencoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vpencoder::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vpencoder::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vpencoder::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vpencoder::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vpencoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpencoder___024root___eval_final(Vpencoder___024root* vlSelf);

VL_ATTR_COLD void Vpencoder::final() {
    Vpencoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpencoder::hierName() const { return vlSymsp->name(); }
const char* Vpencoder::modelName() const { return "Vpencoder"; }
unsigned Vpencoder::threads() const { return 1; }
void Vpencoder::prepareClone() const { contextp()->prepareClone(); }
void Vpencoder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpencoder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpencoder___024root__trace_decl_types(VerilatedVcd* tracep);

void Vpencoder___024root__trace_init_top(Vpencoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpencoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpencoder___024root*>(voidSelf);
    Vpencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpencoder___024root__trace_decl_types(tracep);
    Vpencoder___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpencoder___024root__trace_register(Vpencoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpencoder::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpencoder::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpencoder___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
