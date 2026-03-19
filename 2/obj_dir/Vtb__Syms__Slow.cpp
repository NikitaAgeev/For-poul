// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb__pch.h"

Vtb__Syms::Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(826);
    // Setup sub module instances
    TOP____024unit__03a__03aprolitariat__Vclpkg.ctor(this, "$unit::prolitariat__Vclpkg");
    TOP____024unit.ctor(this, "$unit");
    TOP__std.ctor(this, "std");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03aprolitariat__Vclpkg = &TOP____024unit__03a__03aprolitariat__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__std = &TOP__std;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03aprolitariat__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
    __Vscopep_std__process = new VerilatedScope{this, "std.process", "process", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_std__process__suspend = new VerilatedScope{this, "std.process.suspend", "suspend", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Set up scope hierarchy
    // Setup export functions - final: 0
    // Setup export functions - final: 1
}

Vtb__Syms::~Vtb__Syms() {
    // Tear down scope hierarchy
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_std__process, __Vscopep_std__process = nullptr);
    VL_DO_CLEAR(delete __Vscopep_std__process__suspend, __Vscopep_std__process__suspend = nullptr);
    // Tear down sub module instances
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__std.dtor();
    TOP____024unit.dtor();
    TOP____024unit__03a__03aprolitariat__Vclpkg.dtor();
}
