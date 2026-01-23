// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vudc__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vudc::Vudc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vudc__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vudc::Vudc(const char* _vcname__)
    : Vudc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vudc::~Vudc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vudc___024root___eval_debug_assertions(Vudc___024root* vlSelf);
#endif  // VL_DEBUG
void Vudc___024root___eval_static(Vudc___024root* vlSelf);
void Vudc___024root___eval_initial(Vudc___024root* vlSelf);
void Vudc___024root___eval_settle(Vudc___024root* vlSelf);
void Vudc___024root___eval(Vudc___024root* vlSelf);

void Vudc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vudc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vudc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vudc___024root___eval_static(&(vlSymsp->TOP));
        Vudc___024root___eval_initial(&(vlSymsp->TOP));
        Vudc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vudc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vudc::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vudc::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vudc::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vudc::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vudc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vudc___024root___eval_final(Vudc___024root* vlSelf);

VL_ATTR_COLD void Vudc::final() {
    Vudc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vudc::hierName() const { return vlSymsp->name(); }
const char* Vudc::modelName() const { return "Vudc"; }
unsigned Vudc::threads() const { return 1; }
void Vudc::prepareClone() const { contextp()->prepareClone(); }
void Vudc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vudc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vudc___024root__trace_decl_types(VerilatedVcd* tracep);

void Vudc___024root__trace_init_top(Vudc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vudc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vudc___024root*>(voidSelf);
    Vudc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vudc___024root__trace_decl_types(tracep);
    Vudc___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vudc___024root__trace_register(Vudc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vudc::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vudc::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vudc___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
