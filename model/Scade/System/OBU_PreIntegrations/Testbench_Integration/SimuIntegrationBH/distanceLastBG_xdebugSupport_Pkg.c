/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "distanceLastBG_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void distanceLastBG_init_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L8 = 0;
  outC->_L7 = kcg_true;
  outC->_L6 = msrc_undefined_Common_Types_Pkg;
  outC->_L5 = kcg_true;
  outC->_L4 = msrc_undefined_Common_Types_Pkg;
  outC->_L2 = kcg_true;
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
  outC->BGPassed = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_IfBlock1 = 0;
  outC->_L36_IfBlock1 = 0;
  outC->_L65_IfBlock1.valid = kcg_true;
  outC->_L65_IfBlock1.timestamp = 0;
  outC->_L65_IfBlock1.odo.o_nominal = 0;
  outC->_L65_IfBlock1.odo.o_min = 0;
  outC->_L65_IfBlock1.odo.o_max = 0;
  outC->_L65_IfBlock1.speed.v_safeNominal = 0;
  outC->_L65_IfBlock1.speed.v_rawNominal = 0;
  outC->_L65_IfBlock1.speed.v_lower = 0;
  outC->_L65_IfBlock1.speed.v_upper = 0;
  outC->_L65_IfBlock1.acceleration = 0;
  outC->_L65_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L65_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_IfBlock1.o_nominal = 0;
  outC->_L5_IfBlock1.o_min = 0;
  outC->_L5_IfBlock1.o_max = 0;
  outC->_L44_IfBlock1 = 0;
  outC->_L73_IfBlock1 = 0;
  outC->_L82_IfBlock1 = 0.0;
  outC->_L91_IfBlock1 = 0.0;
  outC->_L10_IfBlock1 = 0.0;
  outC->_L2_IfBlock1.valid = kcg_true;
  outC->_L2_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L2_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L2_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_IfBlock1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2_IfBlock1.BG_Common_Header.m_mcount = 0;
  outC->_L2_IfBlock1.BG_Common_Header.nid_c = 0;
  outC->_L2_IfBlock1.BG_Common_Header.nid_bg = 0;
  outC->_L2_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L2_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L2_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L2_IfBlock1.BG_Common_Header.q_nvlocacc = 0;
  outC->_L2_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_IfBlock1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_IfBlock1.Radio_Common_Header.radioDevice = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.nid_message = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.t_train = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_IfBlock1.Radio_Common_Header.nid_lrbg = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.t_train_reference = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.nid_em = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_IfBlock1.Radio_Common_Header.d_sr = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.d_ref = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_IfBlock1.Radio_Common_Header.d_emergencystop = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L2_IfBlock1.packets.PacketData[i3] = 0;
  }
  outC->_L2_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L2_IfBlock1.sendingRBC.nid_c = 0;
  outC->_L2_IfBlock1.sendingRBC.rbc_id = 0;
  outC->_L2_IfBlock1.sendingRBC.device_id = 0;
  outC->_L3_IfBlock1.valid = kcg_true;
  outC->_L3_IfBlock1.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_IfBlock1.q_media = Q_MEDIA_Balise;
  outC->_L3_IfBlock1.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3_IfBlock1.m_mcount = 0;
  outC->_L3_IfBlock1.nid_c = 0;
  outC->_L3_IfBlock1.nid_bg = 0;
  outC->_L3_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L3_IfBlock1.bgPosition.valid = kcg_true;
  outC->_L3_IfBlock1.bgPosition.timestamp = 0;
  outC->_L3_IfBlock1.bgPosition.odo.o_nominal = 0;
  outC->_L3_IfBlock1.bgPosition.odo.o_min = 0;
  outC->_L3_IfBlock1.bgPosition.odo.o_max = 0;
  outC->_L3_IfBlock1.bgPosition.speed.v_safeNominal = 0;
  outC->_L3_IfBlock1.bgPosition.speed.v_rawNominal = 0;
  outC->_L3_IfBlock1.bgPosition.speed.v_lower = 0;
  outC->_L3_IfBlock1.bgPosition.speed.v_upper = 0;
  outC->_L3_IfBlock1.bgPosition.acceleration = 0;
  outC->_L3_IfBlock1.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_IfBlock1.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L3_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L3_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L3_IfBlock1.q_nvlocacc = 0;
  outC->_L3_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L3_IfBlock1.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L3_IfBlock1.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L4_IfBlock1 = 0;
  outC->_L6_IfBlock1.valid = kcg_true;
  outC->_L6_IfBlock1.timestamp = 0;
  outC->_L6_IfBlock1.odo.o_nominal = 0;
  outC->_L6_IfBlock1.odo.o_min = 0;
  outC->_L6_IfBlock1.odo.o_max = 0;
  outC->_L6_IfBlock1.speed.v_safeNominal = 0;
  outC->_L6_IfBlock1.speed.v_rawNominal = 0;
  outC->_L6_IfBlock1.speed.v_lower = 0;
  outC->_L6_IfBlock1.speed.v_upper = 0;
  outC->_L6_IfBlock1.acceleration = 0;
  outC->_L6_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_IfBlock1.o_nominal = 0;
  outC->_L7_IfBlock1.o_min = 0;
  outC->_L7_IfBlock1.o_max = 0;
  outC->_L8_IfBlock1 = 0;
  outC->_L9_IfBlock1 = 0.0;
  outC->init = kcg_true;
  outC->BGLocation = 0;
  outC->BG_ID = 0;
  outC->lastBG = 0;
  outC->distance = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void distanceLastBG_reset_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::distanceLastBG */
void distanceLastBG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastBG::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastBG::msg */ ReceivedMessage_T_Common_Types_Pkg *msg,
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::distanceLastBG::BGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_BGLocation;
  /* xdebugSupport_Pkg::distanceLastBG::BG_ID */
  static NID_BG BG_ID2;
  /* xdebugSupport_Pkg::distanceLastBG::distance */
  static kcg_real _1_distance;
  /* xdebugSupport_Pkg::distanceLastBG::BGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg BGLocation;
  /* xdebugSupport_Pkg::distanceLastBG::BG_ID */
  static NID_BG BG_ID;
  /* xdebugSupport_Pkg::distanceLastBG::distance */
  static kcg_real distance;
  /* xdebugSupport_Pkg::distanceLastBG::BGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg last_BGLocation;
  /* xdebugSupport_Pkg::distanceLastBG::BG_ID */
  static NID_BG last_BG_ID;
  /* xdebugSupport_Pkg::distanceLastBG::distance */
  static kcg_real last_distance;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, msg);
  outC->_L2 = outC->_L1.valid;
  outC->_L4 = outC->_L1.source;
  outC->_L6 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L5 = outC->_L4 == outC->_L6;
  outC->_L7 = outC->_L2 & outC->_L5;
  outC->BGPassed = outC->_L7;
  outC->IfBlock1_clock = outC->BGPassed;
  /* last_init_ck_distance */ if (outC->init) {
    last_distance = 0.0;
  }
  else {
    last_distance = outC->distance;
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
  }
  else {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L65_IfBlock1, odometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L5_IfBlock1,
      &outC->_L65_IfBlock1.odo);
    outC->_L44_IfBlock1 = outC->_L5_IfBlock1.o_nominal;
  }
  /* last_init_ck_BGLocation */ if (outC->init) {
    last_BGLocation = 0;
  }
  else {
    last_BGLocation = outC->BGLocation;
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L9_IfBlock1 = 0.0;
    _1_distance = outC->_L9_IfBlock1;
    outC->distance = _1_distance;
  }
  else {
    BGLocation = last_BGLocation;
    outC->_L36_IfBlock1 = BGLocation;
    outC->_L73_IfBlock1 = outC->_L44_IfBlock1 - outC->_L36_IfBlock1;
    outC->_L82_IfBlock1 = (kcg_real) outC->_L73_IfBlock1;
    outC->_L10_IfBlock1 = 100.0;
    outC->_L91_IfBlock1 = outC->_L82_IfBlock1 / outC->_L10_IfBlock1;
    distance = outC->_L91_IfBlock1;
    outC->distance = distance;
  }
  /* last_init_ck_BG_ID */ if (outC->init) {
    last_BG_ID = 0;
  }
  else {
    last_BG_ID = outC->BG_ID;
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2_IfBlock1, msg);
    kcg_copy_BG_Header_T_BG_Types_Pkg(
      &outC->_L3_IfBlock1,
      &outC->_L2_IfBlock1.BG_Common_Header);
    outC->_L4_IfBlock1 = outC->_L3_IfBlock1.nid_bg;
    BG_ID2 = outC->_L4_IfBlock1;
    outC->BG_ID = BG_ID2;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L6_IfBlock1, odometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L7_IfBlock1,
      &outC->_L6_IfBlock1.odo);
    outC->_L8_IfBlock1 = outC->_L7_IfBlock1.o_nominal;
    _3_BGLocation = outC->_L8_IfBlock1;
    outC->BGLocation = _3_BGLocation;
  }
  else {
    outC->_L1_IfBlock1 = last_BG_ID;
    BG_ID = outC->_L1_IfBlock1;
    outC->BG_ID = BG_ID;
    outC->BGLocation = BGLocation;
  }
  outC->_L8 = outC->BG_ID;
  outC->lastBG = outC->_L8;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** distanceLastBG_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

