// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin;
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin = 0;
    // Body
    if ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 0U;
                }
            }
        }
    } else if ((0x6fU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 0U;
    } else if ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
                    if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 0U;
                    } else if ((1U != (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                        if ((0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__0__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__0__KET____DOT__g1__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15d0cbbc__0) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cin) 
              & (0xffU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g81__pin))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__cin;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__1__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__8__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__8__KET____DOT__g1__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h15ab17a9__0) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp1) 
              & (0xffU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g82__pin))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__2__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp2 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g82__DOT__temp1) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__9__KET____DOT__g1__DOT__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__cin 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2;
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g83__DOT__temp1 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__16__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__16__KET____DOT__g1__p)));
    RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g84__cin 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT____VdfgTmp_h1a6f6b16__0) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g4__DOT__temp2) 
              & (0xffU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellinp__g83__pin))));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp3) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__3__KET____DOT__g1__DOT__p)));
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
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT____Vcellout__genblk1__BRA__24__KET____DOT__g1__p)));
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp4) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__4__KET____DOT__g1__DOT__p)));
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
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp6 
        = ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__g) 
           | ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__g81__DOT__temp5) 
              & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__genblk1__BRA__5__KET____DOT__g1__DOT__p)));
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
    if ((0x13U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
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
                        ? 1U : 0U) : (VL_LTS_III(32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                       ? 1U : 0U));
        } else if ((1U & (~ (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3)))) {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
        }
    } else if ((0x6fU == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
            = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
    } else if ((0x33U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__opcode))) {
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
                        = ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                            ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                               | vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                            : ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                                ? ((0U == vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                    ? ((0U == vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone)
                                        ? 0U : ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag)
                                                 ? 0x80000000U
                                                 : 1U))
                                    : ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag)
                                        ? ((IData)(1U) 
                                           + (~ vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder))
                                        : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__remainder))
                                : vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput));
                }
            } else if ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun3))) {
                if ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                        = (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                           >> (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                }
                if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__quotient;
                }
                if ((0x20U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                        = VL_SHIFTRS_III(32,32,5, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone, 
                                         (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
                }
            } else {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                    = ((0U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                        ? (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                           ^ vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                        : ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))
                            ? ((0U == vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)
                                ? 0xffffffffU : ((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__signeddivflag)
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
                            ? 1U : 0U);
                } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                        = ((QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone)) 
                           * (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo)));
                    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__aluresult 
                        = (IData)((vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
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
                    = ((((QData)((IData)((- (IData)(
                                                    (vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone 
                                                     >> 0x1fU))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone))) 
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
                       << (0x1fU & vlSelf->RiscvProcessor__DOT__datapath__DOT__inputtwo));
            } else if ((1U == (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__fun7))) {
                vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__mulresult 
                    = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->RiscvProcessor__DOT__datapath__DOT__inputone), 
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
    vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__cla__DOT__sum 
        = vlSelf->RiscvProcessor__DOT__datapath__DOT__al__DOT__claoutput;
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
        } else {
            vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
                = ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent);
        }
    } else {
        vlSelf->RiscvProcessor__DOT__datapath__DOT__pcNext 
            = ((0x20U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                ? ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                        : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                    ? ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                    ? ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))))
                    : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                : ((0x10U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                    ? ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                        : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                    ? ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                            : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                    ? ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))))
                    : ((8U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                        ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                        : ((4U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                            ? ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                            : ((2U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                ? ((1U & (IData)(vlSelf->RiscvProcessor__DOT__datapath__DOT__insn_opcode))
                                    ? ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent)
                                    : ((IData)(4U) 
                                       + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))
                                : ((IData)(4U) + vlSelf->RiscvProcessor__DOT__datapath__DOT__pcCurrent))))));
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0xaULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xfULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
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
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
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
            VL_FATAL_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 817, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 817, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/penn/cis5710-homework-main/hw3-singlecycle/DatapathSingleCycle.sv", 817, "", "Active region did not converge.");
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
