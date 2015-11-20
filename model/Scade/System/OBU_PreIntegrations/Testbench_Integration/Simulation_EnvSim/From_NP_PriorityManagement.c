/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_NP_PriorityManagement.h"

/* PriorityManagement::From_NP */
T_Mode_Level_And_Mode_Types_Pkg From_NP_PriorityManagement(
  /* PriorityManagement::From_NP::Condition1 */kcg_bool Condition1,
  /* PriorityManagement::From_NP::Condition4 */kcg_bool Condition4,
  /* PriorityManagement::From_NP::previousMode_Loc */T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_NP::FromNP_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromNP_To_NewMode;
  
  if (Condition1) {
    FromNP_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else if (Condition4) {
    FromNP_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    FromNP_To_NewMode = previousMode_Loc;
  }
  return FromNP_To_NewMode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** From_NP_PriorityManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

