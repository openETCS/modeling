/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGFromMsg_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void getLRBGFromMsg_init_xdebugSupport_Pkg(
  outC_getLRBGFromMsg_xdebugSupport_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L34 = 0;
  outC->_L33 = 0;
  outC->_L32 = 0;
  outC->_L25 = 0;
  outC->_L24 = 0;
  outC->_L23 = 0;
  outC->_L21 = 0;
  outC->_L22.valid = kcg_true;
  outC->_L22.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L22.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.q_media = Q_MEDIA_Balise;
  outC->_L22.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L22.m_mcount = 0;
  outC->_L22.nid_c = 0;
  outC->_L22.nid_bg = 0;
  outC->_L22.q_link = Q_LINK_Unlinked;
  outC->_L22.bgPosition.valid = kcg_true;
  outC->_L22.bgPosition.timestamp = 0;
  outC->_L22.bgPosition.odo.o_nominal = 0;
  outC->_L22.bgPosition.odo.o_min = 0;
  outC->_L22.bgPosition.odo.o_max = 0;
  outC->_L22.bgPosition.speed.v_safeNominal = 0;
  outC->_L22.bgPosition.speed.v_rawNominal = 0;
  outC->_L22.bgPosition.speed.v_lower = 0;
  outC->_L22.bgPosition.speed.v_upper = 0;
  outC->_L22.bgPosition.acceleration = 0;
  outC->_L22.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L22.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L22.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L22.q_nvlocacc = 0;
  outC->_L22.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L22.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L22.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L18 = msrc_undefined_Common_Types_Pkg;
  outC->_L19 = msrc_undefined_Common_Types_Pkg;
  outC->_L20 = kcg_true;
  outC->_L17 = 0;
  outC->_L3.radioDevice = 0;
  outC->_L3.receivedSystemTime = 0;
  outC->_L3.nid_message = 0;
  outC->_L3.t_train = 0;
  outC->_L3.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3.nid_lrbg = 0;
  outC->_L3.t_train_reference = 0;
  outC->_L3.nid_em = 0;
  outC->_L3.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.d_sr = 0;
  outC->_L3.t_sh_rqst = 0;
  outC->_L3.d_ref = 0;
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.d_emergencystop = 0;
  outC->_L3.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4 = 0;
  outC->_L5 = msrc_undefined_Common_Types_Pkg;
  outC->_L6.valid = kcg_true;
  outC->_L6.source = msrc_undefined_Common_Types_Pkg;
  outC->_L6.radioMetadata.t_train_reference = kcg_true;
  outC->_L6.radioMetadata.nid_em = kcg_true;
  outC->_L6.radioMetadata.q_scale = kcg_true;
  outC->_L6.radioMetadata.d_sr = kcg_true;
  outC->_L6.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L6.radioMetadata.d_ref = kcg_true;
  outC->_L6.radioMetadata.q_dir = kcg_true;
  outC->_L6.radioMetadata.d_emergencystop = kcg_true;
  outC->_L6.radioMetadata.m_version = kcg_true;
  outC->_L6.BG_Common_Header.valid = kcg_true;
  outC->_L6.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L6.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.BG_Common_Header.m_mcount = 0;
  outC->_L6.BG_Common_Header.nid_c = 0;
  outC->_L6.BG_Common_Header.nid_bg = 0;
  outC->_L6.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L6.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L6.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L6.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L6.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L6.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L6.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L6.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L6.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L6.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L6.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L6.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L6.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L6.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L6.BG_Common_Header.q_nvlocacc = 0;
  outC->_L6.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L6.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L6.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L6.Radio_Common_Header.radioDevice = 0;
  outC->_L6.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L6.Radio_Common_Header.nid_message = 0;
  outC->_L6.Radio_Common_Header.t_train = 0;
  outC->_L6.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L6.Radio_Common_Header.nid_lrbg = 0;
  outC->_L6.Radio_Common_Header.t_train_reference = 0;
  outC->_L6.Radio_Common_Header.nid_em = 0;
  outC->_L6.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.Radio_Common_Header.d_sr = 0;
  outC->_L6.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L6.Radio_Common_Header.d_ref = 0;
  outC->_L6.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L6.Radio_Common_Header.d_emergencystop = 0;
  outC->_L6.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->_L6.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L6.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[i].startAddress = 0;
    outC->_L6.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L6.packets.PacketData[i1] = 0;
  }
  outC->_L6.sendingRBC.valid = kcg_true;
  outC->_L6.sendingRBC.nid_c = 0;
  outC->_L6.sendingRBC.rbc_id = 0;
  outC->_L6.sendingRBC.device_id = 0;
  outC->_L7 = kcg_true;
  outC->_L8 = msrc_undefined_Common_Types_Pkg;
  outC->LRBG = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getLRBGFromMsg_reset_xdebugSupport_Pkg(
  outC_getLRBGFromMsg_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::getLRBGFromMsg */
void getLRBGFromMsg_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::getLRBGFromMsg::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  outC_getLRBGFromMsg_xdebugSupport_Pkg *outC)
{
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L6, actualMessage);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L3,
    &outC->_L6.Radio_Common_Header);
  outC->_L4 = outC->_L3.nid_lrbg;
  outC->_L5 = outC->_L6.source;
  outC->_L8 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L7 = outC->_L5 == outC->_L8;
  outC->_L18 = outC->_L6.source;
  outC->_L19 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L20 = outC->_L18 == outC->_L19;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L22, &outC->_L6.BG_Common_Header);
  outC->_L21 = outC->_L22.nid_bg;
  outC->_L23 = outC->_L22.nid_c;
  outC->_L34 = 100000;
  outC->_L32 = outC->_L23 * outC->_L34;
  outC->_L33 = outC->_L21 + outC->_L32;
  outC->_L25 = 0;
  /* 2 */ if (outC->_L20) {
    outC->_L24 = outC->_L33;
  }
  else {
    outC->_L24 = outC->_L25;
  }
  /* 1 */ if (outC->_L7) {
    outC->_L17 = outC->_L4;
  }
  else {
    outC->_L17 = outC->_L24;
  }
  outC->LRBG = outC->_L17;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLRBGFromMsg_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

