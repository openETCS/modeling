/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InformationFilter_InformationFilter_Pkg.h"

void InformationFilter_init_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 500; i++) {
    outC->outMessage.packets.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->outMessage.packets.PacketHeaders[i].endAddress = 0;
    outC->outMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->outMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[i].nid_packet = 0;
  }
  outC->outMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessage.Radio_Common_Header.d_ref = 0;
  outC->outMessage.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->outMessage.Radio_Common_Header.d_sr = 0;
  outC->outMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessage.Radio_Common_Header.nid_em = 0;
  outC->outMessage.Radio_Common_Header.t_train_reference = 0.0;
  outC->outMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outMessage.Radio_Common_Header.t_train = 0.0;
  outC->outMessage.Radio_Common_Header.nid_message = 0;
  outC->outMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outMessage.Radio_Common_Header.radioDevice = 0;
  outC->outMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessage.BG_Common_Header.nid_bg = 0;
  outC->outMessage.BG_Common_Header.nid_c = 0;
  outC->outMessage.BG_Common_Header.m_mcount = 0;
  outC->outMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outMessage.BG_Common_Header.valid = kcg_true;
  outC->outMessage.radioMetadata.m_version = kcg_true;
  outC->outMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessage.radioMetadata.q_dir = kcg_true;
  outC->outMessage.radioMetadata.d_ref = kcg_true;
  outC->outMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessage.radioMetadata.d_sr = kcg_true;
  outC->outMessage.radioMetadata.q_scale = kcg_true;
  outC->outMessage.radioMetadata.nid_em = kcg_true;
  outC->outMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessage.valid = kcg_true;
  outC->outAcceptedMessage = kcg_true;
}


void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
}

/* InformationFilter_Pkg::InformationFilter */
void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inModus */ M_MODE inModus,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::InformationFilter::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::InformationFilter::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::InformationFilter::inEmergencyBrakeActive */ kcg_bool inEmergencyBrakeActive,
  /* InformationFilter_Pkg::InformationFilter::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::InformationFilter::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */ kcg_int inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */ kcg_bool inTrainDataValid,
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  kcg_bool tmp;
  /* InformationFilter_Pkg::InformationFilter::_L10 */ ReceivedMessage_T_Common_Types_Pkg _L10;
  /* InformationFilter_Pkg::InformationFilter::_L17 */ kcg_bool _L17;
  
  /* 1 */
  FirstFilter_InformationFilter_Pkg_FirstFilter(
    inMessage,
    inLevel,
    inPendingL1Transition,
    inPendingL2L3Transition,
    inPendingAckOfTrainData,
    inEmergencyBrakeActive,
    inLastAckTextMessageId,
    inPendingNTCTransition,
    &_L10,
    &tmp);
  _L17 = !tmp;
  if (_L17) {
    /* 1 */
    SecondFilter_InformationFilter_Pkg_SecondFilter(
      &_L10,
      inSupervisingDevice,
      &outC->outAcceptedMessage,
      &tmp);
  }
  else if (outC->init) {
    outC->outAcceptedMessage = kcg_false;
  }
  if (outC->outAcceptedMessage) {
    /* 1 */
    ThirdFilter_InformationFilter_Pkg_ThirdFilter(
      &_L10,
      inModus,
      &outC->outMessage);
  }
  else if (outC->init) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** InformationFilter_InformationFilter_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

