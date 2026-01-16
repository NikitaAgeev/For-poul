// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clk = 0U;
    vlSelfRef.top__DOT__rst = 1U;
    vlSelfRef.top__DOT__a = 0U;
    vlSelfRef.top__DOT__b = 0U;
    vlSelfRef.top__DOT__res = 0U;
    vlSelfRef.top__DOT__semp = 0U;
    vlSelfRef.top__DOT__i_a_strb = 0U;
    vlSelfRef.top__DOT__i_b_strb = 0U;
    vlSelfRef.top__DOT__o_z_ack = 0U;
    vlSelfRef.top__DOT__act_state = 0U;
    vlSelfRef.top__DOT__timer = 0U;
    vlSelfRef.top__DOT__file = 0U;
    vlSelfRef.top__DOT__test_num = 0U;
    vlSelfRef.top__DOT__filename = ""s;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clk = 0U;
    vlSelfRef.top__DOT__rst = 1U;
    vlSelfRef.top__DOT__a = 0U;
    vlSelfRef.top__DOT__b = 0U;
    vlSelfRef.top__DOT__res = 0U;
    vlSelfRef.top__DOT__semp = 0U;
    vlSelfRef.top__DOT__i_a_strb = 0U;
    vlSelfRef.top__DOT__i_b_strb = 0U;
    vlSelfRef.top__DOT__o_z_ack = 0U;
    vlSelfRef.top__DOT__act_state = 0U;
    vlSelfRef.top__DOT__timer = 0U;
    vlSelfRef.top__DOT__file = 0U;
    vlSelfRef.top__DOT__test_num = 0U;
    vlSelfRef.top__DOT__filename = ""s;
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb.sv", 11, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
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
    if (((IData)(vlSelfRef.top__DOT__clk) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 134, vlSelfRef.top__DOT__clk, vlSelfRef.top__DOT__dut__DOT____Vtogcov__clk);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__clk 
            = vlSelfRef.top__DOT__clk;
    }
    if (((IData)(vlSelfRef.top__DOT__rst) ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 136, vlSelfRef.top__DOT__rst, vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__rst 
            = vlSelfRef.top__DOT__rst;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__s_output_z ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 138, vlSelfRef.top__DOT__dut__DOT__s_output_z, vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z 
            = vlSelfRef.top__DOT__dut__DOT__s_output_z;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_output_z_stb) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_stb))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 202, vlSelfRef.top__DOT__dut__DOT__s_output_z_stb, vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_stb);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__output_z_stb 
            = vlSelfRef.top__DOT__dut__DOT__s_output_z_stb;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_input_a_ack) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_ack))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 204, vlSelfRef.top__DOT__dut__DOT__s_input_a_ack, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_ack);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_a_ack 
            = vlSelfRef.top__DOT__dut__DOT__s_input_a_ack;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__s_input_b_ack) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_ack))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 206, vlSelfRef.top__DOT__dut__DOT__s_input_b_ack, vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_ack);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__input_b_ack 
            = vlSelfRef.top__DOT__dut__DOT__s_input_b_ack;
    }
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__state) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__state))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 208, vlSelfRef.top__DOT__dut__DOT__state, vlSelfRef.top__DOT__dut__DOT____Vtogcov__state);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__state 
            = vlSelfRef.top__DOT__dut__DOT__state;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__a ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__a)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 216, vlSelfRef.top__DOT__dut__DOT__a, vlSelfRef.top__DOT__dut__DOT____Vtogcov__a);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__a 
            = vlSelfRef.top__DOT__dut__DOT__a;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__b ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__b)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 280, vlSelfRef.top__DOT__dut__DOT__b, vlSelfRef.top__DOT__dut__DOT____Vtogcov__b);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__b 
            = vlSelfRef.top__DOT__dut__DOT__b;
    }
    if ((vlSelfRef.top__DOT__dut__DOT__z ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__z)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 344, vlSelfRef.top__DOT__dut__DOT__z, vlSelfRef.top__DOT__dut__DOT____Vtogcov__z);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__z 
            = vlSelfRef.top__DOT__dut__DOT__z;
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
    if ((vlSelfRef.top__DOT__dut__DOT__z_m ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_m)) {
        VL_COV_TOGGLE_CHG_ST_I(24, vlSymsp->__Vcoverage + 516, vlSelfRef.top__DOT__dut__DOT__z_m, vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_m);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_m 
            = vlSelfRef.top__DOT__dut__DOT__z_m;
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
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__z_e) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_e))) {
        VL_COV_TOGGLE_CHG_ST_I(10, vlSymsp->__Vcoverage + 604, vlSelfRef.top__DOT__dut__DOT__z_e, vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_e);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_e 
            = vlSelfRef.top__DOT__dut__DOT__z_e;
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
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__z_s) 
         ^ (IData)(vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_s))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 628, vlSelfRef.top__DOT__dut__DOT__z_s, vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_s);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__z_s 
            = vlSelfRef.top__DOT__dut__DOT__z_s;
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
    if ((vlSelfRef.top__DOT__dut__DOT__sum ^ vlSelfRef.top__DOT__dut__DOT____Vtogcov__sum)) {
        VL_COV_TOGGLE_CHG_ST_I(28, vlSymsp->__Vcoverage + 636, vlSelfRef.top__DOT__dut__DOT__sum, vlSelfRef.top__DOT__dut__DOT____Vtogcov__sum);
        vlSelfRef.top__DOT__dut__DOT____Vtogcov__sum 
            = vlSelfRef.top__DOT__dut__DOT__sum;
    }
}

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17741742976451700217ull);
    vlSelf->top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9570330383657782965ull);
    vlSelf->top__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13394877895942293449ull);
    vlSelf->top__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10040169573526154973ull);
    vlSelf->top__DOT__res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7421602835952874454ull);
    vlSelf->top__DOT__semp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16952444778233051871ull);
    vlSelf->top__DOT__i_a_strb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17701811495587171720ull);
    vlSelf->top__DOT__i_b_strb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17364627982973426690ull);
    vlSelf->top__DOT__o_z_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3372630576731460144ull);
    vlSelf->top__DOT__act_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3347021774161388184ull);
    vlSelf->top__DOT__timer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11514296852276017520ull);
    vlSelf->top__DOT__file = 0;
    vlSelf->top__DOT__test_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17587492229143368264ull);
    vlSelf->top__DOT__dut__DOT__s_output_z_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9976685025521330867ull);
    vlSelf->top__DOT__dut__DOT__s_output_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 864295724411276190ull);
    vlSelf->top__DOT__dut__DOT__s_input_a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7911481723784325916ull);
    vlSelf->top__DOT__dut__DOT__s_input_b_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7114758641017305299ull);
    vlSelf->top__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12768607827301581674ull);
    vlSelf->top__DOT__dut__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10487057259412738699ull);
    vlSelf->top__DOT__dut__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1889338696578092228ull);
    vlSelf->top__DOT__dut__DOT__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16063374489769333349ull);
    vlSelf->top__DOT__dut__DOT__a_m = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 8853531905939891584ull);
    vlSelf->top__DOT__dut__DOT__b_m = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 1951783929315437039ull);
    vlSelf->top__DOT__dut__DOT__z_m = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7895876288799117502ull);
    vlSelf->top__DOT__dut__DOT__a_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11810297638809901551ull);
    vlSelf->top__DOT__dut__DOT__b_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13773119517818177642ull);
    vlSelf->top__DOT__dut__DOT__z_e = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6645187304023724459ull);
    vlSelf->top__DOT__dut__DOT__a_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9822247261507483924ull);
    vlSelf->top__DOT__dut__DOT__b_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9486196888130688546ull);
    vlSelf->top__DOT__dut__DOT__z_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18191119794021213333ull);
    vlSelf->top__DOT__dut__DOT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10654849115471363437ull);
    vlSelf->top__DOT__dut__DOT__round_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16468740924192969795ull);
    vlSelf->top__DOT__dut__DOT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4228986905695995004ull);
    vlSelf->top__DOT__dut__DOT__sum = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 8968809430672859148ull);
    vlSelf->top__DOT__dut__DOT____Vtogcov__input_a = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__input_b = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__input_a_stb = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__input_b_stb = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__output_z_ack = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__clk = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__rst = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__output_z = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__output_z_stb = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__input_a_ack = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__input_b_ack = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__state = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__a = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__b = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__z = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__a_m = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__b_m = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__z_m = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__a_e = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__b_e = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__z_e = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__a_s = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__b_s = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__z_s = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__guard = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__round_bit = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__sticky = 0;
    vlSelf->top__DOT__dut__DOT____Vtogcov__sum = 0;
    vlSelf->__VdlyVal__top__DOT__clk__v0 = 0;
    vlSelf->__VdlySet__top__DOT__clk__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtb___024root___configure_coverage(Vtb___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___configure_coverage\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[0]), first, "adder.v", 21, 20, ".top.dut", "v_toggle/adder", "input_a");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[64]), first, "adder.v", 25, 20, ".top.dut", "v_toggle/adder", "input_b");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[128]), first, "adder.v", 22, 13, ".top.dut", "v_toggle/adder", "input_a_stb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[130]), first, "adder.v", 26, 13, ".top.dut", "v_toggle/adder", "input_b_stb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[132]), first, "adder.v", 31, 13, ".top.dut", "v_toggle/adder", "output_z_ack");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[134]), first, "adder.v", 18, 13, ".top.dut", "v_toggle/adder", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[136]), first, "adder.v", 19, 13, ".top.dut", "v_toggle/adder", "rst");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[138]), first, "adder.v", 29, 20, ".top.dut", "v_toggle/adder", "output_z");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[202]), first, "adder.v", 30, 13, ".top.dut", "v_toggle/adder", "output_z_stb");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[204]), first, "adder.v", 23, 13, ".top.dut", "v_toggle/adder", "input_a_ack");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[206]), first, "adder.v", 27, 13, ".top.dut", "v_toggle/adder", "input_b_ack");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[202]), first, "adder.v", 33, 13, ".top.dut", "v_toggle/adder", "s_output_z_stb");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[138]), first, "adder.v", 34, 20, ".top.dut", "v_toggle/adder", "s_output_z");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[204]), first, "adder.v", 35, 13, ".top.dut", "v_toggle/adder", "s_input_a_ack");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[206]), first, "adder.v", 36, 13, ".top.dut", "v_toggle/adder", "s_input_b_ack");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[208]), first, "adder.v", 38, 19, ".top.dut", "v_toggle/adder", "state");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[216]), first, "adder.v", 52, 20, ".top.dut", "v_toggle/adder", "a");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[280]), first, "adder.v", 52, 23, ".top.dut", "v_toggle/adder", "b");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[344]), first, "adder.v", 52, 26, ".top.dut", "v_toggle/adder", "z");
    vlSelf->__vlCoverToggleInsert(0, 26, 1, &(vlSymsp->__Vcoverage[408]), first, "adder.v", 53, 20, ".top.dut", "v_toggle/adder", "a_m");
    vlSelf->__vlCoverToggleInsert(0, 26, 1, &(vlSymsp->__Vcoverage[462]), first, "adder.v", 53, 25, ".top.dut", "v_toggle/adder", "b_m");
    vlSelf->__vlCoverToggleInsert(0, 23, 1, &(vlSymsp->__Vcoverage[516]), first, "adder.v", 54, 20, ".top.dut", "v_toggle/adder", "z_m");
    vlSelf->__vlCoverToggleInsert(0, 9, 1, &(vlSymsp->__Vcoverage[564]), first, "adder.v", 55, 19, ".top.dut", "v_toggle/adder", "a_e");
    vlSelf->__vlCoverToggleInsert(0, 9, 1, &(vlSymsp->__Vcoverage[584]), first, "adder.v", 55, 24, ".top.dut", "v_toggle/adder", "b_e");
    vlSelf->__vlCoverToggleInsert(0, 9, 1, &(vlSymsp->__Vcoverage[604]), first, "adder.v", 55, 29, ".top.dut", "v_toggle/adder", "z_e");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[624]), first, "adder.v", 56, 13, ".top.dut", "v_toggle/adder", "a_s");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[626]), first, "adder.v", 56, 18, ".top.dut", "v_toggle/adder", "b_s");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[628]), first, "adder.v", 56, 23, ".top.dut", "v_toggle/adder", "z_s");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[630]), first, "adder.v", 57, 13, ".top.dut", "v_toggle/adder", "guard");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[632]), first, "adder.v", 57, 20, ".top.dut", "v_toggle/adder", "round_bit");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[634]), first, "adder.v", 57, 31, ".top.dut", "v_toggle/adder", "sticky");
    vlSelf->__vlCoverToggleInsert(0, 27, 1, &(vlSymsp->__Vcoverage[636]), first, "adder.v", 58, 20, ".top.dut", "v_toggle/adder", "sum");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[692]), first, "adder.v", 68, 9, ".top.dut", "v_branch/adder", "if", "68-71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[693]), first, "adder.v", 68, 10, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[694]), first, "adder.v", 68, 27, ".top.dut", "v_expr/adder", "(s_input_a_ack==1 && input_a_stb==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[695]), first, "adder.v", 68, 27, ".top.dut", "v_expr/adder", "(input_a_stb==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[696]), first, "adder.v", 68, 27, ".top.dut", "v_expr/adder", "(s_input_a_ack==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[697]), first, "adder.v", 65, 12, ".top.dut", "v_line/adder", "case", "65-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[698]), first, "adder.v", 78, 9, ".top.dut", "v_branch/adder", "if", "78-81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[699]), first, "adder.v", 78, 10, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[700]), first, "adder.v", 78, 27, ".top.dut", "v_expr/adder", "(s_input_b_ack==1 && input_b_stb==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[701]), first, "adder.v", 78, 27, ".top.dut", "v_expr/adder", "(input_b_stb==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[702]), first, "adder.v", 78, 27, ".top.dut", "v_expr/adder", "(s_input_b_ack==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[703]), first, "adder.v", 75, 12, ".top.dut", "v_line/adder", "case", "75-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[704]), first, "adder.v", 85, 13, ".top.dut", "v_line/adder", "case", "85-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[705]), first, "adder.v", 111, 11, ".top.dut", "v_branch/adder", "if", "111-115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[706]), first, "adder.v", 111, 12, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[707]), first, "adder.v", 111, 28, ".top.dut", "v_expr/adder", "((b_e == 32'sh80)==1 && (a_s != b_s)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[708]), first, "adder.v", 111, 28, ".top.dut", "v_expr/adder", "((a_s != b_s)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[709]), first, "adder.v", 111, 28, ".top.dut", "v_expr/adder", "((b_e == 32'sh80)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[710]), first, "adder.v", 126, 24, ".top.dut", "v_expr/adder", "(a_s==1 && b_s==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[711]), first, "adder.v", 126, 24, ".top.dut", "v_expr/adder", "(b_s==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[712]), first, "adder.v", 126, 24, ".top.dut", "v_expr/adder", "(a_s==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[713]), first, "adder.v", 144, 11, ".top.dut", "v_branch/adder", "if", "144-145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[714]), first, "adder.v", 144, 12, ".top.dut", "v_branch/adder", "else", "146-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[715]), first, "adder.v", 150, 11, ".top.dut", "v_branch/adder", "if", "150-151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[716]), first, "adder.v", 150, 12, ".top.dut", "v_branch/adder", "else", "152-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[717]), first, "adder.v", 137, 18, ".top.dut", "v_line/adder", "if", "137-141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[718]), first, "adder.v", 137, 19, ".top.dut", "v_line/adder", "else", "142,155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[719]), first, "adder.v", 137, 45, ".top.dut", "v_expr/adder", "((b_e == (- 32'sh7f))==1 && (b_m == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[720]), first, "adder.v", 137, 45, ".top.dut", "v_expr/adder", "((b_m == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[721]), first, "adder.v", 137, 45, ".top.dut", "v_expr/adder", "((b_e == (- 32'sh7f))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[722]), first, "adder.v", 131, 18, ".top.dut", "v_line/adder", "elsif", "131-135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[723]), first, "adder.v", 131, 45, ".top.dut", "v_expr/adder", "((a_e == (- 32'sh7f))==1 && (a_m == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[724]), first, "adder.v", 131, 45, ".top.dut", "v_expr/adder", "((a_m == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[725]), first, "adder.v", 131, 45, ".top.dut", "v_expr/adder", "((a_e == (- 32'sh7f))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[726]), first, "adder.v", 125, 18, ".top.dut", "v_line/adder", "elsif", "125-129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[727]), first, "adder.v", 125, 61, ".top.dut", "v_expr/adder", "((a_e == (- 32'sh7f))==1 && (a_m == 32'sh0)==1 && (b_e == (- 32'sh7f))==1 && (b_m == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[728]), first, "adder.v", 125, 61, ".top.dut", "v_expr/adder", "((b_m == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[729]), first, "adder.v", 125, 61, ".top.dut", "v_expr/adder", "((b_e == (- 32'sh7f))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[730]), first, "adder.v", 125, 61, ".top.dut", "v_expr/adder", "((a_m == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[731]), first, "adder.v", 125, 61, ".top.dut", "v_expr/adder", "((a_e == (- 32'sh7f))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[732]), first, "adder.v", 119, 18, ".top.dut", "v_line/adder", "elsif", "119-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[733]), first, "adder.v", 106, 18, ".top.dut", "v_line/adder", "elsif", "106-109,117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[734]), first, "adder.v", 99, 9, ".top.dut", "v_line/adder", "elsif", "99-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "adder.v", 99, 38, ".top.dut", "v_expr/adder", "((b_e == 32'sh80)==1 && (b_m != 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[736]), first, "adder.v", 99, 38, ".top.dut", "v_expr/adder", "((a_e == 32'sh80)==1 && (a_m != 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[737]), first, "adder.v", 99, 38, ".top.dut", "v_expr/adder", "((a_m != 32'sh0)==0 && (b_m != 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[738]), first, "adder.v", 99, 38, ".top.dut", "v_expr/adder", "((a_m != 32'sh0)==0 && (b_e == 32'sh80)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[739]), first, "adder.v", 99, 38, ".top.dut", "v_expr/adder", "((a_e == 32'sh80)==0 && (b_m != 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[740]), first, "adder.v", 99, 38, ".top.dut", "v_expr/adder", "((a_e == 32'sh80)==0 && (b_e == 32'sh80)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[741]), first, "adder.v", 96, 20, ".top.dut", "v_line/adder", "case", "96-97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[742]), first, "adder.v", 164, 28, ".top.dut", "v_expr/adder", "(b_m[1]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "adder.v", 164, 28, ".top.dut", "v_expr/adder", "(b_m[0]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "adder.v", 164, 28, ".top.dut", "v_expr/adder", "(b_m[0]==0 && b_m[1]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "adder.v", 168, 28, ".top.dut", "v_expr/adder", "(a_m[1]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "adder.v", 168, 28, ".top.dut", "v_expr/adder", "(a_m[0]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "adder.v", 168, 28, ".top.dut", "v_expr/adder", "(a_m[0]==0 && a_m[1]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "adder.v", 165, 18, ".top.dut", "v_line/adder", "if", "165-168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "adder.v", 165, 19, ".top.dut", "v_line/adder", "else", "169-170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "adder.v", 161, 9, ".top.dut", "v_line/adder", "elsif", "161-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "adder.v", 159, 12, ".top.dut", "v_line/adder", "case", "159-160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "adder.v", 181, 11, ".top.dut", "v_branch/adder", "if", "181-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "adder.v", 181, 12, ".top.dut", "v_branch/adder", "else", "184-186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "adder.v", 177, 9, ".top.dut", "v_branch/adder", "if", "177-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "adder.v", 177, 10, ".top.dut", "v_branch/adder", "else", "180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "adder.v", 174, 12, ".top.dut", "v_line/adder", "case", "174-176,189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "adder.v", 198, 28, ".top.dut", "v_expr/adder", "(sum[0]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "adder.v", 198, 28, ".top.dut", "v_expr/adder", "(sum[1]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "adder.v", 198, 28, ".top.dut", "v_expr/adder", "(sum[1]==0 && sum[0]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "adder.v", 194, 9, ".top.dut", "v_branch/adder", "if", "194-199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "adder.v", 194, 10, ".top.dut", "v_branch/adder", "else", "200-204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "adder.v", 192, 12, ".top.dut", "v_line/adder", "case", "192-193,206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "adder.v", 211, 9, ".top.dut", "v_branch/adder", "if", "211-216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "adder.v", 211, 10, ".top.dut", "v_branch/adder", "else", "217-218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "adder.v", 211, 26, ".top.dut", "v_expr/adder", "((z_m[23] == 32'sh0)==1 && (z_e > (- 32'sh7e))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "adder.v", 211, 26, ".top.dut", "v_expr/adder", "((z_e > (- 32'sh7e))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "adder.v", 211, 26, ".top.dut", "v_expr/adder", "((z_m[23] == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "adder.v", 209, 18, ".top.dut", "v_line/adder", "case", "209-210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "adder.v", 229, 28, ".top.dut", "v_expr/adder", "(round_bit==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "adder.v", 229, 28, ".top.dut", "v_expr/adder", "(sticky==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "adder.v", 229, 28, ".top.dut", "v_expr/adder", "(sticky==0 && round_bit==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "adder.v", 224, 9, ".top.dut", "v_branch/adder", "if", "224-229");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "adder.v", 224, 10, ".top.dut", "v_branch/adder", "else", "230-231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "adder.v", 222, 18, ".top.dut", "v_line/adder", "case", "222-223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "adder.v", 239, 11, ".top.dut", "v_branch/adder", "if", "239-240");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "adder.v", 239, 12, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "adder.v", 237, 9, ".top.dut", "v_branch/adder", "if", "237-238");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "adder.v", 237, 10, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "adder.v", 237, 19, ".top.dut", "v_expr/adder", "(guard==1 && z_m[0]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "adder.v", 237, 19, ".top.dut", "v_expr/adder", "(guard==1 && sticky==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "adder.v", 237, 19, ".top.dut", "v_expr/adder", "(guard==1 && round_bit==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "adder.v", 237, 19, ".top.dut", "v_expr/adder", "(round_bit==0 && sticky==0 && z_m[0]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "adder.v", 237, 19, ".top.dut", "v_expr/adder", "(guard==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "adder.v", 235, 12, ".top.dut", "v_line/adder", "case", "235-236,243");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "adder.v", 251, 9, ".top.dut", "v_branch/adder", "if", "251-252");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "adder.v", 251, 10, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "adder.v", 251, 34, ".top.dut", "v_expr/adder", "((z_e == (- 32'sh7e))==1 && (z_m[23] == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "adder.v", 251, 34, ".top.dut", "v_expr/adder", "((z_m[23] == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "adder.v", 251, 34, ".top.dut", "v_expr/adder", "((z_e == (- 32'sh7e))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "adder.v", 254, 9, ".top.dut", "v_branch/adder", "if", "254-255");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "adder.v", 254, 10, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "adder.v", 254, 34, ".top.dut", "v_expr/adder", "((z_e == (- 32'sh7e))==1 && (z_m[23:0] == 24'h0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "adder.v", 254, 34, ".top.dut", "v_expr/adder", "((z_m[23:0] == 24'h0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "adder.v", 254, 34, ".top.dut", "v_expr/adder", "((z_e == (- 32'sh7e))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "adder.v", 258, 9, ".top.dut", "v_branch/adder", "if", "258-261");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "adder.v", 258, 10, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "adder.v", 246, 11, ".top.dut", "v_line/adder", "case", "246-250,263");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "adder.v", 270, 9, ".top.dut", "v_branch/adder", "if", "270-272");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "adder.v", 270, 10, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "adder.v", 270, 28, ".top.dut", "v_expr/adder", "(s_output_z_stb==1 && output_z_ack==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "adder.v", 270, 28, ".top.dut", "v_expr/adder", "(output_z_ack==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "adder.v", 270, 28, ".top.dut", "v_expr/adder", "(s_output_z_stb==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "adder.v", 266, 12, ".top.dut", "v_line/adder", "case", "266-269");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "adder.v", 278, 5, ".top.dut", "v_branch/adder", "if", "278-282");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "adder.v", 278, 6, ".top.dut", "v_branch/adder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "adder.v", 60, 3, ".top.dut", "v_line/adder", "block", "60-61,63");
}
