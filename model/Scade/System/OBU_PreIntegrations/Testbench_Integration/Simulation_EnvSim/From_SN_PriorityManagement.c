/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SN_PriorityManagement.h"

/* PriorityManagement::From_SN */
T_Mode_Level_And_Mode_Types_Pkg From_SN_PriorityManagement(
  /* PriorityManagement::From_SN::Condition1 */kcg_bool Condition1,
  /* PriorityManagement::From_SN::Condition5 */kcg_bool Condition5,
  /* PriorityManagement::From_SN::Condition13 */kcg_bool Condition13,
  /* PriorityManagement::From_SN::Condition21 */kcg_bool Condition21,
  /* PriorityManagement::From_SN::Condition25 */kcg_bool Condition25,
  /* PriorityManagement::From_SN::Condition28 */kcg_bool Condition28,
  /* PriorityManagement::From_SN::Condition29 */kcg_bool Condition29,
  /* PriorityManagement::From_SN::Condition34 */kcg_bool Condition34,
  /* PriorityManagement::From_SN::Condition44 */kcg_bool Condition44,
  /* PriorityManagement::From_SN::Condition45 */kcg_bool Condition45,
  /* PriorityManagement::From_SN::Condition61 */kcg_bool Condition61,
  /* PriorityManagement::From_SN::Condition71 */kcg_bool Condition71,
  /* PriorityManagement::From_SN::ConditionSN2TR */kcg_bool ConditionSN2TR,
  /* PriorityManagement::From_SN::previousMode_Loc */T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SN::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* PriorityManagement::From_SN::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SN::FromSN_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSN_To_NewMode;
  
  if (Condition1) {
    FromSN_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else if (Condition29) {
    FromSN_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else if (Condition13) {
    FromSN_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else {
    _1_else_clock_IfBlock1 = Condition44 | Condition45;
    if (_1_else_clock_IfBlock1) {
      FromSN_To_NewMode = SR_Level_And_Mode_Types_Pkg;
    }
    else if (ConditionSN2TR) {
      FromSN_To_NewMode = TR_Level_And_Mode_Types_Pkg;
    }
    else if (Condition28) {
      FromSN_To_NewMode = SB_Level_And_Mode_Types_Pkg;
    }
    else if (Condition25) {
      FromSN_To_NewMode = FS_Level_And_Mode_Types_Pkg;
    }
    else {
      else_clock_IfBlock1 = Condition5 | Condition61;
      if (else_clock_IfBlock1) {
        FromSN_To_NewMode = SH_Level_And_Mode_Types_Pkg;
      }
      else if (Condition21) {
        FromSN_To_NewMode = UN_Level_And_Mode_Types_Pkg;
      }
      else if (Condition71) {
        FromSN_To_NewMode = LS_Level_And_Mode_Types_Pkg;
      }
      else if (Condition34) {
        FromSN_To_NewMode = OS_Level_And_Mode_Types_Pkg;
      }
      else {
        FromSN_To_NewMode = previousMode_Loc;
      }
    }
  }
  return FromSN_To_NewMode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** From_SN_PriorityManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

