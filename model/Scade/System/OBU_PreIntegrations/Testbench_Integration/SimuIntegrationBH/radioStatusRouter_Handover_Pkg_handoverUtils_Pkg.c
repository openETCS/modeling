/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "radioStatusRouter_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter */
void radioStatusRouter_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatus_1 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatus_2 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromAcceptingRBC */ morcStatus_T_RCM_Session_Types_Pkg *_4_morcStatusFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromHandingOverRBC */ morcStatus_T_RCM_Session_Types_Pkg *_3_morcStatusFromHandingOverRBC)
{
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromHandingOverRBC */
  static morcStatus_T_RCM_Session_Types_Pkg _2_morcStatusFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromAcceptingRBC */
  static morcStatus_T_RCM_Session_Types_Pkg _1_morcStatusFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::IfBlock1::then::_L11 */
  static morcStatus_T_RCM_Session_Types_Pkg _L11_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromHandingOverRBC */
  static morcStatus_T_RCM_Session_Types_Pkg morcStatusFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromAcceptingRBC */
  static morcStatus_T_RCM_Session_Types_Pkg morcStatusFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::IfBlock1::else::_L40 */
  static morcStatus_T_RCM_Session_Types_Pkg _L40_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::IfBlock1::else::_L39 */
  static morcStatus_T_RCM_Session_Types_Pkg _L39_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::IfBlock1::else::_L35 */
  static morcStatus_T_RCM_Session_Types_Pkg _L35_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::IfBlock1::else::_L34 */
  static morcStatus_T_RCM_Session_Types_Pkg _L34_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::IfBlock1::else::_L18 */
  static kcg_bool _L18_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L11_IfBlock1, morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_1_morcStatusFromAcceptingRBC,
      &_L11_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      _4_morcStatusFromAcceptingRBC,
      &_1_morcStatusFromAcceptingRBC);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_2_morcStatusFromHandingOverRBC,
      &_L11_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      _3_morcStatusFromHandingOverRBC,
      &_2_morcStatusFromHandingOverRBC);
  }
  else {
    _L18_IfBlock1 = handingOverMobile_is_mobile_1;
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L40_IfBlock1, morcStatus_2);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L39_IfBlock1, morcStatus_1);
    /* 22 */ if (_L18_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L35_IfBlock1,
        &_L40_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L35_IfBlock1,
        &_L39_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &morcStatusFromAcceptingRBC,
      &_L35_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      _4_morcStatusFromAcceptingRBC,
      &morcStatusFromAcceptingRBC);
    /* 21 */ if (_L18_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L34_IfBlock1,
        &_L39_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L34_IfBlock1,
        &_L40_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &morcStatusFromHandingOverRBC,
      &_L34_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      _3_morcStatusFromHandingOverRBC,
      &morcStatusFromHandingOverRBC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** radioStatusRouter_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

