/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out */
void mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_acceptingRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_acceptingRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_handingOverRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_handingOverRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_for_handingOverRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_for_handingOverRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_for_acceptingRBC_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_for_acceptingRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_1 */ msgFromTrack_T_RCM_MsgTypes_Pkg *_13_p45_radioNetworkRegistrationOrder_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_1 */ msgFromTrack_T_RCM_MsgTypes_Pkg *_12_p42_sessionCmd_for_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_1 */ msgFromTrack_T_RCM_MsgTypes_Pkg *_11_additionalSessionCmdsFromTrack_for_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_2 */ msgFromTrack_T_RCM_MsgTypes_Pkg *_10_p45_radioNetworkRegistrationOrder_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_2 */ msgFromTrack_T_RCM_MsgTypes_Pkg *_9_p42_sessionCmd_for_RBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_2 */ msgFromTrack_T_RCM_MsgTypes_Pkg *_8_additionalSessionCmdsFromTrack_for_RBC_2)
{
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_2 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _6_additionalSessionCmdsFromTrack_for_RBC_2;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_2 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _5_p42_sessionCmd_for_RBC_2;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_2 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _4_p45_radioNetworkRegistrationOrder_2;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _3_additionalSessionCmdsFromTrack_for_RBC_1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _2_p42_sessionCmd_for_RBC_1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _1_p45_radioNetworkRegistrationOrder_1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::then::_L18 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L18_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::then::_L17 */
  static kcg_bool _L17_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::then::_L16 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L16_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::then::_L15 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L15_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::then::_L14 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L14_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::then::_L13 */
  static kcg_bool _L13_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::then::_L12 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L12_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::then::_L11 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L11_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::then::_L9 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L9_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_2 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg additionalSessionCmdsFromTrack_for_RBC_2;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_2 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p42_sessionCmd_for_RBC_2;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_2 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p45_radioNetworkRegistrationOrder_2;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg additionalSessionCmdsFromTrack_for_RBC_1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p42_sessionCmd_for_RBC_1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p45_radioNetworkRegistrationOrder_1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L70 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L70_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L69 */
  static kcg_bool _L69_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L68 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L68_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L67 */
  static kcg_bool _L67_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L63 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L63_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L64 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L64_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L66 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L66_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L62 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L62_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L61 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L61_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L49 */
  static kcg_bool _L49_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L60 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L60_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L59 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L59_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L58 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L58_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L52 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L52_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L51 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L51_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L50 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L50_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L47 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L47_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L46 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L46_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L44 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L44_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L43 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L43_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L41 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L41_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L40 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L40_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L39 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L39_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1::else::_L18 */
  static kcg_bool _L187_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L16_IfBlock1,
      p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    _L17_IfBlock1 = _L16_IfBlock1.valid;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L14_IfBlock1,
      p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
    /* 37 */ if (_L17_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L18_IfBlock1, &_L16_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L18_IfBlock1, &_L14_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_1_p45_radioNetworkRegistrationOrder_1,
      &_L18_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _13_p45_radioNetworkRegistrationOrder_1,
      &_1_p45_radioNetworkRegistrationOrder_1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L9_IfBlock1,
      p42_sessionCmd_for_acceptingRBC_in);
    _L13_IfBlock1 = _L9_IfBlock1.valid;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L11_IfBlock1,
      p42_sessionCmd_for_handingOverRBC_in);
    /* 25 */ if (_L13_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L12_IfBlock1, &_L9_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L12_IfBlock1, &_L11_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_2_p42_sessionCmd_for_RBC_1,
      &_L12_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _12_p42_sessionCmd_for_RBC_1,
      &_2_p42_sessionCmd_for_RBC_1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L15_IfBlock1,
      additionalSessionCmdsFromTrack_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_3_additionalSessionCmdsFromTrack_for_RBC_1,
      &_L15_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _11_additionalSessionCmdsFromTrack_for_RBC_1,
      &_3_additionalSessionCmdsFromTrack_for_RBC_1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_4_p45_radioNetworkRegistrationOrder_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _10_p45_radioNetworkRegistrationOrder_2,
      &_4_p45_radioNetworkRegistrationOrder_2);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_5_p42_sessionCmd_for_RBC_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _9_p42_sessionCmd_for_RBC_2,
      &_5_p42_sessionCmd_for_RBC_2);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_6_additionalSessionCmdsFromTrack_for_RBC_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _8_additionalSessionCmdsFromTrack_for_RBC_2,
      &_6_additionalSessionCmdsFromTrack_for_RBC_2);
  }
  else {
    _L187_IfBlock1 = handingOverMobile_is_mobile_1;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L44_IfBlock1,
      p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L61_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    /* 26 */ if (_L187_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L46_IfBlock1, &_L44_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L46_IfBlock1, &_L61_IfBlock1);
    }
    _L67_IfBlock1 = _L46_IfBlock1.valid;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L66_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L62_IfBlock1,
      p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    /* 38 */ if (_L187_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L64_IfBlock1, &_L66_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L64_IfBlock1, &_L62_IfBlock1);
    }
    /* 40 */ if (_L67_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L68_IfBlock1, &_L46_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L68_IfBlock1, &_L64_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &p45_radioNetworkRegistrationOrder_1,
      &_L68_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _13_p45_radioNetworkRegistrationOrder_1,
      &p45_radioNetworkRegistrationOrder_1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L43_IfBlock1,
      p42_sessionCmd_for_handingOverRBC_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L39_IfBlock1,
      p42_sessionCmd_for_acceptingRBC_in);
    /* 24 */ if (_L187_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L41_IfBlock1, &_L43_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L41_IfBlock1, &_L39_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &p42_sessionCmd_for_RBC_1,
      &_L41_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _12_p42_sessionCmd_for_RBC_1,
      &p42_sessionCmd_for_RBC_1);
    _L49_IfBlock1 = useInformationFromAcceptingRBC;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L51_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L58_IfBlock1,
      additionalSessionCmdsFromTrack_in);
    /* 29 */ if (_L187_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L52_IfBlock1, &_L51_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L52_IfBlock1, &_L58_IfBlock1);
    }
    /* 28 */ if (_L187_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L50_IfBlock1, &_L58_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L50_IfBlock1, &_L51_IfBlock1);
    }
    /* 35 */ if (_L49_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L59_IfBlock1, &_L52_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L59_IfBlock1, &_L50_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &additionalSessionCmdsFromTrack_for_RBC_1,
      &_L59_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _11_additionalSessionCmdsFromTrack_for_RBC_1,
      &additionalSessionCmdsFromTrack_for_RBC_1);
    /* 27 */ if (_L187_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L47_IfBlock1, &_L61_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L47_IfBlock1, &_L44_IfBlock1);
    }
    _L69_IfBlock1 = _L47_IfBlock1.valid;
    /* 39 */ if (_L187_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L63_IfBlock1, &_L62_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L63_IfBlock1, &_L66_IfBlock1);
    }
    /* 41 */ if (_L69_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L70_IfBlock1, &_L47_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L70_IfBlock1, &_L63_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &p45_radioNetworkRegistrationOrder_2,
      &_L70_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _10_p45_radioNetworkRegistrationOrder_2,
      &p45_radioNetworkRegistrationOrder_2);
    /* 23 */ if (_L187_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L40_IfBlock1, &_L39_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L40_IfBlock1, &_L43_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &p42_sessionCmd_for_RBC_2,
      &_L40_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _9_p42_sessionCmd_for_RBC_2,
      &p42_sessionCmd_for_RBC_2);
    /* 36 */ if (_L49_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L60_IfBlock1, &_L50_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L60_IfBlock1, &_L52_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &additionalSessionCmdsFromTrack_for_RBC_2,
      &_L60_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _8_additionalSessionCmdsFromTrack_for_RBC_2,
      &additionalSessionCmdsFromTrack_for_RBC_2);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

