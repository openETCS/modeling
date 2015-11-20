/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToStaffResponsible_Conditions.h"

void ToStaffResponsible_reset_Conditions(
  outC_ToStaffResponsible_Conditions *outC)
{
  outC->init = kcg_true;
}

/* Conditions::ToStaffResponsible */
void ToStaffResponsible_Conditions(
  /* Conditions::ToStaffResponsible::Current_Level */M_LEVEL Current_Level,
  /* Conditions::ToStaffResponsible::Driver_Req_Override */kcg_bool Driver_Req_Override,
  /* Conditions::ToStaffResponsible::Train_Speed_Under_Override_Limit */kcg_bool Train_Speed_Under_Override_Limit,
  /* Conditions::ToStaffResponsible::Override_Function_Active */kcg_bool Override_Function_Active,
  /* Conditions::ToStaffResponsible::Emergency_Stop_Message_Received */kcg_bool Emergency_Stop_Message_Received,
  outC_ToStaffResponsible_Conditions *outC)
{
  /* Conditions::ToStaffResponsible::Current_Level */
  static M_LEVEL last_Current_Level;
  /* Conditions::ToStaffResponsible::Level_prev_L0_LNTC */
  static kcg_bool Level_prev_L0_LNTC;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_Current_Level = M_LEVEL_Level_0;
  }
  else {
    last_Current_Level = outC->rem_Current_Level;
  }
  Level_prev_L0_LNTC = (last_Current_Level == M_LEVEL_Level_0) |
    (last_Current_Level == M_LEVEL_Level_NTC_specified_by_NID_NTC);
  outC->Condition44 = (Current_Level == M_LEVEL_Level_1) & Level_prev_L0_LNTC &
    Override_Function_Active;
  outC->Condition37 = Driver_Req_Override & Train_Speed_Under_Override_Limit;
  outC->Condition45 = ((Current_Level == M_LEVEL_Level_2) | (Current_Level ==
        M_LEVEL_Level_3)) & Level_prev_L0_LNTC & Override_Function_Active &
    !Emergency_Stop_Message_Received;
  outC->rem_Current_Level = Current_Level;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToStaffResponsible_Conditions.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

