/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out */
void mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_in */msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_acceptingRBC_in */msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_acceptingRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_handingOverRBC_in */msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_handingOverRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_for_handingOverRBC_in */msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_for_handingOverRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_for_acceptingRBC_in */msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_for_acceptingRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::handingOverMobile_is_mobile_1 */kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::useInformationFromAcceptingRBC */kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_1 */msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_1 */msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_1 */msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_for_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p45_radioNetworkRegistrationOrder_2 */msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::p42_sessionCmd_for_RBC_2 */msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_RBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::additionalSessionCmdsFromTrack_for_RBC_2 */msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_for_RBC_2)
{
  static msgFromTrack_T_RCM_MsgTypes_Pkg tmp3;
  static msgFromTrack_T_RCM_MsgTypes_Pkg tmp2;
  static msgFromTrack_T_RCM_MsgTypes_Pkg tmp1;
  static msgFromTrack_T_RCM_MsgTypes_Pkg tmp;
  /* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  if (IfBlock1_clock) {
    if ((*p45_radioNetworkRegistrationOrder_for_acceptingRBC_in).valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
    }
    if ((*p42_sessionCmd_for_acceptingRBC_in).valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_acceptingRBC_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_handingOverRBC_in);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      additionalSessionCmdsFromTrack_for_RBC_1,
      additionalSessionCmdsFromTrack_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p45_radioNetworkRegistrationOrder_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      p42_sessionCmd_for_RBC_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      additionalSessionCmdsFromTrack_for_RBC_2,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  }
  else {
    if (handingOverMobile_is_mobile_1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &tmp3,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &tmp2,
        additionalSessionCmdsFromTrack_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &tmp1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &tmp,
        p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_handingOverRBC_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_2,
        p42_sessionCmd_for_acceptingRBC_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &tmp3,
        additionalSessionCmdsFromTrack_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &tmp2,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &tmp1,
        p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &tmp,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_1,
        p42_sessionCmd_for_acceptingRBC_in);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p42_sessionCmd_for_RBC_2,
        p42_sessionCmd_for_handingOverRBC_in);
    }
    if (tmp.valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        &tmp);
    }
    else if (handingOverMobile_is_mobile_1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_1,
        p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    }
    if (tmp1.valid) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_2,
        &tmp1);
    }
    else if (handingOverMobile_is_mobile_1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_2,
        p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        p45_radioNetworkRegistrationOrder_2,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    if (useInformationFromAcceptingRBC) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        additionalSessionCmdsFromTrack_for_RBC_1,
        &tmp3);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        additionalSessionCmdsFromTrack_for_RBC_2,
        &tmp2);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        additionalSessionCmdsFromTrack_for_RBC_1,
        &tmp2);
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        additionalSessionCmdsFromTrack_for_RBC_2,
        &tmp3);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

