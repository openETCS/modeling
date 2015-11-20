/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_NL_PriorityManagement.h"

/* PriorityManagement::From_NL */
T_Mode_Level_And_Mode_Types_Pkg From_NL_PriorityManagement(
  /* PriorityManagement::From_NL::Condition1 */kcg_bool Condition1,
  /* PriorityManagement::From_NL::Condition28 */kcg_bool Condition28,
  /* PriorityManagement::From_NL::Condition29 */kcg_bool Condition29,
  /* PriorityManagement::From_NL::Condition47 */kcg_bool Condition47,
  /* PriorityManagement::From_NL::previousMode_Loc */T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_NL::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_NL::FromNL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromNL_To_NewMode;
  
  if (Condition1) {
    FromNL_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else if (Condition29) {
    FromNL_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else {
    else_clock_IfBlock1 = Condition28 | Condition47;
    if (else_clock_IfBlock1) {
      FromNL_To_NewMode = SB_Level_And_Mode_Types_Pkg;
    }
    else {
      FromNL_To_NewMode = previousMode_Loc;
    }
  }
  return FromNL_To_NewMode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** From_NL_PriorityManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

