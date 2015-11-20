/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countPackets_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void countPackets_init_xdebugSupport_Pkg(
  outC_countPackets_xdebugSupport_Pkg *outC)
{
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L12 = 0;
  outC->_L11 = 0;
  for (i = 0; i < 30; i++) {
    outC->_L10.PacketHeaders[i].nid_packet = 0;
    outC->_L10.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L10.PacketHeaders[i].valid = kcg_true;
    outC->_L10.PacketHeaders[i].startAddress = 0;
    outC->_L10.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L10.PacketData[i1] = 0;
  }
  outC->_L7 = kcg_true;
  outC->_L6 = 0;
  outC->_L5 = 0;
  outC->_L3 = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L2[i2].nid_packet = 0;
    outC->_L2[i2].q_dir = Q_DIR_Reverse;
    outC->_L2[i2].valid = kcg_true;
    outC->_L2[i2].startAddress = 0;
    outC->_L2[i2].endAddress = 0;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTimeMsgReceived = 0;
  outC->_L1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1.btm_msg.present = kcg_true;
  outC->_L1.btm_msg.checkResult = kcg_true;
  outC->_L1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1.btm_msg.api_header.m_mcount = 0;
  outC->_L1.btm_msg.api_header.nid_c = 0;
  outC->_L1.btm_msg.api_header.nid_bg = 0;
  outC->_L1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1.rtm_msg.present = kcg_true;
  outC->_L1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L1.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L1.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L1.packets.PacketHeaders[i3].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i3].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i3].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i3].endAddress = 0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->_L1.packets.PacketData[i4] = 0;
  }
  outC->count = 0;
  for (i5 = 0; i5 < 30; i5++) {
    /* 1 */ countBasics_init_xdebugSupport_Pkg(&outC->Context_1[i5]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countPackets_reset_xdebugSupport_Pkg(
  outC_countPackets_xdebugSupport_Pkg *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */ countBasics_reset_xdebugSupport_Pkg(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::countPackets */
void countPackets_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::countPackets::msg */ API_TrackSideInput_T_API_Msg_Pkg *msg,
  outC_countPackets_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::countPackets */
  static kcg_int acc;
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1, msg);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->_L1.packets);
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
  outC->_L12 = 1;
  outC->_L11 = outC->_L3 - outC->_L12;
  outC->count = outC->_L11;
  noname = outC->_L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countPackets_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

