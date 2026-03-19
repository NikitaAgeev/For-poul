// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_STD_H_
#define VERILATED_VTB_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_std final {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_std() = default;
    ~Vtb_std() = default;
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
