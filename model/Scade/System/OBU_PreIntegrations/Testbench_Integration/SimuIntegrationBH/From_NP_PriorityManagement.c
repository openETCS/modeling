/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_NP_PriorityManagement.h"

/* PriorityManagement::From_NP */
T_Mode_Level_And_Mode_Types_Pkg From_NP_PriorityManagement(
  /* PriorityManagement::From_NP::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_NP::Condition4 */ kcg_bool Condition4,
  /* PriorityManagement::From_NP::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_NP::FromNP_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromNP_To_NewMode;
  /* PriorityManagement::From_NP::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_NP::FromNP_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromNP_To_NewMode;
  /* PriorityManagement::From_NP::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_NP::IfBlock1::else::else::_L3 */
  static T_Mode_Level_And_Mode_Types_Pkg _L3_IfBlock1;
  /* PriorityManagement::From_NP::FromNP_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromNP_To_NewMode;
  /* PriorityManagement::From_NP::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L14_IfBlock1;
  /* PriorityManagement::From_NP::FromNP_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromNP_To_NewMode;
  /* PriorityManagement::From_NP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_NP::FromNP_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromNP_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromNP_To_NewMode = _L1_IfBlock1;
    _5_FromNP_To_NewMode = _1_FromNP_To_NewMode;
  }
  else {
    else_clock_IfBlock1 = Condition4;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L14_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
      _3_FromNP_To_NewMode = _L14_IfBlock1;
      FromNP_To_NewMode = _3_FromNP_To_NewMode;
    }
    else {
      _L3_IfBlock1 = previousMode_Loc;
      _2_FromNP_To_NewMode = _L3_IfBlock1;
      FromNP_To_NewMode = _2_FromNP_To_NewMode;
    }
    _5_FromNP_To_NewMode = FromNP_To_NewMode;
  }
  return _5_FromNP_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_NP_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

