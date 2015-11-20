/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handOverSequencer_Handover_Pkg_handoverUtils_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void handOverSequencer_init_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static kcg_int i15;
  static kcg_int i14;
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
    SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
  outC->handOver_with_1_Session_SM_reset_act_IfBlock1 = kcg_true;
  outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.valid = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.m_mcount = 0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.nid_c = 0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.nid_bg = 0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.q_nvlocacc = 0;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p131_transitionOrder_loc_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.radioDevice = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.nid_message = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.t_train = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.nid_lrbg = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.t_train_reference =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.nid_em = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.d_sr = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.t_sh_rqst = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.d_ref = 0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.d_emergencystop =
    0;
  outC->p131_transitionOrder_loc_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].nid_packet =
      0;
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].startAddress =
      0;
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketHeaders[i].endAddress =
      0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->p131_transitionOrder_loc_IfBlock1.packets.PacketData[i1] = 0;
  }
  outC->p131_transitionOrder_loc_IfBlock1.sendingRBC.valid = kcg_true;
  outC->p131_transitionOrder_loc_IfBlock1.sendingRBC.nid_c = 0;
  outC->p131_transitionOrder_loc_IfBlock1.sendingRBC.rbc_id = 0;
  outC->p131_transitionOrder_loc_IfBlock1.sendingRBC.device_id = 0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.valid =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.m_mcount =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.nid_c =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.nid_bg =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_nvlocacc =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.radioDevice =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.receivedSystemTime =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_message =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_train =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_lrbg =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_train_reference =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_em =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_sr =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_sh_rqst =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_ref =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_emergencystop =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i2].nid_packet =
      0;
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i2].q_dir =
      Q_DIR_Reverse;
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i2].valid =
      kcg_true;
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i2].startAddress =
      0;
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i2].endAddress =
      0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketData[i3] =
      0;
  }
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.nid_c =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.rbc_id =
    0;
  outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.device_id =
    0;
  outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
    SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
  outC->handOver_with_2_Sessions_SM_reset_act_IfBlock1 = kcg_true;
  outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.nid_em =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.q_scale =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_sr =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_ref =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.q_dir =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.radioMetadata.m_version =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.m_mcount =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.nid_bg =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.q_nvlocacc =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.radioDevice =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_message =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_train =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_lrbg =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_train_reference =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.nid_em =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_sr =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.t_sh_rqst =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_ref =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.d_emergencystop =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i4 = 0; i4 < 30; i4++) {
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i4].nid_packet =
      0;
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i4].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i4].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i4].startAddress =
      0;
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketHeaders[i4].endAddress =
      0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.packets.PacketData[i5] =
      0;
  }
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.rbc_id =
    0;
  outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1.sendingRBC.device_id =
    0;
  outC->establishSessionWithAcceptingRBCOrdered_IfBlock1 = kcg_true;
  outC->_L8_1.valid = kcg_true;
  outC->_L8_1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L8_1.radioMetadata.t_train_reference = kcg_true;
  outC->_L8_1.radioMetadata.nid_em = kcg_true;
  outC->_L8_1.radioMetadata.q_scale = kcg_true;
  outC->_L8_1.radioMetadata.d_sr = kcg_true;
  outC->_L8_1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L8_1.radioMetadata.d_ref = kcg_true;
  outC->_L8_1.radioMetadata.q_dir = kcg_true;
  outC->_L8_1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L8_1.radioMetadata.m_version = kcg_true;
  outC->_L8_1.BG_Common_Header.valid = kcg_true;
  outC->_L8_1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8_1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8_1.BG_Common_Header.m_mcount = 0;
  outC->_L8_1.BG_Common_Header.nid_c = 0;
  outC->_L8_1.BG_Common_Header.nid_bg = 0;
  outC->_L8_1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L8_1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L8_1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L8_1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L8_1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L8_1.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L8_1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L8_1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L8_1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L8_1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L8_1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L8_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L8_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L8_1.BG_Common_Header.q_nvlocacc = 0;
  outC->_L8_1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L8_1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L8_1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L8_1.Radio_Common_Header.radioDevice = 0;
  outC->_L8_1.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L8_1.Radio_Common_Header.nid_message = 0;
  outC->_L8_1.Radio_Common_Header.t_train = 0;
  outC->_L8_1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L8_1.Radio_Common_Header.nid_lrbg = 0;
  outC->_L8_1.Radio_Common_Header.t_train_reference = 0;
  outC->_L8_1.Radio_Common_Header.nid_em = 0;
  outC->_L8_1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_1.Radio_Common_Header.d_sr = 0;
  outC->_L8_1.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L8_1.Radio_Common_Header.d_ref = 0;
  outC->_L8_1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L8_1.Radio_Common_Header.d_emergencystop = 0;
  outC->_L8_1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i6 = 0; i6 < 30; i6++) {
    outC->_L8_1.packets.PacketHeaders[i6].nid_packet = 0;
    outC->_L8_1.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->_L8_1.packets.PacketHeaders[i6].valid = kcg_true;
    outC->_L8_1.packets.PacketHeaders[i6].startAddress = 0;
    outC->_L8_1.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->_L8_1.packets.PacketData[i7] = 0;
  }
  outC->_L8_1.sendingRBC.valid = kcg_true;
  outC->_L8_1.sendingRBC.nid_c = 0;
  outC->_L8_1.sendingRBC.rbc_id = 0;
  outC->_L8_1.sendingRBC.device_id = 0;
  outC->notReady = kcg_true;
  outC->handoverFinished = kcg_true;
  outC->handoverInprogress = kcg_true;
  outC->bufferInformationFromAcceptingRBC = kcg_true;
  outC->useInformationFromAcceptingRBC = kcg_true;
  outC->sendTrainData_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_handingOverRBC = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.nid_em =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.q_scale =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.d_sr =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.d_ref =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.q_dir =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.radioMetadata.m_version =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.m_mcount =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.nid_bg =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.q_nvlocacc =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.radioDevice =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.nid_message =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.t_train =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.nid_lrbg =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.t_train_reference =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.nid_em =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.d_sr =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.t_sh_rqst =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.d_ref =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.d_emergencystop =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i8 = 0; i8 < 30; i8++) {
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i8].nid_packet =
      0;
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i8].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i8].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i8].startAddress =
      0;
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketHeaders[i8].endAddress =
      0;
  }
  for (i9 = 0; i9 < 500; i9++) {
    outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.packets.PacketData[i9] =
      0;
  }
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.nid_c = 0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.rbc_id =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC.sendingRBC.device_id =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.nid_em =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.q_scale =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.d_sr =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.d_ref =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.q_dir =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.radioMetadata.m_version =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.m_mcount =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.nid_bg =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.q_nvlocacc =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.radioDevice =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.nid_message =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.t_train =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.nid_lrbg =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.t_train_reference =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.nid_em =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.d_sr =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.t_sh_rqst =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.d_ref =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.d_emergencystop =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i10 = 0; i10 < 30; i10++) {
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i10].nid_packet =
      0;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i10].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i10].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i10].startAddress =
      0;
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketHeaders[i10].endAddress =
      0;
  }
  for (i11 = 0; i11 < 500; i11++) {
    outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.packets.PacketData[i11] =
      0;
  }
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.nid_c =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.rbc_id =
    0;
  outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC.sendingRBC.device_id =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.m_mcount = 0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.nid_c = 0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.nid_bg = 0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.q_nvlocacc = 0;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_for_handingOverRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.radioDevice = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.nid_message = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.t_train = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.nid_lrbg = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.t_train_reference =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.nid_em = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.d_sr = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.t_sh_rqst = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.d_ref = 0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.d_emergencystop =
    0;
  outC->p42_sessionCmd_for_handingOverRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i12 = 0; i12 < 30; i12++) {
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i12].nid_packet =
      0;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i12].q_dir =
      Q_DIR_Reverse;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i12].valid =
      kcg_true;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i12].startAddress =
      0;
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketHeaders[i12].endAddress =
      0;
  }
  for (i13 = 0; i13 < 500; i13++) {
    outC->p42_sessionCmd_for_handingOverRBC.packets.PacketData[i13] = 0;
  }
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.nid_c = 0;
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.rbc_id = 0;
  outC->p42_sessionCmd_for_handingOverRBC.sendingRBC.device_id = 0;
  outC->p42_sessionCmd_for_acceptingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.t_train_reference =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.m_mcount = 0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.nid_c = 0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.nid_bg = 0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.timestamp =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_min =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.odo.o_max =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.q_nvlocacc = 0;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_for_acceptingRBC.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.radioDevice = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.nid_message = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.t_train = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.nid_lrbg = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.t_train_reference =
    0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.nid_em = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.d_sr = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.t_sh_rqst = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.d_ref = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.d_emergencystop = 0;
  outC->p42_sessionCmd_for_acceptingRBC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i14 = 0; i14 < 30; i14++) {
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i14].nid_packet =
      0;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i14].q_dir =
      Q_DIR_Reverse;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i14].valid =
      kcg_true;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i14].startAddress =
      0;
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketHeaders[i14].endAddress =
      0;
  }
  for (i15 = 0; i15 < 500; i15++) {
    outC->p42_sessionCmd_for_acceptingRBC.packets.PacketData[i15] = 0;
  }
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.nid_c = 0;
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.rbc_id = 0;
  outC->p42_sessionCmd_for_acceptingRBC.sendingRBC.device_id = 0;
  /* 4 */ RisingEdge_init_digital(&outC->Context_4);
  /* 9 */ RisingEdge_init_digital(&outC->Context_9);
  /* 28 */ RisingEdge_init_digital(&outC->Context_28);
  /* 26 */ RisingEdge_init_digital(&outC->Context_26);
  /* 8 */ RisingEdge_init_digital(&outC->Context_8);
  /* 5 */ RisingEdge_init_digital(&outC->Context_5);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
  /* 9 */ RisingEdge_reset_digital(&outC->Context_9);
  /* 28 */ RisingEdge_reset_digital(&outC->Context_28);
  /* 26 */ RisingEdge_reset_digital(&outC->Context_26);
  /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
  /* 5 */ RisingEdge_reset_digital(&outC->Context_5);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */
void handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_in,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p131_transitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_terminateCmd_from_handingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromAcceptingRBC */ morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromHandingOverRBC */ morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::maxSafeFrontEndPassesHandOverLocation */ kcg_bool maxSafeFrontEndPassesHandOverLocation,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::minSafeReadEndPassesHandOverLocation */ kcg_bool minSafeReadEndPassesHandOverLocation,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::mode */ M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* linear::Memory::Out */
  static struct_172526 Out_1;
  /* linear::Memory::InitVal */
  static struct_172526 InitVal_1;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_1;
  /* linear::Memory::Reset */
  static kcg_bool Reset_1;
  /* linear::Memory::M_Input */
  static struct_172526 M_Input_1;
  /* linear::Memory::_L9 */
  static struct_172526 _L9_1;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_1;
  /* linear::Memory::_L2 */
  static struct_172526 _L2_1;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_1;
  /* linear::Memory::_L5 */
  static struct_172526 _L5_1;
  /* linear::Memory::_L6 */
  static struct_172526 _L6_1;
  /* linear::Memory::_L7 */
  static struct_172526 _L7_1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _10_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool _9_bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool _8_useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _7_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _6_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _5_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _4_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _3_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _2_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _1_p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 _231_handOver_with_2_Sessions_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 handOver_with_2_Sessions_SM_fired_strong_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool handOver_with_2_Sessions_SM_reset_prv_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool handOver_with_2_Sessions_SM_reset_sel_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 handOver_with_2_Sessions_SM_state_act_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 handOver_with_2_Sessions_SM_state_sel_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 handOver_with_2_Sessions_SM_clock_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */
  static kcg_bool last_establishSessionWithAcceptingRBCOrdered_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::handingOverRBCReregistered */
  static kcg_bool handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::_L9 */
  static kcg_bool _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::_L7 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::_L4 */
  static morcStatus_T_RCM_Session_Types_Pkg _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::_L13 */
  static kcg_bool _L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::_L14 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered::_L15 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCRegistered */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _114_p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _115_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _116_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _117_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _118_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _119_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _120_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool _121_useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool _122_bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _123_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _124_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */
  static kcg_bool establishSessionWithAcceptingRBCOrdered_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 handOver_with_2_Sessions_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::unregistered_or_noReregisterRequired */
  static kcg_bool unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L12 */
  static kcg_bool _L12_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L34 */
  static NID_MN _L34_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L33 */
  static CompressedPackets_T_Common_Types_Pkg _L33_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L32 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L32_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L30 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L30_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L28 */
  static kcg_bool _L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L27 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L27_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L25 */
  static kcg_bool _L25_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L26 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L26_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L24 */
  static morcStatus_T_RCM_Session_Types_Pkg _L24_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L23 */
  static kcg_bool _L23_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L22 */
  static kcg_bool _L22_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L21 */
  static kcg_bool _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L20 */
  static kcg_bool _L20_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L19 */
  static kcg_bool _L19_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L18 */
  static kcg_bool _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L17 */
  static NID_MN _L17_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L16 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L16_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L15 */
  static kcg_bool _L15_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L35 */
  static kcg_bool _L35_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L36 */
  static kcg_bool _L36_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L38 */
  static kcg_bool _L38_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L39 */
  static kcg_bool _L39_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L40 */
  static kcg_bool _L40_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L41 */
  static kcg_bool _L41_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L42 */
  static kcg_bool _L42_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L43 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L43_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L45 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L45_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC::_L46 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L46_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::ReregisterHandingOverRBC */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _125_p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _126_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _127_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _128_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _129_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _130_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _131_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool _132_useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool _133_bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _134_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _135_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */
  static kcg_bool _136_establishSessionWithAcceptingRBCOrdered_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 _137_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool _138_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 _139_handOver_with_2_Sessions_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::sessionWithHandingOverRBC_terminated */
  static kcg_bool sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTermi;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L4 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L3 */
  static kcg_bool _L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L2 */
  static morcStatus_T_RCM_Session_Types_Pkg _L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L8 */
  static kcg_bool _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L9 */
  static kcg_bool _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L13 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L12 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L12_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L11 */
  static kcg_bool _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L10 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L10_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L14 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated::_L15 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForHandingOverRBCTerminated */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _140_p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _141_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _142_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _143_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _144_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _145_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _146_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool _147_useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool _148_bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _149_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _150_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */
  static kcg_bool _151_establishSessionWithAcceptingRBCOrdered_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 _152_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool _153_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 _154_handOver_with_2_Sessions_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::terminationWithHandingOverRBCOrdered */
  static kcg_bool terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFro;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L1 */
  static kcg_bool _L1_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L3 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L7 */
  static morcStatus_T_RCM_Session_Types_Pkg _L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L8 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L23 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L25 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L25_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L28 */
  static CompressedPackets_T_Common_Types_Pkg _L28_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L26 */
  static kcg_bool _L26_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L27 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L27_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L29 */
  static kcg_bool _L29_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L30 */
  static Q_RBC _L30_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L32 */
  static Q_RBC _L32_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L31 */
  static kcg_bool _L31_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC::_L33 */
  static kcg_bool _L33_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTerminationOrderFromHandingOverRBC */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _155_p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _156_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _157_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _158_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _159_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _160_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _161_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool _162_useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool _163_bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _164_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _165_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */
  static kcg_bool _166_establishSessionWithAcceptingRBCOrdered_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 _167_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool _168_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 _169_handOver_with_2_Sessions_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::sessionWithAcceptingRBCEstablished */
  static kcg_bool sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingR;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L5 */
  static morcStatus_T_RCM_Session_Types_Pkg _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L19 */
  static M_MODE _L19_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L18 */
  static kcg_bool _L18_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L16 */
  static kcg_bool _L16_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L14 */
  static M_MODE _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L12 */
  static kcg_bool _L12_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L11 */
  static kcg_bool _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L9 */
  static kcg_bool _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L8 */
  static M_MODE _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L23 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L22 */
  static kcg_bool _L22_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L21 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L21_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished::_L20 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L20_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForSessionWithAcceptingRBCEstablished */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _170_p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _171_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _172_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _173_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _174_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _175_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _176_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool _177_useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool _178_bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _179_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _180_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */
  static kcg_bool _181_establishSessionWithAcceptingRBCOrdered_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 _182_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool _183_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 _184_handOver_with_2_Sessions_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L15 */
  static kcg_bool _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L13 */
  static morcStatus_T_RCM_Session_Types_Pkg _L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L11 */
  static kcg_bool _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L8 */
  static kcg_bool _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L5 */
  static kcg_bool _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L2 */
  static morcStatus_T_RCM_Session_Types_Pkg _L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L16 */
  static kcg_bool _L16_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L17 */
  static kcg_bool _L17_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L21 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L21_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L20 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L20_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L19 */
  static kcg_bool _L19_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L18 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L18_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L25 */
  static kcg_bool _L25_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L24 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L24_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L23 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing::_L22 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L22_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMinSafeRearEndPassing */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _185_p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _186_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _187_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _188_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _189_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _190_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _191_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool _192_useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool _193_bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _194_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _195_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */
  static kcg_bool _196_establishSessionWithAcceptingRBCOrdered_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 _197_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool _198_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 _199_handOver_with_2_Sessions_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L15 */
  static kcg_bool _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L14 */
  static kcg_bool _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L13 */
  static morcStatus_T_RCM_Session_Types_Pkg _L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L11 */
  static kcg_bool _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L8 */
  static kcg_bool _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L6 */
  static kcg_bool _L6_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L5 */
  static kcg_bool _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L2 */
  static morcStatus_T_RCM_Session_Types_Pkg _L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L1 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L1_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L35 */
  static kcg_bool _L35_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L36 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L36_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L37 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L37_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L41 */
  static kcg_bool _L41_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L40 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L40_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L39 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L39_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing::_L38 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L38_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForMaxSafeFrontEndPassing */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _200_p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _201_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _202_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _203_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _204_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _205_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _206_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool _207_useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool _208_bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _209_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _210_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */
  static kcg_bool _211_establishSessionWithAcceptingRBCOrdered_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 _212_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool _213_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 _214_handOver_with_2_Sessions_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L4 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L2 */
  static morcStatus_T_RCM_Session_Types_Pkg _L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L5 */
  static kcg_bool _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L6 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L6_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L10 */
  static kcg_bool _L10_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L9 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L8 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L7 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder::_L11 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM::WaitForTransitionOrder */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _215_p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _216_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _217_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _218_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _219_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _220_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _221_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool _222_useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool _223_bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _224_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _225_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */
  static kcg_bool _226_establishSessionWithAcceptingRBCOrdered_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 _227_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static kcg_bool _228_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
  static SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 _229_handOver_with_2_Sessions_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */
  static kcg_bool bufferInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */
  static kcg_bool useInformationFromAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p42_sessionCmd_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 _232_handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 handOver_with_1_Session_SM_fired_strong_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool handOver_with_1_Session_SM_reset_prv_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool handOver_with_1_Session_SM_reset_sel_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 handOver_with_1_Session_SM_state_act_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 handOver_with_1_Session_SM_state_sel_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 handOver_with_1_Session_SM_clock_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg last_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::EstablishSessionWithAcceptingRBC */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::EstablishSessionWithAcceptingRBC */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::EstablishSessionWithAcceptingRBC::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::EstablishSessionWithAcceptingRBC::_L6 */
  static morcStatus_T_RCM_Session_Types_Pkg _L6_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::EstablishSessionWithAcceptingRBC::_L7 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L7_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::EstablishSessionWithAcceptingRBC::_L8 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L8_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::EstablishSessionWithAcceptingRBC */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::EstablishSessionWithAcceptingRBC */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _11_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _12_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _13_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _14_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _15_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _16_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _17_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered::handingOverRBCReregistered */
  static kcg_bool handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered::_L9 */
  static kcg_bool _L9_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered::_L7 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L7_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered::_L4 */
  static morcStatus_T_RCM_Session_Types_Pkg _L4_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered::_L10 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L10_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered::_L11 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L11_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCRegistered */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _18_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _19_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _20_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _21_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _22_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _23_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _24_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _25_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _26_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 _27_handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool _28_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 _29_handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::unregistered_or_noReregisterRequired */
  static kcg_bool unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L36 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L36_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L40 */
  static kcg_bool _L40_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L38 */
  static kcg_bool _L38_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L39 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L39_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L37 */
  static CompressedPackets_T_Common_Types_Pkg _L37_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L41 */
  static kcg_bool _L41_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L42 */
  static NID_MN _L42_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L51 */
  static kcg_bool _L51_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L50 */
  static kcg_bool _L50_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L49 */
  static morcStatus_T_RCM_Session_Types_Pkg _L49_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L48 */
  static NID_MN _L48_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L47 */
  static kcg_bool _L47_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L45 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L45_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L44 */
  static kcg_bool _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L43 */
  static kcg_bool _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L53 */
  static kcg_bool _L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L54 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L54_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L55 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L55_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L58 */
  static kcg_bool _L58_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L57 */
  static kcg_bool _L57_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L56 */
  static kcg_bool _L56_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L66 */
  static kcg_bool _L66_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L65 */
  static kcg_bool _L65_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L64 */
  static kcg_bool _L64_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L63 */
  static kcg_bool _L63_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L67 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L67_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L68 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L68_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC::_L69 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L69_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::RegisterAcceptingRBC */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _30_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _31_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _32_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _33_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _34_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _35_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _36_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _37_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _38_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 _39_handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool _40_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 _41_handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated::sessionWithHandingOverRBC_terminated */
  static kcg_bool sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTermin;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated::_L4 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L4_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated::_L3 */
  static kcg_bool _L3_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated::_L2 */
  static morcStatus_T_RCM_Session_Types_Pkg _L2_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated::_L7 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L7_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated::_L8 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L8_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForHandingOverRBCTerminated */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _42_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _43_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _44_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _45_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _46_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _47_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _48_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _49_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _50_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 _51_handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool _52_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 _53_handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::terminationWithHandingOverRBCOrdered */
  static kcg_bool terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L3 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L7 */
  static morcStatus_T_RCM_Session_Types_Pkg _L7_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L8 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L8_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L23 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L23_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L32 */
  static Q_RBC _L32_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L31 */
  static CompressedPackets_T_Common_Types_Pkg _L31_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L30 */
  static Q_RBC _L30_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L28 */
  static kcg_bool _L28_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L29 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L29_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L27 */
  static kcg_bool _L27_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L26 */
  static kcg_bool _L26_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L25 */
  static kcg_bool _L25_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC::_L33 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L33_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTerminationOrderFromHandingOverRBC */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _54_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _55_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _56_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _57_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _58_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _59_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _60_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _61_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _62_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 _63_handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool _64_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 _65_handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::sessionWithAcceptingRBCEstablished */
  static kcg_bool sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L6 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L6_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L2 */
  static kcg_bool _L2_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L19 */
  static M_MODE _L19_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L18 */
  static kcg_bool _L18_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L16 */
  static kcg_bool _L16_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L14 */
  static M_MODE _L14_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L12 */
  static kcg_bool _L12_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L11 */
  static kcg_bool _L11_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L9 */
  static kcg_bool _L9_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L8 */
  static M_MODE _L8_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L20 */
  static morcStatus_T_RCM_Session_Types_Pkg _L20_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L23 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L23_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L24 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L24_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished::_L25 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L25_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForSessionWithAcceptingRBCEstablished */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _66_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _67_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _68_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _69_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _70_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _71_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _72_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _73_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _74_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 _75_handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool _76_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 _77_handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing::_L14 */
  static kcg_bool _L14_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing::_L8 */
  static kcg_bool _L8_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing::_L5 */
  static kcg_bool _L5_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing::_L2 */
  static morcStatus_T_RCM_Session_Types_Pkg _L2_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing::_L1 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L1_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing::_L16 */
  static kcg_bool _L16_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing::_L17 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L17_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing::_L18 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L18_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMinSafeRearEndPassing */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _78_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _79_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _80_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _81_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _82_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _83_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _84_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _85_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _86_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 _87_handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool _88_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 _89_handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing */
  static kcg_bool br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing::_L14 */
  static kcg_bool _L14_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing::_L8 */
  static kcg_bool _L8_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing::_L6 */
  static kcg_bool _L6_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing::_L5 */
  static kcg_bool _L5_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing::_L2 */
  static morcStatus_T_RCM_Session_Types_Pkg _L2_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing::_L1 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L1_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing::_L15 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L15_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing::_L16 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L16_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForMaxSafeFrontEndPassing */
  static kcg_bool br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _90_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _91_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _92_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _93_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _94_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _95_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _96_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _97_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _98_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 _99_handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool _100_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 _101_handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder */
  static kcg_bool br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::transitionOrdered */
  static kcg_bool transitionOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L6 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L6_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L7 */
  static kcg_bool _L7_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L8 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L8_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L9 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L9_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L12 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L12_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L13 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L13_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L14 */
  static kcg_bool _L14_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L15 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L15_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L16 */
  static kcg_bool _L16_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L17 */
  static kcg_bool _L17_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L18 */
  static kcg_bool _L18_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder::_L19 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L19_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM::WaitForTransitionOrder */
  static kcg_bool br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _102_p42_sessionCmd_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _103_p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _104_p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */
  static kcg_bool _105_sendPositionReport_2_handingOverRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */
  static kcg_bool _106_sendPositionReport_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */
  static kcg_bool _107_sendTrainData_2_acceptingRBC;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */
  static kcg_bool _108_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _109_p131_transitionOrder_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _110_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_ST_handOver_with_1_Session_SM_IfBlock1 _111_handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static kcg_bool _112_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
  static SSM_TR_handOver_with_1_Session_SM_IfBlock1 _113_handOver_with_1_Session_SM_fired_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sNotReady */
  static kcg_bool sNotReady;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sHandoverFinished */
  static kcg_bool sHandoverFinished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverFinished */
  static kcg_bool last_handoverFinished;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p131_transitionOrder_mem */
  static msgFromTrack_T_RCM_MsgTypes_Pkg p131_transitionOrder_mem;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::newTransitionOrderReceived */
  static kcg_bool newTransitionOrderReceived;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::_L1 */
  static kcg_bool _L1;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::_L6 */
  static kcg_bool _L6;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::_L3 */
  static kcg_bool _L3;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::_L2 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L2;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::_L7 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L7;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::_L8 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L8;
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::_L9 */
  static kcg_bool _L9;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageTwoSessions_Handover_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* init_handOver_with_2_Sessions_SM */ if (outC->init1) {
      handOver_with_2_Sessions_SM_state_sel_IfBlock1 =
        SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
    }
    else {
      handOver_with_2_Sessions_SM_state_sel_IfBlock1 =
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
    }
    handOver_with_2_Sessions_SM_state_act_IfBlock1 =
      handOver_with_2_Sessions_SM_state_sel_IfBlock1;
    handOver_with_2_Sessions_SM_clock_IfBlock1 =
      handOver_with_2_Sessions_SM_state_act_IfBlock1;
    /* init_handOver_with_2_Sessions_SM */ if (outC->init1) {
      handOver_with_2_Sessions_SM_reset_sel_IfBlock1 = kcg_false;
    }
    else {
      handOver_with_2_Sessions_SM_reset_sel_IfBlock1 =
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
    }
    /* sel_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_state_sel_IfBlock1) {
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          outC->init = kcg_true;
        }
        break;
      
    }
  }
  else {
    /* init_handOver_with_1_Session_SM */ if (outC->init3) {
      handOver_with_1_Session_SM_state_sel_IfBlock1 =
        SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
    }
    else {
      handOver_with_1_Session_SM_state_sel_IfBlock1 =
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1;
    }
    handOver_with_1_Session_SM_state_act_IfBlock1 =
      handOver_with_1_Session_SM_state_sel_IfBlock1;
    handOver_with_1_Session_SM_clock_IfBlock1 =
      handOver_with_1_Session_SM_state_act_IfBlock1;
    /* init_handOver_with_1_Session_SM */ if (outC->init3) {
      handOver_with_1_Session_SM_reset_sel_IfBlock1 = kcg_false;
    }
    else {
      handOver_with_1_Session_SM_reset_sel_IfBlock1 =
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1;
    }
    /* sel_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_state_sel_IfBlock1) {
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        if (handOver_with_1_Session_SM_reset_sel_IfBlock1) {
          outC->init2 = kcg_true;
        }
        break;
      
    }
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L8,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&InitVal_1, &_L8);
  kcg_copy_struct_172526(&_L9_1, &InitVal_1);
  /* 1_fby_1_init_7 */ if (outC->init4) {
    kcg_copy_struct_172526(&_L5_1, &_L9_1);
  }
  else {
    kcg_copy_struct_172526(&_L5_1, &outC->_L8_1);
  }
  /* last_init_ck_handoverFinished */ if (outC->init4) {
    last_handoverFinished = kcg_false;
  }
  else {
    last_handoverFinished = outC->handoverFinished;
  }
  _L6 = last_handoverFinished;
  Reset_1 = _L6;
  _L1_1 = Reset_1;
  kcg_copy_struct_172526(&_L2_1, &InitVal_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L7, p131_transitionOrder);
  _L3 = _L7.valid;
  MemCond_1 = _L3;
  _L3_1 = MemCond_1;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&M_Input_1, &_L7);
  kcg_copy_struct_172526(&_L6_1, &M_Input_1);
  /* 4 */ if (_L3_1) {
    kcg_copy_struct_172526(&_L7_1, &_L6_1);
  }
  else {
    kcg_copy_struct_172526(&_L7_1, &_L5_1);
  }
  /* 1 */ if (_L1_1) {
    kcg_copy_struct_172526(&outC->_L8_1, &_L2_1);
  }
  else {
    kcg_copy_struct_172526(&outC->_L8_1, &_L7_1);
  }
  kcg_copy_struct_172526(&Out_1, &outC->_L8_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L2, &Out_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&p131_transitionOrder_mem, &_L2);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder,
          &p131_transitionOrder_mem);
        /* 2 */
        p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg(
          &_L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder,
          &_L6_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder,
          morcStatusFromAcceptingRBC);
        /* 2 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &_L6_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder,
          &_L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder,
          &_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder =
          _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder.valid;
        _226_establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
        br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder =
          _226_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
        break;
      
    }
  }
  newTransitionOrderReceived = _L3;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L36_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing,
          &_L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing.session);
        _L1_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          _L36_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing.phase;
        _L37_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          sp_maintaining_RCM_Session_Types_Pkg;
        _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          _L1_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing ==
          _L37_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        _L6_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          maxSafeFrontEndPassesHandOverLocation;
        _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing &
          _L6_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        break;
      
    }
    /* sel_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_state_sel_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          /* 5 */ RisingEdge_reset_digital(&outC->Context_5);
        }
        break;
      
    }
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        /* 5 */
        RisingEdge_digital(
          _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing,
          &outC->Context_5);
        _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          outC->Context_5.RE_Output;
        _204_sendPositionReport_2_handingOverRBC =
          _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          _204_sendPositionReport_2_handingOverRBC;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing) {
        }
        else {
          br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        }
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L21_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing,
          &_L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing.session);
        _L18_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          _L21_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing.phase;
        _L20_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          sp_maintaining_RCM_Session_Types_Pkg;
        _L19_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          _L18_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing ==
          _L20_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        _L16_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          minSafeReadEndPassesHandOverLocation;
        _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          _L19_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing &
          _L16_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        break;
      
    }
    /* sel_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_state_sel_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          /* 8 */ RisingEdge_reset_digital(&outC->Context_8);
        }
        break;
      
    }
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        /* 8 */
        RisingEdge_digital(
          _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing,
          &outC->Context_8);
        _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          outC->Context_8.RE_Output;
        _189_sendPositionReport_2_handingOverRBC =
          _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          _189_sendPositionReport_2_handingOverRBC;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing) {
        }
        else {
          br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        }
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished,
          morcStatusFromAcceptingRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L21_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished,
          &_L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished.session);
        _L20_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L21_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished.phase;
        _L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          sp_maintaining_RCM_Session_Types_Pkg;
        _L22_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L20_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished ==
          _L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingR =
          _L22_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingR;
        br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          p42_terminateCmd_from_handingOverRBC);
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          morcStatusFromHandingOverRBC);
        /* 3 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &_L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        _L29_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC.valid;
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &_L28_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC.packets);
        /* 1 */
        Read_P042_TM(
          &_L28_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L26_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L27_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        _L30_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L27_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC.q_rbc;
        _L32_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          Q_RBC_Terminate_communication_session;
        _L31_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L30_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC ==
          _L32_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
        _L33_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L29_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC &
          _L26_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC &
          _L31_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
        terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFro =
          _L33_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
        br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFro;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
        }
        else {
          br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
        }
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated,
          morcStatusFromHandingOverRBC);
        kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
          &_L10_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated,
          &_L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated.connection);
        _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          _L10_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated.status;
        _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          mcs_disconnected_RCM_Types_Pkg;
        _L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          _L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated ==
          _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated,
          &_L2_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated.session);
        _L12_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated.phase;
        _L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          sp_terminated_RCM_Session_Types_Pkg;
        _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          _L12_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated ==
          _L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
        _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          _L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated &
          _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
        sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTermi =
          _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
        br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTermi;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
        }
        else {
          br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
        }
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        break;
      
    }
    /* last_init_ck_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ if (outC->init1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
    }
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_215_p42_sessionCmd_for_acceptingRBC,
          &_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p42_sessionCmd_for_acceptingRBC,
          &_215_p42_sessionCmd_for_acceptingRBC);
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing) {
          sNotReady = kcg_true;
        }
        else /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_200_p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p42_sessionCmd_for_acceptingRBC,
          &_200_p42_sessionCmd_for_acceptingRBC);
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing) {
          sNotReady = kcg_true;
        }
        else /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_185_p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p42_sessionCmd_for_acceptingRBC,
          &_185_p42_sessionCmd_for_acceptingRBC);
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_170_p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p42_sessionCmd_for_acceptingRBC,
          &_170_p42_sessionCmd_for_acceptingRBC);
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
          sNotReady = kcg_true;
        }
        else /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_155_p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p42_sessionCmd_for_acceptingRBC,
          &_155_p42_sessionCmd_for_acceptingRBC);
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
          sNotReady = kcg_true;
        }
        else /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_140_p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p42_sessionCmd_for_acceptingRBC,
          &_140_p42_sessionCmd_for_acceptingRBC);
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_135_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L30_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
          &_135_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        _L20_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L30_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC.valid;
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &_L33_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
          &_L30_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC.packets);
        /* 2 */
        Read_P045_TM(
          &_L33_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
          &_L25_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
          &_L26_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        _L23_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L20_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          _L25_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L17_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L26_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC.nid_mn;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L24_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
          morcStatusFromHandingOverRBC);
        kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
          &_L43_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
          &_L24_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC.registration);
        _L34_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L43_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC.nid_mn;
        _L19_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L17_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC !=
          _L34_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L46_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          mrs_registered_RCM_Types_Pkg;
        _L16_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L43_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC.status;
        _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L46_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC ==
          _L16_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L22_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L19_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L45_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          mrs_unregistered_RCM_Types_Pkg;
        _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L16_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC ==
          _L45_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L15_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L22_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC |
          _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L23_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          _L15_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L38_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          !_L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L36_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L38_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          _L21_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L39_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          _L18_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _L35_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L36_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC |
          _L39_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L35_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          unregistered_or_noReregisterRequired_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
          sNotReady = kcg_true;
        }
        else {
          br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
          /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
            sNotReady = kcg_true;
          }
          else {
            sNotReady = kcg_false;
          }
        }
        sHandoverFinished = kcg_false;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_125_p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p42_sessionCmd_for_acceptingRBC,
          &_125_p42_sessionCmd_for_acceptingRBC);
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
        _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          mrs_registered_RCM_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered,
          morcStatusFromHandingOverRBC);
        kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
          &_L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered,
          &_L4_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered.registration);
        _L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered.status;
        _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered ==
          _L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
        handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
        br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          handingOverRBCReregistered_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
          sNotReady = kcg_true;
          sHandoverFinished = kcg_false;
        }
        else {
          br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
          /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
            sNotReady = kcg_true;
            sHandoverFinished = kcg_true;
          }
          else {
            sNotReady = kcg_false;
            sHandoverFinished = kcg_false;
          }
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_114_p42_sessionCmd_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_1_p42_sessionCmd_for_acceptingRBC,
          &_114_p42_sessionCmd_for_acceptingRBC);
        break;
      
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_acceptingRBC,
      &_1_p42_sessionCmd_for_acceptingRBC);
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_216_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p42_sessionCmd_for_handingOverRBC,
          &_216_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_201_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p42_sessionCmd_for_handingOverRBC,
          &_201_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_186_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p42_sessionCmd_for_handingOverRBC,
          &_186_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_171_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p42_sessionCmd_for_handingOverRBC,
          &_171_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L25_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        /* 1 */ if (_L33_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
            &_L3_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC,
            &_L25_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_156_p42_sessionCmd_for_handingOverRBC,
          &_L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p42_sessionCmd_for_handingOverRBC,
          &_156_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_141_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p42_sessionCmd_for_handingOverRBC,
          &_141_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_126_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p42_sessionCmd_for_handingOverRBC,
          &_126_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_115_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_2_p42_sessionCmd_for_handingOverRBC,
          &_115_p42_sessionCmd_for_handingOverRBC);
        break;
      
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_handingOverRBC,
      &_2_p42_sessionCmd_for_handingOverRBC);
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_217_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_3_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_217_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_202_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_3_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_202_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_187_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_3_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_187_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_172_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_3_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_172_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_157_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_3_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_157_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_142_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_3_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_142_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _L41_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          kcg_false;
        /* 1 */ if (outC->init) {
          _L40_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
            kcg_true;
        }
        else {
          _L40_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
            _L41_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        }
        _L42_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          _L28_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC &
          _L40_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L32_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        /* 10 */ if (_L42_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L27_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
            &_L30_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L27_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC,
            &_L32_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_127_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_L27_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_3_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_127_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_116_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_3_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_116_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
      &_3_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder,
          p45_radioNetworkRegistrationOrder_in);
        _L10_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder =
          _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder.valid;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder,
          &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        /* 9 */ if (_L10_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder,
            &_L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder,
            &_L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_218_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_4_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_218_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_203_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_4_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_203_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_188_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_4_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_188_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_173_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_4_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_173_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_158_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_4_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_158_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_143_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_4_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_143_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_128_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_4_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_128_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_117_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_4_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_117_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
      &_4_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        _219_sendPositionReport_2_handingOverRBC = kcg_false;
        _5_sendPositionReport_2_handingOverRBC =
          _219_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _5_sendPositionReport_2_handingOverRBC =
          _204_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _5_sendPositionReport_2_handingOverRBC =
          _189_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        _174_sendPositionReport_2_handingOverRBC = kcg_false;
        _5_sendPositionReport_2_handingOverRBC =
          _174_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _159_sendPositionReport_2_handingOverRBC = kcg_false;
        _5_sendPositionReport_2_handingOverRBC =
          _159_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        _144_sendPositionReport_2_handingOverRBC = kcg_false;
        _5_sendPositionReport_2_handingOverRBC =
          _144_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _129_sendPositionReport_2_handingOverRBC = kcg_false;
        _5_sendPositionReport_2_handingOverRBC =
          _129_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        _118_sendPositionReport_2_handingOverRBC = kcg_false;
        _5_sendPositionReport_2_handingOverRBC =
          _118_sendPositionReport_2_handingOverRBC;
        break;
      
    }
    outC->sendPositionReport_2_handingOverRBC =
      _5_sendPositionReport_2_handingOverRBC;
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing,
          morcStatusFromAcceptingRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L22_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing,
          &_L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing.session);
        _L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          _L22_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing.phase;
        _L24_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          sp_maintaining_RCM_Session_Types_Pkg;
        _L25_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          _L23_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing ==
          _L24_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          _L16_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing &
          _L25_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        _175_sendPositionReport_2_acceptingRBC = kcg_false;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _160_sendPositionReport_2_acceptingRBC = kcg_false;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        _145_sendPositionReport_2_acceptingRBC = kcg_false;
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _130_sendPositionReport_2_acceptingRBC = kcg_false;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        _119_sendPositionReport_2_acceptingRBC = kcg_false;
        break;
      
    }
    /* sel_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_state_sel_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          /* 9 */ RisingEdge_reset_digital(&outC->Context_9);
        }
        break;
      
    }
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing,
          morcStatusFromAcceptingRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L40_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing,
          &_L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing.session);
        _L39_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          _L40_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing.phase;
        _L38_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          sp_maintaining_RCM_Session_Types_Pkg;
        _L41_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          _L39_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing ==
          _L38_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          _L6_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing &
          _L41_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        /* 9 */
        RisingEdge_digital(
          _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing,
          &outC->Context_9);
        _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          outC->Context_9.RE_Output;
        _190_sendPositionReport_2_acceptingRBC =
          _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        break;
      
    }
    /* sel_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_state_sel_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        if (handOver_with_2_Sessions_SM_reset_sel_IfBlock1) {
          /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
        }
        break;
      
    }
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        _220_sendPositionReport_2_acceptingRBC = kcg_false;
        _6_sendPositionReport_2_acceptingRBC =
          _220_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        /* 4 */
        RisingEdge_digital(
          _L15_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing,
          &outC->Context_4);
        _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          outC->Context_4.RE_Output;
        _205_sendPositionReport_2_acceptingRBC =
          _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        _6_sendPositionReport_2_acceptingRBC =
          _205_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _6_sendPositionReport_2_acceptingRBC =
          _190_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        _6_sendPositionReport_2_acceptingRBC =
          _175_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _6_sendPositionReport_2_acceptingRBC =
          _160_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        _6_sendPositionReport_2_acceptingRBC =
          _145_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _6_sendPositionReport_2_acceptingRBC =
          _130_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        _6_sendPositionReport_2_acceptingRBC =
          _119_sendPositionReport_2_acceptingRBC;
        break;
      
    }
    outC->sendPositionReport_2_acceptingRBC =
      _6_sendPositionReport_2_acceptingRBC;
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        _221_sendTrainData_2_acceptingRBC = kcg_false;
        _7_sendTrainData_2_acceptingRBC = _221_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _206_sendTrainData_2_acceptingRBC = kcg_false;
        _7_sendTrainData_2_acceptingRBC = _206_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _191_sendTrainData_2_acceptingRBC = kcg_false;
        _7_sendTrainData_2_acceptingRBC = _191_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          M_MODE_Sleeping;
        _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          mode;
        _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L14_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished ==
          _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        _L19_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          M_MODE_Non_Leading;
        _L16_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L8_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished ==
          _L19_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        _L12_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L11_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished |
          _L16_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        _L18_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          !_L12_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L22_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished &
          _L18_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        _176_sendTrainData_2_acceptingRBC =
          _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        _7_sendTrainData_2_acceptingRBC = _176_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _161_sendTrainData_2_acceptingRBC = kcg_false;
        _7_sendTrainData_2_acceptingRBC = _161_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        _146_sendTrainData_2_acceptingRBC = kcg_false;
        _7_sendTrainData_2_acceptingRBC = _146_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _131_sendTrainData_2_acceptingRBC = kcg_false;
        _7_sendTrainData_2_acceptingRBC = _131_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        _120_sendTrainData_2_acceptingRBC = kcg_false;
        _7_sendTrainData_2_acceptingRBC = _120_sendTrainData_2_acceptingRBC;
        break;
      
    }
    outC->sendTrainData_2_acceptingRBC = _7_sendTrainData_2_acceptingRBC;
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        _222_useInformationFromAcceptingRBC = kcg_false;
        _8_useInformationFromAcceptingRBC = _222_useInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _207_useInformationFromAcceptingRBC = kcg_false;
        _8_useInformationFromAcceptingRBC = _207_useInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _L17_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing =
          kcg_true;
        _192_useInformationFromAcceptingRBC =
          _L17_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        _8_useInformationFromAcceptingRBC = _192_useInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        _177_useInformationFromAcceptingRBC = kcg_false;
        _8_useInformationFromAcceptingRBC = _177_useInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _L1_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC =
          kcg_true;
        _162_useInformationFromAcceptingRBC =
          _L1_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
        _8_useInformationFromAcceptingRBC = _162_useInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated =
          kcg_true;
        _147_useInformationFromAcceptingRBC =
          _L9_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
        _8_useInformationFromAcceptingRBC = _147_useInformationFromAcceptingRBC;
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _L12_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC =
          kcg_true;
        _132_useInformationFromAcceptingRBC =
          _L12_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        _8_useInformationFromAcceptingRBC = _132_useInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        _L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered =
          kcg_true;
        _121_useInformationFromAcceptingRBC =
          _L13_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
        _8_useInformationFromAcceptingRBC = _121_useInformationFromAcceptingRBC;
        break;
      
    }
    outC->useInformationFromAcceptingRBC = _8_useInformationFromAcceptingRBC;
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        _223_bufferInformationFromAcceptingRBC = kcg_false;
        _9_bufferInformationFromAcceptingRBC =
          _223_bufferInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _L35_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing =
          kcg_true;
        _208_bufferInformationFromAcceptingRBC =
          _L35_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        _9_bufferInformationFromAcceptingRBC =
          _208_bufferInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _193_bufferInformationFromAcceptingRBC = kcg_false;
        _9_bufferInformationFromAcceptingRBC =
          _193_bufferInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        _178_bufferInformationFromAcceptingRBC = kcg_false;
        _9_bufferInformationFromAcceptingRBC =
          _178_bufferInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _163_bufferInformationFromAcceptingRBC = kcg_false;
        _9_bufferInformationFromAcceptingRBC =
          _163_bufferInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        _148_bufferInformationFromAcceptingRBC = kcg_false;
        _9_bufferInformationFromAcceptingRBC =
          _148_bufferInformationFromAcceptingRBC;
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _133_bufferInformationFromAcceptingRBC = kcg_false;
        _9_bufferInformationFromAcceptingRBC =
          _133_bufferInformationFromAcceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        _122_bufferInformationFromAcceptingRBC = kcg_false;
        _9_bufferInformationFromAcceptingRBC =
          _122_bufferInformationFromAcceptingRBC;
        break;
      
    }
    outC->bufferInformationFromAcceptingRBC =
      _9_bufferInformationFromAcceptingRBC;
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        _224_handoverInprogress =
          _L5_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
        _10_handoverInprogress = _224_handoverInprogress;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _209_handoverInprogress = kcg_true;
        _10_handoverInprogress = _209_handoverInprogress;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _194_handoverInprogress = kcg_true;
        _10_handoverInprogress = _194_handoverInprogress;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        _179_handoverInprogress = kcg_true;
        _10_handoverInprogress = _179_handoverInprogress;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _164_handoverInprogress = kcg_true;
        _10_handoverInprogress = _164_handoverInprogress;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        _149_handoverInprogress = kcg_true;
        _10_handoverInprogress = _149_handoverInprogress;
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _134_handoverInprogress = kcg_true;
        _10_handoverInprogress = _134_handoverInprogress;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        _123_handoverInprogress = kcg_true;
        _10_handoverInprogress = _123_handoverInprogress;
        break;
      
    }
    outC->handoverInprogress = _10_handoverInprogress;
    /* init_handOver_with_2_Sessions_SM */ if (outC->init1) {
      handOver_with_2_Sessions_SM_reset_prv_IfBlock1 = kcg_false;
    }
    else {
      handOver_with_2_Sessions_SM_reset_prv_IfBlock1 =
        outC->handOver_with_2_Sessions_SM_reset_act_IfBlock1;
    }
    outC->handOver_with_2_Sessions_SM_reset_act_IfBlock1 = kcg_false;
    handOver_with_2_Sessions_SM_fired_strong_IfBlock1 =
      SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1;
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_225_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_L7_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_225_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_210_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_210_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_195_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_195_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_180_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_180_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_165_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_165_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_150_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_150_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_135_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_124_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_230_last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_124_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        break;
      
    }
    last_establishSessionWithAcceptingRBCOrdered_IfBlock1 =
      outC->establishSessionWithAcceptingRBCOrdered_IfBlock1;
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM :
        outC->establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          _226_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder) {
          _227_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          _227_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
          _227_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
        _228_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder;
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          _228_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTransitionOrder) {
          _229_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForTransitionOrder_1_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else {
          _229_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1;
        }
        _231_handOver_with_2_Sessions_SM_fired_IfBlock1 =
          _229_handOver_with_2_Sessions_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _211_establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        outC->establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          _211_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing) {
          _212_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing) {
          _212_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          _212_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
        }
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
          _212_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing) {
          _213_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _213_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing;
        }
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          _213_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing) {
          _214_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForMaxSafeFrontEndPassing_1_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMaxSafeFrontEndPassing) {
          _214_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForMaxSafeFrontEndPassing_2_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else {
          _214_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1;
        }
        _231_handOver_with_2_Sessions_SM_fired_IfBlock1 =
          _214_handOver_with_2_Sessions_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM :
        _196_establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        outC->establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          _196_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing) {
          _197_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing) {
          _197_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          _197_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
        }
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
          _197_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing) {
          _198_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _198_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing;
        }
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          _198_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing) {
          _199_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForMinSafeRearEndPassing_1_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForMinSafeRearEndPassing) {
          _199_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForMinSafeRearEndPassing_2_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else {
          _199_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1;
        }
        _231_handOver_with_2_Sessions_SM_fired_IfBlock1 =
          _199_handOver_with_2_Sessions_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM :
        _181_establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        outC->establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          _181_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished) {
          _182_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          _182_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM;
        }
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
          _182_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
        _183_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished;
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          _183_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForSessionWithAcceptingRBCEstablished) {
          _184_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForSessionWithAcceptingRBCEstablished_1_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else {
          _184_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1;
        }
        _231_handOver_with_2_Sessions_SM_fired_IfBlock1 =
          _184_handOver_with_2_Sessions_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _166_establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        outC->establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          _166_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _167_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _167_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          _167_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
        }
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
          _167_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _168_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _168_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC;
        }
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          _168_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _169_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForTerminationOrderFromHandingOverRBC_1_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _169_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForTerminationOrderFromHandingOverRBC_2_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else {
          _169_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1;
        }
        _231_handOver_with_2_Sessions_SM_fired_IfBlock1 =
          _169_handOver_with_2_Sessions_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM :
        _151_establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        outC->establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          _151_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
          _152_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
          _152_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          _152_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM;
        }
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
          _152_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
          _153_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _153_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated;
        }
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          _153_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
          _154_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCTerminated_1_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCTerminated) {
          _154_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCTerminated_2_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else {
          _154_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1;
        }
        _231_handOver_with_2_Sessions_SM_fired_IfBlock1 =
          _154_handOver_with_2_Sessions_SM_fired_IfBlock1;
        break;
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        _136_establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        outC->establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          _136_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
          _137_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
          _137_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          _137_handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM;
        }
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
          _137_handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
          _138_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _138_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC;
        }
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          _138_handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
          _139_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_ReregisterHandingOverRBC_1_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_ReregisterHandingOverRBC) {
          _139_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_ReregisterHandingOverRBC_2_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else {
          _139_handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1;
        }
        _231_handOver_with_2_Sessions_SM_fired_IfBlock1 =
          _139_handOver_with_2_Sessions_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM :
        establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          last_establishSessionWithAcceptingRBCOrdered_IfBlock1;
        outC->establishSessionWithAcceptingRBCOrdered_IfBlock1 =
          establishSessionWithAcceptingRBCOrdered_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
          handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
          handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM;
        }
        else {
          handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM;
        }
        outC->handOver_with_2_Sessions_SM_state_nxt_IfBlock1 =
          handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
          handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered;
        }
        outC->handOver_with_2_Sessions_SM_reset_nxt_IfBlock1 =
          handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
          handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCRegistered_1_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_2_Sessions_SM_WaitForHandingOverRBCRegistered) {
          handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCRegistered_2_handOver_with_2_Sessions_SM_IfBlock1;
        }
        else {
          handOver_with_2_Sessions_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1;
        }
        _231_handOver_with_2_Sessions_SM_fired_IfBlock1 =
          handOver_with_2_Sessions_SM_fired_IfBlock1;
        break;
      
    }
  }
  else {
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L15_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder,
          &p131_transitionOrder_mem);
        _L14_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder =
          _L15_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder.valid;
        transitionOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder =
          _L14_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
        br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder =
          transitionOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
        br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L2_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L15_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing,
          &_L2_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing.session);
        _L1_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
          _L15_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing.phase;
        _L16_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
          sp_maintaining_RCM_Session_Types_Pkg;
        _L14_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
          _L1_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing ==
          _L16_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
        _L6_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
          maxSafeFrontEndPassesHandOverLocation;
        _L5_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
          _L14_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing &
          _L6_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
        break;
      
    }
    /* sel_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_state_sel_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        if (handOver_with_1_Session_SM_reset_sel_IfBlock1) {
          /* 26 */ RisingEdge_reset_digital(&outC->Context_26);
        }
        break;
      
    }
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        /* 26 */
        RisingEdge_digital(
          _L5_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing,
          &outC->Context_26);
        _L8_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
          outC->Context_26.RE_Output;
        _93_sendPositionReport_2_handingOverRBC =
          _L8_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
        br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
          _93_sendPositionReport_2_handingOverRBC;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing) {
        }
        else {
          br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
        }
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L2_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L17_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing,
          &_L2_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing.session);
        _L1_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
          _L17_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing.phase;
        _L18_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
          sp_maintaining_RCM_Session_Types_Pkg;
        _L14_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
          _L1_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing ==
          _L18_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
        _L16_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
          minSafeReadEndPassesHandOverLocation;
        _L5_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
          _L14_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing &
          _L16_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
        break;
      
    }
    /* sel_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_state_sel_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        if (handOver_with_1_Session_SM_reset_sel_IfBlock1) {
          /* 28 */ RisingEdge_reset_digital(&outC->Context_28);
        }
        break;
      
    }
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        /* 28 */
        RisingEdge_digital(
          _L5_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing,
          &outC->Context_28);
        _L8_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
          outC->Context_28.RE_Output;
        _81_sendPositionReport_2_handingOverRBC =
          _L8_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
        br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
          _81_sendPositionReport_2_handingOverRBC;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing) {
        }
        else {
          br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
        }
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L20_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L24_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished,
          &_L20_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished.session);
        _L6_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L24_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished.phase;
        _L25_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          sp_maintaining_RCM_Session_Types_Pkg;
        _L2_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L6_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished ==
          _L25_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB =
          _L2_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          sessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRB;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
        }
        else {
          br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        }
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L8_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          p42_terminateCmd_from_handingOverRBC);
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L7_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          morcStatusFromHandingOverRBC);
        /* 11 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &_L8_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L7_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        _L27_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC.valid;
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &_L31_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC.packets);
        /* 2 */
        Read_P042_TM(
          &_L31_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L28_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          &_L29_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        _L30_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L29_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC.q_rbc;
        _L32_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
          Q_RBC_Terminate_communication_session;
        _L26_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L30_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC ==
          _L32_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
        _L25_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
          _L27_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC &
          _L28_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC &
          _L26_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
        terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom =
          _L25_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
        br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
          terminationWithHandingOverRBCOrdered_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFrom;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
        }
        else {
          br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
        }
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L2_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated,
          morcStatusFromHandingOverRBC);
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L7_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated,
          &_L2_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated.session);
        _L4_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated =
          _L7_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated.phase;
        _L8_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated =
          sp_terminated_RCM_Session_Types_Pkg;
        _L3_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated =
          _L4_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated ==
          _L8_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
        sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTermin =
          _L3_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
        br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated =
          sessionWithHandingOverRBC_terminated_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTermin;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
        }
        else {
          br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
        }
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        br_1_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        break;
      
    }
    /* last_init_ck_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ if (outC->init3) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
        &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
    }
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing) {
          sNotReady = kcg_true;
        }
        else /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing) {
          sNotReady = kcg_true;
        }
        else /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
          sNotReady = kcg_true;
          sHandoverFinished = kcg_false;
        }
        else /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
          sNotReady = kcg_true;
          sHandoverFinished = kcg_true;
        }
        else {
          sNotReady = kcg_false;
          sHandoverFinished = kcg_false;
        }
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
          sNotReady = kcg_true;
        }
        else /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
          sNotReady = kcg_true;
        }
        else /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
          sNotReady = kcg_true;
        }
        else {
          sNotReady = kcg_false;
        }
        sHandoverFinished = kcg_false;
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_38_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L36_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
          &_38_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        _L41_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L36_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC.valid;
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &_L37_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
          &_L36_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC.packets);
        /* 1 */
        Read_P045_TM(
          &_L37_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
          &_L38_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
          &_L39_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        _L40_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L41_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          _L38_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L42_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L39_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC.nid_mn;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L49_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
          morcStatusFromHandingOverRBC);
        kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
          &_L67_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
          &_L49_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC.registration);
        _L48_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L67_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC.nid_mn;
        _L51_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L42_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC !=
          _L48_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L69_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          mrs_registered_RCM_Types_Pkg;
        _L45_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L67_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC.status;
        _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L69_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC ==
          _L45_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L50_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L51_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L68_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          mrs_unregistered_RCM_Types_Pkg;
        _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L45_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC ==
          _L68_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L47_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L50_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC |
          _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L40_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          _L47_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L56_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          !_L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L57_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L56_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          _L43_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L65_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          _L44_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        _L58_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L57_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC |
          _L65_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L58_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        br_2_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          unregistered_or_noReregisterRequired_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
          sNotReady = kcg_true;
        }
        else {
          br_2_clock_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
          /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
            sNotReady = kcg_true;
          }
          else {
            sNotReady = kcg_false;
          }
        }
        sHandoverFinished = kcg_false;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
        _L11_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
          mrs_registered_RCM_Types_Pkg;
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L4_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered,
          morcStatusFromHandingOverRBC);
        kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
          &_L10_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered,
          &_L4_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered.registration);
        _L7_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
          _L10_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered.status;
        _L9_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
          _L11_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered ==
          _L7_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
        handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
          _L9_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
        br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
          handingOverRBCReregistered_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
          sNotReady = kcg_true;
        }
        else {
          br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
          /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
            sNotReady = kcg_true;
          }
          else {
            sNotReady = kcg_false;
          }
        }
        sHandoverFinished = kcg_false;
        break;
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        br_1_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC =
          newTransitionOrderReceived;
        br_1_clock_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
        br_2_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC =
          kcg_true;
        /* cb_anon_sm */ if (br_1_clock_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC) {
          sNotReady = kcg_true;
        }
        else {
          br_2_clock_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
          /* cb_anon_sm */ if (br_2_clock_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC) {
            sNotReady = kcg_true;
          }
          else {
            sNotReady = kcg_false;
          }
        }
        sHandoverFinished = kcg_false;
        break;
      
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &p42_sessionCmd_for_acceptingRBC,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_acceptingRBC,
      &p42_sessionCmd_for_acceptingRBC);
    /* last_init_ck_p131_transitionOrder_loc */ if (outC->init3) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p131_transitionOrder_loc_IfBlock1,
        (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &last_p131_transitionOrder_loc_IfBlock1,
        &outC->p131_transitionOrder_loc_IfBlock1);
    }
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_102_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC,
          &_102_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_90_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC,
          &_90_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_78_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC,
          &_78_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_66_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC,
          &_66_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L33_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        /* 5 */ if (_L25_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L23_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
            &_L3_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L23_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC,
            &_L33_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_54_p42_sessionCmd_for_handingOverRBC,
          &_L23_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC,
          &_54_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_42_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC,
          &_42_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_30_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC,
          &_30_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_18_p42_sessionCmd_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC,
          &_18_p42_sessionCmd_for_handingOverRBC);
        break;
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L7_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC,
          &p131_transitionOrder_loc_IfBlock1);
        /* 8 */
        p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg(
          &_L7_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC,
          &_L8_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC);
        kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
          &_L6_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC,
          morcStatusFromHandingOverRBC);
        /* 12 */
        checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
          &_L8_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC,
          &_L6_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC,
          &_L1_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_11_p42_sessionCmd_for_handingOverRBC,
          &_L1_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p42_sessionCmd_for_handingOverRBC,
          &_11_p42_sessionCmd_for_handingOverRBC);
        break;
      
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_handingOverRBC,
      &p42_sessionCmd_for_handingOverRBC);
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L8_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder,
          p45_radioNetworkRegistrationOrder_in);
        _L18_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder =
          !_L14_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
        _L7_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder =
          _L8_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder.valid;
        _L17_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder =
          _L18_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder &
          _L7_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L19_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder,
          &_L8_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder);
        if (kcg_true) {
          _L19_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder.valid =
            _L17_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_103_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_L19_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_103_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_91_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_91_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_79_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_79_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_67_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_67_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_55_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_55_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_43_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_43_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_31_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_31_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_19_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_19_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_12_p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_handingOverRBC,
          &_12_p45_radioNetworkRegistrationOrder_for_handingOverRBC);
        break;
      
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p45_radioNetworkRegistrationOrder_for_handingOverRBC,
      &p45_radioNetworkRegistrationOrder_for_handingOverRBC);
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_104_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_104_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_92_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_92_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_80_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_80_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_68_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_68_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_56_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_56_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_44_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_44_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        _L66_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          kcg_false;
        /* 3 */ if (outC->init2) {
          _L63_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
            kcg_true;
        }
        else {
          _L63_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
            _L66_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        }
        _L64_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC =
          _L53_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC &
          _L63_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L55_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        /* 8 */ if (_L64_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L54_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
            &_L36_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L54_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC,
            &_L55_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_32_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_L54_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_32_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_20_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_20_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_13_p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_for_acceptingRBC,
          &_13_p45_radioNetworkRegistrationOrder_for_acceptingRBC);
        break;
      
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p45_radioNetworkRegistrationOrder_for_acceptingRBC,
      &p45_radioNetworkRegistrationOrder_for_acceptingRBC);
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        _105_sendPositionReport_2_handingOverRBC = kcg_false;
        sendPositionReport_2_handingOverRBC =
          _105_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        sendPositionReport_2_handingOverRBC =
          _93_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        sendPositionReport_2_handingOverRBC =
          _81_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        _69_sendPositionReport_2_handingOverRBC = kcg_false;
        sendPositionReport_2_handingOverRBC =
          _69_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        _57_sendPositionReport_2_handingOverRBC = kcg_false;
        sendPositionReport_2_handingOverRBC =
          _57_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        _45_sendPositionReport_2_handingOverRBC = kcg_false;
        sendPositionReport_2_handingOverRBC =
          _45_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        _33_sendPositionReport_2_handingOverRBC = kcg_false;
        sendPositionReport_2_handingOverRBC =
          _33_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        _21_sendPositionReport_2_handingOverRBC = kcg_false;
        sendPositionReport_2_handingOverRBC =
          _21_sendPositionReport_2_handingOverRBC;
        break;
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        _14_sendPositionReport_2_handingOverRBC = kcg_false;
        sendPositionReport_2_handingOverRBC =
          _14_sendPositionReport_2_handingOverRBC;
        break;
      
    }
    outC->sendPositionReport_2_handingOverRBC =
      sendPositionReport_2_handingOverRBC;
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        _106_sendPositionReport_2_acceptingRBC = kcg_false;
        sendPositionReport_2_acceptingRBC =
          _106_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        _94_sendPositionReport_2_acceptingRBC = kcg_false;
        sendPositionReport_2_acceptingRBC =
          _94_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        _82_sendPositionReport_2_acceptingRBC = kcg_false;
        sendPositionReport_2_acceptingRBC =
          _82_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        _70_sendPositionReport_2_acceptingRBC =
          _L2_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        sendPositionReport_2_acceptingRBC =
          _70_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        _58_sendPositionReport_2_acceptingRBC = kcg_false;
        sendPositionReport_2_acceptingRBC =
          _58_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        _46_sendPositionReport_2_acceptingRBC = kcg_false;
        sendPositionReport_2_acceptingRBC =
          _46_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        _34_sendPositionReport_2_acceptingRBC = kcg_false;
        sendPositionReport_2_acceptingRBC =
          _34_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        _22_sendPositionReport_2_acceptingRBC = kcg_false;
        sendPositionReport_2_acceptingRBC =
          _22_sendPositionReport_2_acceptingRBC;
        break;
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        _15_sendPositionReport_2_acceptingRBC = kcg_false;
        sendPositionReport_2_acceptingRBC =
          _15_sendPositionReport_2_acceptingRBC;
        break;
      
    }
    outC->sendPositionReport_2_acceptingRBC = sendPositionReport_2_acceptingRBC;
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        _107_sendTrainData_2_acceptingRBC = kcg_false;
        sendTrainData_2_acceptingRBC = _107_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        _95_sendTrainData_2_acceptingRBC = kcg_false;
        sendTrainData_2_acceptingRBC = _95_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        _83_sendTrainData_2_acceptingRBC = kcg_false;
        sendTrainData_2_acceptingRBC = _83_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        _L14_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          M_MODE_Sleeping;
        _L8_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          mode;
        _L11_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L14_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished ==
          _L8_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        _L19_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          M_MODE_Non_Leading;
        _L16_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L8_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished ==
          _L19_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        _L12_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L11_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished |
          _L16_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        _L18_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          !_L12_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        _L9_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished =
          _L2_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished &
          _L18_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        _71_sendTrainData_2_acceptingRBC =
          _L9_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        sendTrainData_2_acceptingRBC = _71_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        _59_sendTrainData_2_acceptingRBC = kcg_false;
        sendTrainData_2_acceptingRBC = _59_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        _47_sendTrainData_2_acceptingRBC = kcg_false;
        sendTrainData_2_acceptingRBC = _47_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        _35_sendTrainData_2_acceptingRBC = kcg_false;
        sendTrainData_2_acceptingRBC = _35_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        _23_sendTrainData_2_acceptingRBC = kcg_false;
        sendTrainData_2_acceptingRBC = _23_sendTrainData_2_acceptingRBC;
        break;
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        _16_sendTrainData_2_acceptingRBC = kcg_false;
        sendTrainData_2_acceptingRBC = _16_sendTrainData_2_acceptingRBC;
        break;
      
    }
    outC->sendTrainData_2_acceptingRBC = sendTrainData_2_acceptingRBC;
    useInformationFromAcceptingRBC = kcg_false;
    outC->useInformationFromAcceptingRBC = useInformationFromAcceptingRBC;
    bufferInformationFromAcceptingRBC = kcg_false;
    outC->bufferInformationFromAcceptingRBC = bufferInformationFromAcceptingRBC;
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        _L16_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder =
          kcg_false;
        _108_handoverInprogress =
          _L16_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
        handoverInprogress = _108_handoverInprogress;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        _96_handoverInprogress = kcg_true;
        handoverInprogress = _96_handoverInprogress;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        _84_handoverInprogress = kcg_true;
        handoverInprogress = _84_handoverInprogress;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        _72_handoverInprogress = kcg_true;
        handoverInprogress = _72_handoverInprogress;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        _60_handoverInprogress =
          _L25_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
        handoverInprogress = _60_handoverInprogress;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        _48_handoverInprogress = kcg_true;
        handoverInprogress = _48_handoverInprogress;
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        _36_handoverInprogress = kcg_true;
        handoverInprogress = _36_handoverInprogress;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        _24_handoverInprogress = kcg_true;
        handoverInprogress = _24_handoverInprogress;
        break;
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        _17_handoverInprogress = kcg_true;
        handoverInprogress = _17_handoverInprogress;
        break;
      
    }
    outC->handoverInprogress = handoverInprogress;
    /* init_handOver_with_1_Session_SM */ if (outC->init3) {
      handOver_with_1_Session_SM_reset_prv_IfBlock1 = kcg_false;
    }
    else {
      handOver_with_1_Session_SM_reset_prv_IfBlock1 =
        outC->handOver_with_1_Session_SM_reset_act_IfBlock1;
    }
    outC->handOver_with_1_Session_SM_reset_act_IfBlock1 = kcg_false;
    handOver_with_1_Session_SM_fired_strong_IfBlock1 =
      SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L12_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder,
          &last_p131_transitionOrder_loc_IfBlock1);
        /* 7 */ if (_L14_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L13_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder,
            &_L15_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L13_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder,
            &_L12_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_109_p131_transitionOrder_loc_IfBlock1,
          &_L13_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &_109_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L6_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        /* 6 */ if (_L7_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder) {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L9_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder,
            &_L8_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder);
        }
        else {
          kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
            &_L9_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder,
            &_L6_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder);
        }
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_110_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_L9_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_110_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder) {
          _111_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          _111_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
          _111_handOver_with_1_Session_SM_state_nxt_IfBlock1;
        _112_handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder;
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          _112_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTransitionOrder) {
          _113_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForTransitionOrder_1_handOver_with_1_Session_SM_IfBlock1;
        }
        else {
          _113_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
        }
        _232_handOver_with_1_Session_SM_fired_IfBlock1 =
          _113_handOver_with_1_Session_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_97_p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &_97_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_98_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_98_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing) {
          _99_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing) {
          _99_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          _99_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
          _99_handOver_with_1_Session_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing) {
          _100_handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _100_handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing;
        }
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          _100_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing) {
          _101_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForMaxSafeFrontEndPassing_1_handOver_with_1_Session_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMaxSafeFrontEndPassing) {
          _101_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForMaxSafeFrontEndPassing_2_handOver_with_1_Session_SM_IfBlock1;
        }
        else {
          _101_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
        }
        _232_handOver_with_1_Session_SM_fired_IfBlock1 =
          _101_handOver_with_1_Session_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_85_p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &_85_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_86_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_86_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing) {
          _87_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing) {
          _87_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          _87_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
          _87_handOver_with_1_Session_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing) {
          _88_handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _88_handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing;
        }
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          _88_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing) {
          _89_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForMinSafeRearEndPassing_1_handOver_with_1_Session_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForMinSafeRearEndPassing) {
          _89_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForMinSafeRearEndPassing_2_handOver_with_1_Session_SM_IfBlock1;
        }
        else {
          _89_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
        }
        _232_handOver_with_1_Session_SM_fired_IfBlock1 =
          _89_handOver_with_1_Session_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_L23_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished,
          (msgFromTrack_T_RCM_MsgTypes_Pkg *)
            &cNoMessageFromTrack_Handover_Pkg);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_73_p131_transitionOrder_loc_IfBlock1,
          &_L23_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &_73_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_74_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_L23_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_74_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
          _75_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
          _75_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          _75_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
          _75_handOver_with_1_Session_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
          _76_handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _76_handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished;
        }
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          _76_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
          _77_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForSessionWithAcceptingRBCEstablished_1_handOver_with_1_Session_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForSessionWithAcceptingRBCEstablished) {
          _77_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForSessionWithAcceptingRBCEstablished_2_handOver_with_1_Session_SM_IfBlock1;
        }
        else {
          _77_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
        }
        _232_handOver_with_1_Session_SM_fired_IfBlock1 =
          _77_handOver_with_1_Session_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_61_p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &_61_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_62_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_62_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _63_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _63_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          _63_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
          _63_handOver_with_1_Session_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _64_handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _64_handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC;
        }
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          _64_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _65_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForTerminationOrderFromHandingOverRBC_1_handOver_with_1_Session_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForTerminationOrderFromHandingOverRBC) {
          _65_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForTerminationOrderFromHandingOverRBC_2_handOver_with_1_Session_SM_IfBlock1;
        }
        else {
          _65_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
        }
        _232_handOver_with_1_Session_SM_fired_IfBlock1 =
          _65_handOver_with_1_Session_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_49_p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &_49_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_50_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_50_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
          _51_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
          _51_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          _51_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
          _51_handOver_with_1_Session_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
          _52_handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _52_handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated;
        }
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          _52_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
          _53_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCTerminated_1_handOver_with_1_Session_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCTerminated) {
          _53_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCTerminated_2_handOver_with_1_Session_SM_IfBlock1;
        }
        else {
          _53_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
        }
        _232_handOver_with_1_Session_SM_fired_IfBlock1 =
          _53_handOver_with_1_Session_SM_fired_IfBlock1;
        break;
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_37_p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &_37_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_38_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
          _39_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
          _39_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          _39_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
          _39_handOver_with_1_Session_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
          _40_handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _40_handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC;
        }
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          _40_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
          _41_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_RegisterAcceptingRBC_1_handOver_with_1_Session_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_RegisterAcceptingRBC) {
          _41_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_RegisterAcceptingRBC_2_handOver_with_1_Session_SM_IfBlock1;
        }
        else {
          _41_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
        }
        _232_handOver_with_1_Session_SM_fired_IfBlock1 =
          _41_handOver_with_1_Session_SM_fired_IfBlock1;
        break;
      case SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_25_p131_transitionOrder_loc_IfBlock1,
          &last_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &_25_p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &_26_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &_26_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
          _27_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
          _27_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          _27_handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
          _27_handOver_with_1_Session_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
          _28_handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          _28_handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered;
        }
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          _28_handOver_with_1_Session_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
          _29_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCRegistered_1_handOver_with_1_Session_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_WaitForHandingOverRBCRegistered) {
          _29_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_WaitForHandingOverRBCRegistered_2_handOver_with_1_Session_SM_IfBlock1;
        }
        else {
          _29_handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
        }
        _232_handOver_with_1_Session_SM_fired_IfBlock1 =
          _29_handOver_with_1_Session_SM_fired_IfBlock1;
        break;
      case SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->p131_transitionOrder_loc_IfBlock1,
          &p131_transitionOrder_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &last_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
          &outC->_5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1,
          &p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1);
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC) {
          handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC) {
          handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM;
        }
        else {
          handOver_with_1_Session_SM_state_nxt_IfBlock1 =
            SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM;
        }
        outC->handOver_with_1_Session_SM_state_nxt_IfBlock1 =
          handOver_with_1_Session_SM_state_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC) {
          handOver_with_1_Session_SM_reset_nxt_IfBlock1 = kcg_true;
        }
        else {
          handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
            br_2_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC;
        }
        outC->handOver_with_1_Session_SM_reset_nxt_IfBlock1 =
          handOver_with_1_Session_SM_reset_nxt_IfBlock1;
        if (br_1_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC) {
          handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_EstablishSessionWithAcceptingRBC_1_handOver_with_1_Session_SM_IfBlock1;
        }
        else if (br_2_guard_IfBlock1_handOver_with_1_Session_SM_EstablishSessionWithAcceptingRBC) {
          handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_EstablishSessionWithAcceptingRBC_2_handOver_with_1_Session_SM_IfBlock1;
        }
        else {
          handOver_with_1_Session_SM_fired_IfBlock1 =
            SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1;
        }
        _232_handOver_with_1_Session_SM_fired_IfBlock1 =
          handOver_with_1_Session_SM_fired_IfBlock1;
        break;
      
    }
  }
  _L1 = sHandoverFinished;
  outC->handoverFinished = _L1;
  _L9 = sNotReady;
  outC->notReady = _L9;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* cb_handOver_with_2_Sessions_SM */ switch (handOver_with_2_Sessions_SM_clock_IfBlock1) {
      case SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM :
        outC->init = kcg_false;
        break;
      
    }
    outC->init1 = kcg_false;
  }
  else {
    /* cb_handOver_with_1_Session_SM */ switch (handOver_with_1_Session_SM_clock_IfBlock1) {
      case SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM :
        outC->init2 = kcg_false;
        break;
      
    }
    outC->init3 = kcg_false;
  }
  outC->init4 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** handOverSequencer_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

