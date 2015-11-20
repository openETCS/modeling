/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_OS_PriorityManagement.h"

/* PriorityManagement::From_OS */
T_Mode_Level_And_Mode_Types_Pkg From_OS_PriorityManagement(
  /* PriorityManagement::From_OS::Condition1 */kcg_bool Condition1,
  /* PriorityManagement::From_OS::Condition5 */kcg_bool Condition5,
  /* PriorityManagement::From_OS::Condition6 */kcg_bool Condition6,
  /* PriorityManagement::From_OS::Condition13 */kcg_bool Condition13,
  /* PriorityManagement::From_OS::Condition21 */kcg_bool Condition21,
  /* PriorityManagement::From_OS::Condition28 */kcg_bool Condition28,
  /* PriorityManagement::From_OS::Condition29 */kcg_bool Condition29,
  /* PriorityManagement::From_OS::Condition31 */kcg_bool Condition31,
  /* PriorityManagement::From_OS::Condition32 */kcg_bool Condition32,
  /* PriorityManagement::From_OS::Condition37 */kcg_bool Condition37,
  /* PriorityManagement::From_OS::Condition46 */kcg_bool Condition46,
  /* PriorityManagement::From_OS::Condition50 */kcg_bool Condition50,
  /* PriorityManagement::From_OS::Condition51 */kcg_bool Condition51,
  /* PriorityManagement::From_OS::Condition56 */kcg_bool Condition56,
  /* PriorityManagement::From_OS::Condition59 */kcg_bool Condition59,
  /* PriorityManagement::From_OS::Condition70 */kcg_bool Condition70,
  /* PriorityManagement::From_OS::Condition74 */kcg_bool Condition74,
  /* PriorityManagement::From_OS::ConditionOS2TR */kcg_bool ConditionOS2TR,
  /* PriorityManagement::From_OS::previousMode_Loc */T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc)
{
  /* PriorityManagement::From_OS::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* PriorityManagement::From_OS::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* PriorityManagement::From_OS::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* PriorityManagement::From_OS::FromOS_To_NewMode */
  static T_Mode_Level_And_Mode_Types_Pkg FromOS_To_NewMode;
  
  if (Condition1) {
    FromOS_To_NewMode = IS_Level_And_Mode_Types_Pkg;
  }
  else if (Condition29) {
    FromOS_To_NewMode = NP_Level_And_Mode_Types_Pkg;
  }
  else if (Condition13) {
    FromOS_To_NewMode = SF_Level_And_Mode_Types_Pkg;
  }
  else if (ConditionOS2TR) {
    FromOS_To_NewMode = TR_Level_And_Mode_Types_Pkg;
  }
  else if (Condition28) {
    FromOS_To_NewMode = SB_Level_And_Mode_Types_Pkg;
  }
  else if (Condition46) {
    FromOS_To_NewMode = NL_Level_And_Mode_Types_Pkg;
  }
  else {
    _2_else_clock_IfBlock1 = Condition5 | Condition6 | Condition50 |
      Condition51;
    if (_2_else_clock_IfBlock1) {
      FromOS_To_NewMode = SH_Level_And_Mode_Types_Pkg;
    }
    else if (Condition56) {
      FromOS_To_NewMode = SN_Level_And_Mode_Types_Pkg;
    }
    else {
      _1_else_clock_IfBlock1 = Condition70 | Condition74;
      if (_1_else_clock_IfBlock1) {
        FromOS_To_NewMode = LS_Level_And_Mode_Types_Pkg;
      }
      else if (Condition37) {
        FromOS_To_NewMode = SR_Level_And_Mode_Types_Pkg;
      }
      else {
        else_clock_IfBlock1 = Condition31 | Condition32;
        if (else_clock_IfBlock1) {
          FromOS_To_NewMode = OS_Level_And_Mode_Types_Pkg;
        }
        else if (Condition21) {
          FromOS_To_NewMode = UN_Level_And_Mode_Types_Pkg;
        }
        else if (Condition59) {
          FromOS_To_NewMode = RV_Level_And_Mode_Types_Pkg;
        }
        else {
          FromOS_To_NewMode = previousMode_Loc;
        }
      }
    }
  }
  return FromOS_To_NewMode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** From_OS_PriorityManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

