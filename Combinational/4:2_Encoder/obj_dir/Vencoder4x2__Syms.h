// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VENCODER4X2__SYMS_H_
#define VERILATED_VENCODER4X2__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vencoder4x2.h"

// INCLUDE MODULE CLASSES
#include "Vencoder4x2___024root.h"
#include "Vencoder4x2___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vencoder4x2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vencoder4x2* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vencoder4x2___024root          TOP;
    Vencoder4x2___024unit          TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_encoder4x2_tb;

    // CONSTRUCTORS
    Vencoder4x2__Syms(VerilatedContext* contextp, const char* namep, Vencoder4x2* modelp);
    ~Vencoder4x2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
