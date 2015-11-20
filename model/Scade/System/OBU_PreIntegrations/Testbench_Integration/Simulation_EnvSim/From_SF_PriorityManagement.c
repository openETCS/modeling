/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SF_PriorityManagement.h"

/* PriorityManagement::From_SF */
T_Mode_Level_And_Mode_Types_Pkg From_SF_PriorityManagement(
  /* PriorityManagement::From_SF::Condition1 */kcg_bool Condition1,
  /* PriorityManagement::From_SF::Condition29 */kcg_bool Condition29,
  /* PriorityManagement::From_SF::previousMode_Loc */T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SF::FromSF_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSF_To_NewMode;
  
  if (Condition1) {
    FromSF_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else if (Condition29) {
    FromSF_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else {
    FromSF_To_NewMode = previousMode_Loc;
  }
  return FromSF_To_NewMode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** From_SF_PriorityManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

