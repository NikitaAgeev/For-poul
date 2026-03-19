// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_std___ctor_var_reset(Vtb_std* vlSelf);

void Vtb_std::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_std___ctor_var_reset(this);
}

void Vtb_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
