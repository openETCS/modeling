/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"

void Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  int i;
  
  outC->radioMessageConsistencyError = kcg_true;
  outC->radioSequenceError = kcg_true;
  outC->outRadioManagement.p45.nid_mn = 0;
  outC->outRadioManagement.p45.q_dir = Q_DIR_Reverse;
  outC->outRadioManagement.p45.valid = kcg_true;
  outC->outRadioManagement.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->outRadioManagement.p42.nid_radio = 0;
  outC->outRadioManagement.p42.nid_rbc = 0;
  outC->outRadioManagement.p42.nid_c = 0;
  outC->outRadioManagement.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->outRadioManagement.p42.q_dir = Q_DIR_Reverse;
  outC->outRadioManagement.p42.valid = kcg_true;
  outC->outRadioManagement.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outRadioManagement.Radio_Common_Header.d_emergencystop = 0;
  outC->outRadioManagement.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outRadioManagement.Radio_Common_Header.d_ref = 0;
  outC->outRadioManagement.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->outRadioManagement.Radio_Common_Header.d_sr = 0;
  outC->outRadioManagement.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outRadioManagement.Radio_Common_Header.nid_em = 0;
  outC->outRadioManagement.Radio_Common_Header.t_train_reference = 0.0;
  outC->outRadioManagement.Radio_Common_Header.nid_lrbg = 0;
  outC->outRadioManagement.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outRadioManagement.Radio_Common_Header.t_train = 0.0;
  outC->outRadioManagement.Radio_Common_Header.nid_message = 0;
  outC->outRadioManagement.Radio_Common_Header.receivedSystemTime = 0;
  outC->outRadioManagement.Radio_Common_Header.radioDevice = 0;
  outC->outRadioManagement.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->outRadioManagement.valid = kcg_true;
  for (i = 0; i < 2; i++) {
    outC->outPositionParams.packet58.iterPacket58List[i].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
    outC->outPositionParams.packet58.iterPacket58List[i].d_loc = 0;
  }
  outC->outPositionParams.packet58.n_iter = 0;
  outC->outPositionParams.packet58.m_loc = M_LOC_Now;
  outC->outPositionParams.packet58.d_cycloc = 0;
  outC->outPositionParams.packet58.t_cycloc = 0;
  outC->outPositionParams.packet58.q_scale = Q_SCALE_10_cm_scale;
  outC->outPositionParams.packet58.l_packet = 0;
  outC->outPositionParams.packet58.q_dir = Q_DIR_Reverse;
  outC->outPositionParams.packet58.nid_packet = 0;
  outC->outPositionParams.packet58.valid = kcg_true;
  outC->outPositionParams.bgLocation = 0;
  outC->outPositionParams.nidBG = 0;
  outC->outPositionParams.present = kcg_true;
  outC->errorUnlinkedBG = kcg_true;
  outC->errorLinkedBG = kcg_true;
  outC->BadBaliseMessageToDMI = kcg_true;
  outC->ApplyServiceBrake = kcg_true;
  for (i = 0; i < 500; i++) {
    outC->outputMessage.packets.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->outputMessage.packets.PacketHeaders[i].endAddress = 0;
    outC->outputMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->outputMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->outputMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->outputMessage.packets.PacketHeaders[i].nid_packet = 0;
  }
  outC->outputMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outputMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outputMessage.Radio_Common_Header.d_ref = 0;
  outC->outputMessage.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->outputMessage.Radio_Common_Header.d_sr = 0;
  outC->outputMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outputMessage.Radio_Common_Header.nid_em = 0;
  outC->outputMessage.Radio_Common_Header.t_train_reference = 0.0;
  outC->outputMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outputMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outputMessage.Radio_Common_Header.t_train = 0.0;
  outC->outputMessage.Radio_Common_Header.nid_message = 0;
  outC->outputMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outputMessage.Radio_Common_Header.radioDevice = 0;
  outC->outputMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outputMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outputMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outputMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outputMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outputMessage.BG_Common_Header.nid_bg = 0;
  outC->outputMessage.BG_Common_Header.nid_c = 0;
  outC->outputMessage.BG_Common_Header.m_mcount = 0;
  outC->outputMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outputMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outputMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outputMessage.BG_Common_Header.valid = kcg_true;
  outC->outputMessage.radioMetadata.m_version = kcg_true;
  outC->outputMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outputMessage.radioMetadata.q_dir = kcg_true;
  outC->outputMessage.radioMetadata.d_ref = kcg_true;
  outC->outputMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outputMessage.radioMetadata.d_sr = kcg_true;
  outC->outputMessage.radioMetadata.q_scale = kcg_true;
  outC->outputMessage.radioMetadata.nid_em = kcg_true;
  outC->outputMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outputMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outputMessage.valid = kcg_true;
  Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
  CheckEuroRadioMessage_init(&outC->Context_2);
  InformationFilter_init_InformationFilter_Pkg(&outC->Context_3);
}


void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  /* 3 */ InformationFilter_reset_InformationFilter_Pkg(&outC->Context_3);
  /* 2 */ CheckEuroRadioMessage_reset(&outC->Context_2);
  /* 1 */
  Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}

/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */ kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */ API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */ kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */ ModeAndLevelStatus_T_BG_Types_Pkg *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::connectionStatus */ sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */ kcg_int inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC)
{
  ReceivedMessage_T_Common_Types_Pkg tmp;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doBaliseBranch */ kcg_bool doBaliseBranch;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::doRadio */ kcg_bool doRadio;
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::_L21 */ ReceivedMessage_T_Common_Types_Pkg _L21;
  
  /* 1 */
  Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
    reset,
    API_trackSide_Message,
    ActualOdometry,
    &outC->Context_1);
  doBaliseBranch = outC->Context_1.outTrackMessage_for_check.valid &
    (msrc_Eurobalise_Common_Types_Pkg ==
      outC->Context_1.outTrackMessage_for_check.msg_type);
  doRadio = outC->Context_1.outTrackMessage_for_check.msg_type ==
    msrc_Euroradio_Common_Types_Pkg;
  if (doRadio) {
    /* 2 */
    CheckEuroRadioMessage(
      &outC->Context_1.outTrackMessage_for_check,
      tNvContact,
      lastRelevantEventTimestamp,
      connectionStatus,
      &outC->Context_2);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L21,
      &outC->Context_2.checkedMessage);
    outC->radioSequenceError = outC->Context_2.radioSequenceError;
    outC->radioMessageConsistencyError =
      outC->Context_2.radioMessageConsistencyError;
  }
  else {
    outC->radioMessageConsistencyError = kcg_false;
    outC->radioSequenceError = kcg_false;
  }
  if (doBaliseBranch) {
    /* 1 */
    CheckBGConsistency_CheckBGConsistency_Pkg(
      inAnnouncedBGs,
      trainPosition,
      (*modeAndLevel).m_mode,
      &outC->Context_1.outTrackMessage_for_check,
      q_nvlocacc,
      &tmp,
      &outC->ApplyServiceBrake,
      &outC->BadBaliseMessageToDMI,
      &outC->errorLinkedBG,
      &outC->errorUnlinkedBG);
  }
  else {
    if (doRadio) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&tmp, &_L21);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &tmp,
        (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    }
    outC->errorUnlinkedBG = kcg_false;
    outC->errorLinkedBG = kcg_false;
    outC->BadBaliseMessageToDMI = kcg_false;
    outC->ApplyServiceBrake = kcg_false;
  }
  /* 1 */
  validateDataDirection_ValidateDataDirection_Pkg(
    &tmp,
    &(*trainPosition).LRBG,
    inAnnouncedBGs,
    trainPosition,
    &_L21);
  if (_L21.valid) {
    /* 3 */
    InformationFilter_InformationFilter_Pkg(
      &_L21,
      (*modeAndLevel).m_level,
      (*modeAndLevel).m_mode,
      inSupervisingRbcId,
      kcg_false,
      kcg_false,
      kcg_false,
      kcg_false,
      0,
      kcg_false,
      0,
      kcg_false,
      &outC->Context_3);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outputMessage,
      &outC->Context_3.outMessage);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outputMessage,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  /* 3 */
  getRadioManagement_packagesSupport_Pkg(
    &outC->outputMessage,
    &outC->outRadioManagement);
  /* 3 */
  getParameterPositionReport_packagesSupport_Pkg(
    &outC->outputMessage,
    &outC->outPositionParams);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

