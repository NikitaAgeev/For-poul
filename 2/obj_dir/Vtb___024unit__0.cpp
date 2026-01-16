// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

extern "C" unsigned int float_add(unsigned int a, unsigned int b);

void Vtb___024unit____Vdpiimwrap_float_add_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &float_add__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_float_add_TOP____024unit\n"); );
    // Body
    unsigned int a__Vcvt;
    a__Vcvt = a;
    unsigned int b__Vcvt;
    b__Vcvt = b;
    unsigned int float_add__Vfuncrtn__Vcvt;
    float_add__Vfuncrtn__Vcvt = float_add(a__Vcvt, b__Vcvt);
    float_add__Vfuncrtn = (float_add__Vfuncrtn__Vcvt);
}

extern "C" unsigned int float_cmp(unsigned int a, unsigned int b);

void Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &float_cmp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit\n"); );
    // Body
    unsigned int a__Vcvt;
    a__Vcvt = a;
    unsigned int b__Vcvt;
    b__Vcvt = b;
    unsigned int float_cmp__Vfuncrtn__Vcvt;
    float_cmp__Vfuncrtn__Vcvt = float_cmp(a__Vcvt, b__Vcvt);
    float_cmp__Vfuncrtn = (float_cmp__Vfuncrtn__Vcvt);
}

extern "C" void tr_print(unsigned int a, unsigned int b, unsigned int semp, unsigned int res, unsigned int cmp_res);

void Vtb___024unit____Vdpiimwrap_tr_print_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ semp, IData/*31:0*/ res, IData/*31:0*/ cmp_res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_tr_print_TOP____024unit\n"); );
    // Body
    unsigned int a__Vcvt;
    a__Vcvt = a;
    unsigned int b__Vcvt;
    b__Vcvt = b;
    unsigned int semp__Vcvt;
    semp__Vcvt = semp;
    unsigned int res__Vcvt;
    res__Vcvt = res;
    unsigned int cmp_res__Vcvt;
    cmp_res__Vcvt = cmp_res;
    tr_print(a__Vcvt, b__Vcvt, semp__Vcvt, res__Vcvt, cmp_res__Vcvt);
}
