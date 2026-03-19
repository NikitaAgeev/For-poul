// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb___024unit__03a__03aprolitariat::__VnoInFunc_a_to_duble(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &a_to_duble__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::__VnoInFunc_a_to_duble\n"); );
    // Body
    a_to_duble__Vfuncrtn = (((IData)(this->__PVT__a_sign) 
                             << 0x0000001fU) | (((IData)(this->__PVT__a_exp) 
                                                 << 0x00000017U) 
                                                | this->__PVT__a_mant));
}

void Vtb___024unit__03a__03aprolitariat::__VnoInFunc_b_to_duble(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &b_to_duble__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::__VnoInFunc_b_to_duble\n"); );
    // Body
    b_to_duble__Vfuncrtn = (((IData)(this->__PVT__b_sign) 
                             << 0x0000001fU) | (((IData)(this->__PVT__b_exp) 
                                                 << 0x00000017U) 
                                                | this->__PVT__b_mant));
}

Vtb___024unit__03a__03aprolitariat::Vtb___024unit__03a__03aprolitariat(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__b_denorm_val = 1U;
    this->__PVT__b_zero_val = 1U;
    this->__PVT__b_norm_val = 1U;
    this->__PVT__b_nan_val = 1U;
    this->__PVT__b_inf_val = 1U;
    this->__PVT__a_denorm_val = 1U;
    this->__PVT__a_zero_val = 1U;
    this->__PVT__a_norm_val = 1U;
    this->__PVT__a_nan_val = 1U;
    this->__PVT__a_inf_val = 1U;
    this->__PVT__constraint.write_var(this->__PVT__a_state_rand, 3ULL, 
                                      "a_state_rand", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__a_exp, 8ULL, 
                                      "a_exp", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__a_mant, 0x0000000000000017ULL, 
                                      "a_mant", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__b_state_rand, 3ULL, 
                                      "b_state_rand", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__b_exp, 8ULL, 
                                      "b_exp", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__b_mant, 0x0000000000000017ULL, 
                                      "b_mant", 0ULL);
}

void Vtb___024unit__03a__03aprolitariat::__VnoInFunc_randomize(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__1__Vfuncout;
    __Vfunc___VBasicRand__1__Vfuncout = 0;
    // Body
    this->__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__1__Vfuncout);
            }(), __Vfunc___VBasicRand__1__Vfuncout));
}

void Vtb___024unit__03a__03aprolitariat::__VnoInFunc_a_state_law_setup_constraint(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::__VnoInFunc_a_state_law_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    __Vtemp_1 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__a_inf_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= a_state_rand #b000))))))",0,
                                                  -1,
                                                  &(__Vtemp_1)) );
    __Vtemp_2 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__a_nan_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= a_state_rand #b001))))))",0,
                                                  -1,
                                                  &(__Vtemp_2)) );
    __Vtemp_3 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__a_norm_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= a_state_rand #b010))))))",0,
                                                  -1,
                                                  &(__Vtemp_3)) );
    __Vtemp_4 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__a_zero_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= a_state_rand #b011))))))",0,
                                                  -1,
                                                  &(__Vtemp_4)) );
    __Vtemp_5 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__a_denorm_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= a_state_rand #b100))))))",0,
                                                  -1,
                                                  &(__Vtemp_5)) );
    this->__PVT__constraint.hard("(bvand (__Vbv (bvuge a_state_rand #b000)) (__Vbv (bvule a_state_rand #b100)))"s);
}

void Vtb___024unit__03a__03aprolitariat::__VnoInFunc___Vsetup_constraints(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_a_state_law_setup_constraint(vlSymsp);
    this->__VnoInFunc_a_inf_inp_law_setup_constraint(vlSymsp);
    this->__VnoInFunc_b_state_law_setup_constraint(vlSymsp);
    this->__VnoInFunc_b_inf_inp_law_setup_constraint(vlSymsp);
}

void Vtb___024unit__03a__03aprolitariat::__VnoInFunc_a_inf_inp_law_setup_constraint(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::__VnoInFunc_a_inf_inp_law_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b000))) (__Vbool (__Vbv (= a_exp #xff)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b000))) (__Vbool (__Vbv (= a_mant #b00000000000000000000000)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b001))) (__Vbool (__Vbv (= a_exp #xff)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b001))) (__Vbool (__Vbv (not (= a_mant #b00000000000000000000000))))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b010))) (__Vbool (__Vbv (not (= a_exp #x00))))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b010))) (__Vbool (__Vbv (not (= a_exp #xff))))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b011))) (__Vbool (__Vbv (= a_exp #x00)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b011))) (__Vbool (__Vbv (= a_mant #b00000000000000000000000)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b000))) (__Vbool (__Vbv (= a_exp #x00)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= a_state_rand #b000))) (__Vbool (__Vbv (not (= a_mant #b00000000000000000000000))))))"s);
}

void Vtb___024unit__03a__03aprolitariat::__VnoInFunc_b_state_law_setup_constraint(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::__VnoInFunc_b_state_law_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    __Vtemp_1 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__b_inf_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= b_state_rand #b000))))))",0,
                                                  -1,
                                                  &(__Vtemp_1)) );
    __Vtemp_2 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__b_nan_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= b_state_rand #b001))))))",0,
                                                  -1,
                                                  &(__Vtemp_2)) );
    __Vtemp_3 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__b_norm_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= b_state_rand #b010))))))",0,
                                                  -1,
                                                  &(__Vtemp_3)) );
    __Vtemp_4 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__b_zero_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= b_state_rand #b011))))))",0,
                                                  -1,
                                                  &(__Vtemp_4)) );
    __Vtemp_5 = VL_SFORMATF_N_NX("#b%b",0,1,(1U & (~ (IData)(this->__PVT__b_denorm_val)))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool (__Vbv (not (= b_state_rand #b100))))))",0,
                                                  -1,
                                                  &(__Vtemp_5)) );
    this->__PVT__constraint.hard("(bvand (__Vbv (bvuge a_state_rand #b000)) (__Vbv (bvule a_state_rand #b100)))"s);
}

void Vtb___024unit__03a__03aprolitariat::__VnoInFunc_b_inf_inp_law_setup_constraint(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::__VnoInFunc_b_inf_inp_law_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b000))) (__Vbool (__Vbv (= b_exp #xff)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b000))) (__Vbool (__Vbv (= b_mant #b00000000000000000000000)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b001))) (__Vbool (__Vbv (= b_exp #xff)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b001))) (__Vbool (__Vbv (not (= b_mant #b00000000000000000000000))))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b010))) (__Vbool (__Vbv (not (= b_exp #x00))))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b010))) (__Vbool (__Vbv (not (= b_exp #xff))))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b011))) (__Vbool (__Vbv (= b_exp #x00)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b011))) (__Vbool (__Vbv (= b_mant #b00000000000000000000000)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b000))) (__Vbool (__Vbv (= b_exp #x00)))))"s);
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (= b_state_rand #b000))) (__Vbool (__Vbv (not (= b_mant #b00000000000000000000000))))))"s);
}

void Vtb___024unit__03a__03aprolitariat::__VnoInFunc___VBasicRand(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__a_sign = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__b_sign = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtb___024unit__03a__03aprolitariat::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__a_sign = 0;
    __PVT__a_exp = 0;
    __PVT__a_mant = 0;
    __PVT__b_sign = 0;
    __PVT__b_exp = 0;
    __PVT__b_mant = 0;
    __PVT__a_inf_val = 0;
    __PVT__a_nan_val = 0;
    __PVT__a_norm_val = 0;
    __PVT__a_zero_val = 0;
    __PVT__a_denorm_val = 0;
    __PVT__a_state_rand = 0;
    __PVT__b_inf_val = 0;
    __PVT__b_nan_val = 0;
    __PVT__b_norm_val = 0;
    __PVT__b_zero_val = 0;
    __PVT__b_denorm_val = 0;
    __PVT__b_state_rand = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtb___024unit__03a__03aprolitariat>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb___024unit__03a__03aprolitariat::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb___024unit__03a__03aprolitariat::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03aprolitariat::to_string_middle\n"); );
    // Body
    std::string out;
    out += "a_sign:" + VL_TO_STRING(__PVT__a_sign);
    out += ", a_exp:" + VL_TO_STRING(__PVT__a_exp);
    out += ", a_mant:" + VL_TO_STRING(__PVT__a_mant);
    out += ", b_sign:" + VL_TO_STRING(__PVT__b_sign);
    out += ", b_exp:" + VL_TO_STRING(__PVT__b_exp);
    out += ", b_mant:" + VL_TO_STRING(__PVT__b_mant);
    out += ", a_inf_val:" + VL_TO_STRING(__PVT__a_inf_val);
    out += ", a_nan_val:" + VL_TO_STRING(__PVT__a_nan_val);
    out += ", a_norm_val:" + VL_TO_STRING(__PVT__a_norm_val);
    out += ", a_zero_val:" + VL_TO_STRING(__PVT__a_zero_val);
    out += ", a_denorm_val:" + VL_TO_STRING(__PVT__a_denorm_val);
    out += ", a_state_rand:" + VL_TO_STRING(__PVT__a_state_rand);
    out += ", b_inf_val:" + VL_TO_STRING(__PVT__b_inf_val);
    out += ", b_nan_val:" + VL_TO_STRING(__PVT__b_nan_val);
    out += ", b_norm_val:" + VL_TO_STRING(__PVT__b_norm_val);
    out += ", b_zero_val:" + VL_TO_STRING(__PVT__b_zero_val);
    out += ", b_denorm_val:" + VL_TO_STRING(__PVT__b_denorm_val);
    out += ", b_state_rand:" + VL_TO_STRING(__PVT__b_state_rand);
    return (out);
}
