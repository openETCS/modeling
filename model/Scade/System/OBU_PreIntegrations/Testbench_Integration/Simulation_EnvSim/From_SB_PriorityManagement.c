/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SB_PriorityManagement.h"

/* PriorityManagement::From_SB */
T_Mode_Level_And_Mode_Types_Pkg From_SB_PriorityManagement(
  /* PriorityManagement::From_SB::Condition1 */kcg_bool Condition1,
  /* PriorityManagement::From_SB::Condition5 */kcg_bool Condition5,
  /* PriorityManagement::From_SB::Condition6 */kcg_bool Condition6,
  /* PriorityManagement::From_SB::Condition8 */kcg_bool Condition8,
  /* PriorityManagement::From_SB::Condition10 */kcg_bool Condition10,
  /* PriorityManagement::From_SB::Condition13 */kcg_bool Condition13,
  /* PriorityManagement::From_SB::Condition14 */kcg_bool Condition14,
  /* PriorityManagement::From_SB::Condition15 */kcg_bool Condition15,
  /* PriorityManagement::From_SB::Condition29 */kcg_bool Condition29,
  /* PriorityManagement::From_SB::Condition37 */kcg_bool Condition37,
  /* PriorityManagement::From_SB::Condition46 */kcg_bool Condition46,
  /* PriorityManagement::From_SB::Condition50 */kcg_bool Condition50,
  /* PriorityManagement::From_SB::Condition58 */kcg_bool Condition58,
  /* PriorityManagement::From_SB::Condition60 */kcg_bool Condition60,
  /* PriorityManagement::From_SB::Condition70 */kcg_bool Condition70,
  /* PriorityManagement::From_SB::ConditionSB2TR */kcg_bool ConditionSB2TR,
  /* PriorityManagement::From_SB::previousMode_Loc */T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_SB::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* PriorityManagement::From_SB::FromSB_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromSB_To_NewMode;
  
  if (Condition1) {
    FromSB_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else if (Condition29) {
    FromSB_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else if (Condition13) {
    FromSB_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else if (ConditionSB2TR) {
    FromSB_To_NewMode = TR_Level_And_Mode_Types_Pkg;
  }
  else if (Condition14) {
    FromSB_To_NewMode = SL_Level_And_Mode_Types_Pkg;
  }
  else if (Condition46) {
    FromSB_To_NewMode = NL_Level_And_Mode_Types_Pkg;
  }
  else {
    _1_else_clock_IfBlock1 = Condition5 | Condition6 | Condition50;
    if (_1_else_clock_IfBlock1) {
      FromSB_To_NewMode = SH_Level_And_Mode_Types_Pkg;
    }
    else if (Condition10) {
      FromSB_To_NewMode = FS_Level_And_Mode_Types_Pkg;
    }
    else if (Condition70) {
      FromSB_To_NewMode = LS_Level_And_Mode_Types_Pkg;
    }
    else {
      else_clock_IfBlock1 = Condition8 | Condition37;
      if (else_clock_IfBlock1) {
        FromSB_To_NewMode = SR_Level_And_Mode_Types_Pkg;
      }
      else if (Condition15) {
        FromSB_To_NewMode = OS_Level_And_Mode_Types_Pkg;
      }
      else if (Condition60) {
        FromSB_To_NewMode = UN_Level_And_Mode_Types_Pkg;
      }
      else if (Condition58) {
        FromSB_To_NewMode = SN_Level_And_Mode_Types_Pkg;
      }
      else {
        FromSB_To_NewMode = previousMode_Loc;
      }
    }
  }
  return FromSB_To_NewMode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** From_SB_PriorityManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

