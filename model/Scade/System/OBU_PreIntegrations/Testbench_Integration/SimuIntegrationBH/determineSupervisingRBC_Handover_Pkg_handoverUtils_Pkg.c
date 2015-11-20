/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC */
void determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::morcStatus_1 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::morcStatus_2 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervisingRBC */ connection_ids_T_Handover_Pkg *supervisingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_1 */ kcg_bool *_13_supervising_isMobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_2 */ kcg_bool *_12_supervising_isMobile_2)
{
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervisingStatusFromMobile */
  static morcStatus_T_RCM_Session_Types_Pkg _3_supervisingStatusFromMobile;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_2 */
  static kcg_bool _2_supervising_isMobile_2;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_1 */
  static kcg_bool _1_supervising_isMobile_1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::then::_L1 */
  static morcStatus_T_RCM_Session_Types_Pkg _L1_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervisingStatusFromMobile */
  static morcStatus_T_RCM_Session_Types_Pkg supervisingStatusFromMobile;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_2 */
  static kcg_bool supervising_isMobile_2;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_1 */
  static kcg_bool supervising_isMobile_1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L21 */
  static kcg_bool _L21_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L20 */
  static kcg_bool _L20_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L19 */
  static kcg_bool _L19_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L18 */
  static kcg_bool _L18_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L17 */
  static kcg_bool _L17_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L16 */
  static kcg_bool _L16_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L15 */
  static kcg_bool _L15_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L14 */
  static kcg_bool _L14_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L7 */
  static morcStatus_T_RCM_Session_Types_Pkg _L7_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L6 */
  static morcStatus_T_RCM_Session_Types_Pkg _L6_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L4 */
  static morcStatus_T_RCM_Session_Types_Pkg _L4_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L3 */
  static morcStatus_T_RCM_Session_Types_Pkg _L34_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L2 */
  static morcStatus_T_RCM_Session_Types_Pkg _L25_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L1 */
  static kcg_bool _L110_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervisingStatusFromMobile */
  static morcStatus_T_RCM_Session_Types_Pkg _11_supervisingStatusFromMobile;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L13 */
  static connection_ids_T_Handover_Pkg _L13;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L37 */
  static morcStatus_T_RCM_Session_Types_Pkg _L37;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L44 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L44;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L45 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L45;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L46 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L46;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L47 */
  static kcg_bool _L47;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L48 */
  static kcg_bool _L48;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L49 */
  static kcg_bool _L49;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L50 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L50;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L51 */
  static kcg_bool _L51;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L52 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L52;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L53 */
  static kcg_bool _L53;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L54 */
  static NID_C _L54;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L55 */
  static NID_RBC _L55;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L56 */
  static NID_RADIO _L56;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L57 */
  static NID_MN _L57;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::_L58 */
  static kcg_int _L58;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L1_IfBlock1, morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_3_supervisingStatusFromMobile,
      &_L1_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_11_supervisingStatusFromMobile,
      &_3_supervisingStatusFromMobile);
  }
  else {
    _L5_IfBlock1 = useInformationFromAcceptingRBC;
    _L110_IfBlock1 = handingOverMobile_is_mobile_1;
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L34_IfBlock1, morcStatus_2);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L25_IfBlock1, morcStatus_1);
    /* 2 */ if (_L110_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L6_IfBlock1,
        &_L34_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L6_IfBlock1,
        &_L25_IfBlock1);
    }
    /* 1 */ if (_L110_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L4_IfBlock1,
        &_L25_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L4_IfBlock1,
        &_L34_IfBlock1);
    }
    /* 3 */ if (_L5_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L7_IfBlock1, &_L6_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L7_IfBlock1, &_L4_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &supervisingStatusFromMobile,
      &_L7_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_11_supervisingStatusFromMobile,
      &supervisingStatusFromMobile);
  }
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &_L37,
    &_11_supervisingStatusFromMobile);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(&_L46, &_L37.registration);
  _L47 = _L46.valid;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L44, &_L37.connection);
  _L48 = _L44.valid;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L45, &_L37.session);
  _L49 = _L45.valid;
  _L50 = _L45.phase;
  _L52 = sp_maintaining_RCM_Session_Types_Pkg;
  _L51 = _L50 == _L52;
  _L53 = _L47 & _L48 & _L49 & _L51;
  _L58 = _L46.mobileDeviceNo;
  _L54 = _L45.nid_c;
  _L55 = _L45.nid_rbc;
  _L56 = _L45.nid_radio;
  _L57 = _L46.nid_mn;
  _L13.valid = _L53;
  _L13.mobileDeviceNo = _L58;
  _L13.nid_c = _L54;
  _L13.nid_RBC = _L55;
  _L13.nid_radio = _L56;
  _L13.nid_mn = _L57;
  kcg_copy_connection_ids_T_Handover_Pkg(supervisingRBC, &_L13);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = kcg_true;
    _1_supervising_isMobile_1 = _L2_IfBlock1;
    *_13_supervising_isMobile_1 = _1_supervising_isMobile_1;
    _L3_IfBlock1 = kcg_false;
    _2_supervising_isMobile_2 = _L3_IfBlock1;
    *_12_supervising_isMobile_2 = _2_supervising_isMobile_2;
  }
  else {
    _L14_IfBlock1 = handingOverMobile_is_mobile_1;
    _L16_IfBlock1 = useInformationFromAcceptingRBC;
    _L17_IfBlock1 = !_L16_IfBlock1;
    _L15_IfBlock1 = _L14_IfBlock1 & _L17_IfBlock1;
    _L19_IfBlock1 = !_L14_IfBlock1;
    _L20_IfBlock1 = _L19_IfBlock1 & _L16_IfBlock1;
    _L18_IfBlock1 = _L15_IfBlock1 | _L20_IfBlock1;
    supervising_isMobile_1 = _L18_IfBlock1;
    *_13_supervising_isMobile_1 = supervising_isMobile_1;
    _L21_IfBlock1 = !_L18_IfBlock1;
    supervising_isMobile_2 = _L21_IfBlock1;
    *_12_supervising_isMobile_2 = supervising_isMobile_2;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

