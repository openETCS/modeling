/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPacketsMsg_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void countPacketsMsg_init_xdebugSupport_Pkg(
  outC_countPacketsMsg_xdebugSupport_Pkg *outC)
{
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L13.valid = kcg_true;
  outC->_L13.source = msrc_undefined_Common_Types_Pkg;
  outC->_L13.radioMetadata.t_train_reference = kcg_true;
  outC->_L13.radioMetadata.nid_em = kcg_true;
  outC->_L13.radioMetadata.q_scale = kcg_true;
  outC->_L13.radioMetadata.d_sr = kcg_true;
  outC->_L13.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L13.radioMetadata.d_ref = kcg_true;
  outC->_L13.radioMetadata.q_dir = kcg_true;
  outC->_L13.radioMetadata.d_emergencystop = kcg_true;
  outC->_L13.radioMetadata.m_version = kcg_true;
  outC->_L13.BG_Common_Header.valid = kcg_true;
  outC->_L13.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L13.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L13.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L13.BG_Common_Header.m_mcount = 0;
  outC->_L13.BG_Common_Header.nid_c = 0;
  outC->_L13.BG_Common_Header.nid_bg = 0;
  outC->_L13.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L13.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L13.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L13.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L13.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L13.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L13.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L13.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L13.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L13.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L13.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L13.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L13.BG_Common_Header.q_nvlocacc = 0;
  outC->_L13.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L13.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L13.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L13.Radio_Common_Header.radioDevice = 0;
  outC->_L13.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L13.Radio_Common_Header.nid_message = 0;
  outC->_L13.Radio_Common_Header.t_train = 0;
  outC->_L13.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L13.Radio_Common_Header.nid_lrbg = 0;
  outC->_L13.Radio_Common_Header.t_train_reference = 0;
  outC->_L13.Radio_Common_Header.nid_em = 0;
  outC->_L13.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.Radio_Common_Header.d_sr = 0;
  outC->_L13.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L13.Radio_Common_Header.d_ref = 0;
  outC->_L13.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L13.Radio_Common_Header.d_emergencystop = 0;
  outC->_L13.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->_L13.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L13.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[i].startAddress = 0;
    outC->_L13.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L13.packets.PacketData[i1] = 0;
  }
  outC->_L13.sendingRBC.valid = kcg_true;
  outC->_L13.sendingRBC.nid_c = 0;
  outC->_L13.sendingRBC.rbc_id = 0;
  outC->_L13.sendingRBC.device_id = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L10.PacketHeaders[i2].nid_packet = 0;
    outC->_L10.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L10.PacketHeaders[i2].valid = kcg_true;
    outC->_L10.PacketHeaders[i2].startAddress = 0;
    outC->_L10.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L10.PacketData[i3] = 0;
  }
  outC->_L7 = kcg_true;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L3 = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L2[i4].nid_packet = 0;
    outC->_L2[i4].q_dir = Q_DIR_Reverse;
    outC->_L2[i4].valid = kcg_true;
    outC->_L2[i4].startAddress = 0;
    outC->_L2[i4].endAddress = 0;
  }
  outC->count = 0;
  for (i5 = 0; i5 < 30; i5++) {
    /* 1 */ countBasics_init_xdebugSupport_Pkg(&outC->Context_1[i5]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countPacketsMsg_reset_xdebugSupport_Pkg(
  outC_countPacketsMsg_xdebugSupport_Pkg *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */ countBasics_reset_xdebugSupport_Pkg(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::countPacketsMsg */
void countPacketsMsg_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countPacketsMsg::Message */ ReceivedMessage_T_Common_Types_Pkg *Message,
  outC_countPacketsMsg_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::countPacketsMsg */
  static kcg_int acc;
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L13, Message);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->_L13.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L2, &outC->_L10.PacketHeaders);
  outC->_L6 = 0;
  outC->_L7 = kcg_true;
  outC->_L3 = outC->_L6;
  /* 1 */ if (outC->_L7) {
    /* 1 */ for (i = 0; i < 30; i++) {
      acc = outC->_L3;
      /* 1 */
      countBasics_xdebugSupport_Pkg(acc, &outC->_L2[i], &outC->Context_1[i]);
      outC->_L3 = outC->Context_1[i].count;
      outC->_L5 = i + 1;
      /* 1 */ if (!outC->Context_1[i]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L5 = 0;
  }
  outC->count = outC->_L3;
  noname = outC->_L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countPacketsMsg_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

