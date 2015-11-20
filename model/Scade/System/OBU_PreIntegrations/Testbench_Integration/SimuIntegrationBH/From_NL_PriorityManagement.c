/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_NL_PriorityManagement.h"

/* PriorityManagement::From_NL */
T_Mode_Level_And_Mode_Types_Pkg From_NL_PriorityManagement(
  /* PriorityManagement::From_NL::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_NL::Condition28 */ kcg_bool Condition28,
  /* PriorityManagement::From_NL::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_NL::Condition47 */ kcg_bool Condition47,
  /* PriorityManagement::From_NL::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_NL::FromNL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromNL_To_NewMode;
  /* PriorityManagement::From_NL::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_NL::FromNL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromNL_To_NewMode;
  /* PriorityManagement::From_NL::IfBlock1::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* PriorityManagement::From_NL::FromNL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromNL_To_NewMode;
  /* PriorityManagement::From_NL::IfBlock1::else::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L18_IfBlock1;
  /* PriorityManagement::From_NL::FromNL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromNL_To_NewMode;
  /* PriorityManagement::From_NL::IfBlock1::else::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L19_IfBlock1;
  /* PriorityManagement::From_NL::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_NL::FromNL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromNL_To_NewMode;
  /* PriorityManagement::From_NL::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L17_IfBlock1;
  /* PriorityManagement::From_NL::FromNL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromNL_To_NewMode;
  /* PriorityManagement::From_NL::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_NL::FromNL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _10_FromNL_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromNL_To_NewMode = _L1_IfBlock1;
    _10_FromNL_To_NewMode = _1_FromNL_To_NewMode;
  }
  else {
    _6_else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
      _L17_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromNL_To_NewMode = _L17_IfBlock1;
      FromNL_To_NewMode = _3_FromNL_To_NewMode;
    }
    else {
      else_clock_IfBlock1 = Condition28 | Condition47;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L18_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
        _5_FromNL_To_NewMode = _L18_IfBlock1;
        _2_FromNL_To_NewMode = _5_FromNL_To_NewMode;
      }
      else {
        _L19_IfBlock1 = previousMode_Loc;
        _4_FromNL_To_NewMode = _L19_IfBlock1;
        _2_FromNL_To_NewMode = _4_FromNL_To_NewMode;
      }
      FromNL_To_NewMode = _2_FromNL_To_NewMode;
    }
    _10_FromNL_To_NewMode = FromNL_To_NewMode;
  }
  return _10_FromNL_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_NL_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

