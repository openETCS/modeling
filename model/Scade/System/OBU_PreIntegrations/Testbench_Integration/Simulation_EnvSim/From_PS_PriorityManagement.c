/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_PS_PriorityManagement.h"

/* PriorityManagement::From_PS */
T_Mode_Level_And_Mode_Types_Pkg From_PS_PriorityManagement(
  /* PriorityManagement::From_PS::Condition1 */kcg_bool Condition1,
  /* PriorityManagement::From_PS::Condition13 */kcg_bool Condition13,
  /* PriorityManagement::From_PS::Condition14 */kcg_bool Condition14,
  /* PriorityManagement::From_PS::Condition22 */kcg_bool Condition22,
  /* PriorityManagement::From_PS::Condition23 */kcg_bool Condition23,
  /* PriorityManagement::From_PS::Condition29 */kcg_bool Condition29,
  /* PriorityManagement::From_PS::previousMode_Loc */T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_PS::FromPS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromPS_To_NewMode;
  
  if (Condition1) {
    FromPS_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else if (Condition29) {
    FromPS_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else if (Condition13) {
    FromPS_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else if (Condition22) {
    FromPS_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else if (Condition23) {
    FromPS_To_NewMode = SH_Level_And_Mode_Types_Pkg;
  }
  else if (Condition14) {
    FromPS_To_NewMode = SL_Level_And_Mode_Types_Pkg;
  }
  else {
    FromPS_To_NewMode = previousMode_Loc;
  }
  return FromPS_To_NewMode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** From_PS_PriorityManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

