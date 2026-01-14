// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb___024unit____Vdpiimwrap_float_add_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &float_add__Vfuncrtn);
void Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &float_cmp__Vfuncrtn);

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ top__DOT__unnamedblk1_1__DOT____Vrepeat0;
    top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__0__a;
    __Vtask_top__DOT__test_loop__0__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__0__b;
    __Vtask_top__DOT__test_loop__0__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__2__a;
    __Vtask_top__DOT__calk_semp__2__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__2__b;
    __Vtask_top__DOT__calk_semp__2__b = 0;
    IData/*31:0*/ __Vfunc_float_add__3__Vfuncout;
    __Vfunc_float_add__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_float_cmp__4__Vfuncout;
    __Vfunc_float_cmp__4__Vfuncout = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__5__a;
    __Vtask_top__DOT__test_loop__5__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__5__b;
    __Vtask_top__DOT__test_loop__5__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__7__a;
    __Vtask_top__DOT__calk_semp__7__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__7__b;
    __Vtask_top__DOT__calk_semp__7__b = 0;
    IData/*31:0*/ __Vfunc_float_add__8__Vfuncout;
    __Vfunc_float_add__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_float_cmp__9__Vfuncout;
    __Vfunc_float_cmp__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__10__a;
    __Vtask_top__DOT__test_loop__10__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__10__b;
    __Vtask_top__DOT__test_loop__10__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__12__a;
    __Vtask_top__DOT__calk_semp__12__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__12__b;
    __Vtask_top__DOT__calk_semp__12__b = 0;
    IData/*31:0*/ __Vfunc_float_add__13__Vfuncout;
    __Vfunc_float_add__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_float_cmp__14__Vfuncout;
    __Vfunc_float_cmp__14__Vfuncout = 0;
    // Body
    vlSelfRef.top__DOT__rst = 1U;
    VL_WRITEF_NX("Start resset seq\n\n",0);
    top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, top__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge top.clk)", 
                                                             "tb.sv", 
                                                             50);
        top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 
            (top__DOT__unnamedblk1_1__DOT____Vrepeat0 
             - (IData)(1U));
    }
    vlSelfRef.top__DOT__rst = 0U;
    VL_WRITEF_NX("End resset seq\n\n",0);
    if (VL_UNLIKELY(((VL_VALUEPLUSARGS_INI(32, "arg0=%x"s, 
                                           vlSelfRef.top__DOT__a) 
                      && VL_VALUEPLUSARGS_INI(32, "arg1=%x"s, 
                                              vlSelfRef.top__DOT__b))))) {
        __Vtask_top__DOT__test_loop__0__b = vlSelfRef.top__DOT__b;
        __Vtask_top__DOT__test_loop__0__a = vlSelfRef.top__DOT__a;
        while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack)))) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 118);
        }
        vlSelfRef.top__DOT__i_a_strb = 1U;
        while (vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 125);
        }
        vlSelfRef.top__DOT__i_a_strb = 0U;
        while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack)))) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 132);
        }
        vlSelfRef.top__DOT__i_b_strb = 1U;
        while (vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 139);
        }
        vlSelfRef.top__DOT__i_b_strb = 0U;
        while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb)))) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 146);
        }
        vlSelfRef.top__DOT__res = vlSelfRef.top__DOT__dut__DOT__s_output_z;
        vlSelfRef.top__DOT__o_z_ack = 1U;
        co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge top.clk)", 
                                                             "tb.sv", 
                                                             151);
        vlSelfRef.top__DOT__o_z_ack = 0U;
        __Vtask_top__DOT__calk_semp__2__b = __Vtask_top__DOT__test_loop__0__b;
        __Vtask_top__DOT__calk_semp__2__a = __Vtask_top__DOT__test_loop__0__a;
        Vtb___024unit____Vdpiimwrap_float_add_TOP____024unit(__Vtask_top__DOT__calk_semp__2__a, __Vtask_top__DOT__calk_semp__2__b, __Vfunc_float_add__3__Vfuncout);
        vlSelfRef.top__DOT__semp = __Vfunc_float_add__3__Vfuncout;
        if ((0U != ([&]() {
                        Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit(vlSelfRef.top__DOT__res, vlSelfRef.top__DOT__semp, __Vfunc_float_cmp__4__Vfuncout);
                    }(), __Vfunc_float_cmp__4__Vfuncout))) {
            VL_WRITEF_NX("From RTL: OK : %.3e (%x) add %.3e (%x) = %.3e (%x) vs %.3e (%x)\n\n",0,
                         64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__0__a))),
                         32,__Vtask_top__DOT__test_loop__0__a,
                         64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__0__b))),
                         32,__Vtask_top__DOT__test_loop__0__b,
                         64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__semp))),
                         32,vlSelfRef.top__DOT__semp,
                         64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__res))),
                         32,vlSelfRef.top__DOT__res);
        } else {
            vlSelfRef.top__DOT__err = 1U;
            VL_WRITEF_NX("From RTL: ERROR : %.3e (%x) add %.3e (%x) = %.3e (%x) vs %.3e (%x)\n\n",0,
                         64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__0__a))),
                         32,__Vtask_top__DOT__test_loop__0__a,
                         64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__0__b))),
                         32,__Vtask_top__DOT__test_loop__0__b,
                         64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__semp))),
                         32,vlSelfRef.top__DOT__semp,
                         64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__res))),
                         32,vlSelfRef.top__DOT__res);
        }
        VL_FINISH_MT("tb.sv", 56, "");
    } else if (VL_UNLIKELY((VL_VALUEPLUSARGS_INN(64, "from_file=%s"s, 
                                                 vlSelfRef.top__DOT__filename)))) {
        vlSelfRef.top__DOT__file = VL_FOPEN_NN(vlSelfRef.top__DOT__filename
                                               , "r"s);
        ;
        if (VL_UNLIKELY(((0U == vlSelfRef.top__DOT__file)))) {
            VL_WRITEF_NX("Can't open %@\n",0,-1,&(vlSelfRef.top__DOT__filename));
        }
        while ((! (vlSelfRef.top__DOT__file ? feof(VL_CVT_I_FP(vlSelfRef.top__DOT__file)) : true))) {
            (void)VL_FSCANF_INX(vlSelfRef.top__DOT__file," %x",0,
                                32,&(vlSelfRef.top__DOT__a)) ;
            (void)(vlSelfRef.top__DOT__file ? fgetc(VL_CVT_I_FP(vlSelfRef.top__DOT__file)) : -1);
            (void)VL_FSCANF_INX(vlSelfRef.top__DOT__file," %x",0,
                                32,&(vlSelfRef.top__DOT__b)) ;
            (void)(vlSelfRef.top__DOT__file ? fgetc(VL_CVT_I_FP(vlSelfRef.top__DOT__file)) : -1);
            __Vtask_top__DOT__test_loop__5__b = vlSelfRef.top__DOT__b;
            __Vtask_top__DOT__test_loop__5__a = vlSelfRef.top__DOT__a;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     118);
            }
            vlSelfRef.top__DOT__i_a_strb = 1U;
            while (vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     125);
            }
            vlSelfRef.top__DOT__i_a_strb = 0U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     132);
            }
            vlSelfRef.top__DOT__i_b_strb = 1U;
            while (vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     139);
            }
            vlSelfRef.top__DOT__i_b_strb = 0U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     146);
            }
            vlSelfRef.top__DOT__res = vlSelfRef.top__DOT__dut__DOT__s_output_z;
            vlSelfRef.top__DOT__o_z_ack = 1U;
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 151);
            vlSelfRef.top__DOT__o_z_ack = 0U;
            __Vtask_top__DOT__calk_semp__7__b = __Vtask_top__DOT__test_loop__5__b;
            __Vtask_top__DOT__calk_semp__7__a = __Vtask_top__DOT__test_loop__5__a;
            Vtb___024unit____Vdpiimwrap_float_add_TOP____024unit(__Vtask_top__DOT__calk_semp__7__a, __Vtask_top__DOT__calk_semp__7__b, __Vfunc_float_add__8__Vfuncout);
            vlSelfRef.top__DOT__semp = __Vfunc_float_add__8__Vfuncout;
            if ((0U != ([&]() {
                            Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit(vlSelfRef.top__DOT__res, vlSelfRef.top__DOT__semp, __Vfunc_float_cmp__9__Vfuncout);
                        }(), __Vfunc_float_cmp__9__Vfuncout))) {
                VL_WRITEF_NX("From RTL: OK : %.3e (%x) add %.3e (%x) = %.3e (%x) vs %.3e (%x)\n\n",0,
                             64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__5__a))),
                             32,__Vtask_top__DOT__test_loop__5__a,
                             64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__5__b))),
                             32,__Vtask_top__DOT__test_loop__5__b,
                             64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__semp))),
                             32,vlSelfRef.top__DOT__semp,
                             64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__res))),
                             32,vlSelfRef.top__DOT__res);
            } else {
                vlSelfRef.top__DOT__err = 1U;
                VL_WRITEF_NX("From RTL: ERROR : %.3e (%x) add %.3e (%x) = %.3e (%x) vs %.3e (%x)\n\n",0,
                             64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__5__a))),
                             32,__Vtask_top__DOT__test_loop__5__a,
                             64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__5__b))),
                             32,__Vtask_top__DOT__test_loop__5__b,
                             64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__semp))),
                             32,vlSelfRef.top__DOT__semp,
                             64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__res))),
                             32,vlSelfRef.top__DOT__res);
            }
        }
        VL_FCLOSE_I(vlSelfRef.top__DOT__file); } else if (VL_VALUEPLUSARGS_INI(32, "random_mode=%d"s, 
                                                                               vlSelfRef.top__DOT__test_num)) {
        while (VL_LTS_III(32, 0U, vlSelfRef.top__DOT__test_num)) {
            vlSelfRef.top__DOT__a = VL_RANDOM_I();
            vlSelfRef.top__DOT__b = VL_RANDOM_I();
            __Vtask_top__DOT__test_loop__10__b = vlSelfRef.top__DOT__b;
            __Vtask_top__DOT__test_loop__10__a = vlSelfRef.top__DOT__a;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     118);
            }
            vlSelfRef.top__DOT__i_a_strb = 1U;
            while (vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     125);
            }
            vlSelfRef.top__DOT__i_a_strb = 0U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     132);
            }
            vlSelfRef.top__DOT__i_b_strb = 1U;
            while (vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     139);
            }
            vlSelfRef.top__DOT__i_b_strb = 0U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     146);
            }
            vlSelfRef.top__DOT__res = vlSelfRef.top__DOT__dut__DOT__s_output_z;
            vlSelfRef.top__DOT__o_z_ack = 1U;
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 151);
            vlSelfRef.top__DOT__o_z_ack = 0U;
            __Vtask_top__DOT__calk_semp__12__b = __Vtask_top__DOT__test_loop__10__b;
            __Vtask_top__DOT__calk_semp__12__a = __Vtask_top__DOT__test_loop__10__a;
            Vtb___024unit____Vdpiimwrap_float_add_TOP____024unit(__Vtask_top__DOT__calk_semp__12__a, __Vtask_top__DOT__calk_semp__12__b, __Vfunc_float_add__13__Vfuncout);
            vlSelfRef.top__DOT__semp = __Vfunc_float_add__13__Vfuncout;
            if ((0U != ([&]() {
                            Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit(vlSelfRef.top__DOT__res, vlSelfRef.top__DOT__semp, __Vfunc_float_cmp__14__Vfuncout);
                        }(), __Vfunc_float_cmp__14__Vfuncout))) {
                VL_WRITEF_NX("From RTL: OK : %.3e (%x) add %.3e (%x) = %.3e (%x) vs %.3e (%x)\n\n",0,
                             64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__10__a))),
                             32,__Vtask_top__DOT__test_loop__10__a,
                             64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__10__b))),
                             32,__Vtask_top__DOT__test_loop__10__b,
                             64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__semp))),
                             32,vlSelfRef.top__DOT__semp,
                             64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__res))),
                             32,vlSelfRef.top__DOT__res);
            } else {
                vlSelfRef.top__DOT__err = 1U;
                VL_WRITEF_NX("From RTL: ERROR : %.3e (%x) add %.3e (%x) = %.3e (%x) vs %.3e (%x)\n\n",0,
                             64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__10__a))),
                             32,__Vtask_top__DOT__test_loop__10__a,
                             64,VL_CVT_D_Q((QData)((IData)(__Vtask_top__DOT__test_loop__10__b))),
                             32,__Vtask_top__DOT__test_loop__10__b,
                             64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__semp))),
                             32,vlSelfRef.top__DOT__semp,
                             64,VL_CVT_D_Q((QData)((IData)(vlSelfRef.top__DOT__res))),
                             32,vlSelfRef.top__DOT__res);
            }
            vlSelfRef.top__DOT__test_num = (vlSelfRef.top__DOT__test_num 
                                            - (IData)(1U));
        }
    }
    VL_WRITEF_NX("#----------------------------------------#\n|                                        |\n",0);
    if (vlSelfRef.top__DOT__err) {
        VL_WRITEF_NX("|              Test Failed               |\n",0);
    } else {
        VL_WRITEF_NX("|              Test Passed               |\n",0);
    }
    VL_WRITEF_NX("|                                        |\n#----------------------------------------#\n",0);
    VL_FINISH_MT("tb.sv", 94, "");
    co_return;}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ top__DOT__unnamedblk1_2__DOT____Vrepeat1;
    top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x000f4240U;
        while (VL_LTS_III(32, 0U, top__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 98);
            top__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = (top__DOT__unnamedblk1_2__DOT____Vrepeat1 
                   - (IData)(1U));
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000f4240ULL, 
                                             nullptr, 
                                             "tb.sv", 
                                             100);
        VL_WRITEF_NX("Test to long\n#----------------------------------------#\n|                                        |\n|              Test Failed               |\n|                                        |\n#----------------------------------------#\n",0);
        VL_FINISH_MT("tb.sv", 109, "");
    }
    co_return;}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "tb.sv", 
                                             41);
        vlSelfRef.__VdlyVal__top__DOT__clk__v0 = (1U 
                                                  & (~ (IData)(vlSelfRef.top__DOT__clk)));
        vlSelfRef.__VdlySet__top__DOT__clk__v0 = 1U;
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.top__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clk__0 
        = vlSelfRef.top__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((vlSelfRef.top__DOT__a ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 0, vlSelfRef.top__DOT__a, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a 
            = vlSelfRef.top__DOT__a;
    }
    if ((vlSelfRef.top__DOT__b ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 64, vlSelfRef.top__DOT__b, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b 
            = vlSelfRef.top__DOT__b;
    }
    if (((IData)(vlSelfRef.top__DOT__i_a_strb) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_stb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 128, vlSelfRef.top__DOT__i_a_strb, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_stb);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_stb 
            = vlSelfRef.top__DOT__i_a_strb;
    }
    if (((IData)(vlSelfRef.top__DOT__i_b_strb) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_stb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 130, vlSelfRef.top__DOT__i_b_strb, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_stb);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_stb 
            = vlSelfRef.top__DOT__i_b_strb;
    }
    if (((IData)(vlSelfRef.top__DOT__o_z_ack) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_ack))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 132, vlSelfRef.top__DOT__o_z_ack, vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_ack);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_ack 
            = vlSelfRef.top__DOT__o_z_ack;
    }
    if (((IData)(vlSelfRef.top__DOT__rst) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 136, vlSelfRef.top__DOT__rst, vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst 
            = vlSelfRef.top__DOT__rst;
    }
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        if ((vlSelfRef.top__DOT__a ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 0, vlSelfRef.top__DOT__a, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a);
            vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a 
                = vlSelfRef.top__DOT__a;
        }
        if ((vlSelfRef.top__DOT__b ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b)) {
            VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 64, vlSelfRef.top__DOT__b, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b);
            vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b 
                = vlSelfRef.top__DOT__b;
        }
        if (((IData)(vlSelfRef.top__DOT__i_a_strb) 
             ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_stb))) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 128, vlSelfRef.top__DOT__i_a_strb, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_stb);
            vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_stb 
                = vlSelfRef.top__DOT__i_a_strb;
        }
        if (((IData)(vlSelfRef.top__DOT__i_b_strb) 
             ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_stb))) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 130, vlSelfRef.top__DOT__i_b_strb, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_stb);
            vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_stb 
                = vlSelfRef.top__DOT__i_b_strb;
        }
        if (((IData)(vlSelfRef.top__DOT__o_z_ack) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_ack))) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 132, vlSelfRef.top__DOT__o_z_ack, vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_ack);
            vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_ack 
                = vlSelfRef.top__DOT__o_z_ack;
        }
        if (((IData)(vlSelfRef.top__DOT__rst) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst))) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 136, vlSelfRef.top__DOT__rst, vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst);
            vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst 
                = vlSelfRef.top__DOT__rst;
        }
    }
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__s_input_a_ack;
    __Vdly__top__DOT__dut__DOT__s_input_a_ack = 0;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__a;
    __Vdly__top__DOT__dut__DOT__a = 0;
    CData/*3:0*/ __Vdly__top__DOT__dut__DOT__state;
    __Vdly__top__DOT__dut__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__s_input_b_ack;
    __Vdly__top__DOT__dut__DOT__s_input_b_ack = 0;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__b;
    __Vdly__top__DOT__dut__DOT__b = 0;
    IData/*26:0*/ __Vdly__top__DOT__dut__DOT__a_m;
    __Vdly__top__DOT__dut__DOT__a_m = 0;
    IData/*26:0*/ __Vdly__top__DOT__dut__DOT__b_m;
    __Vdly__top__DOT__dut__DOT__b_m = 0;
    SData/*9:0*/ __Vdly__top__DOT__dut__DOT__a_e;
    __Vdly__top__DOT__dut__DOT__a_e = 0;
    SData/*9:0*/ __Vdly__top__DOT__dut__DOT__b_e;
    __Vdly__top__DOT__dut__DOT__b_e = 0;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__a_s;
    __Vdly__top__DOT__dut__DOT__a_s = 0;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__b_s;
    __Vdly__top__DOT__dut__DOT__b_s = 0;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__z;
    __Vdly__top__DOT__dut__DOT__z = 0;
    SData/*9:0*/ __Vdly__top__DOT__dut__DOT__z_e;
    __Vdly__top__DOT__dut__DOT__z_e = 0;
    IData/*27:0*/ __Vdly__top__DOT__dut__DOT__sum;
    __Vdly__top__DOT__dut__DOT__sum = 0;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__z_s;
    __Vdly__top__DOT__dut__DOT__z_s = 0;
    IData/*23:0*/ __Vdly__top__DOT__dut__DOT__z_m;
    __Vdly__top__DOT__dut__DOT__z_m = 0;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__guard;
    __Vdly__top__DOT__dut__DOT__guard = 0;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__round_bit;
    __Vdly__top__DOT__dut__DOT__round_bit = 0;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__sticky;
    __Vdly__top__DOT__dut__DOT__sticky = 0;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__s_output_z_stb;
    __Vdly__top__DOT__dut__DOT__s_output_z_stb = 0;
    // Body
    __Vdly__top__DOT__dut__DOT__s_input_a_ack = vlSelfRef.top__DOT__dut__DOT__s_input_a_ack;
    __Vdly__top__DOT__dut__DOT__a = vlSelfRef.top__DOT__dut__DOT__a;
    __Vdly__top__DOT__dut__DOT__state = vlSelfRef.top__DOT__dut__DOT__state;
    __Vdly__top__DOT__dut__DOT__s_input_b_ack = vlSelfRef.top__DOT__dut__DOT__s_input_b_ack;
    __Vdly__top__DOT__dut__DOT__b = vlSelfRef.top__DOT__dut__DOT__b;
    __Vdly__top__DOT__dut__DOT__a_m = vlSelfRef.top__DOT__dut__DOT__a_m;
    __Vdly__top__DOT__dut__DOT__b_m = vlSelfRef.top__DOT__dut__DOT__b_m;
    __Vdly__top__DOT__dut__DOT__a_e = vlSelfRef.top__DOT__dut__DOT__a_e;
    __Vdly__top__DOT__dut__DOT__b_e = vlSelfRef.top__DOT__dut__DOT__b_e;
    __Vdly__top__DOT__dut__DOT__a_s = vlSelfRef.top__DOT__dut__DOT__a_s;
    __Vdly__top__DOT__dut__DOT__b_s = vlSelfRef.top__DOT__dut__DOT__b_s;
    __Vdly__top__DOT__dut__DOT__z = vlSelfRef.top__DOT__dut__DOT__z;
    __Vdly__top__DOT__dut__DOT__z_e = vlSelfRef.top__DOT__dut__DOT__z_e;
    __Vdly__top__DOT__dut__DOT__sum = vlSelfRef.top__DOT__dut__DOT__sum;
    __Vdly__top__DOT__dut__DOT__z_s = vlSelfRef.top__DOT__dut__DOT__z_s;
    __Vdly__top__DOT__dut__DOT__z_m = vlSelfRef.top__DOT__dut__DOT__z_m;
    __Vdly__top__DOT__dut__DOT__guard = vlSelfRef.top__DOT__dut__DOT__guard;
    __Vdly__top__DOT__dut__DOT__round_bit = vlSelfRef.top__DOT__dut__DOT__round_bit;
    __Vdly__top__DOT__dut__DOT__sticky = vlSelfRef.top__DOT__dut__DOT__sticky;
    __Vdly__top__DOT__dut__DOT__s_output_z_stb = vlSelfRef.top__DOT__dut__DOT__s_output_z_stb;
    if ((vlSelfRef.top__DOT__a ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 0, vlSelfRef.top__DOT__a, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a 
            = vlSelfRef.top__DOT__a;
    }
    if ((vlSelfRef.top__DOT__b ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 64, vlSelfRef.top__DOT__b, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b 
            = vlSelfRef.top__DOT__b;
    }
    if (((IData)(vlSelfRef.top__DOT__i_a_strb) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_stb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 128, vlSelfRef.top__DOT__i_a_strb, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_stb);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_stb 
            = vlSelfRef.top__DOT__i_a_strb;
    }
    if (((IData)(vlSelfRef.top__DOT__i_b_strb) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_stb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 130, vlSelfRef.top__DOT__i_b_strb, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_stb);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_stb 
            = vlSelfRef.top__DOT__i_b_strb;
    }
    if (((IData)(vlSelfRef.top__DOT__o_z_ack) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_ack))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 132, vlSelfRef.top__DOT__o_z_ack, vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_ack);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_ack 
            = vlSelfRef.top__DOT__o_z_ack;
    }
    if (((IData)(vlSelfRef.top__DOT__rst) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 136, vlSelfRef.top__DOT__rst, vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst 
            = vlSelfRef.top__DOT__rst;
    }
    if (((((((((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__state)) 
               | (1U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) 
              | (2U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) 
             | (3U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) 
            | (4U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) 
           | (5U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) 
          | (6U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) 
         | (7U == (IData)(vlSelfRef.top__DOT__dut__DOT__state)))) {
        if ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            __Vdly__top__DOT__dut__DOT__s_input_a_ack = 1U;
            if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) 
                 & (IData)(vlSelfRef.top__DOT__i_a_strb))) {
                ++(vlSymsp->__Vcoverage[692]);
                __Vdly__top__DOT__dut__DOT__a = vlSelfRef.top__DOT__a;
                __Vdly__top__DOT__dut__DOT__s_input_a_ack = 0U;
                __Vdly__top__DOT__dut__DOT__state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[693]);
            }
            ++(vlSymsp->__Vcoverage[697]);
        } else if ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            __Vdly__top__DOT__dut__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) 
                 & (IData)(vlSelfRef.top__DOT__i_b_strb))) {
                ++(vlSymsp->__Vcoverage[698]);
                __Vdly__top__DOT__dut__DOT__b = vlSelfRef.top__DOT__b;
                __Vdly__top__DOT__dut__DOT__s_input_b_ack = 0U;
                __Vdly__top__DOT__dut__DOT__state = 2U;
            } else {
                ++(vlSymsp->__Vcoverage[699]);
            }
            ++(vlSymsp->__Vcoverage[703]);
        } else if ((2U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            ++(vlSymsp->__Vcoverage[704]);
            __Vdly__top__DOT__dut__DOT__a_m = (0x03fffff8U 
                                               & (vlSelfRef.top__DOT__dut__DOT__a 
                                                  << 3U));
            __Vdly__top__DOT__dut__DOT__b_m = (0x03fffff8U 
                                               & (vlSelfRef.top__DOT__dut__DOT__b 
                                                  << 3U));
            __Vdly__top__DOT__dut__DOT__state = 3U;
            __Vdly__top__DOT__dut__DOT__a_e = (0x000003ffU 
                                               & ((0x000000ffU 
                                                   & (vlSelfRef.top__DOT__dut__DOT__a 
                                                      >> 0x17U)) 
                                                  - (IData)(0x007fU)));
            __Vdly__top__DOT__dut__DOT__b_e = (0x000003ffU 
                                               & ((0x000000ffU 
                                                   & (vlSelfRef.top__DOT__dut__DOT__b 
                                                      >> 0x17U)) 
                                                  - (IData)(0x007fU)));
            __Vdly__top__DOT__dut__DOT__a_s = (vlSelfRef.top__DOT__dut__DOT__a 
                                               >> 0x1fU);
            __Vdly__top__DOT__dut__DOT__b_s = (vlSelfRef.top__DOT__dut__DOT__b 
                                               >> 0x1fU);
        } else if ((3U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            if ((((0x0080U == (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)) 
                  & (0U != vlSelfRef.top__DOT__dut__DOT__a_m)) 
                 | ((0x0080U == (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)) 
                    & (0U != vlSelfRef.top__DOT__dut__DOT__b_m)))) {
                ++(vlSymsp->__Vcoverage[734]);
                __Vdly__top__DOT__dut__DOT__z = 0xffc00000U;
                __Vdly__top__DOT__dut__DOT__state = 0x0bU;
            } else if ((0x0080U == (IData)(vlSelfRef.top__DOT__dut__DOT__a_e))) {
                __Vdly__top__DOT__dut__DOT__z = (0x7f800000U 
                                                 | ((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                                                    << 0x0000001fU));
                __Vdly__top__DOT__dut__DOT__state = 0x0bU;
                if (((0x0080U == (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)) 
                     & ((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                        != (IData)(vlSelfRef.top__DOT__dut__DOT__b_s)))) {
                    ++(vlSymsp->__Vcoverage[705]);
                    __Vdly__top__DOT__dut__DOT__z = 
                        (0x7fc00000U | ((IData)(vlSelfRef.top__DOT__dut__DOT__b_s) 
                                        << 0x0000001fU));
                } else {
                    ++(vlSymsp->__Vcoverage[706]);
                }
                if (((0x0080U == (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)) 
                     & ((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                        != (IData)(vlSelfRef.top__DOT__dut__DOT__b_s)))) {
                    ++(vlSymsp->__Vcoverage[707]);
                }
                if (((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                     == (IData)(vlSelfRef.top__DOT__dut__DOT__b_s))) {
                    ++(vlSymsp->__Vcoverage[708]);
                }
                if ((0x0080U != (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) {
                    ++(vlSymsp->__Vcoverage[709]);
                }
                ++(vlSymsp->__Vcoverage[733]);
            } else if ((0x0080U == (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) {
                ++(vlSymsp->__Vcoverage[732]);
                __Vdly__top__DOT__dut__DOT__z = (0x7f800000U 
                                                 | ((IData)(vlSelfRef.top__DOT__dut__DOT__b_s) 
                                                    << 0x0000001fU));
                __Vdly__top__DOT__dut__DOT__state = 0x0bU;
            } else {
                if ((((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e))) 
                      & (0U == vlSelfRef.top__DOT__dut__DOT__a_m)) 
                     & ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) 
                        & (0U == vlSelfRef.top__DOT__dut__DOT__b_m)))) {
                    __Vdly__top__DOT__dut__DOT__z = 
                        ((0x7fffffffU & __Vdly__top__DOT__dut__DOT__z) 
                         | (((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                             & (IData)(vlSelfRef.top__DOT__dut__DOT__b_s)) 
                            << 0x0000001fU));
                    __Vdly__top__DOT__dut__DOT__state = 0x0bU;
                    __Vdly__top__DOT__dut__DOT__z = 
                        ((0x80000000U & __Vdly__top__DOT__dut__DOT__z) 
                         | ((0x7f800000U & (((IData)(0x7fU) 
                                             + (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)) 
                                            << 0x00000017U)) 
                            | (0x007fffffU & (vlSelfRef.top__DOT__dut__DOT__b_m 
                                              >> 3U))));
                    if (((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                         & (IData)(vlSelfRef.top__DOT__dut__DOT__b_s))) {
                        ++(vlSymsp->__Vcoverage[710]);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__b_s)))) {
                        ++(vlSymsp->__Vcoverage[711]);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__a_s)))) {
                        ++(vlSymsp->__Vcoverage[712]);
                    }
                    ++(vlSymsp->__Vcoverage[726]);
                } else {
                    if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e))) 
                         & (0U == vlSelfRef.top__DOT__dut__DOT__a_m))) {
                        ++(vlSymsp->__Vcoverage[722]);
                        __Vdly__top__DOT__dut__DOT__z 
                            = ((0x7fffffffU & __Vdly__top__DOT__dut__DOT__z) 
                               | ((IData)(vlSelfRef.top__DOT__dut__DOT__b_s) 
                                  << 0x0000001fU));
                        __Vdly__top__DOT__dut__DOT__state = 0x0bU;
                        __Vdly__top__DOT__dut__DOT__z 
                            = ((0x80000000U & __Vdly__top__DOT__dut__DOT__z) 
                               | ((0x7f800000U & (((IData)(0x7fU) 
                                                   + (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)) 
                                                  << 0x00000017U)) 
                                  | (0x007fffffU & 
                                     (vlSelfRef.top__DOT__dut__DOT__b_m 
                                      >> 3U))));
                    } else {
                        if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) 
                             & (0U == vlSelfRef.top__DOT__dut__DOT__b_m))) {
                            ++(vlSymsp->__Vcoverage[717]);
                            __Vdly__top__DOT__dut__DOT__z 
                                = ((0x7fffffffU & __Vdly__top__DOT__dut__DOT__z) 
                                   | ((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                                      << 0x0000001fU));
                            __Vdly__top__DOT__dut__DOT__state = 0x0bU;
                            __Vdly__top__DOT__dut__DOT__z 
                                = ((0x80000000U & __Vdly__top__DOT__dut__DOT__z) 
                                   | ((0x7f800000U 
                                       & (((IData)(0x7fU) 
                                           + (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)) 
                                          << 0x00000017U)) 
                                      | (0x007fffffU 
                                         & (vlSelfRef.top__DOT__dut__DOT__a_m 
                                            >> 3U))));
                        } else {
                            if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)))) {
                                ++(vlSymsp->__Vcoverage[713]);
                                __Vdly__top__DOT__dut__DOT__a_e = 0x0382U;
                            } else {
                                ++(vlSymsp->__Vcoverage[714]);
                                __Vdly__top__DOT__dut__DOT__a_m 
                                    = (0x04000000U 
                                       | __Vdly__top__DOT__dut__DOT__a_m);
                            }
                            __Vdly__top__DOT__dut__DOT__state = 4U;
                            if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)))) {
                                ++(vlSymsp->__Vcoverage[715]);
                                __Vdly__top__DOT__dut__DOT__b_e = 0x0382U;
                            } else {
                                ++(vlSymsp->__Vcoverage[716]);
                                __Vdly__top__DOT__dut__DOT__b_m 
                                    = (0x04000000U 
                                       | __Vdly__top__DOT__dut__DOT__b_m);
                            }
                            ++(vlSymsp->__Vcoverage[718]);
                        }
                        if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) 
                             & (0U == vlSelfRef.top__DOT__dut__DOT__b_m))) {
                            ++(vlSymsp->__Vcoverage[719]);
                        }
                        if ((0U != vlSelfRef.top__DOT__dut__DOT__b_m)) {
                            ++(vlSymsp->__Vcoverage[720]);
                        }
                        if ((0xffffff81U != VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)))) {
                            ++(vlSymsp->__Vcoverage[721]);
                        }
                    }
                    if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e))) 
                         & (0U == vlSelfRef.top__DOT__dut__DOT__a_m))) {
                        ++(vlSymsp->__Vcoverage[723]);
                    }
                    if ((0U != vlSelfRef.top__DOT__dut__DOT__a_m)) {
                        ++(vlSymsp->__Vcoverage[724]);
                    }
                    if ((0xffffff81U != VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)))) {
                        ++(vlSymsp->__Vcoverage[725]);
                    }
                }
                if (((((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e))) 
                       & (0U == vlSelfRef.top__DOT__dut__DOT__a_m)) 
                      & (0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)))) 
                     & (0U == vlSelfRef.top__DOT__dut__DOT__b_m))) {
                    ++(vlSymsp->__Vcoverage[727]);
                }
                if ((0U != vlSelfRef.top__DOT__dut__DOT__b_m)) {
                    ++(vlSymsp->__Vcoverage[728]);
                }
                if ((0xffffff81U != VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)))) {
                    ++(vlSymsp->__Vcoverage[729]);
                }
                if ((0U != vlSelfRef.top__DOT__dut__DOT__a_m)) {
                    ++(vlSymsp->__Vcoverage[730]);
                }
                if ((0xffffff81U != VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)))) {
                    ++(vlSymsp->__Vcoverage[731]);
                }
            }
            ++(vlSymsp->__Vcoverage[741]);
        } else if ((4U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            if (VL_GTS_III(10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e), (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) {
                __Vdly__top__DOT__dut__DOT__b_e = (0x000003ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)));
                __Vdly__top__DOT__dut__DOT__b_m = (0x07ffffffU 
                                                   & VL_SHIFTR_III(27,27,32, vlSelfRef.top__DOT__dut__DOT__b_m, 1U));
                __Vdly__top__DOT__dut__DOT__b_m = (
                                                   (0x07fffffeU 
                                                    & __Vdly__top__DOT__dut__DOT__b_m) 
                                                   | (IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & vlSelfRef.top__DOT__dut__DOT__b_m))));
                if ((2U & vlSelfRef.top__DOT__dut__DOT__b_m)) {
                    ++(vlSymsp->__Vcoverage[742]);
                }
                if ((1U & vlSelfRef.top__DOT__dut__DOT__b_m)) {
                    ++(vlSymsp->__Vcoverage[743]);
                }
                if ((IData)((0U == (3U & vlSelfRef.top__DOT__dut__DOT__b_m)))) {
                    ++(vlSymsp->__Vcoverage[744]);
                }
                ++(vlSymsp->__Vcoverage[750]);
            } else if (VL_LTS_III(10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e), (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) {
                __Vdly__top__DOT__dut__DOT__a_e = (0x000003ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)));
                __Vdly__top__DOT__dut__DOT__a_m = (0x07ffffffU 
                                                   & VL_SHIFTR_III(27,27,32, vlSelfRef.top__DOT__dut__DOT__a_m, 1U));
                __Vdly__top__DOT__dut__DOT__a_m = (
                                                   (0x07fffffeU 
                                                    & __Vdly__top__DOT__dut__DOT__a_m) 
                                                   | (IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & vlSelfRef.top__DOT__dut__DOT__a_m))));
                if ((2U & vlSelfRef.top__DOT__dut__DOT__a_m)) {
                    ++(vlSymsp->__Vcoverage[745]);
                }
                if ((1U & vlSelfRef.top__DOT__dut__DOT__a_m)) {
                    ++(vlSymsp->__Vcoverage[746]);
                }
                if ((IData)((0U == (3U & vlSelfRef.top__DOT__dut__DOT__a_m)))) {
                    ++(vlSymsp->__Vcoverage[747]);
                }
                ++(vlSymsp->__Vcoverage[748]);
            } else {
                ++(vlSymsp->__Vcoverage[749]);
                __Vdly__top__DOT__dut__DOT__state = 5U;
            }
            ++(vlSymsp->__Vcoverage[751]);
        } else if ((5U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            __Vdly__top__DOT__dut__DOT__z_e = vlSelfRef.top__DOT__dut__DOT__a_e;
            if (((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                 == (IData)(vlSelfRef.top__DOT__dut__DOT__b_s))) {
                ++(vlSymsp->__Vcoverage[754]);
                __Vdly__top__DOT__dut__DOT__sum = (0x0fffffffU 
                                                   & (vlSelfRef.top__DOT__dut__DOT__a_m 
                                                      + vlSelfRef.top__DOT__dut__DOT__b_m));
                __Vdly__top__DOT__dut__DOT__z_s = vlSelfRef.top__DOT__dut__DOT__a_s;
            } else {
                if ((vlSelfRef.top__DOT__dut__DOT__a_m 
                     >= vlSelfRef.top__DOT__dut__DOT__b_m)) {
                    ++(vlSymsp->__Vcoverage[752]);
                    __Vdly__top__DOT__dut__DOT__sum 
                        = (0x0fffffffU & (vlSelfRef.top__DOT__dut__DOT__a_m 
                                          - vlSelfRef.top__DOT__dut__DOT__b_m));
                    __Vdly__top__DOT__dut__DOT__z_s 
                        = vlSelfRef.top__DOT__dut__DOT__a_s;
                } else {
                    ++(vlSymsp->__Vcoverage[753]);
                    __Vdly__top__DOT__dut__DOT__sum 
                        = (0x0fffffffU & (vlSelfRef.top__DOT__dut__DOT__b_m 
                                          - vlSelfRef.top__DOT__dut__DOT__a_m));
                    __Vdly__top__DOT__dut__DOT__z_s 
                        = vlSelfRef.top__DOT__dut__DOT__b_s;
                }
                ++(vlSymsp->__Vcoverage[755]);
            }
            __Vdly__top__DOT__dut__DOT__state = 6U;
            ++(vlSymsp->__Vcoverage[756]);
        } else if ((6U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            if ((0x08000000U & vlSelfRef.top__DOT__dut__DOT__sum)) {
                __Vdly__top__DOT__dut__DOT__z_e = (0x000003ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)));
                __Vdly__top__DOT__dut__DOT__z_m = (0x00ffffffU 
                                                   & (vlSelfRef.top__DOT__dut__DOT__sum 
                                                      >> 4U));
                __Vdly__top__DOT__dut__DOT__guard = 
                    (1U & (vlSelfRef.top__DOT__dut__DOT__sum 
                           >> 3U));
                __Vdly__top__DOT__dut__DOT__round_bit 
                    = (1U & (vlSelfRef.top__DOT__dut__DOT__sum 
                             >> 2U));
                __Vdly__top__DOT__dut__DOT__sticky 
                    = (IData)((0U != (3U & vlSelfRef.top__DOT__dut__DOT__sum)));
                if ((1U & vlSelfRef.top__DOT__dut__DOT__sum)) {
                    ++(vlSymsp->__Vcoverage[757]);
                }
                if ((2U & vlSelfRef.top__DOT__dut__DOT__sum)) {
                    ++(vlSymsp->__Vcoverage[758]);
                }
                if ((IData)((0U == (3U & vlSelfRef.top__DOT__dut__DOT__sum)))) {
                    ++(vlSymsp->__Vcoverage[759]);
                }
                ++(vlSymsp->__Vcoverage[760]);
            } else {
                ++(vlSymsp->__Vcoverage[761]);
                __Vdly__top__DOT__dut__DOT__z_m = (0x00ffffffU 
                                                   & (vlSelfRef.top__DOT__dut__DOT__sum 
                                                      >> 3U));
                __Vdly__top__DOT__dut__DOT__guard = 
                    (1U & (vlSelfRef.top__DOT__dut__DOT__sum 
                           >> 2U));
                __Vdly__top__DOT__dut__DOT__round_bit 
                    = (1U & (vlSelfRef.top__DOT__dut__DOT__sum 
                             >> 1U));
                __Vdly__top__DOT__dut__DOT__sticky 
                    = (1U & vlSelfRef.top__DOT__dut__DOT__sum);
            }
            __Vdly__top__DOT__dut__DOT__state = 7U;
            ++(vlSymsp->__Vcoverage[762]);
        } else {
            if (((~ (vlSelfRef.top__DOT__dut__DOT__z_m 
                     >> 0x17U)) & VL_LTS_III(32, 0xffffff82U, 
                                             VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e))))) {
                __Vdly__top__DOT__dut__DOT__z_e = (0x000003ffU 
                                                   & ((IData)(vlSelfRef.top__DOT__dut__DOT__z_e) 
                                                      - (IData)(1U)));
                __Vdly__top__DOT__dut__DOT__z_m = (0x00ffffffU 
                                                   & VL_SHIFTL_III(24,24,32, vlSelfRef.top__DOT__dut__DOT__z_m, 1U));
                ++(vlSymsp->__Vcoverage[763]);
                __Vdly__top__DOT__dut__DOT__z_m = (
                                                   (0x00fffffeU 
                                                    & __Vdly__top__DOT__dut__DOT__z_m) 
                                                   | (IData)(vlSelfRef.top__DOT__dut__DOT__guard));
                __Vdly__top__DOT__dut__DOT__guard = vlSelfRef.top__DOT__dut__DOT__round_bit;
                __Vdly__top__DOT__dut__DOT__round_bit = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[764]);
                __Vdly__top__DOT__dut__DOT__state = 8U;
            }
            ++(vlSymsp->__Vcoverage[768]);
        }
    } else if ((8U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        if (VL_GTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)))) {
            __Vdly__top__DOT__dut__DOT__z_e = (0x000003ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)));
            __Vdly__top__DOT__dut__DOT__z_m = (0x00ffffffU 
                                               & VL_SHIFTR_III(24,24,32, vlSelfRef.top__DOT__dut__DOT__z_m, 1U));
            __Vdly__top__DOT__dut__DOT__sticky = ((IData)(vlSelfRef.top__DOT__dut__DOT__sticky) 
                                                  | (IData)(vlSelfRef.top__DOT__dut__DOT__round_bit));
            if (vlSelfRef.top__DOT__dut__DOT__round_bit) {
                ++(vlSymsp->__Vcoverage[769]);
            }
            if (vlSelfRef.top__DOT__dut__DOT__sticky) {
                ++(vlSymsp->__Vcoverage[770]);
            }
            if ((1U & ((~ (IData)(vlSelfRef.top__DOT__dut__DOT__sticky)) 
                       & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__round_bit))))) {
                ++(vlSymsp->__Vcoverage[771]);
            }
            ++(vlSymsp->__Vcoverage[772]);
            __Vdly__top__DOT__dut__DOT__round_bit = vlSelfRef.top__DOT__dut__DOT__guard;
            __Vdly__top__DOT__dut__DOT__guard = (1U 
                                                 & vlSelfRef.top__DOT__dut__DOT__z_m);
        } else {
            ++(vlSymsp->__Vcoverage[773]);
            __Vdly__top__DOT__dut__DOT__state = 9U;
        }
        ++(vlSymsp->__Vcoverage[774]);
    } else if ((9U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        if (((IData)(vlSelfRef.top__DOT__dut__DOT__guard) 
             & (((IData)(vlSelfRef.top__DOT__dut__DOT__round_bit) 
                 | (IData)(vlSelfRef.top__DOT__dut__DOT__sticky)) 
                | vlSelfRef.top__DOT__dut__DOT__z_m))) {
            __Vdly__top__DOT__dut__DOT__z_m = (0x00ffffffU 
                                               & ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__dut__DOT__z_m));
            if ((0x00ffffffU == vlSelfRef.top__DOT__dut__DOT__z_m)) {
                __Vdly__top__DOT__dut__DOT__z_e = (0x000003ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)));
                ++(vlSymsp->__Vcoverage[775]);
            } else {
                ++(vlSymsp->__Vcoverage[776]);
            }
            ++(vlSymsp->__Vcoverage[777]);
        } else {
            ++(vlSymsp->__Vcoverage[778]);
        }
        __Vdly__top__DOT__dut__DOT__state = 0x0aU;
        ++(vlSymsp->__Vcoverage[784]);
    } else if ((0x0aU == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        __Vdly__top__DOT__dut__DOT__z = ((0xff800000U 
                                          & __Vdly__top__DOT__dut__DOT__z) 
                                         | (0x007fffffU 
                                            & vlSelfRef.top__DOT__dut__DOT__z_m));
        __Vdly__top__DOT__dut__DOT__state = 0x0bU;
        __Vdly__top__DOT__dut__DOT__z = ((0x007fffffU 
                                          & __Vdly__top__DOT__dut__DOT__z) 
                                         | (((IData)(vlSelfRef.top__DOT__dut__DOT__z_s) 
                                             << 0x0000001fU) 
                                            | (0x7f800000U 
                                               & (((IData)(0x7fU) 
                                                   + (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)) 
                                                  << 0x00000017U))));
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e))) 
             & (~ (vlSelfRef.top__DOT__dut__DOT__z_m 
                   >> 0x17U)))) {
            ++(vlSymsp->__Vcoverage[785]);
            __Vdly__top__DOT__dut__DOT__z = (0x807fffffU 
                                             & __Vdly__top__DOT__dut__DOT__z);
        } else {
            ++(vlSymsp->__Vcoverage[786]);
        }
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e))) 
             & (0U == vlSelfRef.top__DOT__dut__DOT__z_m))) {
            ++(vlSymsp->__Vcoverage[790]);
            __Vdly__top__DOT__dut__DOT__z = (0x7fffffffU 
                                             & __Vdly__top__DOT__dut__DOT__z);
        } else {
            ++(vlSymsp->__Vcoverage[791]);
        }
        if (VL_LTS_III(32, 0x0000007fU, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)))) {
            ++(vlSymsp->__Vcoverage[795]);
            __Vdly__top__DOT__dut__DOT__z = (0x7f800000U 
                                             | ((IData)(vlSelfRef.top__DOT__dut__DOT__z_s) 
                                                << 0x0000001fU));
        } else {
            ++(vlSymsp->__Vcoverage[796]);
        }
        ++(vlSymsp->__Vcoverage[797]);
    } else if ((0x0bU == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        __Vdly__top__DOT__dut__DOT__s_output_z_stb = 1U;
        vlSelfRef.top__DOT__dut__DOT__s_output_z = vlSelfRef.top__DOT__dut__DOT__z;
        if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb) 
             & (IData)(vlSelfRef.top__DOT__o_z_ack))) {
            ++(vlSymsp->__Vcoverage[798]);
            __Vdly__top__DOT__dut__DOT__s_output_z_stb = 0U;
            __Vdly__top__DOT__dut__DOT__state = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[799]);
        }
        ++(vlSymsp->__Vcoverage[803]);
    }
    if (vlSelfRef.top__DOT__rst) {
        ++(vlSymsp->__Vcoverage[804]);
        __Vdly__top__DOT__dut__DOT__s_input_a_ack = 0U;
        __Vdly__top__DOT__dut__DOT__s_input_b_ack = 0U;
        __Vdly__top__DOT__dut__DOT__s_output_z_stb = 0U;
        __Vdly__top__DOT__dut__DOT__state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[805]);
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) 
         & (IData)(vlSelfRef.top__DOT__i_a_strb))) {
        ++(vlSymsp->__Vcoverage[694]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__i_a_strb)))) {
        ++(vlSymsp->__Vcoverage[695]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack)))) {
        ++(vlSymsp->__Vcoverage[696]);
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) 
         & (IData)(vlSelfRef.top__DOT__i_b_strb))) {
        ++(vlSymsp->__Vcoverage[700]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__i_b_strb)))) {
        ++(vlSymsp->__Vcoverage[701]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack)))) {
        ++(vlSymsp->__Vcoverage[702]);
    }
    if (((0x0080U == (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)) 
         & (0U != vlSelfRef.top__DOT__dut__DOT__b_m))) {
        ++(vlSymsp->__Vcoverage[735]);
    }
    if (((0x0080U == (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)) 
         & (0U != vlSelfRef.top__DOT__dut__DOT__a_m))) {
        ++(vlSymsp->__Vcoverage[736]);
    }
    if (((0U == vlSelfRef.top__DOT__dut__DOT__a_m) 
         & (0U == vlSelfRef.top__DOT__dut__DOT__b_m))) {
        ++(vlSymsp->__Vcoverage[737]);
    }
    if (((0U == vlSelfRef.top__DOT__dut__DOT__a_m) 
         & (0x0080U != (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)))) {
        ++(vlSymsp->__Vcoverage[738]);
    }
    if (((0x0080U != (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)) 
         & (0U == vlSelfRef.top__DOT__dut__DOT__b_m))) {
        ++(vlSymsp->__Vcoverage[739]);
    }
    if (((0x0080U != (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)) 
         & (0x0080U != (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)))) {
        ++(vlSymsp->__Vcoverage[740]);
    }
    if (((~ (vlSelfRef.top__DOT__dut__DOT__z_m >> 0x17U)) 
         & VL_LTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e))))) {
        ++(vlSymsp->__Vcoverage[765]);
    }
    if (VL_GTES_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)))) {
        ++(vlSymsp->__Vcoverage[766]);
    }
    if ((0x00800000U & vlSelfRef.top__DOT__dut__DOT__z_m)) {
        ++(vlSymsp->__Vcoverage[767]);
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__guard) 
         & vlSelfRef.top__DOT__dut__DOT__z_m)) {
        ++(vlSymsp->__Vcoverage[779]);
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__guard) 
         & (IData)(vlSelfRef.top__DOT__dut__DOT__sticky))) {
        ++(vlSymsp->__Vcoverage[780]);
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__guard) 
         & (IData)(vlSelfRef.top__DOT__dut__DOT__round_bit))) {
        ++(vlSymsp->__Vcoverage[781]);
    }
    if ((1U & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__round_bit)) 
                & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__sticky))) 
               & (~ vlSelfRef.top__DOT__dut__DOT__z_m)))) {
        ++(vlSymsp->__Vcoverage[782]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__guard)))) {
        ++(vlSymsp->__Vcoverage[783]);
    }
    if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e))) 
         & (~ (vlSelfRef.top__DOT__dut__DOT__z_m >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[787]);
    }
    if ((0x00800000U & vlSelfRef.top__DOT__dut__DOT__z_m)) {
        ++(vlSymsp->__Vcoverage[788]);
    }
    if ((0xffffff82U != VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)))) {
        ++(vlSymsp->__Vcoverage[789]);
    }
    if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e))) 
         & (0U == vlSelfRef.top__DOT__dut__DOT__z_m))) {
        ++(vlSymsp->__Vcoverage[792]);
    }
    if ((0U != vlSelfRef.top__DOT__dut__DOT__z_m)) {
        ++(vlSymsp->__Vcoverage[793]);
    }
    if ((0xffffff82U != VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)))) {
        ++(vlSymsp->__Vcoverage[794]);
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb) 
         & (IData)(vlSelfRef.top__DOT__o_z_ack))) {
        ++(vlSymsp->__Vcoverage[800]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__o_z_ack)))) {
        ++(vlSymsp->__Vcoverage[801]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb)))) {
        ++(vlSymsp->__Vcoverage[802]);
    }
    ++(vlSymsp->__Vcoverage[806]);
    vlSelfRef.top__DOT__dut__DOT__s_input_a_ack = __Vdly__top__DOT__dut__DOT__s_input_a_ack;
    vlSelfRef.top__DOT__dut__DOT__a = __Vdly__top__DOT__dut__DOT__a;
    vlSelfRef.top__DOT__dut__DOT__state = __Vdly__top__DOT__dut__DOT__state;
    vlSelfRef.top__DOT__dut__DOT__s_input_b_ack = __Vdly__top__DOT__dut__DOT__s_input_b_ack;
    vlSelfRef.top__DOT__dut__DOT__b = __Vdly__top__DOT__dut__DOT__b;
    vlSelfRef.top__DOT__dut__DOT__a_m = __Vdly__top__DOT__dut__DOT__a_m;
    vlSelfRef.top__DOT__dut__DOT__b_m = __Vdly__top__DOT__dut__DOT__b_m;
    vlSelfRef.top__DOT__dut__DOT__a_e = __Vdly__top__DOT__dut__DOT__a_e;
    vlSelfRef.top__DOT__dut__DOT__b_e = __Vdly__top__DOT__dut__DOT__b_e;
    vlSelfRef.top__DOT__dut__DOT__a_s = __Vdly__top__DOT__dut__DOT__a_s;
    vlSelfRef.top__DOT__dut__DOT__b_s = __Vdly__top__DOT__dut__DOT__b_s;
    vlSelfRef.top__DOT__dut__DOT__z = __Vdly__top__DOT__dut__DOT__z;
    vlSelfRef.top__DOT__dut__DOT__z_e = __Vdly__top__DOT__dut__DOT__z_e;
    vlSelfRef.top__DOT__dut__DOT__sum = __Vdly__top__DOT__dut__DOT__sum;
    vlSelfRef.top__DOT__dut__DOT__z_s = __Vdly__top__DOT__dut__DOT__z_s;
    vlSelfRef.top__DOT__dut__DOT__z_m = __Vdly__top__DOT__dut__DOT__z_m;
    vlSelfRef.top__DOT__dut__DOT__guard = __Vdly__top__DOT__dut__DOT__guard;
    vlSelfRef.top__DOT__dut__DOT__round_bit = __Vdly__top__DOT__dut__DOT__round_bit;
    vlSelfRef.top__DOT__dut__DOT__sticky = __Vdly__top__DOT__dut__DOT__sticky;
    vlSelfRef.top__DOT__dut__DOT__s_output_z_stb = __Vdly__top__DOT__dut__DOT__s_output_z_stb;
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_ack))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 204, vlSelfRef.top__DOT__dut__DOT__s_input_a_ack, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_ack);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_ack 
            = vlSelfRef.top__DOT__dut__DOT__s_input_a_ack;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__a ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 216, vlSelfRef.top__DOT__dut__DOT__a, vlSelfRef.top__DOT__dut__DOT____Vtogcov__a);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__a 
            = vlSelfRef.top__DOT__dut__DOT__a;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__state) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__state))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 208, vlSelfRef.top__DOT__dut__DOT__state, vlSelfRef.top__DOT__dut__DOT____Vtogcov__state);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__state 
            = vlSelfRef.top__DOT__dut__DOT__state;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_ack))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 206, vlSelfRef.top__DOT__dut__DOT__s_input_b_ack, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_ack);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_ack 
            = vlSelfRef.top__DOT__dut__DOT__s_input_b_ack;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__b ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 280, vlSelfRef.top__DOT__dut__DOT__b, vlSelfRef.top__DOT__dut__DOT____Vtogcov__b);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__b 
            = vlSelfRef.top__DOT__dut__DOT__b;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__a_m ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__a_m)) {
        VL_COV_TOGGLE_CHG_ST_I(27, vlSymsp->__Vcoverage + 408, vlSelfRef.top__DOT__dut__DOT__a_m, vlSelfRef.top__DOT__dut__DOT____Vtogcov__a_m);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__a_m 
            = vlSelfRef.top__DOT__dut__DOT__a_m;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__b_m ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__b_m)) {
        VL_COV_TOGGLE_CHG_ST_I(27, vlSymsp->__Vcoverage + 462, vlSelfRef.top__DOT__dut__DOT__b_m, vlSelfRef.top__DOT__dut__DOT____Vtogcov__b_m);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__b_m 
            = vlSelfRef.top__DOT__dut__DOT__b_m;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__a_e) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__a_e))) {
        VL_COV_TOGGLE_CHG_ST_I(10, vlSymsp->__Vcoverage + 564, vlSelfRef.top__DOT__dut__DOT__a_e, vlSelfRef.top__DOT__dut__DOT____Vtogcov__a_e);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__a_e 
            = vlSelfRef.top__DOT__dut__DOT__a_e;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__b_e) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__b_e))) {
        VL_COV_TOGGLE_CHG_ST_I(10, vlSymsp->__Vcoverage + 584, vlSelfRef.top__DOT__dut__DOT__b_e, vlSelfRef.top__DOT__dut__DOT____Vtogcov__b_e);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__b_e 
            = vlSelfRef.top__DOT__dut__DOT__b_e;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__a_s))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 624, vlSelfRef.top__DOT__dut__DOT__a_s, vlSelfRef.top__DOT__dut__DOT____Vtogcov__a_s);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__a_s 
            = vlSelfRef.top__DOT__dut__DOT__a_s;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__b_s) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__b_s))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 626, vlSelfRef.top__DOT__dut__DOT__b_s, vlSelfRef.top__DOT__dut__DOT____Vtogcov__b_s);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__b_s 
            = vlSelfRef.top__DOT__dut__DOT__b_s;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__z ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__z)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 344, vlSelfRef.top__DOT__dut__DOT__z, vlSelfRef.top__DOT__dut__DOT____Vtogcov__z);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__z 
            = vlSelfRef.top__DOT__dut__DOT__z;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__z_e) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_e))) {
        VL_COV_TOGGLE_CHG_ST_I(10, vlSymsp->__Vcoverage + 604, vlSelfRef.top__DOT__dut__DOT__z_e, vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_e);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_e 
            = vlSelfRef.top__DOT__dut__DOT__z_e;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__sum ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__sum)) {
        VL_COV_TOGGLE_CHG_ST_I(28, vlSymsp->__Vcoverage + 636, vlSelfRef.top__DOT__dut__DOT__sum, vlSelfRef.top__DOT__dut__DOT____Vtogcov__sum);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__sum 
            = vlSelfRef.top__DOT__dut__DOT__sum;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__z_s) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_s))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 628, vlSelfRef.top__DOT__dut__DOT__z_s, vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_s);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_s 
            = vlSelfRef.top__DOT__dut__DOT__z_s;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__z_m ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_m)) {
        VL_COV_TOGGLE_CHG_ST_I(24, vlSymsp->__Vcoverage + 516, vlSelfRef.top__DOT__dut__DOT__z_m, vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_m);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_m 
            = vlSelfRef.top__DOT__dut__DOT__z_m;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__guard) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__guard))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 630, vlSelfRef.top__DOT__dut__DOT__guard, vlSelfRef.top__DOT__dut__DOT____Vtogcov__guard);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__guard 
            = vlSelfRef.top__DOT__dut__DOT__guard;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__round_bit) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__round_bit))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 632, vlSelfRef.top__DOT__dut__DOT__round_bit, vlSelfRef.top__DOT__dut__DOT____Vtogcov__round_bit);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__round_bit 
            = vlSelfRef.top__DOT__dut__DOT__round_bit;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__sticky) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__sticky))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 634, vlSelfRef.top__DOT__dut__DOT__sticky, vlSelfRef.top__DOT__dut__DOT____Vtogcov__sticky);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__sticky 
            = vlSelfRef.top__DOT__dut__DOT__sticky;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_stb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 202, vlSelfRef.top__DOT__dut__DOT__s_output_z_stb, vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_stb);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_stb 
            = vlSelfRef.top__DOT__dut__DOT__s_output_z_stb;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__s_output_z ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 138, vlSelfRef.top__DOT__dut__DOT__s_output_z, vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z 
            = vlSelfRef.top__DOT__dut__DOT__s_output_z;
    }
}

void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__top__DOT__clk__v0) {
        vlSelfRef.__VdlySet__top__DOT__clk__v0 = 0U;
        vlSelfRef.top__DOT__clk = vlSelfRef.__VdlyVal__top__DOT__clk__v0;
    }
    if (((IData)(vlSelfRef.top__DOT__clk) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 134, vlSelfRef.top__DOT__clk, vlSelfRef.top__DOT__dut__DOT____Vtogcov__clk);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__clk 
            = vlSelfRef.top__DOT__clk;
    }
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet__top__DOT__clk__v0) {
            vlSelfRef.__VdlySet__top__DOT__clk__v0 = 0U;
            vlSelfRef.top__DOT__clk = vlSelfRef.__VdlyVal__top__DOT__clk__v0;
        }
        if (((IData)(vlSelfRef.top__DOT__clk) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__clk))) {
            VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 134, vlSelfRef.top__DOT__clk, vlSelfRef.top__DOT__dut__DOT____Vtogcov__clk);
            vlSelfRef.top__DOT__dut__DOT____Vtogcov__clk 
                = vlSelfRef.top__DOT__clk;
        }
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h8ac91119__0.commit(
                                                   "@(posedge top.clk)");
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8ac91119__0.resume(
                                                   "@(posedge top.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    Vtb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        Vtb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.sv", 8, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb.sv", 8, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb___024root___eval_phase__act(vlSelf));
    } while (Vtb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
