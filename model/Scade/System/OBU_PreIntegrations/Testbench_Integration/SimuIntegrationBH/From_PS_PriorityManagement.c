/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_PS_PriorityManagement.h"

/* PriorityManagement::From_PS */
T_Mode_Level_And_Mode_Types_Pkg From_PS_PriorityManagement(
  /* PriorityManagement::From_PS::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_PS::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_PS::Condition14 */ kcg_bool Condition14,
  /* PriorityManagement::From_PS::Condition22 */ kcg_bool Condition22,
  /* PriorityManagement::From_PS::Condition23 */ kcg_bool Condition23,
  /* PriorityManagement::From_PS::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_PS::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else */
  static kcg_bool _15_else_clock_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L117_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else::else::else */
  static kcg_bool _13_else_clock_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _9_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L119_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _8_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_PS::IfBlock1::else::else::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L121_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else::else::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L120_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _11_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else::else::else::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L118_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else::else */
  static kcg_bool _14_else_clock_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L116_IfBlock1;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromPS_To_NewMode;
  /* PriorityManagement::From_PS::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _22_FromPS_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromPS_To_NewMode = _L1_IfBlock1;
    _22_FromPS_To_NewMode = _1_FromPS_To_NewMode;
  }
  else {
    _15_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
      _L116_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromPS_To_NewMode = _L116_IfBlock1;
      FromPS_To_NewMode = _3_FromPS_To_NewMode;
    }
    else {
      _14_else_clock_IfBlock1 = Condition13;
      /* ck_anon_activ */ if (_14_else_clock_IfBlock1) {
        _L117_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromPS_To_NewMode = _L117_IfBlock1;
        _2_FromPS_To_NewMode = _5_FromPS_To_NewMode;
      }
      else {
        _13_else_clock_IfBlock1 = Condition22;
        /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
          _L118_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
          _7_FromPS_To_NewMode = _L118_IfBlock1;
          _4_FromPS_To_NewMode = _7_FromPS_To_NewMode;
        }
        else {
          _12_else_clock_IfBlock1 = Condition23;
          /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
            _L119_IfBlock1 = SH_Level_And_Mode_Types_Pkg;
            _9_FromPS_To_NewMode = _L119_IfBlock1;
            _6_FromPS_To_NewMode = _9_FromPS_To_NewMode;
          }
          else {
            else_clock_IfBlock1 = Condition14;
            /* ck_anon_activ */ if (else_clock_IfBlock1) {
              _L120_IfBlock1 = SL_Level_And_Mode_Types_Pkg;
              _11_FromPS_To_NewMode = _L120_IfBlock1;
              _8_FromPS_To_NewMode = _11_FromPS_To_NewMode;
            }
            else {
              _L121_IfBlock1 = previousMode_Loc;
              _10_FromPS_To_NewMode = _L121_IfBlock1;
              _8_FromPS_To_NewMode = _10_FromPS_To_NewMode;
            }
            _6_FromPS_To_NewMode = _8_FromPS_To_NewMode;
          }
          _4_FromPS_To_NewMode = _6_FromPS_To_NewMode;
        }
        _2_FromPS_To_NewMode = _4_FromPS_To_NewMode;
      }
      FromPS_To_NewMode = _2_FromPS_To_NewMode;
    }
    _22_FromPS_To_NewMode = FromPS_To_NewMode;
  }
  return _22_FromPS_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_PS_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

