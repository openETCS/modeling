/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "processHandingOver_Handover_Pkg_handoverUtils_Pkg.h"

void processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  /* 2 */ EitherEdge_reset_digital(&outC->Context_2);
  /* 1 */ EitherEdge_reset_digital(&outC->Context_1);
  /* 1 */
  handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(&outC->_1_Context_1);
  /* 2 */
  locReachedOrPassed_reset_BasicLocationFunctions_Pkg(&outC->_2_Context_2);
  /* 1 */
  locReachedOrPassed_reset_BasicLocationFunctions_Pkg(&outC->_3_Context_1);
  /* 3 */
  changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(&outC->Context_3);
}

/* Handover_Pkg::handoverUtils_Pkg::processHandingOver */
void processHandingOver_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::mode */M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_1 */morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_2 */morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::dataFromTrack_in */msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static kcg_bool tmp2;
  static positionedBG_T_TrainPosition_Types_Pck tmp1;
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::p131_RBCTransitionOrder_dec */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg p131_RBCTransitionOrder_dec;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::locationOfRBCTransition */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg locationOfRBCTransition;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L38 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L38;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L37 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L37;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L36 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L36;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L35 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L35;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L45 */
  static morcStatus_T_RCM_Session_Types_Pkg _L45;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L44 */
  static morcStatus_T_RCM_Session_Types_Pkg _L44;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L89 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L89;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L173 */
  static kcg_bool _L173;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L172 */
  static kcg_int _L172;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L176 */
  static NID_BG _L176;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L212 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L212;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L226 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L226;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L228 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L228;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L229 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L229;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L235 */
  static kcg_bool _L235;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L243 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L243;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L246 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L246;
  
  if (outC->init) {
    tmp2 = kcg_false;
  }
  else {
    tmp2 = outC->handoverInprogress;
  }
  /* 3 */
  changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
    tmp2,
    sessionManagementAbility,
    &outC->Context_3);
  outC->handingOverMobile_is_mobile_1 =
    outC->Context_3.handingOverMobile_is_mobile_1;
  if (outC->init) {
    tmp2 = kcg_false;
  }
  else {
    tmp2 = outC->useInformationFromAcceptingRBC;
  }
  /* 2 */
  splitInputData_Handover_Pkg_handoverUtils_Pkg(
    dataFromTrack_in,
    tmp2,
    outC->handingOverMobile_is_mobile_1,
    morcStatus_1,
    morcStatus_2,
    sessionManagementAbility,
    &_L1,
    &_L226,
    &_L243,
    &_L89);
  /* 1 */
  fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg(
    &_L89,
    &_L1,
    &_L246,
    &p131_RBCTransitionOrder_dec,
    &_L243,
    &_L229,
    &_L226);
  if (outC->init) {
    tmp2 = kcg_false;
  }
  else {
    tmp2 = outC->handoverFinished;
  }
  if (tmp2) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L200,
      (p131_q_rbcTransitionOrder_T_Handover_Pkg *)
        &cNoP131_RBCTransitionOrder_Handover_Pkg);
  }
  else if (p131_RBCTransitionOrder_dec.valid) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L200,
      &p131_RBCTransitionOrder_dec);
  }
  else if (outC->init) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
      &outC->_L200,
      (p131_q_rbcTransitionOrder_T_Handover_Pkg *)
        &cNoP131_RBCTransitionOrder_Handover_Pkg);
  }
  outC->init = kcg_false;
  /* 1 */
  radioStatusRouter_Handover_Pkg_handoverUtils_Pkg(
    morcStatus_1,
    morcStatus_2,
    outC->handingOverMobile_is_mobile_1,
    sessionManagementAbility,
    &_L44,
    &_L45);
  /* 1 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L200.valid,
    outC->_L200.nid_lrbg,
    &_L172,
    &_L176);
  tmp2 = outC->_L200.valid & outC->_L200.order.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &tmp1,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  tmp1.valid = outC->_L200.valid;
  tmp1.nid_c = _L172;
  tmp1.nid_bg = _L176;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &tmp1,
    BGs,
    tmp2,
    &_L172,
    &_L173,
    &_L235);
  if ((0 <= _L172) & (_L172 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &(*BGs)[_L172]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp1,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L200.order.q_scale,
    outC->_L200.order.d_rbctr,
    0,
    &_L212);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &tmp1.location,
    &_L212,
    &locationOfRBCTransition);
  /* 2 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &(*trainPosition).trainPosition,
    &(*trainProperties).d_baliseAntenna_2_frontend,
    &_L212);
  /* 1 */
  locReachedOrPassed_BasicLocationFunctions_Pkg(
    &locationOfRBCTransition,
    &_L212,
    &outC->_3_Context_1);
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = (*trainPosition).valid &
    outC->_3_Context_1.hit & tmp2 & _L173;
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &_L212,
    &(*trainProperties).d_frontend_2_rearend,
    &tmp);
  /* 2 */
  locReachedOrPassed_BasicLocationFunctions_Pkg(
    &locationOfRBCTransition,
    &tmp,
    &outC->_2_Context_2);
  /* 1 */
  handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
    &_L246,
    &_L243,
    &_L229,
    &_L44,
    &_L45,
    outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd,
    (kcg_bool) ((*trainPosition).valid & outC->_2_Context_2.hit & tmp2 & _L173),
    mode,
    sessionManagementAbility,
    &outC->_1_Context_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L89,
    &outC->_1_Context_1.p42_sessionCmd_for_acceptingRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L1,
    &outC->_1_Context_1.p42_sessionCmd_for_handingOverRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L243,
    &outC->_1_Context_1.p45_radioNetworkRegistrationOrder_for_handingOverRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L246,
    &outC->_1_Context_1.p45_radioNetworkRegistrationOrder_for_acceptingRBC);
  outC->sendPositionReport_2_handingOverRBC =
    outC->_1_Context_1.sendPositionReport_2_handingOverRBC;
  outC->sendPositionReport_2_acceptingRBC =
    outC->_1_Context_1.sendPositionReport_2_acceptingRBC;
  outC->sendTrainData_2_acceptingRBC =
    outC->_1_Context_1.sendTrainData_2_acceptingRBC;
  outC->useInformationFromAcceptingRBC =
    outC->_1_Context_1.useInformationFromAcceptingRBC;
  outC->bufferInformationFromAcceptingRBC =
    outC->_1_Context_1.bufferInformationFromAcceptingRBC;
  outC->handoverInprogress = outC->_1_Context_1.handoverInprogress;
  outC->handoverFinished = outC->_1_Context_1.handoverFinished;
  /* 1 */
  determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg(
    morcStatus_1,
    morcStatus_2,
    outC->handingOverMobile_is_mobile_1,
    outC->useInformationFromAcceptingRBC,
    sessionManagementAbility,
    &outC->supervisingRBC,
    &_L235,
    &tmp2);
  /* 1 */
  mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &_L226,
    &_L89,
    &_L1,
    &_L243,
    &_L246,
    outC->handingOverMobile_is_mobile_1,
    outC->useInformationFromAcceptingRBC,
    sessionManagementAbility,
    &_L37,
    &_L35,
    &_L228,
    &_L38,
    &_L36,
    &_L229);
  /* 2 */
  processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
    &_L37,
    &_L35,
    &_L228,
    morcStatus_1,
    cMobileDeviceNo_1_Handover_Pkg,
    &outC->sessionCmds_2_MoRC_1);
  /* 1 */
  processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
    &_L38,
    &_L36,
    &_L229,
    morcStatus_2,
    cMobileDeviceNo_2_Handover_Pkg,
    &outC->sessionCmds_2_MoRC_2);
  /* 1 */ EitherEdge_digital(outC->handoverInprogress, &outC->Context_1);
  /* 2 */ EitherEdge_digital(outC->handoverFinished, &outC->Context_2);
  outC->notReady = outC->_1_Context_1.notReady | outC->Context_1.EE_Output |
    outC->Context_2.EE_Output;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** processHandingOver_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

