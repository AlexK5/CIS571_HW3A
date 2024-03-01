// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
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
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin = 0;
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin = 0;
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin = 0;
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin = 0;
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0 = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder = 0;
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
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rs1 
        = (0x1fU & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                    >> 0xfU));
    vlSelf->RiscvProcessor__DOT__clock_mem = vlSelf->clock_mem;
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
    vlSelf->RiscvProcessor__DOT__clock_proc = vlSelf->clock_proc;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rd 
        = (0x1fU & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                    >> 7U));
    vlSelf->RiscvProcessor__DOT__rst = vlSelf->rst;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7 
        = (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
           >> 0x19U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3 
        = (7U & (vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__mem_data_loaded_value 
        = vlSelf->RiscvProcessor__DOT__mem__DOT__load_data_from_dmem;
    vlSelf->RiscvProcessor__DOT__insn_from_imem = vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode 
        = (0x7fU & vlSelf->RiscvProcessor__DOT__mem__DOT__insn_from_imem);
    vlSelf->RiscvProcessor__DOT__mem__DOT__clock_mem 
        = vlSelf->RiscvProcessor__DOT__clock_mem;
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
    vlSelf->RiscvProcessor__DOT__datapath__DOT__clk 
        = vlSelf->RiscvProcessor__DOT__clock_proc;
    vlSelf->RiscvProcessor__DOT__mem__DOT__pc_to_imem 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem;
    vlSelf->RiscvProcessor__DOT__pc_to_imem = vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem;
    vlSelf->RiscvProcessor__DOT__mem__DOT__rst = vlSelf->RiscvProcessor__DOT__rst;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rst 
        = vlSelf->RiscvProcessor__DOT__rst;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm_s 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7) 
            << 5U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_rd));
    RiscvProcessor__DOT__datapath__DOT____VdfgTmp_h9fd4f7e8__0 
        = ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct3)) 
           & (0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_funct7)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__load_data_from_dmem 
        = vlSelf->RiscvProcessor__DOT__mem_data_loaded_value;
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
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__clk 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__clk;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rst 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rst;
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
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__illegal_insn = 1U;
        }
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__we 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__we;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd;
    } else {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
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
                        }
                    }
                }
            }
        }
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__we 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__we;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd;
    }
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
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
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
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
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
        } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                             >> 3U)))) {
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
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
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
    } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                         >> 3U)))) {
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
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelf->RiscvProcessor__DOT__datapath__DOT__rs1];
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 3U)))) {
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
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
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
        } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                             >> 3U)))) {
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
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__regs
        [vlSelf->RiscvProcessor__DOT__datapath__DOT__rs2];
    vlSelf->RiscvProcessor__DOT__halt = vlSelf->halt;
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
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20 
                                    = ((0xfffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20) 
                                       | (0x100000U 
                                          & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                             >> 0xbU)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20 
                                    = ((0x100001U & vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20) 
                                       | ((0xff000U 
                                           & vlSelf->RiscvProcessor__DOT__insn_from_imem) 
                                          | ((0x800U 
                                              & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                   >> 0x14U)))));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20 
                                    = (0x1ffffeU & vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20);
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20 
                                                       >> 0x14U)))) 
                                        << 0x15U) | vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20);
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__offset 
                                = ((0xfffU & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offset)) 
                                   | (0x1000U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 >> 0x13U)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__offset 
                                = ((0x1001U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offset)) 
                                   | ((0x800U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                             >> 7U)))));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__offset 
                                = (0x1ffeU & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offset));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__offsetshift 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__offset;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offsetshift) 
                                                   >> 0xcU)))) 
                                    << 0xdU) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offsetshift));
                            if ((0x4000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                        if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                             >= vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                        }
                                    } else if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                < vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if (VL_GTES_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                    }
                                } else if (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                }
                            } else if ((1U & (~ (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 >> 0xdU)))) {
                                if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                         != vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                    }
                                } else if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                            == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode = 0x13U;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__opcode 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode;
    } else {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
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
                    if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 
                                    = (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                             >> 0xcU));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7 
                                    = (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                       >> 0x19U);
                                if ((0U == (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                  >> 0xcU)))) {
                                    if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                    }
                                    if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                    }
                                    if ((0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                                    }
                                } else if ((4U == (7U 
                                                   & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                      >> 0xcU)))) {
                                    if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data))
                                                : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data);
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                                : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag 
                                            = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                >> 0x1fU) 
                                               != (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                                   >> 0x1fU));
                                    } else {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                    }
                                } else if ((6U == (7U 
                                                   & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                      >> 0xcU)))) {
                                    if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data))
                                                : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data);
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                                >> 0x1fU)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                                : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag 
                                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                               >> 0x1fU);
                                    } else {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                    }
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                }
                            }
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
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 
                                = (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                         >> 0xcU));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                   + (((- (IData)((vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                         >> 7U)))));
                            if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem 
                                    = (0xfU & ((IData)(1U) 
                                               << (3U 
                                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
                                    = (0xfffffffcU 
                                       & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm);
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                       << (0x18U & 
                                           (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                            << 3U)));
                            } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem 
                                    = (0xfU & ((IData)(3U) 
                                               << (3U 
                                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
                                    = (0xfffffffcU 
                                       & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm);
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                       << (0x18U & 
                                           (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                            << 3U)));
                            } else if ((2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem = 0xfU;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
                                    = (0xfffffffcU 
                                       & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm);
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                       << (0x18U & 
                                           (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                            << 3U)));
                            }
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
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 
                                = (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                         >> 0xcU));
                            if ((0x4000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                            = ((0xfffff000U 
                                                & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                               | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                  >> 0x14U));
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                            = (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                               >> 0xbU)))) 
                                                << 0xcU) 
                                               | (0xfffU 
                                                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                                    } else {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                            = ((0xfffff000U 
                                                & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                               | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                  >> 0x14U));
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                            = (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                               >> 0xbU)))) 
                                                << 0xcU) 
                                               | (0xfffU 
                                                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                   >> 0xcU)))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                        = ((0xfffff000U 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                           | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                              >> 0x14U));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                        = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                           >> 0xbU)))) 
                                            << 0xcU) 
                                           | (0xfffU 
                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                                }
                            } else if ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                        = ((0xfffff000U 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                           | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                              >> 0x14U));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                        = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                           >> 0xbU)))) 
                                            << 0xcU) 
                                           | (0xfffU 
                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                        = ((0xfffff000U 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                           | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                              >> 0x14U));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                        = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                           >> 0xbU)))) 
                                            << 0xcU) 
                                           | (0xfffU 
                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                                }
                            } else if ((1U & (~ (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 >> 0xcU)))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                    = ((0xfffff000U 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                       | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                          >> 0x14U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                       >> 0xbU)))) 
                                        << 0xcU) | 
                                       (0xfffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                            }
                        }
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
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 
                            = (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                     >> 0xcU));
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem = 0U;
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
                            = (0xfffffffcU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                              + (((- (IData)(
                                                             (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                    >> 0x14U))));
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                            = vlSelf->RiscvProcessor__DOT__mem_data_loaded_value;
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                            = (0x18U & VL_SHIFTL_III(32,32,32, 
                                                     (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                      + 
                                                      (((- (IData)(
                                                                   (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                          >> 0x14U))), 3U));
                    }
                }
            }
        }
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__opcode 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode;
    }
    vlSelf->RiscvProcessor__DOT__mem_data_we = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_to_write 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_addr = vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__signeddivflag 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__fun3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__fun7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x11U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x19U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1fU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputtwo 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x11U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x19U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1fU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__i_dividend 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x10U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x11U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x12U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x13U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x14U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x15U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x16U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x17U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x18U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x19U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1aU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1bU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1cU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1dU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1eU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x10U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x11U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x12U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x13U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x14U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x15U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x16U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x17U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x18U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x19U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1aU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1bU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1cU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1dU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1eU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0U] 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[1U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[2U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[3U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[4U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[5U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[6U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[7U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[8U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[9U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xaU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xbU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xcU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xdU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xeU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xfU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x10U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x10U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x11U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x11U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x12U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x12U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x13U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x13U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x14U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x14U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x15U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x15U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x16U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x16U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x17U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x17U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x18U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x18U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x19U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x19U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1aU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1aU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1bU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1bU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1cU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1cU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1dU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1dU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1eU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1eU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1fU] 
        = (IData)((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__o_dividend)) 
                    << 0x20U) | (QData)((IData)(VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x20U] 
        = (IData)(((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__o_dividend)) 
                     << 0x20U) | (QData)((IData)(VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU)))) 
                   >> 0x20U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputone 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g 
        = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
            & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
           >> 0x1fU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p 
        = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
            | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
           >> 0x1fU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__divd_or_in 
        = (1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x19U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x19U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x18U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x11U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x10U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x11U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 8U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 1U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__g 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x11U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x19U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in 
        = VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU);
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_we_to_dmem 
        = vlSelf->RiscvProcessor__DOT__mem_data_we;
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_data_to_dmem 
        = vlSelf->RiscvProcessor__DOT__mem_data_to_write;
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                                        if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 0U;
                                        } else if (
                                                   (1U 
                                                    != (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                            if ((0x20U 
                                                 == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != (3U & vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem)))) {
            VL_WRITEF("[%0t] %%Error: DatapathSingleCycle.sv:823: Assertion failed in %NRiscvProcessor.mem: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 823, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != (3U & vlSelf->RiscvProcessor__DOT__mem_data_addr)))) {
            VL_WRITEF("[%0t] %%Error: DatapathSingleCycle.sv:824: Assertion failed in %NRiscvProcessor.mem: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 824, "");
        }
    }
    vlSelf->RiscvProcessor__DOT__mem__DOT__addr_to_dmem 
        = vlSelf->RiscvProcessor__DOT__mem_data_addr;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__b 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputtwo;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputtwo;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__a 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputone;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_dividend 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputone;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__g 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__p 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p) 
                                                      << 1U) 
                                                     | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__g 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__p 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__g 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__p 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__g 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__p 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__g) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__g) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__g) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__g) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__g) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__g))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin) 
              & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p) 
                                                      << 1U) 
                                                     | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p) 
                                                      << 1U) 
                                                     | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__p) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__p) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__p) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__p) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__p) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__p) 
                                                      << 1U) 
                                                     | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__p) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__or_1_out 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__pin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__pout 
        = (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__gin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g) 
            << 0x1fU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g) 
                          << 0x1eU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g) 
                                                     << 0x18U) 
                                                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g) 
                                                                             << 0x10U) 
                                                                            | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g) 
                                                                                << 8U) 
                                                                                | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin)))))))))))))))))))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__pin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__pout 
        = (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__pin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__pout 
        = (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__pin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__pout 
        = (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__pin2 
        = (((IData)((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin))) 
            << 3U) | (((IData)((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin))) 
                       << 2U) | (((IData)((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin))) 
                                  << 1U) | (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p) 
            << 0x1fU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p) 
                          << 0x1eU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p) 
                                                  << 0x19U) 
                                                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p) 
                                                                          << 0x11U) 
                                                                         | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p) 
                                                                                << 9U) 
                                                                                | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p) 
                                                                                << 8U) 
                                                                                | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin)))))))))))))))))))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_2_out 
        = (1U | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out)
                   ? 1U : 0U) << 1U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__pin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__pin2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__pout 
        = (0xfU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__pin2));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__p));
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_quotient = 1U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__o_quotient = 1U;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__minus_out;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_quotient = 0U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__o_quotient = 0U;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder, 1U);
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__p 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__pout;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__divd_or_in);
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g) 
           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p) 
               & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g)) 
              | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0) 
                  & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g)) 
                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0) 
                     & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g)) 
                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0) 
                        & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g)) 
                       | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0) 
                           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g)) 
                          | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0) 
                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p)) 
                             & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g) 
                                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p) 
                                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g))))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g) 
           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p) 
               & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g)) 
              | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0) 
                  & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g)) 
                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0) 
                     & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g)) 
                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0) 
                        & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g)) 
                       | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0) 
                           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g)) 
                          | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0) 
                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p)) 
                             & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g) 
                                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p) 
                                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g))))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g) 
           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p) 
               & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g)) 
              | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0) 
                  & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g)) 
                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0) 
                     & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g)) 
                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0) 
                        & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g)) 
                       | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0) 
                           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g)) 
                          | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0) 
                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p)) 
                             & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g) 
                                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p) 
                                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g))))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g) 
           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__p) 
               & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g)) 
              | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0) 
                  & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__g)) 
                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0) 
                     & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__g)) 
                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0) 
                        & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__g)) 
                       | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0) 
                           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__g)) 
                          | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0) 
                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__p)) 
                             & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__g) 
                                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__p) 
                                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__g))))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__gout 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__gout 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__gout 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__gout 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__gin2 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout) 
            << 3U) | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0) 
                       << 2U) | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0) 
                                  << 1U) | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__gout 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout) 
           | (((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin)) 
               & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0)) 
              | (((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin)) 
                  & (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin))) 
                 & ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0) 
                    | ((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin)) 
                       & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin) 
              & (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin))));
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out)
                                        ? 1U : 0U), 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__cout 
        = ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g) 
             | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6) 
                & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p))) 
            << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6) 
                       << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5) 
                                  << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4) 
                                             << 3U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3) 
                                                << 2U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1)))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal 
        = ((0xffffff01U & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g) 
                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6) 
                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p))) 
               << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6) 
                          << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5) 
                                     << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4) 
                                                << 4U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1) 
                                                        << 1U))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__gin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__gin2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
              & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
              & (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
              & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
              & (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp3 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__cin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__cout 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin) 
            << 2U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
                       << 1U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g) 
           | ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin) 
              & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp4 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp3) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp3 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cout 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__cout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p)));
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp5 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp4) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp4 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp3) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp3 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp5) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp5 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp4) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp4 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp3) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__cout 
        = ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g) 
             | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6) 
                & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p))) 
            << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6) 
                       << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp5) 
                                  << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp4) 
                                             << 3U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp3) 
                                                << 2U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1)))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal 
        = ((0xffff01ffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g) 
                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6) 
                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p))) 
               << 0xfU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6) 
                            << 0xeU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp5) 
                                         << 0xdU) | 
                                        (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp4) 
                                          << 0xcU) 
                                         | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp3) 
                                             << 0xbU) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp2) 
                                                << 0xaU) 
                                               | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1) 
                                                  << 9U))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp5) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp5 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp4) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__cout 
        = ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g) 
             | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6) 
                & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p))) 
            << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6) 
                       << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp5) 
                                  << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp4) 
                                             << 3U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp3) 
                                                << 2U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp1)))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal 
        = ((0xff01ffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g) 
                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6) 
                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p))) 
               << 0x17U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6) 
                             << 0x16U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp5) 
                                           << 0x15U) 
                                          | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp4) 
                                              << 0x14U) 
                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp3) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp2) 
                                                    << 0x12U) 
                                                   | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp1) 
                                                      << 0x11U))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp5) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p)));
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__cout 
        = ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g) 
             | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6) 
                & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p))) 
            << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6) 
                       << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp5) 
                                  << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp4) 
                                             << 3U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp3) 
                                                << 2U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp1)))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal 
        = ((0x1ffffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g) 
                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6) 
                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p))) 
               << 0x1fU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6) 
                             << 0x1eU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp5) 
                                           << 0x1dU) 
                                          | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp4) 
                                              << 0x1cU) 
                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp3) 
                                                 << 0x1bU) 
                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp2) 
                                                    << 0x1aU) 
                                                   | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp1) 
                                                      << 0x19U))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal2 
        = ((0xfe000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin) 
               << 0x18U) | ((0xfe0000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
                                << 0x10U) | ((0xfe00U 
                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
                                                 << 8U) 
                                                | ((0xfeU 
                                                    & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
                                                   | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput 
        = ((0x80000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                           ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                              ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
           | ((0x40000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                              ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                 ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
              | ((0x20000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                 ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                    ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                 | ((0x10000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                       ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                    | ((0x8000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                      ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                         ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                       | ((0x4000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                         ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                          | ((0x2000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                               ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                             | ((0x1000000U & ((0xff000000U 
                                                & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone) 
                                               ^ ((0xff000000U 
                                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                                                  ^ 
                                                  ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin) 
                                                   << 0x18U)))) 
                                | ((0x800000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                 ^ 
                                                 (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                  ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                   | ((0x400000U & 
                                       (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                           ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                      | ((0x200000U 
                                          & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                             ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                         | ((0x100000U 
                                             & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                   ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                            | ((0x80000U 
                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                   ^ 
                                                   (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                    ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                               | ((0x40000U 
                                                   & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                      ^ 
                                                      (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                       ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                  | ((0x20000U 
                                                      & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                         ^ 
                                                         (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                          ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                     | ((0x10000U 
                                                         & ((0xffff0000U 
                                                             & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone) 
                                                            ^ 
                                                            ((0xffff0000U 
                                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                                                             ^ 
                                                             ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
                                                              << 0x10U)))) 
                                                        | ((0x8000U 
                                                            & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                               ^ 
                                                               (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                           | ((0x4000U 
                                                               & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                  ^ 
                                                                  (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                   ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                              | ((0x2000U 
                                                                  & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                     ^ 
                                                                     (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                      ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                 | ((0x1000U 
                                                                     & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                        ^ 
                                                                        (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                         ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                           ^ 
                                                                           (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                            ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                       | ((0x400U 
                                                                           & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                              ^ 
                                                                              (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                               ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                          | ((0x200U 
                                                                              & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                             | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone) 
                                                                                ^ 
                                                                                ((0xffffff00U 
                                                                                & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
                                                                                << 8U)))) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((8U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((4U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((2U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | (1U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin)))))))))))))))))))))))))))))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__sum 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__geq_out) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_2_out;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__minus_out;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_1_out;
    }
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                            if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                        if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
                                        }
                                        if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder;
                                        }
                                    } else {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = ((0U 
                                                == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                                                ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                   | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                                     ? 
                                                    ((0U 
                                                      == vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag)
                                                       ? 0x80000000U
                                                       : 1U))
                                                     : 
                                                    ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder))
                                                      : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder))
                                                    : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput));
                                    }
                                } else if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                    if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                               >> (0x1fU 
                                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                    }
                                    if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient;
                                    }
                                    if ((0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = VL_SHIFTRS_III(32,32,5, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 
                                                             (0x1fU 
                                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                    }
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                                            ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                               ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                            : ((1U 
                                                == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                                                ? (
                                                   (0U 
                                                    == vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                                    ? 0xffffffffU
                                                    : 
                                                   ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient))
                                                     : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient))
                                                : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput));
                                }
                            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                    if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                < vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                                ? 1U
                                                : 0U);
                                    } else if ((1U 
                                                == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                            = ((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone)) 
                                               * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)));
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = (IData)(
                                                      (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                                       >> 0x20U));
                                    } else {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                                    }
                                } else if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                            ? 1U : 0U);
                                } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                        = ((((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone))) 
                                           * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                                }
                            } else if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                           << (0x1fU 
                                               & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                        = VL_MULS_QQQ(64, 
                                                      VL_EXTENDS_QI(64,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone), 
                                                      VL_EXTENDS_QI(64,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                                }
                            } else if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                            } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                    = ((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone)) 
                                       * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult);
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))
                                        ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                           & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                        : (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                           | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                            } else if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                       ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
                            }
                        } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                = ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))
                                    ? ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        < vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                        ? 1U : 0U) : 
                                   (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                     ? 1U : 0U));
                        } else if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                       >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = (0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress);
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                       >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = (0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress);
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                        if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                   >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress;
                        }
                    } else if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                               >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                            = (((- (IData)((1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress));
                    } else {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                               >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                            = (((- (IData)((1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress));
                    }
                }
            }
        }
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__o_quotient 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__o_quotient 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0U] = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[1U] 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out)
            ? 1U : 0U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[2U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[3U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[4U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[5U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[6U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[7U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[8U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[9U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xaU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xbU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xcU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xdU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xeU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xfU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x10U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x11U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x12U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x13U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x14U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x15U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x16U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x17U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x18U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x19U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1aU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1bU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1cU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1dU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1eU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1fU] 
        = (IData)((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient)) 
                    << 0x20U) | (QData)((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x20U] 
        = (IData)(((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient)) 
                     << 0x20U) | (QData)((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient))) 
                   >> 0x20U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__o_remainder 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__o_remainder 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0U] = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[1U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[2U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[3U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[4U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[5U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[6U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[7U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[8U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[9U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xaU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xbU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xcU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xdU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xeU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xfU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x10U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x11U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x12U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x13U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x14U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x15U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x16U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x17U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x18U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x19U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1aU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1bU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1cU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1dU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1eU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1fU] 
        = (IData)((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder)) 
                    << 0x20U) | (QData)((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x20U] 
        = (IData)(((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder)) 
                     << 0x20U) | (QData)((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder))) 
                   >> 0x20U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult;
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                    = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                        : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                            : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                    ? ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
            } else if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                    = ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent));
            } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                    = ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? (0xfffffffeU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                              + (((- (IData)(
                                                             (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                    >> 0x14U))))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent));
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((0x4000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                            = ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                ? ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                    ? ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                        >= vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                        ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                        : ((IData)(4U) 
                                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                    : ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                        < vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                        ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                        : ((IData)(4U) 
                                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)))
                                : ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                    ? (VL_GTES_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                        ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                        : ((IData)(4U) 
                                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                    : (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                        ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                        : ((IData)(4U) 
                                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
                    } else if ((1U & (~ (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                         >> 0xdU)))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                            = ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                ? ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                    != vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                : ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                    == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)));
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                        = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                    = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
            }
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                        }
                    }
                }
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                    : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xfffff000U & vlSelf->RiscvProcessor__DOT__insn_from_imem);
                        }
                    }
                } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult;
                    }
                }
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                    : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                        : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
            = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                    : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                               + (0xfffff000U & vlSelf->RiscvProcessor__DOT__insn_from_imem));
                    }
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((0x4000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                        if ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult;
                        } else if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                            if ((0U == (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                        >> 0x19U))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                       >> (0x1fU & 
                                           (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 0x14U)));
                            }
                            if ((0x20U == (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                           >> 0x19U))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = VL_SHIFTRS_III(32,32,5, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, 
                                                     (0x1fU 
                                                      & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                         >> 0x14U)));
                            }
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult;
                        }
                    } else {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                : ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                    ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                       << (0x1fU & 
                                           (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 0x14U)))
                                    : vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult));
                    }
                }
            }
        }
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
            = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                    : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult;
                    }
                }
            }
        }
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock_mem) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_mem__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clock_mem)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_mem__0)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->clock_proc) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock_proc__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock_mem__0 = vlSelf->clock_mem;
    vlSelf->__Vtrigprevexpr___TOP__clock_proc__0 = vlSelf->clock_proc;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin = 0;
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin = 0;
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin = 0;
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin = 0;
    CData/*7:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0 = 0;
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0 = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient = 0;
    IData/*31:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder = 0;
    // Body
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20 
                                    = ((0xfffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20) 
                                       | (0x100000U 
                                          & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                             >> 0xbU)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20 
                                    = ((0x100001U & vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20) 
                                       | ((0xff000U 
                                           & vlSelf->RiscvProcessor__DOT__insn_from_imem) 
                                          | ((0x800U 
                                              & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                   >> 0x14U)))));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20 
                                    = (0x1ffffeU & vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20);
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20 
                                                       >> 0x14U)))) 
                                        << 0x15U) | vlSelf->RiscvProcessor__DOT__datapath__DOT__targ20);
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__offset 
                                = ((0xfffU & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offset)) 
                                   | (0x1000U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 >> 0x13U)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__offset 
                                = ((0x1001U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offset)) 
                                   | ((0x800U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                             >> 7U)))));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__offset 
                                = (0x1ffeU & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offset));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__offsetshift 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__offset;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                = (((- (IData)((1U 
                                                & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offsetshift) 
                                                   >> 0xcU)))) 
                                    << 0xdU) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__offsetshift));
                            if ((0x4000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                if ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                        if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                             >= vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                        }
                                    } else if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                < vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if (VL_GTES_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                    }
                                } else if (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                }
                            } else if ((1U & (~ (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 >> 0xdU)))) {
                                if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                         != vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
                                    }
                                } else if ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                            == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__imm;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 = 0U;
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
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 
                                = (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                         >> 0xcU));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7 
                                = (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                   >> 0x19U);
                            if ((0U == (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                              >> 0xcU)))) {
                                if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                }
                                if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                }
                                if ((0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                                }
                            } else if ((4U == (7U & 
                                               (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                >> 0xcU)))) {
                                if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                            >> 0x1fU)
                                            ? ((IData)(1U) 
                                               + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data))
                                            : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data);
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                            >> 0x1fU)
                                            ? ((IData)(1U) 
                                               + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                            : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag 
                                        = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                            >> 0x1fU) 
                                           != (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                               >> 0x1fU));
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                }
                            } else if ((6U == (7U & 
                                               (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                >> 0xcU)))) {
                                if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                            >> 0x1fU)
                                            ? ((IData)(1U) 
                                               + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data))
                                            : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data);
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                            >> 0x1fU)
                                            ? ((IData)(1U) 
                                               + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data))
                                            : vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data);
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag 
                                        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                           >> 0x1fU);
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                                }
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 
                            = (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                     >> 0xcU));
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                               + (((- (IData)((vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                     >> 7U)))));
                        if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem 
                                = (0xfU & ((IData)(1U) 
                                           << (3U & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
                                = (0xfffffffcU & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm);
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                   << (0x18U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                << 3U)));
                        } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem 
                                = (0xfU & ((IData)(3U) 
                                           << (3U & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm)));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
                                = (0xfffffffcU & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm);
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                   << (0x18U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                << 3U)));
                        } else if ((2U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem = 0xfU;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
                                = (0xfffffffcU & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm);
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data 
                                   << (0x18U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                << 3U)));
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 
                            = (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                     >> 0xcU));
                        if ((0x4000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                            if ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                        = ((0xfffff000U 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                           | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                              >> 0x14U));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                        = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                           >> 0xbU)))) 
                                            << 0xcU) 
                                           | (0xfffU 
                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                        = ((0xfffff000U 
                                            & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                           | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                              >> 0x14U));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                        = (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                           >> 0xbU)))) 
                                            << 0xcU) 
                                           | (0xfffU 
                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                                }
                            } else if ((1U & (~ (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                 >> 0xcU)))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                    = ((0xfffff000U 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                       | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                          >> 0x14U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                       >> 0xbU)))) 
                                        << 0xcU) | 
                                       (0xfffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                            }
                        } else if ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                            if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                    = ((0xfffff000U 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                       | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                          >> 0x14U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                       >> 0xbU)))) 
                                        << 0xcU) | 
                                       (0xfffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                    = ((0xfffff000U 
                                        & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                       | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                          >> 0x14U));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                       >> 0xbU)))) 
                                        << 0xcU) | 
                                       (0xfffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                            }
                        } else if ((1U & (~ (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                             >> 0xcU)))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                = ((0xfffff000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm) 
                                   | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                      >> 0x14U));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended 
                                = (((- (IData)((1U 
                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__imm 
                                                   >> 0xbU)))) 
                                    << 0xcU) | (0xfffU 
                                                & vlSelf->RiscvProcessor__DOT__datapath__DOT__imm));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data;
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__signextended;
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3 
                        = (7U & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                 >> 0xcU));
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem = 0U;
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem 
                        = (0xfffffffcU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                          + (((- (IData)(
                                                         (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                >> 0x14U))));
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                        = vlSelf->RiscvProcessor__DOT__mem_data_loaded_value;
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                        = (0x18U & VL_SHIFTL_III(32,32,32, 
                                                 (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                                  + 
                                                  (((- (IData)(
                                                               (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                      >> 0x14U))), 3U));
                }
            }
        }
    }
    vlSelf->RiscvProcessor__DOT__mem_data_we = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_we_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_to_write 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__store_data_to_dmem;
    vlSelf->RiscvProcessor__DOT__mem_data_addr = vlSelf->RiscvProcessor__DOT__datapath__DOT__addr_to_dmem;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__signeddivflag 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__fun3 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__fun7 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x11U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x19U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__b 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                 >> 0x1fU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputtwo 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x11U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x19U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__a 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 >> 0x1fU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__i_dividend 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x10U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x11U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x12U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x13U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x14U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x15U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x16U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x17U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x18U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x19U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1aU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1bU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1cU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1dU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1eU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__i_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x10U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x11U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x12U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x13U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x14U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x15U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x16U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x17U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x18U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x19U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1aU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1bU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1cU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1dU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1eU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__o_dividend 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0U] 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[1U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[2U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 2U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[3U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 3U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[4U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 4U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[5U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 5U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[6U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 6U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[7U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 7U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[8U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 8U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[9U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 9U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xaU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xaU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xbU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xbU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xcU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xcU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xdU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xdU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xeU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xeU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0xfU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xfU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x10U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x10U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x11U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x11U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x12U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x12U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x13U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x13U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x14U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x14U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x15U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x15U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x16U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x16U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x17U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x17U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x18U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x18U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x19U] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x19U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1aU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1aU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1bU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1bU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1cU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1cU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1dU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1dU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1eU] 
        = VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1eU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x1fU] 
        = (IData)((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__o_dividend)) 
                    << 0x20U) | (QData)((IData)(VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__dividends[0x20U] 
        = (IData)(((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__o_dividend)) 
                     << 0x20U) | (QData)((IData)(VL_SHIFTL_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU)))) 
                   >> 0x20U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputone 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g 
        = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
            & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
           >> 0x1fU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p 
        = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
            | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
           >> 0x1fU);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__divd_or_in 
        = (1U & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x19U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x19U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x18U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x11U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x10U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x11U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 8U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__g 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 1U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__g 
        = (1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                 & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 2U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__p 
        = (1U & ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                  | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                 >> 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 3U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 4U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 5U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 6U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 7U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 8U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 9U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xaU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xbU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xcU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xdU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xeU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0xfU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x10U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x11U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x12U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x13U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x14U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x15U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x16U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x17U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x18U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x19U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1aU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1bU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1cU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1dU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__divd_or_in 
        = (1U & VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1eU));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in 
        = VL_SHIFTR_III(32,32,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 0x1fU);
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_we_to_dmem 
        = vlSelf->RiscvProcessor__DOT__mem_data_we;
    vlSelf->RiscvProcessor__DOT__mem__DOT__store_data_to_dmem 
        = vlSelf->RiscvProcessor__DOT__mem_data_to_write;
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                                        if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 0U;
                                        } else if (
                                                   (1U 
                                                    != (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                            if ((0x20U 
                                                 == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != (3U & vlSelf->RiscvProcessor__DOT__datapath__DOT__pc_to_imem)))) {
            VL_WRITEF("[%0t] %%Error: DatapathSingleCycle.sv:823: Assertion failed in %NRiscvProcessor.mem: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 823, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((0U != (3U & vlSelf->RiscvProcessor__DOT__mem_data_addr)))) {
            VL_WRITEF("[%0t] %%Error: DatapathSingleCycle.sv:824: Assertion failed in %NRiscvProcessor.mem: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 824, "");
        }
    }
    vlSelf->RiscvProcessor__DOT__mem__DOT__addr_to_dmem 
        = vlSelf->RiscvProcessor__DOT__mem_data_addr;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__b 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputtwo;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputtwo;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__a 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputone;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_dividend 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__inputone;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__g 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__p 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p) 
                                                      << 1U) 
                                                     | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__g 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__p 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__g 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__p 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__g 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__p 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__g) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__g) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__g) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__g) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__g) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__g))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin) 
              & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p) 
                                                      << 1U) 
                                                     | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p) 
                                                      << 1U) 
                                                     | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__p) 
            << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p) 
                       << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__p) 
                                  << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__p) 
                                             << 4U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__p) 
                                                << 3U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__p) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__p) 
                                                      << 1U) 
                                                     | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__p) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__or_1_out 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__i_divisor 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__i_divisor;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__pin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__pout 
        = (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__gin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__gin 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g) 
            << 0x1fU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g) 
                          << 0x1eU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g) 
                                                     << 0x18U) 
                                                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g) 
                                                                             << 0x10U) 
                                                                            | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g) 
                                                                                << 8U) 
                                                                                | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__gin)))))))))))))))))))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__pin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__pout 
        = (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__pin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__pout 
        = (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__pin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__pout 
        = (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__pin2 
        = (((IData)((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin))) 
            << 3U) | (((IData)((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin))) 
                       << 2U) | (((IData)((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin))) 
                                  << 1U) | (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin)))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__pin 
        = (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p) 
            << 0x1fU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p) 
                          << 0x1eU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p) 
                                                  << 0x19U) 
                                                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p) 
                                                                          << 0x11U) 
                                                                         | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p) 
                                                                                << 9U) 
                                                                                | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p) 
                                                                                << 8U) 
                                                                                | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin)))))))))))))))))))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_2_out 
        = (1U | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out)
                   ? 1U : 0U) << 1U));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__pin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__pin2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__pout 
        = (0xfU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__pin2));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__p));
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_quotient = 1U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__o_quotient = 1U;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__minus_out;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_quotient = 0U;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__o_quotient = 0U;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__divd_or_in;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder, 1U);
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__p 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__pout;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0) 
           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__p));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__divd_or_in);
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__31__KET____DOT__g1__g) 
           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__31__KET____DOT__g1__DOT__p) 
               & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g)) 
              | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_haa56512e__0) 
                  & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g)) 
                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h0a8a089f__0) 
                     & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g)) 
                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_hcd562d8d__0) 
                        & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g)) 
                       | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0) 
                           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g)) 
                          | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT____VdfgTmp_h447a6310__0) 
                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p)) 
                             & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g) 
                                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p) 
                                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g))))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__23__KET____DOT__g1__g) 
           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__23__KET____DOT__g1__DOT__p) 
               & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g)) 
              | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_haa56512e__0) 
                  & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g)) 
                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h0a8a089f__0) 
                     & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g)) 
                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_hcd562d8d__0) 
                        & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g)) 
                       | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0) 
                           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g)) 
                          | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT____VdfgTmp_h447a6310__0) 
                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p)) 
                             & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g) 
                                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p) 
                                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g))))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__15__KET____DOT__g1__g) 
           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__15__KET____DOT__g1__DOT__p) 
               & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g)) 
              | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_haa56512e__0) 
                  & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g)) 
                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h0a8a089f__0) 
                     & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g)) 
                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_hcd562d8d__0) 
                        & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g)) 
                       | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0) 
                           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g)) 
                          | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT____VdfgTmp_h447a6310__0) 
                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p)) 
                             & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g) 
                                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p) 
                                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g))))))))));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__7__KET____DOT__g1__g) 
           | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__7__KET____DOT__g1__DOT__p) 
               & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g)) 
              | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_haa56512e__0) 
                  & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__g)) 
                 | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h0a8a089f__0) 
                     & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__g)) 
                    | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_hcd562d8d__0) 
                        & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__g)) 
                       | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0) 
                           & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__g)) 
                          | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT____VdfgTmp_h447a6310__0) 
                              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__p)) 
                             & ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__g) 
                                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__p) 
                                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__g))))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__gout 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__gout 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__gout 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__gout 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__gin2 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout) 
            << 3U) | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0) 
                       << 2U) | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0) 
                                  << 1U) | (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__gout 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__g84__gout) 
           | (((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin)) 
               & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0)) 
              | (((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__pin)) 
                  & (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin))) 
                 & ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0) 
                    | ((0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin)) 
                       & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin) 
              & (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin))));
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out)
                                        ? 1U : 0U), 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__cout 
        = ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g) 
             | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6) 
                & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p))) 
            << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6) 
                       << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5) 
                                  << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4) 
                                             << 3U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3) 
                                                << 2U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1)))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal 
        = ((0xffffff01U & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__g) 
                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6) 
                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__6__KET____DOT__g1__DOT__p))) 
               << 7U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6) 
                          << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5) 
                                     << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4) 
                                                << 4U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2) 
                                                      << 2U) 
                                                     | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1) 
                                                        << 1U))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__gin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__gin2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__gout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
              & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
              & (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__1__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
              & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin 
        = ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
              & (0xffU == (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp3 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__10__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__17__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__cin 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__cout 
        = (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin) 
            << 2U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
                       << 1U) | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__24__KET____DOT__g1__DOT__g) 
           | ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin) 
              & (IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp4 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp3) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__11__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp3 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__18__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cout 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__cout;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__25__KET____DOT__g1__DOT__p)));
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp5 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp4) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__12__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp4 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp3) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__19__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp3 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__26__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__2__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp5) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__13__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp5 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp4) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__20__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp4 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp3) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__27__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__cout 
        = ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g) 
             | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6) 
                & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p))) 
            << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6) 
                       << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp5) 
                                  << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp4) 
                                             << 3U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp3) 
                                                << 2U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1)))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal 
        = ((0xffff01ffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__g) 
                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6) 
                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__14__KET____DOT__g1__DOT__p))) 
               << 0xfU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp6) 
                            << 0xeU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp5) 
                                         << 0xdU) | 
                                        (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp4) 
                                          << 0xcU) 
                                         | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp3) 
                                             << 0xbU) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp2) 
                                                << 0xaU) 
                                               | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1) 
                                                  << 9U))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp5) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__21__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp5 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp4) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__28__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__cout 
        = ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g) 
             | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6) 
                & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p))) 
            << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6) 
                       << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp5) 
                                  << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp4) 
                                             << 3U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp3) 
                                                << 2U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp1)))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal 
        = ((0xff01ffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__g) 
                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6) 
                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__22__KET____DOT__g1__DOT__p))) 
               << 0x17U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp6) 
                             << 0x16U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp5) 
                                           << 0x15U) 
                                          | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp4) 
                                              << 0x14U) 
                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp3) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp2) 
                                                    << 0x12U) 
                                                   | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp1) 
                                                      << 0x11U))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp5) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__29__KET____DOT__g1__DOT__p)));
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__cout 
        = ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g) 
             | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6) 
                & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p))) 
            << 6U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6) 
                       << 5U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp5) 
                                  << 4U) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp4) 
                                             << 3U) 
                                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp3) 
                                                << 2U) 
                                               | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp2) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp1)))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal 
        = ((0x1ffffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | ((((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__g) 
                | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6) 
                   & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__30__KET____DOT__g1__DOT__p))) 
               << 0x1fU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp6) 
                             << 0x1eU) | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp5) 
                                           << 0x1dU) 
                                          | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp4) 
                                              << 0x1cU) 
                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp3) 
                                                 << 0x1bU) 
                                                | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp2) 
                                                    << 0x1aU) 
                                                   | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g84__DOT__temp1) 
                                                      << 0x19U))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__3__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal2 
        = ((0xfe000000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
           | (((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin) 
               << 0x18U) | ((0xfe0000U & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
                            | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
                                << 0x10U) | ((0xfe00U 
                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
                                             | (((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
                                                 << 8U) 
                                                | ((0xfeU 
                                                    & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal) 
                                                   | (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput 
        = ((0x80000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                           ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                              ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
           | ((0x40000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                              ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                 ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
              | ((0x20000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                 ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                    ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                 | ((0x10000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                    ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                       ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                    | ((0x8000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                      ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                         ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                       | ((0x4000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                         ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                            ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                          | ((0x2000000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                            ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                               ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                             | ((0x1000000U & ((0xff000000U 
                                                & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone) 
                                               ^ ((0xff000000U 
                                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                                                  ^ 
                                                  ((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin) 
                                                   << 0x18U)))) 
                                | ((0x800000U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                 ^ 
                                                 (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                  ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                   | ((0x400000U & 
                                       (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                           ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                      | ((0x200000U 
                                          & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                             ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                         | ((0x100000U 
                                             & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                ^ (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                   ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                            | ((0x80000U 
                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                   ^ 
                                                   (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                    ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                               | ((0x40000U 
                                                   & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                      ^ 
                                                      (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                       ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                  | ((0x20000U 
                                                      & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                         ^ 
                                                         (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                          ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                     | ((0x10000U 
                                                         & ((0xffff0000U 
                                                             & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone) 
                                                            ^ 
                                                            ((0xffff0000U 
                                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                                                             ^ 
                                                             ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
                                                              << 0x10U)))) 
                                                        | ((0x8000U 
                                                            & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                               ^ 
                                                               (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                           | ((0x4000U 
                                                               & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                  ^ 
                                                                  (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                   ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                              | ((0x2000U 
                                                                  & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                     ^ 
                                                                     (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                      ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                 | ((0x1000U 
                                                                     & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                        ^ 
                                                                        (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                         ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                           ^ 
                                                                           (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                            ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                       | ((0x400U 
                                                                           & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                              ^ 
                                                                              (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                               ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                          | ((0x200U 
                                                                              & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                             | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone) 
                                                                                ^ 
                                                                                ((0xffffff00U 
                                                                                & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
                                                                                << 8U)))) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((8U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((4U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | ((2U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__coutfinal))) 
                                                                                | (1U 
                                                                                & (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                                ^ 
                                                                                (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo 
                                                                                ^ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin)))))))))))))))))))))))))))))))))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__sum 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__4__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__5__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__6__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__7__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__8__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__9__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__10__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__11__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__12__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__13__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__14__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__15__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__16__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__17__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__18__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__19__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__20__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__21__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__22__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__23__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__24__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__25__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__26__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__27__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__28__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__29__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__geq_out) {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_2_out;
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__minus_out;
    } else {
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient, 1U);
        RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__or_1_out;
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__i_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__o_quotient 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_2_out 
        = (1U | (RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient 
                 << 1U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__i_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__30__KET____DOT__d__DOT__o_remainder 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__r_or_in 
        = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder, 1U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_1_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__r_or_in 
           | vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__divd_or_in);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__minus_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_1_out 
           - vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__geq_out 
        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_1_out 
           >= vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
    if (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__geq_out) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_2_out;
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__minus_out;
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient 
            = VL_SHIFTL_III(32,32,32, RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient, 1U);
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__or_1_out;
    }
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                            if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                        if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
                                        }
                                        if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder;
                                        }
                                    } else {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = ((0U 
                                                == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                                                ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                   | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                                     ? 
                                                    ((0U 
                                                      == vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag)
                                                       ? 0x80000000U
                                                       : 1U))
                                                     : 
                                                    ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder))
                                                      : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder))
                                                    : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput));
                                    }
                                } else if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                    if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                               >> (0x1fU 
                                                   & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                    }
                                    if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient;
                                    }
                                    if ((0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = VL_SHIFTRS_III(32,32,5, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 
                                                             (0x1fU 
                                                              & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                    }
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                                            ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                               ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                            : ((1U 
                                                == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                                                ? (
                                                   (0U 
                                                    == vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                                    ? 0xffffffffU
                                                    : 
                                                   ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient))
                                                     : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient))
                                                : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput));
                                }
                            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                    if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                < vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                                ? 1U
                                                : 0U);
                                    } else if ((1U 
                                                == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                            = ((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone)) 
                                               * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)));
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = (IData)(
                                                      (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                                       >> 0x20U));
                                    } else {
                                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                                    }
                                } else if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                            ? 1U : 0U);
                                } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                        = ((((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone))) 
                                           * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                                }
                            } else if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                           << (0x1fU 
                                               & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                        = VL_MULS_QQQ(64, 
                                                      VL_EXTENDS_QI(64,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone), 
                                                      VL_EXTENDS_QI(64,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                                   >> 0x20U));
                                } else {
                                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                                }
                            } else if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                            } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                                    = ((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone)) 
                                       * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult);
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                        if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))
                                        ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                           & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                        : (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                           | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                            } else if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                       ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo);
                            }
                        } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                = ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))
                                    ? ((vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                        < vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                        ? 1U : 0U) : 
                                   (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                     ? 1U : 0U));
                        } else if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                       >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = (0xffffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress);
                            } else {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                       >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                    = (0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress);
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                        if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                   >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress;
                        }
                    } else if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                               >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                            = (((- (IData)((1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress));
                    } else {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                               >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                            = (((- (IData)((1U & (vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__memaddress));
                    }
                }
            }
        }
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__o_quotient 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__o_quotient 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0U] = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[1U] 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__0__KET____DOT__d__DOT__geq_out)
            ? 1U : 0U);
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[2U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[3U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[4U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[5U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[6U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[7U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[8U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[9U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xaU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xbU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xcU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xdU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xeU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0xfU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x10U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x11U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x12U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x13U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x14U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x15U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x16U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x17U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x18U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x19U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1aU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1bU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1cU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1dU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1eU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_quotient;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x1fU] 
        = (IData)((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient)) 
                    << 0x20U) | (QData)((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__quotients[0x20U] 
        = (IData)(((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient)) 
                     << 0x20U) | (QData)((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_quotient))) 
                   >> 0x20U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__o_remainder 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__genblk1__BRA__31__KET____DOT__d__DOT__o_remainder 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0U] = 0U;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[1U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[2U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[3U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[4U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[5U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[6U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[7U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[8U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[9U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xaU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xbU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xcU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xdU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xeU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0xfU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x10U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x11U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x12U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x13U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x14U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x15U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x16U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x17U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x18U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x19U] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1aU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1bU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1cU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1dU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1eU] 
        = RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__d__i_remainder;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x1fU] 
        = (IData)((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder)) 
                    << 0x20U) | (QData)((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT__remainders[0x20U] 
        = (IData)(((((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder)) 
                     << 0x20U) | (QData)((IData)(RiscvProcessor__DOT__datapath__DOT__al__DOT__div__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__d__i_remainder))) 
                   >> 0x20U));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult;
    if ((0x40U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                    = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                        : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                            : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                    ? ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
            } else if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                    = ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent));
            } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                    = ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? (0xfffffffeU & (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                              + (((- (IData)(
                                                             (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                    >> 0x14U))))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent));
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((0x4000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                            = ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                ? ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                    ? ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                        >= vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                        ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                        : ((IData)(4U) 
                                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                    : ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                        < vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                        ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                        : ((IData)(4U) 
                                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)))
                                : ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                    ? (VL_GTES_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                        ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                        : ((IData)(4U) 
                                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                    : (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                        ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                        : ((IData)(4U) 
                                           + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
                    } else if ((1U & (~ (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                         >> 0xdU)))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                            = ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                ? ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                    != vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                : ((vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                    == vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs2_data)
                                    ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)));
                    }
                } else {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                        = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                    = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
            }
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
                        }
                    }
                }
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
        }
    } else if ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                    : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = (0xfffff000U & vlSelf->RiscvProcessor__DOT__insn_from_imem);
                        }
                    }
                } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult;
                    }
                }
            }
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                    : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                        : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
        }
    } else if ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
            = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                    : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = (vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent 
                               + (0xfffff000U & vlSelf->RiscvProcessor__DOT__insn_from_imem));
                    }
                }
            } else if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((0x4000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                        if ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult;
                        } else if ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)) {
                            if ((0U == (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                        >> 0x19U))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                       >> (0x1fU & 
                                           (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 0x14U)));
                            }
                            if ((0x20U == (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                           >> 0x19U))) {
                                vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                    = VL_SHIFTRS_III(32,32,5, vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data, 
                                                     (0x1fU 
                                                      & (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                                         >> 0x14U)));
                            }
                        } else {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                                = vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult;
                        }
                    } else {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = ((0x2000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                ? vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult
                                : ((0x1000U & vlSelf->RiscvProcessor__DOT__insn_from_imem)
                                    ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rs1_data 
                                       << (0x1fU & 
                                           (vlSelf->RiscvProcessor__DOT__insn_from_imem 
                                            >> 0x14U)))
                                    : vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult));
                    }
                }
            }
        }
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
            = ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                    : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                            : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                        : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))));
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                    if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data 
                            = vlSelf->RiscvProcessor__DOT__datapath__DOT__aluresult;
                    }
                }
            }
        }
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__rf__DOT__rd_data 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__rd_data;
}
