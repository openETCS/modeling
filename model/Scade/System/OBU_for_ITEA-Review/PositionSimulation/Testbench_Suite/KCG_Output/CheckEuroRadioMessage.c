/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckEuroRadioMessage.h"

void CheckEuroRadioMessage_init(outC_CheckEuroRadioMessage *outC)
{
  int i;
  
  outC->radioMessageConsistencyError = kcg_true;
  outC->radioSequenceError = kcg_true;
  for (i = 0; i < 500; i++) {
    outC->checkedMessage.packets.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->checkedMessage.packets.PacketHeaders[i].endAddress = 0;
    outC->checkedMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->checkedMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->checkedMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->checkedMessage.packets.PacketHeaders[i].nid_packet = 0;
  }
  outC->checkedMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->checkedMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->checkedMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->checkedMessage.Radio_Common_Header.d_ref = 0;
  outC->checkedMessage.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->checkedMessage.Radio_Common_Header.d_sr = 0;
  outC->checkedMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->checkedMessage.Radio_Common_Header.nid_em = 0;
  outC->checkedMessage.Radio_Common_Header.t_train_reference = 0.0;
  outC->checkedMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->checkedMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->checkedMessage.Radio_Common_Header.t_train = 0.0;
  outC->checkedMessage.Radio_Common_Header.nid_message = 0;
  outC->checkedMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->checkedMessage.Radio_Common_Header.radioDevice = 0;
  outC->checkedMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->checkedMessage.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->checkedMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->checkedMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->checkedMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->checkedMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->checkedMessage.BG_Common_Header.nid_bg = 0;
  outC->checkedMessage.BG_Common_Header.nid_c = 0;
  outC->checkedMessage.BG_Common_Header.m_mcount = 0;
  outC->checkedMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->checkedMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->checkedMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->checkedMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->checkedMessage.BG_Common_Header.valid = kcg_true;
  outC->checkedMessage.radioMetadata.m_version = kcg_true;
  outC->checkedMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->checkedMessage.radioMetadata.q_dir = kcg_true;
  outC->checkedMessage.radioMetadata.d_ref = kcg_true;
  outC->checkedMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->checkedMessage.radioMetadata.d_sr = kcg_true;
  outC->checkedMessage.radioMetadata.q_scale = kcg_true;
  outC->checkedMessage.radioMetadata.nid_em = kcg_true;
  outC->checkedMessage.radioMetadata.t_train_reference = kcg_true;
  outC->checkedMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->checkedMessage.valid = kcg_true;
}


void CheckEuroRadioMessage_reset(outC_CheckEuroRadioMessage *outC)
{
}

/* CheckEuroRadioMessage */
void CheckEuroRadioMessage(
  /* CheckEuroRadioMessage::rtmMessage */ TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroRadioMessage::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* CheckEuroRadioMessage::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroRadioMessage::connectionStatus */ sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  outC_CheckEuroRadioMessage *outC)
{
  outC->radioMessageConsistencyError = kcg_false;
  outC->radioSequenceError = kcg_false;
  /* 7 */
  ConvertTrackSideMessageToRadioMessage(rtmMessage, &outC->checkedMessage);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckEuroRadioMessage.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

