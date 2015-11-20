/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_RV_PriorityManagement.h"

/* PriorityManagement::From_RV */
T_Mode_Level_And_Mode_Types_Pkg From_RV_PriorityManagement(
  /* PriorityManagement::From_RV::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_RV::Condition13 */ kcg_bool Condition13,
  /* PriorityManagement::From_RV::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_RV::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_RV::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromRV_To_NewMode;
  /* PriorityManagement::From_RV::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromRV_To_NewMode;
  /* PriorityManagement::From_RV::IfBlock1::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromRV_To_NewMode;
  /* PriorityManagement::From_RV::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L111_IfBlock1;
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromRV_To_NewMode;
  /* PriorityManagement::From_RV::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_RV::IfBlock1::else::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L113_IfBlock1;
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromRV_To_NewMode;
  /* PriorityManagement::From_RV::IfBlock1::else::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L112_IfBlock1;
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromRV_To_NewMode;
  /* PriorityManagement::From_RV::IfBlock1::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromRV_To_NewMode;
  /* PriorityManagement::From_RV::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L110_IfBlock1;
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromRV_To_NewMode;
  /* PriorityManagement::From_RV::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_RV::FromRV_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _14_FromRV_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromRV_To_NewMode = _L1_IfBlock1;
    _14_FromRV_To_NewMode = _1_FromRV_To_NewMode;
  }
  else {
    _9_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
      _L110_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromRV_To_NewMode = _L110_IfBlock1;
      FromRV_To_NewMode = _3_FromRV_To_NewMode;
    }
    else {
      _8_else_clock_IfBlock1 = Condition13;
      /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
        _L111_IfBlock1 = SF_Level_And_Mode_Types_Pkg;
        _5_FromRV_To_NewMode = _L111_IfBlock1;
        _2_FromRV_To_NewMode = _5_FromRV_To_NewMode;
      }
      else {
        else_clock_IfBlock1 = Condition28;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L112_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
          _7_FromRV_To_NewMode = _L112_IfBlock1;
          _4_FromRV_To_NewMode = _7_FromRV_To_NewMode;
        }
        else {
          _L113_IfBlock1 = previousMode_Loc;
          _6_FromRV_To_NewMode = _L113_IfBlock1;
          _4_FromRV_To_NewMode = _6_FromRV_To_NewMode;
        }
        _2_FromRV_To_NewMode = _4_FromRV_To_NewMode;
      }
      FromRV_To_NewMode = _2_FromRV_To_NewMode;
    }
    _14_FromRV_To_NewMode = FromRV_To_NewMode;
  }
  return _14_FromRV_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_RV_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

