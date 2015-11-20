/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SL_PriorityManagement.h"

/* PriorityManagement::From_SL */
T_Mode_Level_And_Mode_Types_Pkg From_SL_PriorityManagement(
  /* PriorityManagement::From_SL::Condition1 */kcg_bool Condition1,
  /* PriorityManagement::From_SL::Condition3 */kcg_bool Condition3,
  /* PriorityManagement::From_SL::Condition2 */kcg_bool Condition2,
  /* PriorityManagement::From_SL::Condition29 */kcg_bool Condition29,
  /* PriorityManagement::From_SL::previousMode_Loc */T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SL::FromSL_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSL_To_NewMode;
  
  if (Condition1) {
    FromSL_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else if (Condition29) {
    FromSL_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else if (Condition2) {
    FromSL_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else if (Condition3) {
    FromSL_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    FromSL_To_NewMode = previousMode_Loc;
  }
  return FromSL_To_NewMode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** From_SL_PriorityManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

