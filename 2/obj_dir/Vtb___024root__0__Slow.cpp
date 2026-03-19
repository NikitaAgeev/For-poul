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

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdynSched.evaluate())\n");
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
    vlSelf->__VdlyVal__top__DOT__clk__v0 = 0;
    vlSelf->__VdlySet__top__DOT__clk__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
