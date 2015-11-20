/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"

void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  outC->init = kcg_true;
  /* 3 */ InformationFilter_reset_InformationFilter_Pkg(&outC->Context_3);
  /* 1 */ combineForLevelChange_reset_xdebugSupport_Pkg(&outC->Context_1);
  /* 1 */
  CheckEuroRadioMessage_reset_CheckEuroradioMessage(&outC->_1_Context_1);
  /* 1 */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(&outC->_2_Context_1);
}

/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::intrainVersion */M_VERSION intrainVersion,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::radioStatus */morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */connection_ids_T_Handover_Pkg *inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inActiveCab */kcg_bool inActiveCab,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inTrainDataValid */kcg_bool inTrainDataValid,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::transitionPositionPassed */kcg_bool transitionPositionPassed,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  static ReceivedMessage_T_Common_Types_Pkg tmp9;
  static positionedBG_T_TrainPosition_Types_Pck tmp8;
  static kcg_bool tmp7;
  static kcg_bool tmp6;
  static kcg_bool tmp5;
  static kcg_bool tmp4;
  static kcg_bool tmp3;
  static kcg_bool tmp2;
  static kcg_bool tmp1;
  static NID_ERRORBG_BG_Types_Pkg tmp;
  static NID_C tmp13;
  static NID_ERRORBG_BG_Types_Pkg tmp14;
  static kcg_bool tmp10;
  static kcg_bool tmp11;
  static ReceivedMessage_T_Common_Types_Pkg tmp12;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doBaliseBranch */
  static kcg_bool doBaliseBranch;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doRadio */
  static kcg_bool doRadio;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPositionTest */
  static trainPosition_T_TrainPosition_Types_Pck trainPositionTest;
  
  /* 1 */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    reset,
    API_trackSide_Message,
    ActualOdometry,
    &outC->_2_Context_1);
  doBaliseBranch = outC->_2_Context_1.outTrackMessage_for_check.valid &
    (msrc_Eurobalise_Common_Types_Pkg ==
      outC->_2_Context_1.outTrackMessage_for_check.msg_type);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &trainPositionTest,
    trainPosition);
  trainPositionTest.trainPositionIsUnknown = kcg_false;
  doRadio = outC->_2_Context_1.outTrackMessage_for_check.msg_type ==
    msrc_Euroradio_Common_Types_Pkg;
  if (doRadio) {
    /* 1 */
    CheckEuroRadioMessage_CheckEuroradioMessage(
      &outC->_2_Context_1.outTrackMessage_for_check,
      tNvContact,
      lastRelevantEventTimestamp,
      radioStatus,
      fullChecks,
      &outC->_1_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &tmp12,
      &outC->_1_Context_1.checkedMessage);
    tmp2 = outC->_1_Context_1.radioSequenceError;
    tmp1 = outC->_1_Context_1.tNvContactError;
    tmp11 = outC->_1_Context_1.otherTimingError;
    tmp10 = outC->_1_Context_1.radioMessageConsistencyError;
  }
  if (doBaliseBranch) {
    /* 1 */
    CheckBGConsistency_CheckBGConsistency_Pkg(
      inAnnouncedBGs,
      &trainPositionTest,
      (*modeAndLevel).Mode,
      &outC->_2_Context_1.outTrackMessage_for_check,
      q_nvlocacc,
      intrainVersion,
      &tmp9,
      &outC->ApplyServiceBrake,
      &outC->BadBaliseMessageToDMI,
      &tmp3,
      &tmp5,
      &tmp4,
      &tmp14,
      &tmp13);
  }
  else {
    outC->ApplyServiceBrake = kcg_false;
    outC->BadBaliseMessageToDMI = kcg_false;
    if (doRadio) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&tmp9, &tmp12);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &tmp9,
        (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    }
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &tmp8,
    &(*trainPosition).LRBG);
  tmp8.valid = kcg_true;
  /* 1 */
  validateDataDirection_ValidateDataDirection_Pkg(
    &tmp9,
    &tmp8,
    inAnnouncedBGs,
    &trainPositionTest,
    &outC->outputMessageForRadioAck);
  if (outC->init) {
    outC->init = kcg_false;
    tmp6 = kcg_false;
  }
  else {
    tmp6 = outC->rem_transitionPositionPassed;
  }
  /* 1 */
  combineForLevelChange_xdebugSupport_Pkg(
    &outC->outputMessageForRadioAck,
    modeAndLevel,
    tmp6,
    trainPosition,
    inFilterEvents,
    trainProperties,
    &outC->Context_1);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->forLevelManagement,
    &outC->Context_1.forLevelManagement);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML,
    &outC->Context_1.Data_to_From_Track_Packets_at_ML);
  if (doBaliseBranch) {
    outC->outCheckErrors.linkedBGError = tmp3;
    tmp7 = tmp5;
    tmp6 = tmp4;
  }
  else {
    tmp6 = kcg_false;
    tmp7 = kcg_false;
    outC->outCheckErrors.linkedBGError = kcg_false;
  }
  outC->outCheckErrors.unlinkedBGError = tmp7;
  outC->outCheckErrors.BG_versionIncompatible = tmp6;
  if (doRadio) {
    outC->outCheckErrors.radioSequenceError = tmp2;
    tmp4 = tmp1;
  }
  else {
    tmp4 = kcg_false;
    outC->outCheckErrors.radioSequenceError = kcg_false;
  }
  outC->outCheckErrors.tNvContactError = tmp4 | /* 1 */
    ContinuousTimeoutCheck_CheckEuroradioMessage(
      (*ActualOdometry).timestamp,
      tNvContact,
      lastRelevantEventTimestamp,
      fullChecks,
      radioStatus);
  if (doRadio) {
    outC->outCheckErrors.otherTimingError = tmp11;
    tmp1 = tmp10;
  }
  else {
    tmp1 = kcg_false;
    outC->outCheckErrors.otherTimingError = kcg_false;
  }
  outC->outCheckErrors.radioMessageConsistencyError = tmp1;
  if (doBaliseBranch) {
    outC->outCheckErrors.nid_c = tmp13;
    tmp = tmp14;
  }
  else {
    outC->outCheckErrors.nid_c = 0;
    tmp = cUnknownBG_BG_Types_Pkg;
  }
  outC->outCheckErrors.nid_errorbg = tmp;
  /* 3 */
  InformationFilter_InformationFilter_Pkg(
    &outC->outputMessageForRadioAck,
    (*modeAndLevel).level,
    (*modeAndLevel).Mode,
    0,
    &outC->Context_1.outFilterEvents,
    inActiveCab,
    inTrainDataValid,
    radioStatus,
    &outC->Context_3);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outputMessage,
    &outC->Context_3.outMessage);
  outC->rem_transitionPositionPassed = transitionPositionPassed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

