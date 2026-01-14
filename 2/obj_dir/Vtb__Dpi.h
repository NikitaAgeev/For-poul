// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTB__DPI_H_
#define VERILATED_VTB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at tb.sv:4:38
    extern unsigned int float_add(unsigned int a, unsigned int b);
    // DPI import at tb.sv:6:38
    extern unsigned int float_cmp(unsigned int a, unsigned int b);

#ifdef __cplusplus
}
#endif

#endif  // guard
