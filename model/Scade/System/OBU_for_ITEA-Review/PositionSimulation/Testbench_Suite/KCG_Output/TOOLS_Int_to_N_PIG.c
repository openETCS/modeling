/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_Int_to_N_PIG.h"

/* TOOLS_Int_to_N_PIG */
N_PIG TOOLS_Int_to_N_PIG(/* TOOLS_Int_to_N_PIG::int_in */ kcg_int int_in)
{
  /* TOOLS_Int_to_N_PIG::IfBlock1::else */ kcg_bool _5_else_clock_IfBlock1;
  /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* TOOLS_Int_to_N_PIG::IfBlock1::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* TOOLS_Int_to_N_PIG::IfBlock1::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* TOOLS_Int_to_N_PIG::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TOOLS_Int_to_N_PIG::n_pig */ N_PIG n_pig;
  
  IfBlock1_clock = int_in == 0;
  if (IfBlock1_clock) {
    n_pig = ENUM_N_PIG_1st_N_PIG;
  }
  else {
    _5_else_clock_IfBlock1 = int_in == 1;
    if (_5_else_clock_IfBlock1) {
      n_pig = ENUM_N_PIG_2nd_N_PIG;
    }
    else {
      _4_else_clock_IfBlock1 = int_in == 2;
      if (_4_else_clock_IfBlock1) {
        n_pig = ENUM_N_PIG_3rd_N_PIG;
      }
      else {
        _3_else_clock_IfBlock1 = int_in == 3;
        if (_3_else_clock_IfBlock1) {
          n_pig = ENUM_N_PIG_4th_N_PIG;
        }
        else {
          _2_else_clock_IfBlock1 = int_in == 4;
          if (_2_else_clock_IfBlock1) {
            n_pig = ENUM_N_PIG_5th_N_PIG;
          }
          else {
            _1_else_clock_IfBlock1 = int_in == 5;
            if (_1_else_clock_IfBlock1) {
              n_pig = ENUM_N_PIG_6th_N_PIG;
            }
            else {
              else_clock_IfBlock1 = int_in == 6;
              if (else_clock_IfBlock1) {
                n_pig = ENUM_N_PIG_7th_N_PIG;
              }
              else {
                n_pig = ENUM_N_PIG_8th_N_PIG;
              }
            }
          }
        }
      }
    }
  }
  return n_pig;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_Int_to_N_PIG.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

