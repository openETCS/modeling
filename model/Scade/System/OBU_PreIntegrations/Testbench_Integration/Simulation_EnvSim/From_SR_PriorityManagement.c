/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SR_PriorityManagement.h"

/* PriorityManagement::From_SR */
T_Mode_Level_And_Mode_Types_Pkg From_SR_PriorityManagement(
  /* PriorityManagement::From_SR::Condition1 */kcg_bool Condition1,
  /* PriorityManagement::From_SR::Condition5 */kcg_bool Condition5,
  /* PriorityManagement::From_SR::Condition6 */kcg_bool Condition6,
  /* PriorityManagement::From_SR::Condition13 */kcg_bool Condition13,
  /* PriorityManagement::From_SR::Condition21 */kcg_bool Condition21,
  /* PriorityManagement::From_SR::Condition28 */kcg_bool Condition28,
  /* PriorityManagement::From_SR::Condition29 */kcg_bool Condition29,
  /* PriorityManagement::From_SR::Condition31 */kcg_bool Condition31,
  /* PriorityManagement::From_SR::Condition32 */kcg_bool Condition32,
  /* PriorityManagement::From_SR::Condition40 */kcg_bool Condition40,
  /* PriorityManagement::From_SR::Condition46 */kcg_bool Condition46,
  /* PriorityManagement::From_SR::Condition51 */kcg_bool Condition51,
  /* PriorityManagement::From_SR::Condition56 */kcg_bool Condition56,
  /* PriorityManagement::From_SR::Condition59 */kcg_bool Condition59,
  /* PriorityManagement::From_SR::Condition72 */kcg_bool Condition72,
  /* PriorityManagement::From_SR::ConditionSR2TR */kcg_bool ConditionSR2TR,
  /* PriorityManagement::From_SR::previousMode_Loc */T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SR::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* PriorityManagement::From_SR::FromSR_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSR_To_NewMode;
  
  if (Condition1) {
    FromSR_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else if (Condition29) {
    FromSR_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else if (Condition13) {
    FromSR_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else if (ConditionSR2TR) {
    FromSR_To_NewMode = TR_Level_And_Mode_Types_Pkg;
  }
  else if (Condition28) {
    FromSR_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else if (Condition46) {
    FromSR_To_NewMode = NL_Level_And_Mode_Types_Pkg;
  }
  else {
    _1_else_clock_IfBlock1 = Condition5 | Condition6 | Condition51;
    if (_1_else_clock_IfBlock1) {
      FromSR_To_NewMode = SH_Level_And_Mode_Types_Pkg;
    }
    else if (Condition56) {
      FromSR_To_NewMode = SN_Level_And_Mode_Types_Pkg;
    }
    else if (Condition72) {
      FromSR_To_NewMode = LS_Level_And_Mode_Types_Pkg;
    }
    else {
      else_clock_IfBlock1 = Condition31 | Condition32;
      if (else_clock_IfBlock1) {
        FromSR_To_NewMode = SR_Level_And_Mode_Types_Pkg;
      }
      else if (Condition40) {
        FromSR_To_NewMode = OS_Level_And_Mode_Types_Pkg;
      }
      else if (Condition21) {
        FromSR_To_NewMode = UN_Level_And_Mode_Types_Pkg;
      }
      else if (Condition59) {
        FromSR_To_NewMode = RV_Level_And_Mode_Types_Pkg;
      }
      else {
        FromSR_To_NewMode = previousMode_Loc;
      }
    }
  }
  return FromSR_To_NewMode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** From_SR_PriorityManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

