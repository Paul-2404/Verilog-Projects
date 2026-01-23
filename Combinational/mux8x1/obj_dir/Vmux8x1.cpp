// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux8x1__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux8x1::Vmux8x1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux8x1__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmux8x1::Vmux8x1(const char* _vcname__)
    : Vmux8x1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux8x1::~Vmux8x1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux8x1___024root___eval_debug_assertions(Vmux8x1___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux8x1___024root___eval_static(Vmux8x1___024root* vlSelf);
void Vmux8x1___024root___eval_initial(Vmux8x1___024root* vlSelf);
void Vmux8x1___024root___eval_settle(Vmux8x1___024root* vlSelf);
void Vmux8x1___024root___eval(Vmux8x1___024root* vlSelf);

void Vmux8x1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux8x1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux8x1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux8x1___024root___eval_static(&(vlSymsp->TOP));
        Vmux8x1___024root___eval_initial(&(vlSymsp->TOP));
        Vmux8x1___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux8x1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vmux8x1::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vmux8x1::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vmux8x1::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vmux8x1::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vmux8x1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux8x1___024root___eval_final(Vmux8x1___024root* vlSelf);

VL_ATTR_COLD void Vmux8x1::final() {
    Vmux8x1___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux8x1::hierName() const { return vlSymsp->name(); }
const char* Vmux8x1::modelName() const { return "Vmux8x1"; }
unsigned Vmux8x1::threads() const { return 1; }
void Vmux8x1::prepareClone() const { contextp()->prepareClone(); }
void Vmux8x1::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmux8x1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmux8x1___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmux8x1___024root__trace_init_top(Vmux8x1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux8x1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux8x1___024root*>(voidSelf);
    Vmux8x1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmux8x1___024root__trace_decl_types(tracep);
    Vmux8x1___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux8x1___024root__trace_register(Vmux8x1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux8x1::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmux8x1::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux8x1___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
