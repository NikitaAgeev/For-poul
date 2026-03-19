// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb___024unit__03a__03aprolitariat__Vclpkg___ctor_var_reset(Vtb___024unit__03a__03aprolitariat__Vclpkg* vlSelf);

void Vtb___024unit__03a__03aprolitariat__Vclpkg::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb___024unit__03a__03aprolitariat__Vclpkg___ctor_var_reset(this);
}

void Vtb___024unit__03a__03aprolitariat__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb___024unit__03a__03aprolitariat__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
