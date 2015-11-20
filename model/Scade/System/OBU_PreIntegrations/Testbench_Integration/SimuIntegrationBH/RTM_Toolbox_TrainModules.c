/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RTM_Toolbox_TrainModules.h"

#ifndef KCG_USER_DEFINED_INIT
void RTM_init_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->connectionEstablished = kcg_true;
  outC->registrationFinished = kcg_true;
  outC->GSM_R_MobileManagement_reset_nxt = kcg_true;
  outC->GSM_R_MobileManagement_reset_act = kcg_true;
  outC->GSM_R_MobileManagement_state_nxt =
    SSM_st_Not_registered_GSM_R_MobileManagement;
  outC->fby__L2_GSM_R_MobileManagement_Connecting.idx = 0;
  for (i = 0; i < 5; i++) {
    outC->fby__L2_GSM_R_MobileManagement_Connecting.items[i] = kcg_true;
  }
  outC->fby__L2_GSM_R_MobileManagement_Registering.idx = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->fby__L2_GSM_R_MobileManagement_Registering.items[i1] = kcg_true;
  }
  outC->mobileHWStatus.valid = kcg_true;
  outC->mobileHWStatus.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->mobileHWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->mobileHWStatus.connectionLost = kcg_true;
  outC->TrackMessage.valid = kcg_true;
  outC->TrackMessage.systemTimeMsgReceived = 0;
  outC->TrackMessage.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->TrackMessage.btm_msg.present = kcg_true;
  outC->TrackMessage.btm_msg.checkResult = kcg_true;
  outC->TrackMessage.btm_msg.api_bad_balise_received = kcg_true;
  outC->TrackMessage.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->TrackMessage.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->TrackMessage.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->TrackMessage.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->TrackMessage.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->TrackMessage.btm_msg.api_header.m_mcount = 0;
  outC->TrackMessage.btm_msg.api_header.nid_c = 0;
  outC->TrackMessage.btm_msg.api_header.nid_bg = 0;
  outC->TrackMessage.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->TrackMessage.rtm_msg.present = kcg_true;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->TrackMessage.packets.PacketHeaders[i2].nid_packet = 0;
    outC->TrackMessage.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->TrackMessage.packets.PacketHeaders[i2].valid = kcg_true;
    outC->TrackMessage.packets.PacketHeaders[i2].startAddress = 0;
    outC->TrackMessage.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->TrackMessage.packets.PacketData[i3] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RTM_reset_Toolbox_TrainModules(outC_RTM_Toolbox_TrainModules *outC)
{
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::TrainModules::RTM */
void RTM_Toolbox_TrainModules(
  /* Toolbox::TrainModules::RTM::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* Toolbox::TrainModules::RTM::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* Toolbox::TrainModules::RTM::RadioHeader */ Radio_TrackTrain_Header_T_TM *RadioHeader,
  /* Toolbox::TrainModules::RTM::RadioManagementMessage */ RadioManagement_T_API_RadioCommunication_Pkg *RadioManagementMessage,
  outC_RTM_Toolbox_TrainModules *outC)
{
  static kcg_int i1;
  static kcg_int i;
  /* Toolbox::TrainModules::RTM */
  static kcg_bool fby_4_RTM_Toolbox_TrainModules;
  /* Toolbox::TrainModules::RTM */
  static kcg_bool fby_3_RTM_Toolbox_TrainModules;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _25_GSM_R_MobileManagement_fired;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool _24_GSM_R_MobileManagement_reset_nxt;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement _23_GSM_R_MobileManagement_state_nxt;
  /* Toolbox::TrainModules::RTM::connectionEstablished */
  static kcg_bool _22_connectionEstablished;
  /* Toolbox::TrainModules::RTM::registrationFinished */
  static kcg_bool _21_registrationFinished;
  /* Toolbox::TrainModules::RTM::mobileHWStatus */
  static mobileHWStatus_Type_MoRC_Pck _20_mobileHWStatus;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Not_registered::_L1 */
  static mobileHWStatus_Type_MoRC_Pck _L1_GSM_R_MobileManagement_Not_registered;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _19_GSM_R_MobileManagement_fired;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool _18_GSM_R_MobileManagement_reset_nxt;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement _17_GSM_R_MobileManagement_state_nxt;
  /* Toolbox::TrainModules::RTM::connectionEstablished */
  static kcg_bool _16_connectionEstablished;
  /* Toolbox::TrainModules::RTM::registrationFinished */
  static kcg_bool _15_registrationFinished;
  /* Toolbox::TrainModules::RTM::mobileHWStatus */
  static mobileHWStatus_Type_MoRC_Pck _14_mobileHWStatus;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registering::_L3 */
  static kcg_bool _L3_GSM_R_MobileManagement_Registering;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registering::_L2 */
  static kcg_bool _L2_GSM_R_MobileManagement_Registering;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registering::_L1 */
  static mobileHWStatus_Type_MoRC_Pck _L1_GSM_R_MobileManagement_Registering;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _13_GSM_R_MobileManagement_fired;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool _12_GSM_R_MobileManagement_reset_nxt;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement _11_GSM_R_MobileManagement_state_nxt;
  /* Toolbox::TrainModules::RTM::connectionEstablished */
  static kcg_bool _10_connectionEstablished;
  /* Toolbox::TrainModules::RTM::registrationFinished */
  static kcg_bool _9_registrationFinished;
  /* Toolbox::TrainModules::RTM::mobileHWStatus */
  static mobileHWStatus_Type_MoRC_Pck _8_mobileHWStatus;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registered::_L1 */
  static mobileHWStatus_Type_MoRC_Pck _L1_GSM_R_MobileManagement_Registered;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _7_GSM_R_MobileManagement_fired;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool _6_GSM_R_MobileManagement_reset_nxt;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement _5_GSM_R_MobileManagement_state_nxt;
  /* Toolbox::TrainModules::RTM::connectionEstablished */
  static kcg_bool _4_connectionEstablished;
  /* Toolbox::TrainModules::RTM::registrationFinished */
  static kcg_bool _3_registrationFinished;
  /* Toolbox::TrainModules::RTM::mobileHWStatus */
  static mobileHWStatus_Type_MoRC_Pck _2_mobileHWStatus;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connecting::_L2 */
  static kcg_bool _L2_GSM_R_MobileManagement_Connecting;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connecting::_L3 */
  static kcg_bool _L3_GSM_R_MobileManagement_Connecting;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connecting::_L1 */
  static mobileHWStatus_Type_MoRC_Pck _L1_GSM_R_MobileManagement_Connecting;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement GSM_R_MobileManagement_fired;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool GSM_R_MobileManagement_reset_nxt;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_nxt;
  /* Toolbox::TrainModules::RTM::connectionEstablished */
  static kcg_bool connectionEstablished;
  /* Toolbox::TrainModules::RTM::registrationFinished */
  static kcg_bool registrationFinished;
  /* Toolbox::TrainModules::RTM::mobileHWStatus */
  static mobileHWStatus_Type_MoRC_Pck mobileHWStatus;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connected::_L1 */
  static mobileHWStatus_Type_MoRC_Pck _L1_GSM_R_MobileManagement_Connected;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _37_GSM_R_MobileManagement_fired_strong;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool _36_GSM_R_MobileManagement_reset_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement _35_GSM_R_MobileManagement_state_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Not_registered */
  static kcg_bool br_1_guard_GSM_R_MobileManagement_Not_registered;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _34_GSM_R_MobileManagement_fired_strong;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool _33_GSM_R_MobileManagement_reset_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement _32_GSM_R_MobileManagement_state_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registering */
  static kcg_bool br_2_guard_GSM_R_MobileManagement_Registering;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registering */
  static kcg_bool br_1_guard_GSM_R_MobileManagement_Registering;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _31_GSM_R_MobileManagement_fired_strong;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool _30_GSM_R_MobileManagement_reset_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement _29_GSM_R_MobileManagement_state_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registered */
  static kcg_bool br_2_guard_GSM_R_MobileManagement_Registered;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Registered */
  static kcg_bool br_1_guard_GSM_R_MobileManagement_Registered;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _28_GSM_R_MobileManagement_fired_strong;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool _27_GSM_R_MobileManagement_reset_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement _26_GSM_R_MobileManagement_state_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connecting */
  static kcg_bool br_2_guard_GSM_R_MobileManagement_Connecting;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connecting */
  static kcg_bool br_1_guard_GSM_R_MobileManagement_Connecting;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement GSM_R_MobileManagement_fired_strong;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool GSM_R_MobileManagement_reset_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connected */
  static kcg_bool br_2_guard_GSM_R_MobileManagement_Connected;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement::Connected */
  static kcg_bool br_1_guard_GSM_R_MobileManagement_Connected;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _38_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else */
  static kcg_bool _97_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _42_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::then::_L1 */
  static kcg_bool _L1103_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::then::_L2 */
  static RadioMetadata_T_Common_Types_Pkg _L2_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _41_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else */
  static kcg_bool _95_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _46_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1107_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_bool _L2108_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _45_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else */
  static kcg_bool _93_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _50_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L1112_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::then::_L2 */
  static RadioMetadata_T_Common_Types_Pkg _L2113_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3114_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _49_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _91_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _54_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2118_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::then::_L3 */
  static RadioMetadata_T_Common_Types_Pkg _L3119_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _53_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _89_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _58_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L1123_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2124_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static RadioMetadata_T_Common_Types_Pkg _L3125_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _57_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _87_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _62_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1129_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2130_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3131_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _61_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _85_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _66_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1135_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2136_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _65_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _83_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _70_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L1139_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static RadioMetadata_T_Common_Types_Pkg _L2140_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _69_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _81_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _74_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1143_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2144_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _73_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _79_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _78_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1147_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2148_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _77_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1149_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L2 */
  static kcg_bool _L2150_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _75_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2146_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1145_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _76_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _80_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _71_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2142_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1141_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _72_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _82_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _67_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2138_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1137_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _68_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _84_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _63_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3134_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2133_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1132_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _64_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _86_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _59_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3128_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2127_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1126_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _60_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _88_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _55_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L2 */
  static kcg_bool _L2122_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1121_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3120_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _56_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _90_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _51_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3117_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::then::_L2 */
  static RadioMetadata_T_Common_Types_Pkg _L2116_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else::else::then::_L1 */
  static kcg_bool _L1115_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _52_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _92_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _47_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::then::_L1 */
  static kcg_bool _L1111_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::then::_L2 */
  static RadioMetadata_T_Common_Types_Pkg _L2110_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else::else::then::_L3 */
  static kcg_bool _L3109_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _48_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::else */
  static kcg_bool _94_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _43_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::then::_L2 */
  static RadioMetadata_T_Common_Types_Pkg _L2106_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::then::_L1 */
  static kcg_bool _L1105_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else::else::then::_L3 */
  static kcg_bool _L3104_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _44_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::else */
  static kcg_bool _96_else_clock_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _39_radioMetadata;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::then::_L3 */
  static kcg_bool _L3102_IfBlock1;
  /* Toolbox::TrainModules::RTM::IfBlock1::else::then::_L1 */
  static RadioMetadata_T_Common_Types_Pkg _L1101_IfBlock1;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _40_radioMetadata;
  /* Toolbox::TrainModules::RTM::connectionEstablished */
  static kcg_bool last_connectionEstablished;
  /* Toolbox::TrainModules::RTM::registrationFinished */
  static kcg_bool last_registrationFinished;
  /* Toolbox::TrainModules::RTM::mobileHWStatus */
  static mobileHWStatus_Type_MoRC_Pck last_mobileHWStatus;
  /* Toolbox::TrainModules::RTM::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement GSM_R_MobileManagement_state_sel;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_ST_GSM_R_MobileManagement _100_GSM_R_MobileManagement_state_act;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool GSM_R_MobileManagement_reset_sel;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static kcg_bool GSM_R_MobileManagement_reset_prv;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _99_GSM_R_MobileManagement_fired_strong;
  /* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
  static SSM_TR_GSM_R_MobileManagement _98_GSM_R_MobileManagement_fired;
  /* Toolbox::TrainModules::RTM::radioMetadata */
  static RadioMetadata_T_Common_Types_Pkg _151_radioMetadata;
  /* Toolbox::TrainModules::RTM::_L1 */
  static API_TrackSideInput_T_API_Msg_Pkg _L1;
  /* Toolbox::TrainModules::RTM::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L2;
  /* Toolbox::TrainModules::RTM::_L3 */
  static API_TelegramHeader_T_API_Msg_Pkg _L3;
  /* Toolbox::TrainModules::RTM::_L4 */
  static MsgSource_T_Common_Types_Pkg _L4;
  /* Toolbox::TrainModules::RTM::_L5 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* Toolbox::TrainModules::RTM::_L6 */
  static Radio_TrackTrain_Header_T_TM _L6;
  /* Toolbox::TrainModules::RTM::_L29 */
  static API_RadioMsgHeader_T_API_Msg_Pkg _L29;
  /* Toolbox::TrainModules::RTM::_L30 */
  static kcg_bool _L30;
  /* Toolbox::TrainModules::RTM::_L31 */
  static kcg_int _L31;
  /* Toolbox::TrainModules::RTM::_L32 */
  static kcg_bool _L32;
  /* Toolbox::TrainModules::RTM::_L37 */
  static RadioMetadata_T_Common_Types_Pkg _L37;
  /* Toolbox::TrainModules::RTM::_L51 */
  static Radio_TrackTrain_Header_T_TM_transitional _L51;
  /* Toolbox::TrainModules::RTM::_L52 */
  static NID_MESSAGE _L52;
  /* Toolbox::TrainModules::RTM::_L53 */
  static RBC_Id_T_Common_Types_Pkg _L53;
  /* Toolbox::TrainModules::RTM::_L54 */
  static kcg_bool _L54;
  /* Toolbox::TrainModules::RTM::_L55 */
  static kcg_int _L55;
  
  /* init_GSM_R_MobileManagement */ if (outC->init2) {
    GSM_R_MobileManagement_state_sel =
      SSM_st_Not_registered_GSM_R_MobileManagement;
  }
  else {
    GSM_R_MobileManagement_state_sel = outC->GSM_R_MobileManagement_state_nxt;
  }
  /* sel_GSM_R_MobileManagement */ switch (GSM_R_MobileManagement_state_sel) {
    case SSM_st_Connected_GSM_R_MobileManagement :
      br_1_guard_GSM_R_MobileManagement_Connected =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_disconnection_request_API_RadioCommunication_Pkg);
      br_2_guard_GSM_R_MobileManagement_Connected =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (br_1_guard_GSM_R_MobileManagement_Connected) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Registered_GSM_R_MobileManagement;
      }
      else if (br_2_guard_GSM_R_MobileManagement_Connected) {
        GSM_R_MobileManagement_state_act =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      else {
        GSM_R_MobileManagement_state_act =
          SSM_st_Connected_GSM_R_MobileManagement;
      }
      break;
    
  }
  /* last_init_ck_connectionEstablished */ if (outC->init2) {
    last_connectionEstablished = kcg_false;
  }
  else {
    last_connectionEstablished = outC->connectionEstablished;
  }
  /* sel_GSM_R_MobileManagement */ switch (GSM_R_MobileManagement_state_sel) {
    case SSM_st_Registered_GSM_R_MobileManagement :
      br_1_guard_GSM_R_MobileManagement_Registered =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_connection_request_API_RadioCommunication_Pkg);
      br_2_guard_GSM_R_MobileManagement_Registered =
        ((*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
            cmdr_reset_connection_API_RadioCommunication_Pkg)) |
        ((*RadioManagementMessage).cmd ==
          cmdr_networkUnregister_API_RadioCommunication_Pkg);
      if (br_1_guard_GSM_R_MobileManagement_Registered) {
        _29_GSM_R_MobileManagement_state_act =
          SSM_st_Connecting_GSM_R_MobileManagement;
      }
      else if (br_2_guard_GSM_R_MobileManagement_Registered) {
        _29_GSM_R_MobileManagement_state_act =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      else {
        _29_GSM_R_MobileManagement_state_act =
          SSM_st_Registered_GSM_R_MobileManagement;
      }
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      br_1_guard_GSM_R_MobileManagement_Connecting = last_connectionEstablished;
      br_2_guard_GSM_R_MobileManagement_Connecting =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (br_1_guard_GSM_R_MobileManagement_Connecting) {
        _26_GSM_R_MobileManagement_state_act =
          SSM_st_Connected_GSM_R_MobileManagement;
      }
      else if (br_2_guard_GSM_R_MobileManagement_Connecting) {
        _26_GSM_R_MobileManagement_state_act =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      else {
        _26_GSM_R_MobileManagement_state_act =
          SSM_st_Connecting_GSM_R_MobileManagement;
      }
      break;
    
  }
  /* last_init_ck_registrationFinished */ if (outC->init2) {
    last_registrationFinished = kcg_false;
  }
  else {
    last_registrationFinished = outC->registrationFinished;
  }
  /* sel_GSM_R_MobileManagement */ switch (GSM_R_MobileManagement_state_sel) {
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      br_1_guard_GSM_R_MobileManagement_Not_registered =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_networkRegister_API_RadioCommunication_Pkg);
      if (br_1_guard_GSM_R_MobileManagement_Not_registered) {
        _35_GSM_R_MobileManagement_state_act =
          SSM_st_Registering_GSM_R_MobileManagement;
      }
      else {
        _35_GSM_R_MobileManagement_state_act =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      _100_GSM_R_MobileManagement_state_act =
        _35_GSM_R_MobileManagement_state_act;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      br_1_guard_GSM_R_MobileManagement_Registering = last_registrationFinished;
      br_2_guard_GSM_R_MobileManagement_Registering =
        (*RadioManagementMessage).valid & ((*RadioManagementMessage).cmd ==
          cmdr_reset_connection_API_RadioCommunication_Pkg);
      if (br_1_guard_GSM_R_MobileManagement_Registering) {
        _32_GSM_R_MobileManagement_state_act =
          SSM_st_Registered_GSM_R_MobileManagement;
      }
      else if (br_2_guard_GSM_R_MobileManagement_Registering) {
        _32_GSM_R_MobileManagement_state_act =
          SSM_st_Not_registered_GSM_R_MobileManagement;
      }
      else {
        _32_GSM_R_MobileManagement_state_act =
          SSM_st_Registering_GSM_R_MobileManagement;
      }
      _100_GSM_R_MobileManagement_state_act =
        _32_GSM_R_MobileManagement_state_act;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      _100_GSM_R_MobileManagement_state_act =
        _29_GSM_R_MobileManagement_state_act;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      _100_GSM_R_MobileManagement_state_act =
        _26_GSM_R_MobileManagement_state_act;
      break;
    case SSM_st_Connected_GSM_R_MobileManagement :
      _100_GSM_R_MobileManagement_state_act = GSM_R_MobileManagement_state_act;
      break;
    
  }
  /* act_GSM_R_MobileManagement */ switch (_100_GSM_R_MobileManagement_state_act) {
    case SSM_st_Registering_GSM_R_MobileManagement :
      fby_3_RTM_Toolbox_TrainModules = kcg_false;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      fby_4_RTM_Toolbox_TrainModules = kcg_false;
      break;
    
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L6, RadioHeader);
  /* 1 */ C_Int_TrackTrainMessage_TM_conversions(&_L6, &_L51);
  _L52 = _L51.nid_message;
  _L31 = 0;
  _L30 = _L52 != _L31;
  _L5 = systemTime;
  _L4 = msrc_Euroradio_Common_Types_Pkg;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(
    &_L3,
    (API_TelegramHeader_T_API_Msg_Pkg *) &cEmptyBtmMessageHeader_Toolbox);
  _L32 = kcg_false;
  IfBlock1_clock = (*RadioHeader).nid_message == 2;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = kcg_false;
    _L3_IfBlock1 = kcg_true;
    _L1_IfBlock1.t_train_reference = _L4_IfBlock1;
    _L1_IfBlock1.nid_em = _L4_IfBlock1;
    _L1_IfBlock1.q_scale = _L3_IfBlock1;
    _L1_IfBlock1.d_sr = _L3_IfBlock1;
    _L1_IfBlock1.t_sh_rqst = _L4_IfBlock1;
    _L1_IfBlock1.d_ref = _L4_IfBlock1;
    _L1_IfBlock1.q_dir = _L4_IfBlock1;
    _L1_IfBlock1.d_emergencystop = _L4_IfBlock1;
    _L1_IfBlock1.m_version = _L4_IfBlock1;
    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
      &_38_radioMetadata,
      &_L1_IfBlock1);
    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
      &_151_radioMetadata,
      &_38_radioMetadata);
  }
  else {
    _97_else_clock_IfBlock1 = (*RadioHeader).nid_message == 3;
    /* ck_anon_activ */ if (_97_else_clock_IfBlock1) {
      _L3102_IfBlock1 = kcg_false;
      _L1101_IfBlock1.t_train_reference = _L3102_IfBlock1;
      _L1101_IfBlock1.nid_em = _L3102_IfBlock1;
      _L1101_IfBlock1.q_scale = _L3102_IfBlock1;
      _L1101_IfBlock1.d_sr = _L3102_IfBlock1;
      _L1101_IfBlock1.t_sh_rqst = _L3102_IfBlock1;
      _L1101_IfBlock1.d_ref = _L3102_IfBlock1;
      _L1101_IfBlock1.q_dir = _L3102_IfBlock1;
      _L1101_IfBlock1.d_emergencystop = _L3102_IfBlock1;
      _L1101_IfBlock1.m_version = _L3102_IfBlock1;
      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
        &_40_radioMetadata,
        &_L1101_IfBlock1);
      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
        &radioMetadata,
        &_40_radioMetadata);
    }
    else {
      _96_else_clock_IfBlock1 = (*RadioHeader).nid_message == 6;
      /* ck_anon_activ */ if (_96_else_clock_IfBlock1) {
        _L1103_IfBlock1 = kcg_false;
        _L2_IfBlock1.t_train_reference = _L1103_IfBlock1;
        _L2_IfBlock1.nid_em = _L1103_IfBlock1;
        _L2_IfBlock1.q_scale = _L1103_IfBlock1;
        _L2_IfBlock1.d_sr = _L1103_IfBlock1;
        _L2_IfBlock1.t_sh_rqst = _L1103_IfBlock1;
        _L2_IfBlock1.d_ref = _L1103_IfBlock1;
        _L2_IfBlock1.q_dir = _L1103_IfBlock1;
        _L2_IfBlock1.d_emergencystop = _L1103_IfBlock1;
        _L2_IfBlock1.m_version = _L1103_IfBlock1;
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &_42_radioMetadata,
          &_L2_IfBlock1);
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &_39_radioMetadata,
          &_42_radioMetadata);
      }
      else {
        _95_else_clock_IfBlock1 = (*RadioHeader).nid_message == 8;
        /* ck_anon_activ */ if (_95_else_clock_IfBlock1) {
          _L3104_IfBlock1 = kcg_true;
          _L1105_IfBlock1 = kcg_false;
          _L2106_IfBlock1.t_train_reference = _L3104_IfBlock1;
          _L2106_IfBlock1.nid_em = _L1105_IfBlock1;
          _L2106_IfBlock1.q_scale = _L1105_IfBlock1;
          _L2106_IfBlock1.d_sr = _L1105_IfBlock1;
          _L2106_IfBlock1.t_sh_rqst = _L1105_IfBlock1;
          _L2106_IfBlock1.d_ref = _L1105_IfBlock1;
          _L2106_IfBlock1.q_dir = _L1105_IfBlock1;
          _L2106_IfBlock1.d_emergencystop = _L1105_IfBlock1;
          _L2106_IfBlock1.m_version = _L1105_IfBlock1;
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &_44_radioMetadata,
            &_L2106_IfBlock1);
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &_41_radioMetadata,
            &_44_radioMetadata);
        }
        else {
          _94_else_clock_IfBlock1 = (*RadioHeader).nid_message == 9;
          /* ck_anon_activ */ if (_94_else_clock_IfBlock1) {
            _L2108_IfBlock1 = kcg_false;
            _L1107_IfBlock1.t_train_reference = _L2108_IfBlock1;
            _L1107_IfBlock1.nid_em = _L2108_IfBlock1;
            _L1107_IfBlock1.q_scale = _L2108_IfBlock1;
            _L1107_IfBlock1.d_sr = _L2108_IfBlock1;
            _L1107_IfBlock1.t_sh_rqst = _L2108_IfBlock1;
            _L1107_IfBlock1.d_ref = _L2108_IfBlock1;
            _L1107_IfBlock1.q_dir = _L2108_IfBlock1;
            _L1107_IfBlock1.d_emergencystop = _L2108_IfBlock1;
            _L1107_IfBlock1.m_version = _L2108_IfBlock1;
            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
              &_46_radioMetadata,
              &_L1107_IfBlock1);
            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
              &_43_radioMetadata,
              &_46_radioMetadata);
          }
          else {
            _93_else_clock_IfBlock1 = (*RadioHeader).nid_message == 15;
            /* ck_anon_activ */ if (_93_else_clock_IfBlock1) {
              _L1111_IfBlock1 = kcg_false;
              _L3109_IfBlock1 = kcg_true;
              _L2110_IfBlock1.t_train_reference = _L1111_IfBlock1;
              _L2110_IfBlock1.nid_em = _L3109_IfBlock1;
              _L2110_IfBlock1.q_scale = _L3109_IfBlock1;
              _L2110_IfBlock1.d_sr = _L1111_IfBlock1;
              _L2110_IfBlock1.t_sh_rqst = _L1111_IfBlock1;
              _L2110_IfBlock1.d_ref = _L3109_IfBlock1;
              _L2110_IfBlock1.q_dir = _L3109_IfBlock1;
              _L2110_IfBlock1.d_emergencystop = _L3109_IfBlock1;
              _L2110_IfBlock1.m_version = _L1111_IfBlock1;
              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                &_48_radioMetadata,
                &_L2110_IfBlock1);
              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                &_45_radioMetadata,
                &_48_radioMetadata);
            }
            else {
              _92_else_clock_IfBlock1 = (*RadioHeader).nid_message == 16;
              /* ck_anon_activ */ if (_92_else_clock_IfBlock1) {
                _L1112_IfBlock1 = kcg_false;
                _L3114_IfBlock1 = kcg_true;
                _L2113_IfBlock1.t_train_reference = _L1112_IfBlock1;
                _L2113_IfBlock1.nid_em = _L3114_IfBlock1;
                _L2113_IfBlock1.q_scale = _L1112_IfBlock1;
                _L2113_IfBlock1.d_sr = _L1112_IfBlock1;
                _L2113_IfBlock1.t_sh_rqst = _L1112_IfBlock1;
                _L2113_IfBlock1.d_ref = _L1112_IfBlock1;
                _L2113_IfBlock1.q_dir = _L1112_IfBlock1;
                _L2113_IfBlock1.d_emergencystop = _L1112_IfBlock1;
                _L2113_IfBlock1.m_version = _L1112_IfBlock1;
                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                  &_50_radioMetadata,
                  &_L2113_IfBlock1);
                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                  &_47_radioMetadata,
                  &_50_radioMetadata);
              }
              else {
                _91_else_clock_IfBlock1 = (*RadioHeader).nid_message == 18;
                /* ck_anon_activ */ if (_91_else_clock_IfBlock1) {
                  _L3117_IfBlock1 = kcg_false;
                  _L1115_IfBlock1 = kcg_true;
                  _L2116_IfBlock1.t_train_reference = _L3117_IfBlock1;
                  _L2116_IfBlock1.nid_em = _L1115_IfBlock1;
                  _L2116_IfBlock1.q_scale = _L3117_IfBlock1;
                  _L2116_IfBlock1.d_sr = _L3117_IfBlock1;
                  _L2116_IfBlock1.t_sh_rqst = _L3117_IfBlock1;
                  _L2116_IfBlock1.d_ref = _L3117_IfBlock1;
                  _L2116_IfBlock1.q_dir = _L3117_IfBlock1;
                  _L2116_IfBlock1.d_emergencystop = _L3117_IfBlock1;
                  _L2116_IfBlock1.m_version = _L3117_IfBlock1;
                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                    &_52_radioMetadata,
                    &_L2116_IfBlock1);
                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                    &_49_radioMetadata,
                    &_52_radioMetadata);
                }
                else {
                  _90_else_clock_IfBlock1 = (*RadioHeader).nid_message == 24;
                  /* ck_anon_activ */ if (_90_else_clock_IfBlock1) {
                    _L2118_IfBlock1 = kcg_false;
                    _L3119_IfBlock1.t_train_reference = _L2118_IfBlock1;
                    _L3119_IfBlock1.nid_em = _L2118_IfBlock1;
                    _L3119_IfBlock1.q_scale = _L2118_IfBlock1;
                    _L3119_IfBlock1.d_sr = _L2118_IfBlock1;
                    _L3119_IfBlock1.t_sh_rqst = _L2118_IfBlock1;
                    _L3119_IfBlock1.d_ref = _L2118_IfBlock1;
                    _L3119_IfBlock1.q_dir = _L2118_IfBlock1;
                    _L3119_IfBlock1.d_emergencystop = _L2118_IfBlock1;
                    _L3119_IfBlock1.m_version = _L2118_IfBlock1;
                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                      &_54_radioMetadata,
                      &_L3119_IfBlock1);
                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                      &_51_radioMetadata,
                      &_54_radioMetadata);
                  }
                  else {
                    _89_else_clock_IfBlock1 = (*RadioHeader).nid_message == 27;
                    /* ck_anon_activ */ if (_89_else_clock_IfBlock1) {
                      _L3120_IfBlock1 = kcg_true;
                      _L2122_IfBlock1 = kcg_false;
                      _L1121_IfBlock1.t_train_reference = _L3120_IfBlock1;
                      _L1121_IfBlock1.nid_em = _L2122_IfBlock1;
                      _L1121_IfBlock1.q_scale = _L2122_IfBlock1;
                      _L1121_IfBlock1.d_sr = _L2122_IfBlock1;
                      _L1121_IfBlock1.t_sh_rqst = _L2122_IfBlock1;
                      _L1121_IfBlock1.d_ref = _L2122_IfBlock1;
                      _L1121_IfBlock1.q_dir = _L2122_IfBlock1;
                      _L1121_IfBlock1.d_emergencystop = _L2122_IfBlock1;
                      _L1121_IfBlock1.m_version = _L2122_IfBlock1;
                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                        &_56_radioMetadata,
                        &_L1121_IfBlock1);
                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                        &_53_radioMetadata,
                        &_56_radioMetadata);
                    }
                    else {
                      _88_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                        28;
                      /* ck_anon_activ */ if (_88_else_clock_IfBlock1) {
                        _L1123_IfBlock1 = kcg_true;
                        _L2124_IfBlock1 = kcg_false;
                        _L3125_IfBlock1.t_train_reference = _L1123_IfBlock1;
                        _L3125_IfBlock1.nid_em = _L2124_IfBlock1;
                        _L3125_IfBlock1.q_scale = _L2124_IfBlock1;
                        _L3125_IfBlock1.d_sr = _L2124_IfBlock1;
                        _L3125_IfBlock1.t_sh_rqst = _L2124_IfBlock1;
                        _L3125_IfBlock1.d_ref = _L2124_IfBlock1;
                        _L3125_IfBlock1.q_dir = _L2124_IfBlock1;
                        _L3125_IfBlock1.d_emergencystop = _L2124_IfBlock1;
                        _L3125_IfBlock1.m_version = _L2124_IfBlock1;
                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                          &_58_radioMetadata,
                          &_L3125_IfBlock1);
                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                          &_55_radioMetadata,
                          &_58_radioMetadata);
                      }
                      else {
                        _87_else_clock_IfBlock1 = (*RadioHeader).nid_message ==
                          32;
                        /* ck_anon_activ */ if (_87_else_clock_IfBlock1) {
                          _L2127_IfBlock1 = kcg_false;
                          _L3128_IfBlock1 = kcg_true;
                          _L1126_IfBlock1.t_train_reference = _L2127_IfBlock1;
                          _L1126_IfBlock1.nid_em = _L2127_IfBlock1;
                          _L1126_IfBlock1.q_scale = _L2127_IfBlock1;
                          _L1126_IfBlock1.d_sr = _L2127_IfBlock1;
                          _L1126_IfBlock1.t_sh_rqst = _L2127_IfBlock1;
                          _L1126_IfBlock1.d_ref = _L2127_IfBlock1;
                          _L1126_IfBlock1.q_dir = _L2127_IfBlock1;
                          _L1126_IfBlock1.d_emergencystop = _L2127_IfBlock1;
                          _L1126_IfBlock1.m_version = _L3128_IfBlock1;
                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                            &_60_radioMetadata,
                            &_L1126_IfBlock1);
                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                            &_57_radioMetadata,
                            &_60_radioMetadata);
                        }
                        else {
                          _86_else_clock_IfBlock1 =
                            (*RadioHeader).nid_message == 33;
                          /* ck_anon_activ */ if (_86_else_clock_IfBlock1) {
                            _L2130_IfBlock1 = kcg_false;
                            _L3131_IfBlock1 = kcg_true;
                            _L1129_IfBlock1.t_train_reference = _L2130_IfBlock1;
                            _L1129_IfBlock1.nid_em = _L2130_IfBlock1;
                            _L1129_IfBlock1.q_scale = _L3131_IfBlock1;
                            _L1129_IfBlock1.d_sr = _L2130_IfBlock1;
                            _L1129_IfBlock1.t_sh_rqst = _L2130_IfBlock1;
                            _L1129_IfBlock1.d_ref = _L3131_IfBlock1;
                            _L1129_IfBlock1.q_dir = _L2130_IfBlock1;
                            _L1129_IfBlock1.d_emergencystop = _L2130_IfBlock1;
                            _L1129_IfBlock1.m_version = _L2130_IfBlock1;
                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                              &_62_radioMetadata,
                              &_L1129_IfBlock1);
                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                              &_59_radioMetadata,
                              &_62_radioMetadata);
                          }
                          else {
                            _85_else_clock_IfBlock1 =
                              (*RadioHeader).nid_message == 34;
                            /* ck_anon_activ */ if (_85_else_clock_IfBlock1) {
                              _L2133_IfBlock1 = kcg_false;
                              _L3134_IfBlock1 = kcg_true;
                              _L1132_IfBlock1.t_train_reference =
                                _L2133_IfBlock1;
                              _L1132_IfBlock1.nid_em = _L2133_IfBlock1;
                              _L1132_IfBlock1.q_scale = _L3134_IfBlock1;
                              _L1132_IfBlock1.d_sr = _L2133_IfBlock1;
                              _L1132_IfBlock1.t_sh_rqst = _L2133_IfBlock1;
                              _L1132_IfBlock1.d_ref = _L3134_IfBlock1;
                              _L1132_IfBlock1.q_dir = _L3134_IfBlock1;
                              _L1132_IfBlock1.d_emergencystop = _L2133_IfBlock1;
                              _L1132_IfBlock1.m_version = _L2133_IfBlock1;
                              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                &_64_radioMetadata,
                                &_L1132_IfBlock1);
                              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                &_61_radioMetadata,
                                &_64_radioMetadata);
                            }
                            else {
                              _84_else_clock_IfBlock1 =
                                (*RadioHeader).nid_message == 37;
                              /* ck_anon_activ */ if (_84_else_clock_IfBlock1) {
                                _L2136_IfBlock1 = kcg_false;
                                _L1135_IfBlock1.t_train_reference =
                                  _L2136_IfBlock1;
                                _L1135_IfBlock1.nid_em = _L2136_IfBlock1;
                                _L1135_IfBlock1.q_scale = _L2136_IfBlock1;
                                _L1135_IfBlock1.d_sr = _L2136_IfBlock1;
                                _L1135_IfBlock1.t_sh_rqst = _L2136_IfBlock1;
                                _L1135_IfBlock1.d_ref = _L2136_IfBlock1;
                                _L1135_IfBlock1.q_dir = _L2136_IfBlock1;
                                _L1135_IfBlock1.d_emergencystop =
                                  _L2136_IfBlock1;
                                _L1135_IfBlock1.m_version = _L2136_IfBlock1;
                                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                  &_66_radioMetadata,
                                  &_L1135_IfBlock1);
                                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                  &_63_radioMetadata,
                                  &_66_radioMetadata);
                              }
                              else {
                                _83_else_clock_IfBlock1 =
                                  (*RadioHeader).nid_message == 38;
                                /* ck_anon_activ */ if (_83_else_clock_IfBlock1) {
                                  _L2138_IfBlock1 = kcg_false;
                                  _L1137_IfBlock1.t_train_reference =
                                    _L2138_IfBlock1;
                                  _L1137_IfBlock1.nid_em = _L2138_IfBlock1;
                                  _L1137_IfBlock1.q_scale = _L2138_IfBlock1;
                                  _L1137_IfBlock1.d_sr = _L2138_IfBlock1;
                                  _L1137_IfBlock1.t_sh_rqst = _L2138_IfBlock1;
                                  _L1137_IfBlock1.d_ref = _L2138_IfBlock1;
                                  _L1137_IfBlock1.q_dir = _L2138_IfBlock1;
                                  _L1137_IfBlock1.d_emergencystop =
                                    _L2138_IfBlock1;
                                  _L1137_IfBlock1.m_version = _L2138_IfBlock1;
                                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                    &_68_radioMetadata,
                                    &_L1137_IfBlock1);
                                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                    &_65_radioMetadata,
                                    &_68_radioMetadata);
                                }
                                else {
                                  _82_else_clock_IfBlock1 =
                                    (*RadioHeader).nid_message == 39;
                                  /* ck_anon_activ */ if (_82_else_clock_IfBlock1) {
                                    _L1139_IfBlock1 = kcg_false;
                                    _L2140_IfBlock1.t_train_reference =
                                      _L1139_IfBlock1;
                                    _L2140_IfBlock1.nid_em = _L1139_IfBlock1;
                                    _L2140_IfBlock1.q_scale = _L1139_IfBlock1;
                                    _L2140_IfBlock1.d_sr = _L1139_IfBlock1;
                                    _L2140_IfBlock1.t_sh_rqst = _L1139_IfBlock1;
                                    _L2140_IfBlock1.d_ref = _L1139_IfBlock1;
                                    _L2140_IfBlock1.q_dir = _L1139_IfBlock1;
                                    _L2140_IfBlock1.d_emergencystop =
                                      _L1139_IfBlock1;
                                    _L2140_IfBlock1.m_version = _L1139_IfBlock1;
                                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                      &_70_radioMetadata,
                                      &_L2140_IfBlock1);
                                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                      &_67_radioMetadata,
                                      &_70_radioMetadata);
                                  }
                                  else {
                                    _81_else_clock_IfBlock1 =
                                      (*RadioHeader).nid_message == 40;
                                    /* ck_anon_activ */ if (_81_else_clock_IfBlock1) {
                                      _L2142_IfBlock1 = kcg_false;
                                      _L1141_IfBlock1.t_train_reference =
                                        _L2142_IfBlock1;
                                      _L1141_IfBlock1.nid_em = _L2142_IfBlock1;
                                      _L1141_IfBlock1.q_scale = _L2142_IfBlock1;
                                      _L1141_IfBlock1.d_sr = _L2142_IfBlock1;
                                      _L1141_IfBlock1.t_sh_rqst =
                                        _L2142_IfBlock1;
                                      _L1141_IfBlock1.d_ref = _L2142_IfBlock1;
                                      _L1141_IfBlock1.q_dir = _L2142_IfBlock1;
                                      _L1141_IfBlock1.d_emergencystop =
                                        _L2142_IfBlock1;
                                      _L1141_IfBlock1.m_version =
                                        _L2142_IfBlock1;
                                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                        &_72_radioMetadata,
                                        &_L1141_IfBlock1);
                                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                        &_69_radioMetadata,
                                        &_72_radioMetadata);
                                    }
                                    else {
                                      _80_else_clock_IfBlock1 =
                                        (*RadioHeader).nid_message == 41;
                                      /* ck_anon_activ */ if (_80_else_clock_IfBlock1) {
                                        _L2144_IfBlock1 = kcg_false;
                                        _L1143_IfBlock1.t_train_reference =
                                          _L2144_IfBlock1;
                                        _L1143_IfBlock1.nid_em =
                                          _L2144_IfBlock1;
                                        _L1143_IfBlock1.q_scale =
                                          _L2144_IfBlock1;
                                        _L1143_IfBlock1.d_sr = _L2144_IfBlock1;
                                        _L1143_IfBlock1.t_sh_rqst =
                                          _L2144_IfBlock1;
                                        _L1143_IfBlock1.d_ref = _L2144_IfBlock1;
                                        _L1143_IfBlock1.q_dir = _L2144_IfBlock1;
                                        _L1143_IfBlock1.d_emergencystop =
                                          _L2144_IfBlock1;
                                        _L1143_IfBlock1.m_version =
                                          _L2144_IfBlock1;
                                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                          &_74_radioMetadata,
                                          &_L1143_IfBlock1);
                                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                          &_71_radioMetadata,
                                          &_74_radioMetadata);
                                      }
                                      else {
                                        _79_else_clock_IfBlock1 =
                                          (*RadioHeader).nid_message == 43;
                                        /* ck_anon_activ */ if (_79_else_clock_IfBlock1) {
                                          _L2146_IfBlock1 = kcg_false;
                                          _L1145_IfBlock1.t_train_reference =
                                            _L2146_IfBlock1;
                                          _L1145_IfBlock1.nid_em =
                                            _L2146_IfBlock1;
                                          _L1145_IfBlock1.q_scale =
                                            _L2146_IfBlock1;
                                          _L1145_IfBlock1.d_sr =
                                            _L2146_IfBlock1;
                                          _L1145_IfBlock1.t_sh_rqst =
                                            _L2146_IfBlock1;
                                          _L1145_IfBlock1.d_ref =
                                            _L2146_IfBlock1;
                                          _L1145_IfBlock1.q_dir =
                                            _L2146_IfBlock1;
                                          _L1145_IfBlock1.d_emergencystop =
                                            _L2146_IfBlock1;
                                          _L1145_IfBlock1.m_version =
                                            _L2146_IfBlock1;
                                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                            &_76_radioMetadata,
                                            &_L1145_IfBlock1);
                                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                            &_73_radioMetadata,
                                            &_76_radioMetadata);
                                        }
                                        else {
                                          else_clock_IfBlock1 =
                                            (*RadioHeader).nid_message == 45;
                                          /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                            _L2148_IfBlock1 = kcg_false;
                                            _L1147_IfBlock1.t_train_reference =
                                              _L2148_IfBlock1;
                                            _L1147_IfBlock1.nid_em =
                                              _L2148_IfBlock1;
                                            _L1147_IfBlock1.q_scale =
                                              _L2148_IfBlock1;
                                            _L1147_IfBlock1.d_sr =
                                              _L2148_IfBlock1;
                                            _L1147_IfBlock1.t_sh_rqst =
                                              _L2148_IfBlock1;
                                            _L1147_IfBlock1.d_ref =
                                              _L2148_IfBlock1;
                                            _L1147_IfBlock1.q_dir =
                                              _L2148_IfBlock1;
                                            _L1147_IfBlock1.d_emergencystop =
                                              _L2148_IfBlock1;
                                            _L1147_IfBlock1.m_version =
                                              _L2148_IfBlock1;
                                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                              &_78_radioMetadata,
                                              &_L1147_IfBlock1);
                                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                              &_75_radioMetadata,
                                              &_78_radioMetadata);
                                          }
                                          else {
                                            _L2150_IfBlock1 = kcg_false;
                                            _L1149_IfBlock1.t_train_reference =
                                              _L2150_IfBlock1;
                                            _L1149_IfBlock1.nid_em =
                                              _L2150_IfBlock1;
                                            _L1149_IfBlock1.q_scale =
                                              _L2150_IfBlock1;
                                            _L1149_IfBlock1.d_sr =
                                              _L2150_IfBlock1;
                                            _L1149_IfBlock1.t_sh_rqst =
                                              _L2150_IfBlock1;
                                            _L1149_IfBlock1.d_ref =
                                              _L2150_IfBlock1;
                                            _L1149_IfBlock1.q_dir =
                                              _L2150_IfBlock1;
                                            _L1149_IfBlock1.d_emergencystop =
                                              _L2150_IfBlock1;
                                            _L1149_IfBlock1.m_version =
                                              _L2150_IfBlock1;
                                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                              &_77_radioMetadata,
                                              &_L1149_IfBlock1);
                                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                              &_75_radioMetadata,
                                              &_77_radioMetadata);
                                          }
                                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                            &_73_radioMetadata,
                                            &_75_radioMetadata);
                                        }
                                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                          &_71_radioMetadata,
                                          &_73_radioMetadata);
                                      }
                                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                        &_69_radioMetadata,
                                        &_71_radioMetadata);
                                    }
                                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                      &_67_radioMetadata,
                                      &_69_radioMetadata);
                                  }
                                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                    &_65_radioMetadata,
                                    &_67_radioMetadata);
                                }
                                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                  &_63_radioMetadata,
                                  &_65_radioMetadata);
                              }
                              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                                &_61_radioMetadata,
                                &_63_radioMetadata);
                            }
                            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                              &_59_radioMetadata,
                              &_61_radioMetadata);
                          }
                          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                            &_57_radioMetadata,
                            &_59_radioMetadata);
                        }
                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                          &_55_radioMetadata,
                          &_57_radioMetadata);
                      }
                      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                        &_53_radioMetadata,
                        &_55_radioMetadata);
                    }
                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                      &_51_radioMetadata,
                      &_53_radioMetadata);
                  }
                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                    &_49_radioMetadata,
                    &_51_radioMetadata);
                }
                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                  &_47_radioMetadata,
                  &_49_radioMetadata);
              }
              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                &_45_radioMetadata,
                &_47_radioMetadata);
            }
            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
              &_43_radioMetadata,
              &_45_radioMetadata);
          }
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &_41_radioMetadata,
            &_43_radioMetadata);
        }
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &_39_radioMetadata,
          &_41_radioMetadata);
      }
      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
        &radioMetadata,
        &_39_radioMetadata);
    }
    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
      &_151_radioMetadata,
      &radioMetadata);
  }
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L37, &_151_radioMetadata);
  _L54 = kcg_true;
  _L55 = 0;
  _L53.valid = _L54;
  _L53.nid_c = _L55;
  _L53.rbc_id = _L55;
  _L53.device_id = _L55;
  _L29.present = _L30;
  _L29.apiConsistencyError = _L32;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L29.Radio_Common_Header,
    &_L51);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L29.Radio_MetaData, &_L37);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L29.sendingRBC_Id, &_L53);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L2, Packets);
  _L1.valid = _L30;
  _L1.systemTimeMsgReceived = _L5;
  _L1.msg_type = _L4;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&_L1.btm_msg, &_L3);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&_L1.rtm_msg, &_L29);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1.packets, &_L2);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->TrackMessage, &_L1);
  /* init_GSM_R_MobileManagement */ if (outC->init2) {
    GSM_R_MobileManagement_reset_sel = kcg_false;
  }
  else {
    GSM_R_MobileManagement_reset_sel = outC->GSM_R_MobileManagement_reset_nxt;
  }
  /* init_GSM_R_MobileManagement */ if (outC->init2) {
    GSM_R_MobileManagement_reset_prv = kcg_false;
  }
  else {
    GSM_R_MobileManagement_reset_prv = outC->GSM_R_MobileManagement_reset_act;
  }
  /* sel_GSM_R_MobileManagement */ switch (GSM_R_MobileManagement_state_sel) {
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      _36_GSM_R_MobileManagement_reset_act =
        br_1_guard_GSM_R_MobileManagement_Not_registered;
      outC->GSM_R_MobileManagement_reset_act =
        _36_GSM_R_MobileManagement_reset_act;
      if (br_1_guard_GSM_R_MobileManagement_Not_registered) {
        _37_GSM_R_MobileManagement_fired_strong =
          SSM_TR_Not_registered_1_GSM_R_MobileManagement;
      }
      else {
        _37_GSM_R_MobileManagement_fired_strong =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      _99_GSM_R_MobileManagement_fired_strong =
        _37_GSM_R_MobileManagement_fired_strong;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      if (br_1_guard_GSM_R_MobileManagement_Registering) {
        _33_GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        _33_GSM_R_MobileManagement_reset_act =
          br_2_guard_GSM_R_MobileManagement_Registering;
      }
      outC->GSM_R_MobileManagement_reset_act =
        _33_GSM_R_MobileManagement_reset_act;
      if (br_1_guard_GSM_R_MobileManagement_Registering) {
        _34_GSM_R_MobileManagement_fired_strong =
          SSM_TR_Registering_1_GSM_R_MobileManagement;
      }
      else if (br_2_guard_GSM_R_MobileManagement_Registering) {
        _34_GSM_R_MobileManagement_fired_strong =
          SSM_TR_Registering_2_GSM_R_MobileManagement;
      }
      else {
        _34_GSM_R_MobileManagement_fired_strong =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      _99_GSM_R_MobileManagement_fired_strong =
        _34_GSM_R_MobileManagement_fired_strong;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      if (br_1_guard_GSM_R_MobileManagement_Registered) {
        _30_GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        _30_GSM_R_MobileManagement_reset_act =
          br_2_guard_GSM_R_MobileManagement_Registered;
      }
      outC->GSM_R_MobileManagement_reset_act =
        _30_GSM_R_MobileManagement_reset_act;
      if (br_1_guard_GSM_R_MobileManagement_Registered) {
        _31_GSM_R_MobileManagement_fired_strong =
          SSM_TR_Registered_1_GSM_R_MobileManagement;
      }
      else if (br_2_guard_GSM_R_MobileManagement_Registered) {
        _31_GSM_R_MobileManagement_fired_strong =
          SSM_TR_Registered_2_GSM_R_MobileManagement;
      }
      else {
        _31_GSM_R_MobileManagement_fired_strong =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      _99_GSM_R_MobileManagement_fired_strong =
        _31_GSM_R_MobileManagement_fired_strong;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      if (br_1_guard_GSM_R_MobileManagement_Connecting) {
        _27_GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        _27_GSM_R_MobileManagement_reset_act =
          br_2_guard_GSM_R_MobileManagement_Connecting;
      }
      outC->GSM_R_MobileManagement_reset_act =
        _27_GSM_R_MobileManagement_reset_act;
      if (br_1_guard_GSM_R_MobileManagement_Connecting) {
        _28_GSM_R_MobileManagement_fired_strong =
          SSM_TR_Connecting_1_GSM_R_MobileManagement;
      }
      else if (br_2_guard_GSM_R_MobileManagement_Connecting) {
        _28_GSM_R_MobileManagement_fired_strong =
          SSM_TR_Connecting_2_GSM_R_MobileManagement;
      }
      else {
        _28_GSM_R_MobileManagement_fired_strong =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      _99_GSM_R_MobileManagement_fired_strong =
        _28_GSM_R_MobileManagement_fired_strong;
      break;
    case SSM_st_Connected_GSM_R_MobileManagement :
      if (br_1_guard_GSM_R_MobileManagement_Connected) {
        GSM_R_MobileManagement_reset_act = kcg_true;
      }
      else {
        GSM_R_MobileManagement_reset_act =
          br_2_guard_GSM_R_MobileManagement_Connected;
      }
      outC->GSM_R_MobileManagement_reset_act = GSM_R_MobileManagement_reset_act;
      if (br_1_guard_GSM_R_MobileManagement_Connected) {
        GSM_R_MobileManagement_fired_strong =
          SSM_TR_Connected_1_GSM_R_MobileManagement;
      }
      else if (br_2_guard_GSM_R_MobileManagement_Connected) {
        GSM_R_MobileManagement_fired_strong =
          SSM_TR_Connected_2_GSM_R_MobileManagement;
      }
      else {
        GSM_R_MobileManagement_fired_strong =
          SSM_TR_no_trans_GSM_R_MobileManagement;
      }
      _99_GSM_R_MobileManagement_fired_strong =
        GSM_R_MobileManagement_fired_strong;
      break;
    
  }
  /* last_init_ck_mobileHWStatus */ if (outC->init2) {
    kcg_copy_mobileHWStatus_Type_MoRC_Pck(
      &last_mobileHWStatus,
      (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_notRegistered_MoRC_Pck);
  }
  else {
    kcg_copy_mobileHWStatus_Type_MoRC_Pck(
      &last_mobileHWStatus,
      &outC->mobileHWStatus);
  }
  /* act_GSM_R_MobileManagement */ switch (_100_GSM_R_MobileManagement_state_act) {
    case SSM_st_Not_registered_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_L1_GSM_R_MobileManagement_Not_registered,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_20_mobileHWStatus,
        &_L1_GSM_R_MobileManagement_Not_registered);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &_20_mobileHWStatus);
      _21_registrationFinished = last_registrationFinished;
      outC->registrationFinished = _21_registrationFinished;
      _22_connectionEstablished = last_connectionEstablished;
      outC->connectionEstablished = _22_connectionEstablished;
      _23_GSM_R_MobileManagement_state_nxt =
        SSM_st_Not_registered_GSM_R_MobileManagement;
      outC->GSM_R_MobileManagement_state_nxt =
        _23_GSM_R_MobileManagement_state_nxt;
      _24_GSM_R_MobileManagement_reset_nxt = kcg_false;
      outC->GSM_R_MobileManagement_reset_nxt =
        _24_GSM_R_MobileManagement_reset_nxt;
      _25_GSM_R_MobileManagement_fired =
        _99_GSM_R_MobileManagement_fired_strong;
      _98_GSM_R_MobileManagement_fired = _25_GSM_R_MobileManagement_fired;
      break;
    case SSM_st_Registering_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_L1_GSM_R_MobileManagement_Registering,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_14_mobileHWStatus,
        &_L1_GSM_R_MobileManagement_Registering);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &_14_mobileHWStatus);
      /* 3 */ if (outC->GSM_R_MobileManagement_reset_act) {
        outC->init1 = kcg_true;
      }
      /* 3 */ if (outC->init1) {
        /* 3 */ for (i1 = 0; i1 < 5; i1++) {
          outC->fby__L2_GSM_R_MobileManagement_Registering.items[i1] =
            fby_3_RTM_Toolbox_TrainModules;
        }
        outC->fby__L2_GSM_R_MobileManagement_Registering.idx = 0;
      }
      _L2_GSM_R_MobileManagement_Registering =
        outC->fby__L2_GSM_R_MobileManagement_Registering.items[outC->fby__L2_GSM_R_MobileManagement_Registering.idx];
      _15_registrationFinished = _L2_GSM_R_MobileManagement_Registering;
      outC->registrationFinished = _15_registrationFinished;
      _16_connectionEstablished = last_connectionEstablished;
      outC->connectionEstablished = _16_connectionEstablished;
      _17_GSM_R_MobileManagement_state_nxt =
        SSM_st_Registering_GSM_R_MobileManagement;
      outC->GSM_R_MobileManagement_state_nxt =
        _17_GSM_R_MobileManagement_state_nxt;
      _18_GSM_R_MobileManagement_reset_nxt = kcg_false;
      outC->GSM_R_MobileManagement_reset_nxt =
        _18_GSM_R_MobileManagement_reset_nxt;
      _19_GSM_R_MobileManagement_fired =
        _99_GSM_R_MobileManagement_fired_strong;
      _98_GSM_R_MobileManagement_fired = _19_GSM_R_MobileManagement_fired;
      _L3_GSM_R_MobileManagement_Registering = kcg_true;
      outC->fby__L2_GSM_R_MobileManagement_Registering.items[outC->fby__L2_GSM_R_MobileManagement_Registering.idx] =
        _L3_GSM_R_MobileManagement_Registering;
      outC->fby__L2_GSM_R_MobileManagement_Registering.idx =
        (outC->fby__L2_GSM_R_MobileManagement_Registering.idx + 1) % 5;
      break;
    case SSM_st_Registered_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_L1_GSM_R_MobileManagement_Registered,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_8_mobileHWStatus,
        &_L1_GSM_R_MobileManagement_Registered);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &_8_mobileHWStatus);
      _9_registrationFinished = last_registrationFinished;
      outC->registrationFinished = _9_registrationFinished;
      _10_connectionEstablished = last_connectionEstablished;
      outC->connectionEstablished = _10_connectionEstablished;
      _11_GSM_R_MobileManagement_state_nxt =
        SSM_st_Registered_GSM_R_MobileManagement;
      outC->GSM_R_MobileManagement_state_nxt =
        _11_GSM_R_MobileManagement_state_nxt;
      _12_GSM_R_MobileManagement_reset_nxt = kcg_false;
      outC->GSM_R_MobileManagement_reset_nxt =
        _12_GSM_R_MobileManagement_reset_nxt;
      _13_GSM_R_MobileManagement_fired =
        _99_GSM_R_MobileManagement_fired_strong;
      _98_GSM_R_MobileManagement_fired = _13_GSM_R_MobileManagement_fired;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_L1_GSM_R_MobileManagement_Connecting,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_2_mobileHWStatus,
        &_L1_GSM_R_MobileManagement_Connecting);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &_2_mobileHWStatus);
      _3_registrationFinished = last_registrationFinished;
      outC->registrationFinished = _3_registrationFinished;
      /* 4 */ if (outC->GSM_R_MobileManagement_reset_act) {
        outC->init = kcg_true;
      }
      /* 4 */ if (outC->init) {
        /* 4 */ for (i = 0; i < 5; i++) {
          outC->fby__L2_GSM_R_MobileManagement_Connecting.items[i] =
            fby_4_RTM_Toolbox_TrainModules;
        }
        outC->fby__L2_GSM_R_MobileManagement_Connecting.idx = 0;
      }
      _L2_GSM_R_MobileManagement_Connecting =
        outC->fby__L2_GSM_R_MobileManagement_Connecting.items[outC->fby__L2_GSM_R_MobileManagement_Connecting.idx];
      _4_connectionEstablished = _L2_GSM_R_MobileManagement_Connecting;
      outC->connectionEstablished = _4_connectionEstablished;
      _5_GSM_R_MobileManagement_state_nxt =
        SSM_st_Connecting_GSM_R_MobileManagement;
      outC->GSM_R_MobileManagement_state_nxt =
        _5_GSM_R_MobileManagement_state_nxt;
      _6_GSM_R_MobileManagement_reset_nxt = kcg_false;
      outC->GSM_R_MobileManagement_reset_nxt =
        _6_GSM_R_MobileManagement_reset_nxt;
      _7_GSM_R_MobileManagement_fired = _99_GSM_R_MobileManagement_fired_strong;
      _98_GSM_R_MobileManagement_fired = _7_GSM_R_MobileManagement_fired;
      _L3_GSM_R_MobileManagement_Connecting = kcg_true;
      outC->fby__L2_GSM_R_MobileManagement_Connecting.items[outC->fby__L2_GSM_R_MobileManagement_Connecting.idx] =
        _L3_GSM_R_MobileManagement_Connecting;
      outC->fby__L2_GSM_R_MobileManagement_Connecting.idx =
        (outC->fby__L2_GSM_R_MobileManagement_Connecting.idx + 1) % 5;
      break;
    case SSM_st_Connected_GSM_R_MobileManagement :
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &_L1_GSM_R_MobileManagement_Connected,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_Pck);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &mobileHWStatus,
        &_L1_GSM_R_MobileManagement_Connected);
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        &outC->mobileHWStatus,
        &mobileHWStatus);
      registrationFinished = last_registrationFinished;
      outC->registrationFinished = registrationFinished;
      connectionEstablished = last_connectionEstablished;
      outC->connectionEstablished = connectionEstablished;
      GSM_R_MobileManagement_state_nxt =
        SSM_st_Connected_GSM_R_MobileManagement;
      outC->GSM_R_MobileManagement_state_nxt = GSM_R_MobileManagement_state_nxt;
      GSM_R_MobileManagement_reset_nxt = kcg_false;
      outC->GSM_R_MobileManagement_reset_nxt = GSM_R_MobileManagement_reset_nxt;
      GSM_R_MobileManagement_fired = _99_GSM_R_MobileManagement_fired_strong;
      _98_GSM_R_MobileManagement_fired = GSM_R_MobileManagement_fired;
      break;
    
  }
  outC->init2 = kcg_false;
  /* act_GSM_R_MobileManagement */ switch (_100_GSM_R_MobileManagement_state_act) {
    case SSM_st_Registering_GSM_R_MobileManagement :
      outC->init1 = kcg_false;
      break;
    case SSM_st_Connecting_GSM_R_MobileManagement :
      outC->init = kcg_false;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RTM_Toolbox_TrainModules.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

