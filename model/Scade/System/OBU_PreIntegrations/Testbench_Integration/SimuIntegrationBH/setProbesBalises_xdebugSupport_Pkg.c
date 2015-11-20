/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setProbesBalises_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void setProbesBalises_init_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L51 = 0;
  outC->_L50 = 0;
  outC->_L49.valid = kcg_true;
  outC->_L49.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L49.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L49.q_media = Q_MEDIA_Balise;
  outC->_L49.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L49.m_mcount = 0;
  outC->_L49.nid_c = 0;
  outC->_L49.nid_bg = 0;
  outC->_L49.q_link = Q_LINK_Unlinked;
  outC->_L49.bgPosition.valid = kcg_true;
  outC->_L49.bgPosition.timestamp = 0;
  outC->_L49.bgPosition.odo.o_nominal = 0;
  outC->_L49.bgPosition.odo.o_min = 0;
  outC->_L49.bgPosition.odo.o_max = 0;
  outC->_L49.bgPosition.speed.v_safeNominal = 0;
  outC->_L49.bgPosition.speed.v_rawNominal = 0;
  outC->_L49.bgPosition.speed.v_lower = 0;
  outC->_L49.bgPosition.speed.v_upper = 0;
  outC->_L49.bgPosition.acceleration = 0;
  outC->_L49.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L49.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L49.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L49.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L49.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L49.q_nvlocacc = 0;
  outC->_L49.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L49.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L49.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = msrc_undefined_Common_Types_Pkg;
  outC->_L45 = kcg_true;
  outC->_L43 = msrc_undefined_Common_Types_Pkg;
  outC->_L31.isChanged = kcg_true;
  outC->_L31.bg_id = 0;
  outC->_L31.nid_c = 0;
  outC->_L31.errors.linkedBGError = kcg_true;
  outC->_L31.errors.unlinkedBGError = kcg_true;
  outC->_L31.errors.BG_versionIncompatible = kcg_true;
  outC->_L31.errors.radioSequenceError = kcg_true;
  outC->_L31.errors.tNvContactError = kcg_true;
  outC->_L31.errors.otherTimingError = kcg_true;
  outC->_L31.errors.radioMessageConsistencyError = kcg_true;
  outC->_L31.errors.nid_c = 0;
  outC->_L31.errors.nid_errorbg = 0;
  outC->_L28 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = 0;
  outC->_L1.BG_Common_Header.nid_c = 0;
  outC->_L1.BG_Common_Header.nid_bg = 0;
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = 0;
  outC->_L1.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1.Radio_Common_Header.nid_message = 0;
  outC->_L1.Radio_Common_Header.t_train = 0;
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1.Radio_Common_Header.t_train_reference = 0;
  outC->_L1.Radio_Common_Header.nid_em = 0;
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = 0;
  outC->_L1.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1.Radio_Common_Header.d_ref = 0;
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->_L1.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L1.packets.PacketData[i1] = 0;
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = 0;
  outC->_L1.sendingRBC.rbc_id = 0;
  outC->_L1.sendingRBC.device_id = 0;
  outC->changedBG = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_IfBlock1.isChanged = kcg_true;
  outC->_L1_IfBlock1.bg_id = 0;
  outC->_L1_IfBlock1.nid_c = 0;
  outC->_L1_IfBlock1.errors.linkedBGError = kcg_true;
  outC->_L1_IfBlock1.errors.unlinkedBGError = kcg_true;
  outC->_L1_IfBlock1.errors.BG_versionIncompatible = kcg_true;
  outC->_L1_IfBlock1.errors.radioSequenceError = kcg_true;
  outC->_L1_IfBlock1.errors.tNvContactError = kcg_true;
  outC->_L1_IfBlock1.errors.otherTimingError = kcg_true;
  outC->_L1_IfBlock1.errors.radioMessageConsistencyError = kcg_true;
  outC->_L1_IfBlock1.errors.nid_c = 0;
  outC->_L1_IfBlock1.errors.nid_errorbg = 0;
  outC->_L2_IfBlock1.isChanged = kcg_true;
  outC->_L2_IfBlock1.bg_id = 0;
  outC->_L2_IfBlock1.nid_c = 0;
  outC->_L2_IfBlock1.errors.linkedBGError = kcg_true;
  outC->_L2_IfBlock1.errors.unlinkedBGError = kcg_true;
  outC->_L2_IfBlock1.errors.BG_versionIncompatible = kcg_true;
  outC->_L2_IfBlock1.errors.radioSequenceError = kcg_true;
  outC->_L2_IfBlock1.errors.tNvContactError = kcg_true;
  outC->_L2_IfBlock1.errors.otherTimingError = kcg_true;
  outC->_L2_IfBlock1.errors.radioMessageConsistencyError = kcg_true;
  outC->_L2_IfBlock1.errors.nid_c = 0;
  outC->_L2_IfBlock1.errors.nid_errorbg = 0;
  outC->_L32_IfBlock1 = kcg_true;
  outC->_L41_IfBlock1 = 0;
  outC->_L3_IfBlock1.isChanged = kcg_true;
  outC->_L3_IfBlock1.bg_id = 0;
  outC->_L3_IfBlock1.nid_c = 0;
  outC->_L3_IfBlock1.errors.linkedBGError = kcg_true;
  outC->_L3_IfBlock1.errors.unlinkedBGError = kcg_true;
  outC->_L3_IfBlock1.errors.BG_versionIncompatible = kcg_true;
  outC->_L3_IfBlock1.errors.radioSequenceError = kcg_true;
  outC->_L3_IfBlock1.errors.tNvContactError = kcg_true;
  outC->_L3_IfBlock1.errors.otherTimingError = kcg_true;
  outC->_L3_IfBlock1.errors.radioMessageConsistencyError = kcg_true;
  outC->_L3_IfBlock1.errors.nid_c = 0;
  outC->_L3_IfBlock1.errors.nid_errorbg = 0;
  outC->_L4_IfBlock1 = kcg_true;
  outC->_L5_IfBlock1.valid = kcg_true;
  outC->_L5_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L5_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L5_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L5_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L5_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L5_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L5_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L5_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L5_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L5_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L5_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L5_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L5_IfBlock1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5_IfBlock1.BG_Common_Header.m_mcount = 0;
  outC->_L5_IfBlock1.BG_Common_Header.nid_c = 0;
  outC->_L5_IfBlock1.BG_Common_Header.nid_bg = 0;
  outC->_L5_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L5_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L5_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L5_IfBlock1.BG_Common_Header.q_nvlocacc = 0;
  outC->_L5_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5_IfBlock1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L5_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L5_IfBlock1.Radio_Common_Header.radioDevice = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.nid_message = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.t_train = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L5_IfBlock1.Radio_Common_Header.nid_lrbg = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.t_train_reference = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.nid_em = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5_IfBlock1.Radio_Common_Header.d_sr = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.d_ref = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L5_IfBlock1.Radio_Common_Header.d_emergencystop = 0;
  outC->_L5_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L5_IfBlock1.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L5_IfBlock1.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L5_IfBlock1.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L5_IfBlock1.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L5_IfBlock1.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L5_IfBlock1.packets.PacketData[i3] = 0;
  }
  outC->_L5_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L5_IfBlock1.sendingRBC.nid_c = 0;
  outC->_L5_IfBlock1.sendingRBC.rbc_id = 0;
  outC->_L5_IfBlock1.sendingRBC.device_id = 0;
  outC->_L6_IfBlock1.valid = kcg_true;
  outC->_L6_IfBlock1.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_IfBlock1.q_media = Q_MEDIA_Balise;
  outC->_L6_IfBlock1.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6_IfBlock1.m_mcount = 0;
  outC->_L6_IfBlock1.nid_c = 0;
  outC->_L6_IfBlock1.nid_bg = 0;
  outC->_L6_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L6_IfBlock1.bgPosition.valid = kcg_true;
  outC->_L6_IfBlock1.bgPosition.timestamp = 0;
  outC->_L6_IfBlock1.bgPosition.odo.o_nominal = 0;
  outC->_L6_IfBlock1.bgPosition.odo.o_min = 0;
  outC->_L6_IfBlock1.bgPosition.odo.o_max = 0;
  outC->_L6_IfBlock1.bgPosition.speed.v_safeNominal = 0;
  outC->_L6_IfBlock1.bgPosition.speed.v_rawNominal = 0;
  outC->_L6_IfBlock1.bgPosition.speed.v_lower = 0;
  outC->_L6_IfBlock1.bgPosition.speed.v_upper = 0;
  outC->_L6_IfBlock1.bgPosition.acceleration = 0;
  outC->_L6_IfBlock1.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L6_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L6_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L6_IfBlock1.q_nvlocacc = 0;
  outC->_L6_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L6_IfBlock1.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L6_IfBlock1.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L7_IfBlock1 = 0;
  outC->_L8_IfBlock1 = 0;
  outC->_L9_IfBlock1.linkedBGError = kcg_true;
  outC->_L9_IfBlock1.unlinkedBGError = kcg_true;
  outC->_L9_IfBlock1.BG_versionIncompatible = kcg_true;
  outC->_L9_IfBlock1.radioSequenceError = kcg_true;
  outC->_L9_IfBlock1.tNvContactError = kcg_true;
  outC->_L9_IfBlock1.otherTimingError = kcg_true;
  outC->_L9_IfBlock1.radioMessageConsistencyError = kcg_true;
  outC->_L9_IfBlock1.nid_c = 0;
  outC->_L9_IfBlock1.nid_errorbg = 0;
  outC->init = kcg_true;
  outC->bgID = 0;
  outC->baliseInfo.isChanged = kcg_true;
  outC->baliseInfo.bg_id = 0;
  outC->baliseInfo.nid_c = 0;
  outC->baliseInfo.errors.linkedBGError = kcg_true;
  outC->baliseInfo.errors.unlinkedBGError = kcg_true;
  outC->baliseInfo.errors.BG_versionIncompatible = kcg_true;
  outC->baliseInfo.errors.radioSequenceError = kcg_true;
  outC->baliseInfo.errors.tNvContactError = kcg_true;
  outC->baliseInfo.errors.otherTimingError = kcg_true;
  outC->baliseInfo.errors.radioMessageConsistencyError = kcg_true;
  outC->baliseInfo.errors.nid_c = 0;
  outC->baliseInfo.errors.nid_errorbg = 0;
  outC->baliseInformation.isChanged = kcg_true;
  outC->baliseInformation.bg_id = 0;
  outC->baliseInformation.nid_c = 0;
  outC->baliseInformation.errors.linkedBGError = kcg_true;
  outC->baliseInformation.errors.unlinkedBGError = kcg_true;
  outC->baliseInformation.errors.BG_versionIncompatible = kcg_true;
  outC->baliseInformation.errors.radioSequenceError = kcg_true;
  outC->baliseInformation.errors.tNvContactError = kcg_true;
  outC->baliseInformation.errors.otherTimingError = kcg_true;
  outC->baliseInformation.errors.radioMessageConsistencyError = kcg_true;
  outC->baliseInformation.errors.nid_c = 0;
  outC->baliseInformation.errors.nid_errorbg = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setProbesBalises_reset_xdebugSupport_Pkg(
  outC_setProbesBalises_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::setProbesBalises */
void setProbesBalises_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbesBalises::inMsg */ ReceivedMessage_T_Common_Types_Pkg *inMsg,
  /* xdebugSupport_Pkg::setProbesBalises::inErrors */ MSG_Errors_T_Common_Types_Pkg *inErrors,
  outC_setProbesBalises_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::setProbesBalises::bgID */
  static NID_BG bgID2;
  /* xdebugSupport_Pkg::setProbesBalises::baliseInfo */
  static probesBalises_T_xdebugSupport_Pkg _1_baliseInfo;
  /* xdebugSupport_Pkg::setProbesBalises::bgID */
  static NID_BG bgID;
  /* xdebugSupport_Pkg::setProbesBalises::baliseInfo */
  static probesBalises_T_xdebugSupport_Pkg baliseInfo;
  /* xdebugSupport_Pkg::setProbesBalises::bgID */
  static NID_BG last_bgID;
  /* xdebugSupport_Pkg::setProbesBalises::baliseInfo */
  static probesBalises_T_xdebugSupport_Pkg last_baliseInfo;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMsg);
  /* last_init_ck_baliseInfo */ if (outC->init) {
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &last_baliseInfo,
      (probesBalises_T_xdebugSupport_Pkg *) &cNoPro_xdebugSupport_Pkg);
  }
  else {
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &last_baliseInfo,
      &outC->baliseInfo);
  }
  outC->_L20 = outC->_L1.valid;
  outC->_L43 = outC->_L1.source;
  outC->_L46 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L45 = outC->_L43 == outC->_L46;
  outC->_L28 = outC->_L20 & outC->_L45;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L49, &outC->_L1.BG_Common_Header);
  outC->_L50 = outC->_L49.nid_bg;
  /* last_init_ck_bgID */ if (outC->init) {
    last_bgID = 0;
  }
  else {
    last_bgID = outC->bgID;
  }
  outC->_L51 = last_bgID;
  outC->_L23 = outC->_L50 != outC->_L51;
  outC->_L48 = kcg_false;
  /* 1 */ if (outC->_L28) {
    outC->_L47 = outC->_L23;
  }
  else {
    outC->_L47 = outC->_L48;
  }
  outC->changedBG = outC->_L47;
  outC->IfBlock1_clock = outC->changedBG;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L4_IfBlock1 = kcg_true;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L5_IfBlock1, inMsg);
    kcg_copy_BG_Header_T_BG_Types_Pkg(
      &outC->_L6_IfBlock1,
      &outC->_L5_IfBlock1.BG_Common_Header);
    outC->_L7_IfBlock1 = outC->_L6_IfBlock1.nid_bg;
    outC->_L8_IfBlock1 = outC->_L6_IfBlock1.nid_c;
    kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L9_IfBlock1, inErrors);
    outC->_L3_IfBlock1.isChanged = outC->_L4_IfBlock1;
    outC->_L3_IfBlock1.bg_id = outC->_L7_IfBlock1;
    outC->_L3_IfBlock1.nid_c = outC->_L8_IfBlock1;
    kcg_copy_MSG_Errors_T_Common_Types_Pkg(
      &outC->_L3_IfBlock1.errors,
      &outC->_L9_IfBlock1);
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &_1_baliseInfo,
      &outC->_L3_IfBlock1);
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &outC->baliseInfo,
      &_1_baliseInfo);
  }
  else {
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &outC->_L1_IfBlock1,
      &last_baliseInfo);
    outC->_L32_IfBlock1 = kcg_false;
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &outC->_L2_IfBlock1,
      &outC->_L1_IfBlock1);
    if (kcg_true) {
      outC->_L2_IfBlock1.isChanged = outC->_L32_IfBlock1;
    }
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(
      &baliseInfo,
      &outC->_L2_IfBlock1);
    kcg_copy_probesBalises_T_xdebugSupport_Pkg(&outC->baliseInfo, &baliseInfo);
  }
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(&outC->_L31, &outC->baliseInfo);
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(
    &outC->baliseInformation,
    &outC->_L31);
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    bgID2 = outC->_L7_IfBlock1;
    outC->bgID = bgID2;
  }
  else {
    outC->_L41_IfBlock1 = last_bgID;
    bgID = outC->_L41_IfBlock1;
    outC->bgID = bgID;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setProbesBalises_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

