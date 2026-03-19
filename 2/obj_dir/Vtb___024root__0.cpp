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
void Vtb___024unit____Vdpiimwrap_tr_print_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ semp, IData/*31:0*/ res, IData/*31:0*/ cmp_res);
void Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &float_cmp__Vfuncrtn);

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb___024unit__03a__03aprolitariat> top__DOT__unnamedblk1__DOT__r_data;
    IData/*31:0*/ top__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0;
    top__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__1__a;
    __Vtask_top__DOT__test_loop__1__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__1__b;
    __Vtask_top__DOT__test_loop__1__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__3__a;
    __Vtask_top__DOT__calk_semp__3__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__3__b;
    __Vtask_top__DOT__calk_semp__3__b = 0;
    IData/*31:0*/ __Vfunc_float_add__4__Vfuncout;
    __Vfunc_float_add__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_float_cmp__6__Vfuncout;
    __Vfunc_float_cmp__6__Vfuncout = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__7__a;
    __Vtask_top__DOT__test_loop__7__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__7__b;
    __Vtask_top__DOT__test_loop__7__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__9__a;
    __Vtask_top__DOT__calk_semp__9__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__9__b;
    __Vtask_top__DOT__calk_semp__9__b = 0;
    IData/*31:0*/ __Vfunc_float_add__10__Vfuncout;
    __Vfunc_float_add__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_float_cmp__12__Vfuncout;
    __Vfunc_float_cmp__12__Vfuncout = 0;
    IData/*31:0*/ __Vtask_randomize__13__Vfuncout;
    __Vtask_randomize__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_a_to_duble__14__Vfuncout;
    __Vtask_a_to_duble__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_b_to_duble__15__Vfuncout;
    __Vtask_b_to_duble__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__16__a;
    __Vtask_top__DOT__test_loop__16__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_loop__16__b;
    __Vtask_top__DOT__test_loop__16__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__18__a;
    __Vtask_top__DOT__calk_semp__18__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__calk_semp__18__b;
    __Vtask_top__DOT__calk_semp__18__b = 0;
    IData/*31:0*/ __Vfunc_float_add__19__Vfuncout;
    __Vfunc_float_add__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_float_cmp__21__Vfuncout;
    __Vfunc_float_cmp__21__Vfuncout = 0;
    // Body
    top__DOT__unnamedblk1__DOT__r_data = VL_NEW(Vtb___024unit__03a__03aprolitariat, vlSymsp);
    vlSelfRef.top__DOT__rst = 1U;
    VL_WRITEF_NX("Start resset seq\n\n",0);
    top__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, top__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge top.clk)", 
                                                             "tb.sv", 
                                                             138);
        top__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (top__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.top__DOT__rst = 0U;
    VL_WRITEF_NX("End resset seq\n\n",0);
    if (VL_UNLIKELY(((VL_VALUEPLUSARGS_INI(32, "arg0=%x"s, 
                                           vlSelfRef.top__DOT__a) 
                      && VL_VALUEPLUSARGS_INI(32, "arg1=%x"s, 
                                              vlSelfRef.top__DOT__b))))) {
        __Vtask_top__DOT__test_loop__1__b = vlSelfRef.top__DOT__b;
        __Vtask_top__DOT__test_loop__1__a = vlSelfRef.top__DOT__a;
        vlSelfRef.top__DOT__timer = 0U;
        vlSelfRef.top__DOT__act_state = 1U;
        while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack)))) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 213);
        }
        vlSelfRef.top__DOT__i_a_strb = 1U;
        while (vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 220);
        }
        vlSelfRef.top__DOT__i_a_strb = 0U;
        while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack)))) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 227);
        }
        vlSelfRef.top__DOT__i_b_strb = 1U;
        while (vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 234);
        }
        vlSelfRef.top__DOT__i_b_strb = 0U;
        while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb)))) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 241);
        }
        vlSelfRef.top__DOT__res = vlSelfRef.top__DOT__dut__DOT__s_output_z;
        vlSelfRef.top__DOT__o_z_ack = 1U;
        co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge top.clk)", 
                                                             "tb.sv", 
                                                             246);
        vlSelfRef.top__DOT__o_z_ack = 0U;
        vlSelfRef.top__DOT__act_state = 0U;
        vlSelfRef.top__DOT__timer = 0U;
        __Vtask_top__DOT__calk_semp__3__b = __Vtask_top__DOT__test_loop__1__b;
        __Vtask_top__DOT__calk_semp__3__a = __Vtask_top__DOT__test_loop__1__a;
        Vtb___024unit____Vdpiimwrap_float_add_TOP____024unit(__Vtask_top__DOT__calk_semp__3__a, __Vtask_top__DOT__calk_semp__3__b, __Vfunc_float_add__4__Vfuncout);
        vlSelfRef.top__DOT__semp = __Vfunc_float_add__4__Vfuncout;
        Vtb___024unit____Vdpiimwrap_tr_print_TOP____024unit(__Vtask_top__DOT__test_loop__1__a, __Vtask_top__DOT__test_loop__1__b, vlSelfRef.top__DOT__semp, vlSelfRef.top__DOT__res, 
                                                            ([&]() {
                    Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit(vlSelfRef.top__DOT__res, vlSelfRef.top__DOT__semp, __Vfunc_float_cmp__6__Vfuncout);
                }(), __Vfunc_float_cmp__6__Vfuncout));
        VL_FINISH_MT("tb.sv", 144, "");
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
            __Vtask_top__DOT__test_loop__7__b = vlSelfRef.top__DOT__b;
            __Vtask_top__DOT__test_loop__7__a = vlSelfRef.top__DOT__a;
            vlSelfRef.top__DOT__timer = 0U;
            vlSelfRef.top__DOT__act_state = 1U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     213);
            }
            vlSelfRef.top__DOT__i_a_strb = 1U;
            while (vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     220);
            }
            vlSelfRef.top__DOT__i_a_strb = 0U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     227);
            }
            vlSelfRef.top__DOT__i_b_strb = 1U;
            while (vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     234);
            }
            vlSelfRef.top__DOT__i_b_strb = 0U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     241);
            }
            vlSelfRef.top__DOT__res = vlSelfRef.top__DOT__dut__DOT__s_output_z;
            vlSelfRef.top__DOT__o_z_ack = 1U;
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 246);
            vlSelfRef.top__DOT__o_z_ack = 0U;
            vlSelfRef.top__DOT__act_state = 0U;
            vlSelfRef.top__DOT__timer = 0U;
            __Vtask_top__DOT__calk_semp__9__b = __Vtask_top__DOT__test_loop__7__b;
            __Vtask_top__DOT__calk_semp__9__a = __Vtask_top__DOT__test_loop__7__a;
            Vtb___024unit____Vdpiimwrap_float_add_TOP____024unit(__Vtask_top__DOT__calk_semp__9__a, __Vtask_top__DOT__calk_semp__9__b, __Vfunc_float_add__10__Vfuncout);
            vlSelfRef.top__DOT__semp = __Vfunc_float_add__10__Vfuncout;
            Vtb___024unit____Vdpiimwrap_tr_print_TOP____024unit(__Vtask_top__DOT__test_loop__7__a, __Vtask_top__DOT__test_loop__7__b, vlSelfRef.top__DOT__semp, vlSelfRef.top__DOT__res, 
                                                                ([&]() {
                        Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit(vlSelfRef.top__DOT__res, vlSelfRef.top__DOT__semp, __Vfunc_float_cmp__12__Vfuncout);
                    }(), __Vfunc_float_cmp__12__Vfuncout));
        }
        VL_FCLOSE_I(vlSelfRef.top__DOT__file); } else if (VL_VALUEPLUSARGS_INI(32, "random_mode=%d"s, 
                                                                               vlSelfRef.top__DOT__test_num)) {
        while (VL_LTS_III(32, 0U, vlSelfRef.top__DOT__test_num)) {
            VL_NULL_CHECK(top__DOT__unnamedblk1__DOT__r_data, "tb.sv", 163)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__13__Vfuncout);
            VL_NULL_CHECK(top__DOT__unnamedblk1__DOT__r_data, "tb.sv", 164)->__VnoInFunc_a_to_duble(vlSymsp, __Vtask_a_to_duble__14__Vfuncout);
            vlSelfRef.top__DOT__a = __Vtask_a_to_duble__14__Vfuncout;
            VL_NULL_CHECK(top__DOT__unnamedblk1__DOT__r_data, "tb.sv", 165)->__VnoInFunc_b_to_duble(vlSymsp, __Vtask_b_to_duble__15__Vfuncout);
            vlSelfRef.top__DOT__b = __Vtask_b_to_duble__15__Vfuncout;
            __Vtask_top__DOT__test_loop__16__b = vlSelfRef.top__DOT__b;
            __Vtask_top__DOT__test_loop__16__a = vlSelfRef.top__DOT__a;
            vlSelfRef.top__DOT__timer = 0U;
            vlSelfRef.top__DOT__act_state = 1U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     213);
            }
            vlSelfRef.top__DOT__i_a_strb = 1U;
            while (vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     220);
            }
            vlSelfRef.top__DOT__i_a_strb = 0U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     227);
            }
            vlSelfRef.top__DOT__i_b_strb = 1U;
            while (vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     234);
            }
            vlSelfRef.top__DOT__i_b_strb = 0U;
            while ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb)))) {
                co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge top.clk)", 
                                                                     "tb.sv", 
                                                                     241);
            }
            vlSelfRef.top__DOT__res = vlSelfRef.top__DOT__dut__DOT__s_output_z;
            vlSelfRef.top__DOT__o_z_ack = 1U;
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 246);
            vlSelfRef.top__DOT__o_z_ack = 0U;
            vlSelfRef.top__DOT__act_state = 0U;
            vlSelfRef.top__DOT__timer = 0U;
            __Vtask_top__DOT__calk_semp__18__b = __Vtask_top__DOT__test_loop__16__b;
            __Vtask_top__DOT__calk_semp__18__a = __Vtask_top__DOT__test_loop__16__a;
            Vtb___024unit____Vdpiimwrap_float_add_TOP____024unit(__Vtask_top__DOT__calk_semp__18__a, __Vtask_top__DOT__calk_semp__18__b, __Vfunc_float_add__19__Vfuncout);
            vlSelfRef.top__DOT__semp = __Vfunc_float_add__19__Vfuncout;
            Vtb___024unit____Vdpiimwrap_tr_print_TOP____024unit(__Vtask_top__DOT__test_loop__16__a, __Vtask_top__DOT__test_loop__16__b, vlSelfRef.top__DOT__semp, vlSelfRef.top__DOT__res, 
                                                                ([&]() {
                        Vtb___024unit____Vdpiimwrap_float_cmp_TOP____024unit(vlSelfRef.top__DOT__res, vlSelfRef.top__DOT__semp, __Vfunc_float_cmp__21__Vfuncout);
                    }(), __Vfunc_float_cmp__21__Vfuncout));
            vlSelfRef.top__DOT__test_num = (vlSelfRef.top__DOT__test_num 
                                            - (IData)(1U));
        }
    }
    VL_WRITEF_NX("#----------------------------------------#\n|                                        |\n|              Test Passed               |\n|                                        |\n#----------------------------------------#\n",0);
    VL_FINISH_MT("tb.sv", 183, "");
    co_return;}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        while ((1U & ((~ (IData)(vlSelfRef.top__DOT__act_state)) 
                      | (0x012cU > (IData)(vlSelfRef.top__DOT__timer))))) {
            co_await vlSelfRef.__VtrigSched_h8ac91119__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge top.clk)", 
                                                                 "tb.sv", 
                                                                 188);
            vlSelfRef.top__DOT__timer = ((IData)(vlSelfRef.top__DOT__act_state)
                                          ? (0x0000ffffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.top__DOT__timer)))
                                          : 0U);
        }
        VL_WRITEF_NX("calk to long\n#----------------------------------------#\n|                                        |\n|              Test Failed               |\n|                                        |\n#----------------------------------------#\n",0);
        VL_FINISH_MT("tb.sv", 201, "");
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
                                             127);
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
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                 ((VL_EXTEND_II(2,1, vlSelfRef.__VdynSched.evaluate()) 
                                                   << 2U) 
                                                  | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
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
    vlSelfRef.__VdynSched.doPostUpdates();
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
                __Vdly__top__DOT__dut__DOT__a = vlSelfRef.top__DOT__a;
                __Vdly__top__DOT__dut__DOT__s_input_a_ack = 0U;
                __Vdly__top__DOT__dut__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            __Vdly__top__DOT__dut__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) 
                 & (IData)(vlSelfRef.top__DOT__i_b_strb))) {
                __Vdly__top__DOT__dut__DOT__b = vlSelfRef.top__DOT__b;
                __Vdly__top__DOT__dut__DOT__s_input_b_ack = 0U;
                __Vdly__top__DOT__dut__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
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
                    __Vdly__top__DOT__dut__DOT__z = 
                        (0x7fc00000U | ((IData)(vlSelfRef.top__DOT__dut__DOT__b_s) 
                                        << 0x0000001fU));
                }
            } else if ((0x0080U == (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) {
                __Vdly__top__DOT__dut__DOT__z = (0x7f800000U 
                                                 | ((IData)(vlSelfRef.top__DOT__dut__DOT__b_s) 
                                                    << 0x0000001fU));
                __Vdly__top__DOT__dut__DOT__state = 0x0bU;
            } else if ((((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e))) 
                         & (0U == vlSelfRef.top__DOT__dut__DOT__a_m)) 
                        & ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) 
                           & (0U == vlSelfRef.top__DOT__dut__DOT__b_m)))) {
                __Vdly__top__DOT__dut__DOT__z = ((0x7fffffffU 
                                                  & __Vdly__top__DOT__dut__DOT__z) 
                                                 | (((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                                                     & (IData)(vlSelfRef.top__DOT__dut__DOT__b_s)) 
                                                    << 0x0000001fU));
                __Vdly__top__DOT__dut__DOT__state = 0x0bU;
                __Vdly__top__DOT__dut__DOT__z = ((0x80000000U 
                                                  & __Vdly__top__DOT__dut__DOT__z) 
                                                 | ((0x7f800000U 
                                                     & (((IData)(0x7fU) 
                                                         + (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)) 
                                                        << 0x00000017U)) 
                                                    | (0x007fffffU 
                                                       & (vlSelfRef.top__DOT__dut__DOT__b_m 
                                                          >> 3U))));
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e))) 
                        & (0U == vlSelfRef.top__DOT__dut__DOT__a_m))) {
                __Vdly__top__DOT__dut__DOT__z = ((0x7fffffffU 
                                                  & __Vdly__top__DOT__dut__DOT__z) 
                                                 | ((IData)(vlSelfRef.top__DOT__dut__DOT__b_s) 
                                                    << 0x0000001fU));
                __Vdly__top__DOT__dut__DOT__state = 0x0bU;
                __Vdly__top__DOT__dut__DOT__z = ((0x80000000U 
                                                  & __Vdly__top__DOT__dut__DOT__z) 
                                                 | ((0x7f800000U 
                                                     & (((IData)(0x7fU) 
                                                         + (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)) 
                                                        << 0x00000017U)) 
                                                    | (0x007fffffU 
                                                       & (vlSelfRef.top__DOT__dut__DOT__b_m 
                                                          >> 3U))));
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e))) 
                        & (0U == vlSelfRef.top__DOT__dut__DOT__b_m))) {
                __Vdly__top__DOT__dut__DOT__z = ((0x7fffffffU 
                                                  & __Vdly__top__DOT__dut__DOT__z) 
                                                 | ((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                                                    << 0x0000001fU));
                __Vdly__top__DOT__dut__DOT__state = 0x0bU;
                __Vdly__top__DOT__dut__DOT__z = ((0x80000000U 
                                                  & __Vdly__top__DOT__dut__DOT__z) 
                                                 | ((0x7f800000U 
                                                     & (((IData)(0x7fU) 
                                                         + (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)) 
                                                        << 0x00000017U)) 
                                                    | (0x007fffffU 
                                                       & (vlSelfRef.top__DOT__dut__DOT__a_m 
                                                          >> 3U))));
            } else {
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__a_e)))) {
                    __Vdly__top__DOT__dut__DOT__a_e = 0x0382U;
                } else {
                    __Vdly__top__DOT__dut__DOT__a_m 
                        = (0x04000000U | __Vdly__top__DOT__dut__DOT__a_m);
                }
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__b_e)))) {
                    __Vdly__top__DOT__dut__DOT__b_e = 0x0382U;
                } else {
                    __Vdly__top__DOT__dut__DOT__b_m 
                        = (0x04000000U | __Vdly__top__DOT__dut__DOT__b_m);
                }
                __Vdly__top__DOT__dut__DOT__state = 4U;
            }
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
            } else {
                __Vdly__top__DOT__dut__DOT__state = 5U;
            }
        } else if ((5U == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            __Vdly__top__DOT__dut__DOT__z_e = vlSelfRef.top__DOT__dut__DOT__a_e;
            if (((IData)(vlSelfRef.top__DOT__dut__DOT__a_s) 
                 == (IData)(vlSelfRef.top__DOT__dut__DOT__b_s))) {
                __Vdly__top__DOT__dut__DOT__sum = (0x0fffffffU 
                                                   & (vlSelfRef.top__DOT__dut__DOT__a_m 
                                                      + vlSelfRef.top__DOT__dut__DOT__b_m));
                __Vdly__top__DOT__dut__DOT__z_s = vlSelfRef.top__DOT__dut__DOT__a_s;
            } else if ((vlSelfRef.top__DOT__dut__DOT__a_m 
                        >= vlSelfRef.top__DOT__dut__DOT__b_m)) {
                __Vdly__top__DOT__dut__DOT__sum = (0x0fffffffU 
                                                   & (vlSelfRef.top__DOT__dut__DOT__a_m 
                                                      - vlSelfRef.top__DOT__dut__DOT__b_m));
                __Vdly__top__DOT__dut__DOT__z_s = vlSelfRef.top__DOT__dut__DOT__a_s;
            } else {
                __Vdly__top__DOT__dut__DOT__sum = (0x0fffffffU 
                                                   & (vlSelfRef.top__DOT__dut__DOT__b_m 
                                                      - vlSelfRef.top__DOT__dut__DOT__a_m));
                __Vdly__top__DOT__dut__DOT__z_s = vlSelfRef.top__DOT__dut__DOT__b_s;
            }
            __Vdly__top__DOT__dut__DOT__state = 6U;
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
            } else {
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
        } else if (((~ (vlSelfRef.top__DOT__dut__DOT__z_m 
                        >> 0x17U)) & VL_LTS_III(32, 0xffffff82U, 
                                                VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e))))) {
            __Vdly__top__DOT__dut__DOT__z_e = (0x000003ffU 
                                               & ((IData)(vlSelfRef.top__DOT__dut__DOT__z_e) 
                                                  - (IData)(1U)));
            __Vdly__top__DOT__dut__DOT__z_m = (0x00ffffffU 
                                               & VL_SHIFTL_III(24,24,32, vlSelfRef.top__DOT__dut__DOT__z_m, 1U));
            __Vdly__top__DOT__dut__DOT__z_m = ((0x00fffffeU 
                                                & __Vdly__top__DOT__dut__DOT__z_m) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__guard));
            __Vdly__top__DOT__dut__DOT__guard = vlSelfRef.top__DOT__dut__DOT__round_bit;
            __Vdly__top__DOT__dut__DOT__round_bit = 0U;
        } else {
            __Vdly__top__DOT__dut__DOT__state = 8U;
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
            __Vdly__top__DOT__dut__DOT__round_bit = vlSelfRef.top__DOT__dut__DOT__guard;
            __Vdly__top__DOT__dut__DOT__guard = (1U 
                                                 & vlSelfRef.top__DOT__dut__DOT__z_m);
        } else {
            __Vdly__top__DOT__dut__DOT__state = 9U;
        }
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
            }
        }
        __Vdly__top__DOT__dut__DOT__state = 0x0aU;
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
            __Vdly__top__DOT__dut__DOT__z = (0x807fffffU 
                                             & __Vdly__top__DOT__dut__DOT__z);
        }
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e))) 
             & (0U == vlSelfRef.top__DOT__dut__DOT__z_m))) {
            __Vdly__top__DOT__dut__DOT__z = (0x7fffffffU 
                                             & __Vdly__top__DOT__dut__DOT__z);
        }
        if (VL_LTS_III(32, 0x0000007fU, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.top__DOT__dut__DOT__z_e)))) {
            __Vdly__top__DOT__dut__DOT__z = (0x7f800000U 
                                             | ((IData)(vlSelfRef.top__DOT__dut__DOT__z_s) 
                                                << 0x0000001fU));
        }
    } else if ((0x0bU == (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        __Vdly__top__DOT__dut__DOT__s_output_z_stb = 1U;
        vlSelfRef.top__DOT__dut__DOT__s_output_z = vlSelfRef.top__DOT__dut__DOT__z;
        if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb) 
             & (IData)(vlSelfRef.top__DOT__o_z_ack))) {
            __Vdly__top__DOT__dut__DOT__s_output_z_stb = 0U;
            __Vdly__top__DOT__dut__DOT__state = 0U;
        }
    }
    if (vlSelfRef.top__DOT__rst) {
        __Vdly__top__DOT__dut__DOT__s_input_a_ack = 0U;
        __Vdly__top__DOT__dut__DOT__s_input_b_ack = 0U;
        __Vdly__top__DOT__dut__DOT__s_output_z_stb = 0U;
        __Vdly__top__DOT__dut__DOT__state = 0U;
    }
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
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdynSched.resume();
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
            VL_FATAL_MT("tb.sv", 91, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb.sv", 91, "", "Active region did not converge after 100 tries");
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
