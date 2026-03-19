// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024UNIT__03A__03APROLITARIAT__VCLPKG_H_
#define VERILATED_VTB___024UNIT__03A__03APROLITARIAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024unit__03a__03aprolitariat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb___024unit__03a__03aprolitariat__Vclpkg() = default;
    ~Vtb___024unit__03a__03aprolitariat__Vclpkg() = default;
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb___024unit__03a__03aprolitariat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb__Syms;

class Vtb___024unit__03a__03aprolitariat : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__a_sign;
    CData/*7:0*/ __PVT__a_exp;
    CData/*0:0*/ __PVT__b_sign;
    CData/*7:0*/ __PVT__b_exp;
    CData/*0:0*/ __PVT__a_inf_val;
    CData/*0:0*/ __PVT__a_nan_val;
    CData/*0:0*/ __PVT__a_norm_val;
    CData/*0:0*/ __PVT__a_zero_val;
    CData/*0:0*/ __PVT__a_denorm_val;
    CData/*2:0*/ __PVT__a_state_rand;
    CData/*0:0*/ __PVT__b_inf_val;
    CData/*0:0*/ __PVT__b_nan_val;
    CData/*0:0*/ __PVT__b_norm_val;
    CData/*0:0*/ __PVT__b_zero_val;
    CData/*0:0*/ __PVT__b_denorm_val;
    CData/*2:0*/ __PVT__b_state_rand;
    IData/*22:0*/ __PVT__a_mant;
    IData/*22:0*/ __PVT__b_mant;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc___VBasicRand(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb__Syms* __restrict vlSymsp);
    void __VnoInFunc_a_inf_inp_law_setup_constraint(Vtb__Syms* __restrict vlSymsp);
    void __VnoInFunc_a_state_law_setup_constraint(Vtb__Syms* __restrict vlSymsp);
    void __VnoInFunc_a_to_duble(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &a_to_duble__Vfuncrtn);
    void __VnoInFunc_b_inf_inp_law_setup_constraint(Vtb__Syms* __restrict vlSymsp);
    void __VnoInFunc_b_state_law_setup_constraint(Vtb__Syms* __restrict vlSymsp);
    void __VnoInFunc_b_to_duble(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &b_to_duble__Vfuncrtn);
    void __VnoInFunc_randomize(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb___024unit__03a__03aprolitariat(Vtb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb___024unit__03a__03aprolitariat() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb___024unit__03a__03aprolitariat>& obj);

#endif  // guard
