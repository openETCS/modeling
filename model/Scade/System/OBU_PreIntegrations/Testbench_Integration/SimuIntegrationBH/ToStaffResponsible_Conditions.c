/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToStaffResponsible_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToStaffResponsible_init_Conditions(
  outC_ToStaffResponsible_Conditions *outC)
{
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
  outC->Condition37 = kcg_true;
  outC->Condition45 = kcg_true;
  outC->Condition44 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToStaffResponsible_reset_Conditions(
  outC_ToStaffResponsible_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToStaffResponsible */
void ToStaffResponsible_Conditions(
  /* Conditions::ToStaffResponsible::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToStaffResponsible::Driver_Req_Override */ kcg_bool Driver_Req_Override,
  /* Conditions::ToStaffResponsible::Train_Speed_Under_Override_Limit */ kcg_bool Train_Speed_Under_Override_Limit,
  /* Conditions::ToStaffResponsible::Override_Function_Active */ kcg_bool Override_Function_Active,
  /* Conditions::ToStaffResponsible::Emergency_Stop_Message_Received */ kcg_bool Emergency_Stop_Message_Received,
  outC_ToStaffResponsible_Conditions *outC)
{
  /* Conditions::ToStaffResponsible::Current_Level */
  static M_LEVEL last_Current_Level;
  /* Conditions::ToStaffResponsible::Level_prev_L0_LNTC */
  static kcg_bool Level_prev_L0_LNTC;
  /* Conditions::ToStaffResponsible::Level_L2_L3 */
  static kcg_bool Level_L2_L3;
  /* Conditions::ToStaffResponsible::Level_L1 */
  static kcg_bool Level_L1;
  /* Conditions::ToStaffResponsible::_L374 */
  static kcg_bool _L374;
  /* Conditions::ToStaffResponsible::_L429 */
  static kcg_bool _L429;
  /* Conditions::ToStaffResponsible::_L436 */
  static kcg_bool _L436;
  /* Conditions::ToStaffResponsible::_L437 */
  static kcg_bool _L437;
  /* Conditions::ToStaffResponsible::_L451 */
  static kcg_bool _L451;
  /* Conditions::ToStaffResponsible::_L456 */
  static kcg_bool _L456;
  /* Conditions::ToStaffResponsible::_L457 */
  static kcg_bool _L457;
  /* Conditions::ToStaffResponsible::_L458 */
  static kcg_bool _L458;
  /* Conditions::ToStaffResponsible::_L459 */
  static kcg_bool _L459;
  /* Conditions::ToStaffResponsible::_L465 */
  static kcg_bool _L465;
  /* Conditions::ToStaffResponsible::_L461 */
  static kcg_bool _L461;
  /* Conditions::ToStaffResponsible::_L460 */
  static kcg_bool _L460;
  /* Conditions::ToStaffResponsible::_L466 */
  static kcg_bool _L466;
  /* Conditions::ToStaffResponsible::_L467 */
  static kcg_bool _L467;
  /* Conditions::ToStaffResponsible::_L468 */
  static kcg_bool _L468;
  /* Conditions::ToStaffResponsible::_L469 */
  static kcg_bool _L469;
  
  _L461 = (Current_Level == M_LEVEL_Level_2) | (Current_Level ==
      M_LEVEL_Level_3);
  Level_L2_L3 = _L461;
  _L467 = Level_L2_L3;
  /* last_init_ck_Current_Level */ if (outC->init) {
    last_Current_Level = M_LEVEL_Level_0;
  }
  else {
    last_Current_Level = outC->rem_Current_Level;
  }
  _L460 = (last_Current_Level == M_LEVEL_Level_0) | (last_Current_Level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC);
  Level_prev_L0_LNTC = _L460;
  _L469 = Level_prev_L0_LNTC;
  _L457 = Override_Function_Active;
  _L458 = Emergency_Stop_Message_Received;
  _L459 = !_L458;
  _L374 = _L467 & _L469 & _L457 & _L459;
  _L436 = Driver_Req_Override;
  _L437 = Train_Speed_Under_Override_Limit;
  _L429 = _L436 & _L437;
  _L465 = Current_Level == M_LEVEL_Level_1;
  Level_L1 = _L465;
  _L466 = Level_L1;
  _L468 = Level_prev_L0_LNTC;
  _L456 = Override_Function_Active;
  _L451 = _L466 & _L468 & _L456;
  outC->Condition44 = _L451;
  outC->Condition45 = _L374;
  outC->Condition37 = _L429;
  outC->rem_Current_Level = Current_Level;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToStaffResponsible_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

