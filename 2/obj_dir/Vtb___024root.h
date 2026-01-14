// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtb___024unit;


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final {
  public:
    // CELLS
    Vtb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__rst;
        CData/*0:0*/ top__DOT__i_a_strb;
        CData/*0:0*/ top__DOT__i_b_strb;
        CData/*0:0*/ top__DOT__o_z_ack;
        CData/*0:0*/ top__DOT__err;
        CData/*0:0*/ top__DOT__dut__DOT__s_output_z_stb;
        CData/*0:0*/ top__DOT__dut__DOT__s_input_a_ack;
        CData/*0:0*/ top__DOT__dut__DOT__s_input_b_ack;
        CData/*3:0*/ top__DOT__dut__DOT__state;
        CData/*0:0*/ top__DOT__dut__DOT__a_s;
        CData/*0:0*/ top__DOT__dut__DOT__b_s;
        CData/*0:0*/ top__DOT__dut__DOT__z_s;
        CData/*0:0*/ top__DOT__dut__DOT__guard;
        CData/*0:0*/ top__DOT__dut__DOT__round_bit;
        CData/*0:0*/ top__DOT__dut__DOT__sticky;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__input_a_stb;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__input_b_stb;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__output_z_ack;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__rst;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__output_z_stb;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__input_a_ack;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__input_b_ack;
        CData/*3:0*/ top__DOT__dut__DOT____Vtogcov__state;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__a_s;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__b_s;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__z_s;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__guard;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__round_bit;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__sticky;
        CData/*0:0*/ __VdlyVal__top__DOT__clk__v0;
        CData/*0:0*/ __VdlySet__top__DOT__clk__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clk__0;
        SData/*9:0*/ top__DOT__dut__DOT__a_e;
        SData/*9:0*/ top__DOT__dut__DOT__b_e;
        SData/*9:0*/ top__DOT__dut__DOT__z_e;
        SData/*9:0*/ top__DOT__dut__DOT____Vtogcov__a_e;
        SData/*9:0*/ top__DOT__dut__DOT____Vtogcov__b_e;
        SData/*9:0*/ top__DOT__dut__DOT____Vtogcov__z_e;
        IData/*31:0*/ top__DOT__a;
        IData/*31:0*/ top__DOT__b;
        IData/*31:0*/ top__DOT__res;
        IData/*31:0*/ top__DOT__semp;
        IData/*31:0*/ top__DOT__file;
        IData/*31:0*/ top__DOT__test_num;
        IData/*31:0*/ top__DOT__dut__DOT__s_output_z;
        IData/*31:0*/ top__DOT__dut__DOT__a;
        IData/*31:0*/ top__DOT__dut__DOT__b;
        IData/*31:0*/ top__DOT__dut__DOT__z;
        IData/*26:0*/ top__DOT__dut__DOT__a_m;
        IData/*26:0*/ top__DOT__dut__DOT__b_m;
        IData/*23:0*/ top__DOT__dut__DOT__z_m;
        IData/*27:0*/ top__DOT__dut__DOT__sum;
        IData/*31:0*/ top__DOT__dut__DOT____Vtogcov__input_a;
        IData/*31:0*/ top__DOT__dut__DOT____Vtogcov__input_b;
        IData/*31:0*/ top__DOT__dut__DOT____Vtogcov__output_z;
        IData/*31:0*/ top__DOT__dut__DOT____Vtogcov__a;
        IData/*31:0*/ top__DOT__dut__DOT____Vtogcov__b;
        IData/*31:0*/ top__DOT__dut__DOT____Vtogcov__z;
        IData/*26:0*/ top__DOT__dut__DOT____Vtogcov__a_m;
        IData/*26:0*/ top__DOT__dut__DOT____Vtogcov__b_m;
        IData/*23:0*/ top__DOT__dut__DOT____Vtogcov__z_m;
    };
    struct {
        IData/*27:0*/ top__DOT__dut__DOT____Vtogcov__sum;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    std::string top__DOT__filename;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8ac91119__0;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* namep);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
