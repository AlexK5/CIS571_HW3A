// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__RiscvProcessor__DOT__datapath__DOT__num_insns_current;
    __Vdly__RiscvProcessor__DOT__datapath__DOT__num_insns_current = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v0;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v1;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v1 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v1;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v1 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v2;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v2 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v3;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v3 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v3;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v3 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v4;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v4 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v5;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v5 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v5;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v5 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v6;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v6 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v7;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v7 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v7;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v7 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v8;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v8 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v9;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v9 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v9;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v9 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v10;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v10 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v11;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v11 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v11;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v11 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v12;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v12 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v13;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v13 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v13;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v13 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v14;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v14 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v15;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v15 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v15;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v15 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v16;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v16 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v17;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v17 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v17;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v17 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v18;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v18 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v19;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v19 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v19;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v19 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v20;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v20 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v21;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v21 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v21;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v21 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v22;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v22 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v23;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v23 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v23;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v23 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v24;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v24 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v25;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v25 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v25;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v25 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v26;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v26 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v27;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v27 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v27;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v27 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v28;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v28 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v29;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v29 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v29;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v29 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v30;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v30 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v31;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v31 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v31;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v31 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v32;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v33;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v33 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v33;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v33 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v34;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v34 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v35;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v35 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v35;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v35 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v36;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v36 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v37;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v37 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v37;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v37 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v38;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v38 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v39;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v39 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v39;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v39 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v40;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v40 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v41;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v41 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v41;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v41 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v42;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v42 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v43;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v43 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v43;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v43 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v44;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v44 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v45;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v45 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v45;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v45 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v46;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v46 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v47;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v47 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v47;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v47 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v48;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v48 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v49;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v49 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v49;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v49 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v50;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v50 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v51;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v51 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v51;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v51 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v52;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v52 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v53;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v53 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v53;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v53 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v54;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v54 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v55;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v55 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v55;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v55 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v56;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v56 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v57;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v57 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v57;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v57 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v58;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v58 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v59;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v59 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v59;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v59 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v60;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v60 = 0;
    IData/*31:0*/ __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v61;
    __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v61 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v61;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v61 = 0;
    // Body
    __Vdly__RiscvProcessor__DOT__datapath__DOT__num_insns_current 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__num_insns_current;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v0 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v1 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v2 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v3 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v4 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v5 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v6 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v7 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v8 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v9 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v10 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v11 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v12 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v13 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v14 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v15 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v16 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v17 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v18 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v19 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v20 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v21 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v22 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v23 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v24 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v25 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v26 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v27 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v28 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v29 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v30 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v31 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v32 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v33 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v34 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v35 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v36 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v37 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v38 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v39 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v40 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v41 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v42 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v43 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v44 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v45 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v46 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v47 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v48 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v49 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v50 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v51 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v52 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v53 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v54 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v55 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v56 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v57 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v58 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v59 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v60 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v61 = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 9U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xbU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xcU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xdU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xeU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0xfU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x10U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x11U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x12U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x13U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x14U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x15U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x16U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x17U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x18U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x19U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1aU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1bU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1cU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1dU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1eU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x1fU;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__unnamedblk1__DOT__i = 0x20U;
    if (vlSelf->rst) {
        __Vdly__RiscvProcessor__DOT__datapath__DOT__num_insns_current = 0U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__cycles_current = 0U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v2 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v4 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v6 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v8 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v10 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v12 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v14 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v16 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v18 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v20 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v22 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v24 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v26 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v28 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v30 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v32 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v34 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v36 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v38 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v40 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v42 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v44 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v46 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v48 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v50 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v52 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v54 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v56 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v58 = 1U;
        __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v60 = 1U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->rst)))) {
            __Vdly__RiscvProcessor__DOT__datapath__DOT__num_insns_current 
                = ((IData)(1U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__num_insns_current);
        }
        vlSelf->RiscvProcessor__DOT__datapath__DOT__cycles_current 
            = ((IData)(1U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__cycles_current);
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v1 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v1 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v3 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v3 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v5 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v5 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v7 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v7 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v9 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v9 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (6U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v11 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v11 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (7U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v13 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v13 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (8U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v15 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v15 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (9U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v17 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v17 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0xaU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v19 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v19 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0xbU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v21 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v21 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0xcU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v23 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v23 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0xdU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v25 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v25 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0xeU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v27 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v27 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0xfU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v29 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v29 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x10U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v31 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v31 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x11U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v33 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v33 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x12U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v35 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v35 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v37 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v37 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x14U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v39 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v39 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x15U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v41 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v41 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x16U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v43 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v43 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x17U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v45 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v45 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x18U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v47 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v47 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x19U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v49 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v49 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x1aU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v51 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v51 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x1bU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v53 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v53 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x1cU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v55 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v55 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x1dU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v57 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v57 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x1eU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v59 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v59 = 1U;
        }
        if (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__we) 
             & (0x1fU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__rd)))) {
            __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v61 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
            __Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v61 = 1U;
        }
        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__num_insns_current 
        = __Vdly__RiscvProcessor__DOT__datapath__DOT__num_insns_current;
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v0) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[1U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v1) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[1U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v1;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v2) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[2U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v3) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[2U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v3;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v4) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[3U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v5) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[3U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v5;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v6) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[4U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v7) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[4U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v7;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v8) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[5U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v9) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[5U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v9;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v10) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[6U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v11) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[6U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v11;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v12) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[7U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v13) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[7U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v13;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v14) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[8U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v15) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[8U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v15;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v16) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[9U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v17) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[9U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v17;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v18) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xaU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v19) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xaU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v19;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v20) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xbU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v21) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xbU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v21;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v22) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xcU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v23) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xcU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v23;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v24) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xdU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v25) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xdU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v25;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v26) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xeU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v27) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xeU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v27;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v28) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xfU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v29) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0xfU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v29;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v30) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x10U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v31) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x10U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v31;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v32) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x11U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v33) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x11U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v33;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v34) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x12U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v35) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x12U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v35;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v36) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x13U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v37) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x13U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v37;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v38) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x14U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v39) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x14U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v39;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v40) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x15U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v41) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x15U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v41;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v42) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x16U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v43) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x16U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v43;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v44) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x17U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v45) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x17U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v45;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v46) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x18U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v47) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x18U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v47;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v48) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x19U] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v49) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x19U] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v49;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v50) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1aU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v51) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1aU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v51;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v52) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1bU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v53) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1bU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v53;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v54) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1cU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v55) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1cU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v55;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v56) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1dU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v57) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1dU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v57;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v58) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1eU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v59) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1eU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v59;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v60) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v61) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs[0x1fU] 
            = __Vdlyvval__RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs__v61;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*12:0*/ __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v0;
    __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v0;
    __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v0;
    __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v0;
    __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v1;
    __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v1;
    __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v1;
    __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v1;
    __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v2;
    __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v2;
    __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v2;
    __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v2;
    __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v2 = 0;
    SData/*12:0*/ __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v3;
    __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v3;
    __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v3;
    __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v3;
    __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v3 = 0;
    // Body
    __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v0 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v1 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v2 = 0U;
    __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v3 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__mem_data_we))) {
            __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v0 
                = (0xffU & vlSelf->RiscvProcessor__DOT__mem_data_to_write);
            __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v0 = 1U;
            __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v0 = 0U;
            __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v0 
                = (0x1fffU & (vlSelf->RiscvProcessor__DOT__mem_data_addr 
                              >> 2U));
        }
        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__mem_data_we))) {
            __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v1 
                = (0xffU & (vlSelf->RiscvProcessor__DOT__mem_data_to_write 
                            >> 8U));
            __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v1 = 1U;
            __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v1 = 8U;
            __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v1 
                = (0x1fffU & (vlSelf->RiscvProcessor__DOT__mem_data_addr 
                              >> 2U));
        }
        if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__mem_data_we))) {
            __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v2 
                = (0xffU & (vlSelf->RiscvProcessor__DOT__mem_data_to_write 
                            >> 0x10U));
            __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v2 = 1U;
            __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v2 = 0x10U;
            __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v2 
                = (0x1fffU & (vlSelf->RiscvProcessor__DOT__mem_data_addr 
                              >> 2U));
        }
        if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__mem_data_we))) {
            __Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v3 
                = (vlSelf->RiscvProcessor__DOT__mem_data_to_write 
                   >> 0x18U);
            __Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v3 = 1U;
            __Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v3 = 0x18U;
            __Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v3 
                = (0x1fffU & (vlSelf->RiscvProcessor__DOT__mem_data_addr 
                              >> 2U));
        }
        vlSelf->RiscvProcessor__DOT__mem__DOT__load_data_from_dmem 
            = vlSelf->RiscvProcessor__DOT__mem__DOT__mem
            [(0x1fffU & (vlSelf->RiscvProcessor__DOT__mem_data_addr 
                         >> 2U))];
    }
    if (__Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v0) {
        vlSelf->RiscvProcessor__DOT__mem__DOT__mem[__Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v0))) 
                & vlSelf->RiscvProcessor__DOT__mem__DOT__mem
                [__Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v0))));
    }
    if (__Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v1) {
        vlSelf->RiscvProcessor__DOT__mem__DOT__mem[__Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v1))) 
                & vlSelf->RiscvProcessor__DOT__mem__DOT__mem
                [__Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v1))));
    }
    if (__Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v2) {
        vlSelf->RiscvProcessor__DOT__mem__DOT__mem[__Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v2))) 
                & vlSelf->RiscvProcessor__DOT__mem__DOT__mem
                [__Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v2))));
    }
    if (__Vdlyvset__RiscvProcessor__DOT__mem__DOT__mem__v3) {
        vlSelf->RiscvProcessor__DOT__mem__DOT__mem[__Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v3))) 
                & vlSelf->RiscvProcessor__DOT__mem__DOT__mem
                [__Vdlyvdim0__RiscvProcessor__DOT__mem__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__RiscvProcessor__DOT__mem__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__RiscvProcessor__DOT__mem__DOT__mem__v3))));
    }
    vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
        = vlSelf->RiscvProcessor__DOT__mem__DOT__load_data_from_dmem;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__load_data_from_dmem 
        = vlSelf->RiscvProcessor__DOT__mem_data_loaded_value;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0;
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0 = 0;
    std::string __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__Vfuncout;
    IData/*31:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction = 0;
    std::string __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__da_str;
    CData/*6:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode = 0;
    CData/*4:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd = 0;
    CData/*2:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3 = 0;
    CData/*4:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1 = 0;
    CData/*4:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2 = 0;
    CData/*6:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7 = 0;
    IData/*19:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_u;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_u = 0;
    SData/*11:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i = 0;
    SData/*11:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_s;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_s = 0;
    SData/*12:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_b;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_b = 0;
    IData/*20:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__tmp_j;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__tmp_j = 0;
    IData/*20:0*/ __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_j;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_j = 0;
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
            = vlSelf->RiscvProcessor__DOT__mem__DOT__mem
            [(0x1fffU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem 
                         >> 2U))];
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs1 
        = (0x1fU & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                    >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs2 
        = (0x1fU & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                    >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i 
        = (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
           >> 0x14U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b 
        = ((0x1000U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                       >> 0x13U)) | ((0x800U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                            >> 7U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_j 
        = ((0x100000U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                         >> 0xbU)) | ((0xff000U & vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem) 
                                      | ((0x800U & 
                                          (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                                               >> 0x14U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rd 
        = (0x1fU & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                    >> 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7 
        = (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
           >> 0x19U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3 
        = (7U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__insn_from_imem = vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode 
        = (0x7fU & vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_shamt 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i_sext 
        = (((- (IData)((vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_i));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b_sext 
        = (((- (IData)((vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xdU) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_b));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_j_sext 
        = (((- (IData)((vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                        >> 0x1fU))) << 0x15U) | vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_j);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7) 
            << 5U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rd));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0 
        = ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_from_imem 
        = vlSelf->RiscvProcessor__DOT__insn_from_imem;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
        = vlSelf->RiscvProcessor__DOT__insn_from_imem;
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode 
        = (0x7fU & __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction);
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd 
        = (0x1fU & (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
                    >> 7U));
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3 
        = (7U & (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
                 >> 0xcU));
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1 
        = (0x1fU & (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
                    >> 0xfU));
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2 
        = (0x1fU & (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
                    >> 0x14U));
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7 
        = (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
           >> 0x19U);
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_u 
        = (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
           >> 0xcU);
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i 
        = (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
           >> 0x14U);
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_s 
        = (((IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7) 
            << 5U) | (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd));
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_b 
        = ((0x1000U & ((IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7) 
                       << 6U)) | ((0x800U & ((IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd) 
                                             << 0xbU)) 
                                  | ((0x7e0U & ((IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7) 
                                                << 5U)) 
                                     | (0x1eU & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd)))));
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
        = (0x1ffffeU & (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
                        >> 0xbU));
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_j 
        = ((0x100000U & __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__tmp_j) 
           | ((0xffc00U & (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
                           << 9U)) | ((0x200U & (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
                                                 >> 2U)) 
                                      | (0x1feU & (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__tmp_j 
                                                   >> 0xbU)))));
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__da_str 
        = ((0x40U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
            ? ((0x20U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                ? ((0x10U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                    ? ((8U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? std::string{"Unknown instruction"}
                            : ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__instruction 
                                               >> 7U))
                                        ? std::string{"ecall"}
                                        : std::string{"Unknown environment instruction"})
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})))
                    : ((8U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0x6fU == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                        ? VL_SFORMATF_NX("JAL x%0#, %0#",
                                                         5,
                                                         __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                         21,
                                                         __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_j) 
                                        : std::string{"Unknown J-type instruction"})
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : std::string{"Unknown instruction"})
                        : ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? VL_SFORMATF_NX("JALR x%0#, x%0#, %0#",
                                                         5,
                                                         __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                         5,
                                                         (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                         12,
                                                         __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) 
                                        : std::string{"Unknown JALR instruction"})
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_NX("BGEU x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                 13,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_b) 
                                                : VL_SFORMATF_NX("BLTU x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                 13,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_b) )
                                            : ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_NX("BGE x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                 13,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_b) 
                                                : VL_SFORMATF_NX("BLT x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                 13,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_b) ))
                                        : ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? std::string{"Unknown B-type instruction"}
                                            : ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_NX("BNE x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                 13,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_b) 
                                                : VL_SFORMATF_NX("BEQ x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2),
                                                                 13,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_b) )))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"}))))
                : std::string{"Unknown instruction"})
            : ((0x20U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                ? ((0x10U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                    ? ((8U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? VL_SFORMATF_NX("LUI x%0#, %0#",
                                                     5,
                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                     20,
                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_u) 
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((1U == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                        ? ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((2U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_NX("REMU x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_NX("REM x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_NX("DIVU x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_NX("DIV x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) ))
                                            : ((2U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_NX("MULHU x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_NX("MULHSU x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_NX("MULH x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_NX("MUL x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) )))
                                        : ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((2U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_NX("AND x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_NX("OR x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_NX("SRL x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_NX("XOR x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) ))
                                            : ((2U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_NX("SLTU x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_NX("SLT x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) )
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                    ? VL_SFORMATF_NX("SLL x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) 
                                                    : VL_SFORMATF_NX("ADD x%0#, x%0#, x%0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2) ))))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})))
                    : ((8U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? std::string{"Unknown instruction"}
                            : ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? VL_SFORMATF_NX("SB x%0#, %0#(x%0#)",
                                                         5,
                                                         __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2,
                                                         12,
                                                         (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_s),
                                                         5,
                                                         __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                        : ((1U == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? VL_SFORMATF_NX("SH x%0#, %0#(x%0#)",
                                                             5,
                                                             __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2,
                                                             12,
                                                             (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_s),
                                                             5,
                                                             __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                            : ((2U 
                                                == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_NX("SW x%0#, %0#(x%0#)",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs2,
                                                                 12,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_s),
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                                : std::string{"Unknown S-type instruction"})))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"}))))
                : ((0x10U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                    ? ((8U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? std::string{"Unknown instruction"}
                        : ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? VL_SFORMATF_NX("AUIPC x%0#, %0#",
                                                     5,
                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                     20,
                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_u) 
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_NX("ANDI x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                 12,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) 
                                                : VL_SFORMATF_NX("ORI x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                 12,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) )
                                            : ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                                    ? 
                                                   ((0x20U 
                                                     == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                                     ? VL_SFORMATF_NX("SRAI x%0#, x%0#, %0#",
                                                                      5,
                                                                      __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                      5,
                                                                      (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                      12,
                                                                      __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) 
                                                     : 
                                                    std::string{"Unknown I-type instruction"})
                                                    : VL_SFORMATF_NX("SRLI x%0#, x%0#, %0#",
                                                                     5,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                     5,
                                                                     (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                     12,
                                                                     __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) )
                                                : VL_SFORMATF_NX("XORI x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                 12,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) ))
                                        : ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_NX("SLTIU x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                 12,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) 
                                                : VL_SFORMATF_NX("SLTI x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                 12,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) )
                                            : ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_NX("SLLI x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                 12,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) 
                                                : VL_SFORMATF_NX("ADDI x%0#, x%0#, %0#",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 5,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1),
                                                                 12,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i) )))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})))
                    : ((8U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                        ? ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((0U == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? std::string{"fence"}
                                        : ((1U == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((0U 
                                                == (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct7))
                                                ? std::string{"fence.i"}
                                                : std::string{"Unknown fence instruction"})
                                            : std::string{"Unknown fence instruction"}))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"})
                            : std::string{"Unknown instruction"})
                        : ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                            ? std::string{"Unknown instruction"}
                            : ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                ? ((1U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__opcode))
                                    ? ((4U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                        ? ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? std::string{"Unknown Load instruction"}
                                            : ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_NX("LHU x%0#, %0#(x%0#)",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 12,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i),
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                                : VL_SFORMATF_NX("LBU x%0#, %0#(x%0#)",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 12,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i),
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1) ))
                                        : ((2U & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                            ? ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? std::string{"Unknown Load instruction"}
                                                : VL_SFORMATF_NX("LW x%0#, %0#(x%0#)",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 12,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i),
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1) )
                                            : ((1U 
                                                & (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__funct3))
                                                ? VL_SFORMATF_NX("LH x%0#, %0#(x%0#)",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 12,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i),
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1) 
                                                : VL_SFORMATF_NX("LB x%0#, %0#(x%0#)",
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rd,
                                                                 12,
                                                                 (IData)(__Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__imm_i),
                                                                 5,
                                                                 __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__rs1) )))
                                    : std::string{"Unknown instruction"})
                                : std::string{"Unknown instruction"}))))));
    __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__Vfuncout 
        = __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__da_str;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string 
        = __Vfunc_RiscvProcessor__DOT__datapath__DOT__rv_disasm__0__Vfuncout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lui 
        = (0x37U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_auipc 
        = (0x17U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_jal 
        = (0x6fU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_jalr 
        = (0x67U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_fence 
        = (0xfU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_beq 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bne 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_blt 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bge 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bltu 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (6U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_bgeu 
        = ((0x63U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (7U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lb 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lh 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lw 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lbu 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_lhu 
        = ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sb 
        = ((0x23U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sh 
        = ((0x23U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sw 
        = ((0x23U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_addi 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slti 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltiu 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xori 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_ori 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (6U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_andi 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (7U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_ecall 
        = ((0x73U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                     >> 7U)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slt 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sltu 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_xor 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_or 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((6U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_and 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & ((7U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
              & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__halt = 0U;
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__halt = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd 
                                    = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                >> 7U));
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd 
                                = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 7U));
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1 
                                    = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                >> 0xfU));
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1 
                                = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 0xfU));
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2 
                                    = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                >> 0x14U));
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd 
                                = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 7U));
                        }
                    }
                } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd 
                            = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                        >> 7U));
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1 
                                = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 0xfU));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2 
                                = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 0x14U));
                        }
                    }
                }
            }
        } else {
            if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 0U;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1 
                                = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 0xfU));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2 
                                = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 0x14U));
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd 
                            = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                        >> 7U));
                    }
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__rd 
                        = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                    >> 7U));
                }
            }
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1 
                            = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                        >> 0xfU));
                    }
                }
            }
        }
    } else {
        if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__we = 1U;
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd 
                            = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                        >> 7U));
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1 
                            = (0x1fU & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                        >> 0xfU));
                    }
                }
            }
        }
    }
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s_sext 
        = (((- (IData)((vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_slli 
        = ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sll 
        = ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode)) 
           & (IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[0U] 
        = ((0xff000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[0U]) 
           | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1dU) 
               << 0x10U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1eU) 
                             << 8U) | VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1fU))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[0U] 
        = ((0xffffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[0U]) 
           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1cU) 
              << 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[1U] 
        = ((0xffff0000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[1U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1aU) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1bU)) 
                            | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x1cU) 
                               >> 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[1U] 
        = ((0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[1U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x18U) 
                              << 0x18U) | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x19U) 
                                           << 0x10U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[2U] 
        = ((0xffffff00U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[2U]) 
           | (0xffffU & ((0xffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x17U)) 
                         | ((0xffffU & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x18U) 
                                        >> 8U)) | (
                                                   VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x19U) 
                                                   >> 0x10U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[2U] 
        = ((0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[2U]) 
           | (0xffffff00U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x14U) 
                              << 0x18U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x15U) 
                                            << 0x10U) 
                                           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x16U) 
                                              << 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[3U] 
        = ((0xff000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[3U]) 
           | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x11U) 
               << 0x10U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x12U) 
                             << 8U) | VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x13U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[3U] 
        = ((0xffffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[3U]) 
           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x10U) 
              << 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[4U] 
        = ((0xffff0000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[4U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xeU) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xfU)) 
                            | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0x10U) 
                               >> 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[4U] 
        = ((0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[4U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xcU) 
                              << 0x18U) | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xdU) 
                                           << 0x10U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[5U] 
        = ((0xffffff00U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[5U]) 
           | (0xffffU & ((0xffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xbU)) 
                         | ((0xffffU & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xcU) 
                                        >> 8U)) | (
                                                   VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xdU) 
                                                   >> 0x10U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[5U] 
        = ((0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[5U]) 
           | (0xffffff00U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,8U) 
                              << 0x18U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,9U) 
                                            << 0x10U) 
                                           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0xaU) 
                                              << 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[6U] 
        = ((0xff000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[6U]) 
           | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,5U) 
               << 0x10U) | ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,6U) 
                             << 8U) | VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,7U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[6U] 
        = ((0xffffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[6U]) 
           | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,4U) 
              << 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[7U] 
        = ((0xffff0000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[7U]) 
           | (0xffffffU & ((0xffff00U & (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,2U) 
                                         << 8U)) | 
                           ((0xffffffU & VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,3U)) 
                            | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,4U) 
                               >> 8U)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[7U] 
        = ((0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_wire[7U]) 
           | (0xffff0000U & ((VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,0U) 
                              << 0x18U) | (VL_GETC_N(vlSelf->RiscvProcessor__DOT__datapath__DOT__disasm_string,1U) 
                                           << 0x10U))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__we 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__we;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd;
    vlSelf->halt = vlSelf->RiscvProcessor__DOT__datapath__DOT__halt;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srli 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srai 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h1973cdbb__0) 
           & (0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_add 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sub 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_haf7f431a__0) 
           & (0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_srl 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_sra 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hf43f8b62__0) 
           & (0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mul 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulh 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhsu 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_mulhu 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (3U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_div 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (4U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_divu 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (5U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rem 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (6U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_remu 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT____VdfgTmp_hea505d68__0) 
           & (7U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2;
    vlSelf->RiscvProcessor__DOT__halt = vlSelf->halt;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
    vlSelf->RiscvProcessor__DOT__mem__DOT__pc_to_imem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem;
    vlSelf->RiscvProcessor__DOT__pc_to_imem = vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1];
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2];
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x6fU;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((0x4000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                        if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                             >= vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                        }
                                    } else if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                < vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if (VL_GTES_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                    }
                                } else if (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                }
                            } else if ((1U & (~ (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 >> 0xdU)))) {
                                if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                         != vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                    }
                                } else if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                            == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode 
                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode 
                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode;
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode 
                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode;
                    }
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode 
                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode 
                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode;
                }
            }
        }
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__opcode 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 871, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 871, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 871, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock_proc & 0xfeU))) {
        Verilated::overWidthError("clock_proc");}
    if (VL_UNLIKELY((vlSelf->clock_mem & 0xfeU))) {
        Verilated::overWidthError("clock_mem");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
