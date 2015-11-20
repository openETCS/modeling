/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SF_PriorityManagement.h"

/* PriorityManagement::From_SF */
T_Mode_Level_And_Mode_Types_Pkg From_SF_PriorityManagement(
  /* PriorityManagement::From_SF::Condition1 */ kcg_bool Condition1,
  /* PriorityManagement::From_SF::Condition29 */ kcg_bool Condition29,
  /* PriorityManagement::From_SF::previousMode_Loc */ T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SF::FromSF_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSF_To_NewMode;
  /* PriorityManagement::From_SF::IfBlock1::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* PriorityManagement::From_SF::FromSF_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSF_To_NewMode;
  /* PriorityManagement::From_SF::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SF::IfBlock1::else::else::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L15_IfBlock1;
  /* PriorityManagement::From_SF::FromSF_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSF_To_NewMode;
  /* PriorityManagement::From_SF::IfBlock1::else::then::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L14_IfBlock1;
  /* PriorityManagement::From_SF::FromSF_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSF_To_NewMode;
  /* PriorityManagement::From_SF::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* PriorityManagement::From_SF::FromSF_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSF_To_NewMode;
  
  IfBlock1_clock = Condition1;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    _1_FromSF_To_NewMode = _L1_IfBlock1;
    _6_FromSF_To_NewMode = _1_FromSF_To_NewMode;
  }
  else {
    else_clock_IfBlock1 = Condition29;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L14_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromSF_To_NewMode = _L14_IfBlock1;
      FromSF_To_NewMode = _3_FromSF_To_NewMode;
    }
    else {
      _L15_IfBlock1 = previousMode_Loc;
      _2_FromSF_To_NewMode = _L15_IfBlock1;
      FromSF_To_NewMode = _2_FromSF_To_NewMode;
    }
    _6_FromSF_To_NewMode = FromSF_To_NewMode;
  }
  return _6_FromSF_To_NewMode;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** From_SF_PriorityManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

