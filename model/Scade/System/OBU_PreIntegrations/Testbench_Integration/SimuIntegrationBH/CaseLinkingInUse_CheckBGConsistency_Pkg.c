/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CaseLinkingInUse_init_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->passedBGlocal.valid = kcg_true;
  outC->passedBGlocal.source = msrc_undefined_Common_Types_Pkg;
  outC->passedBGlocal.radioMetadata.t_train_reference = kcg_true;
  outC->passedBGlocal.radioMetadata.nid_em = kcg_true;
  outC->passedBGlocal.radioMetadata.q_scale = kcg_true;
  outC->passedBGlocal.radioMetadata.d_sr = kcg_true;
  outC->passedBGlocal.radioMetadata.t_sh_rqst = kcg_true;
  outC->passedBGlocal.radioMetadata.d_ref = kcg_true;
  outC->passedBGlocal.radioMetadata.q_dir = kcg_true;
  outC->passedBGlocal.radioMetadata.d_emergencystop = kcg_true;
  outC->passedBGlocal.radioMetadata.m_version = kcg_true;
  outC->passedBGlocal.BG_Common_Header.valid = kcg_true;
  outC->passedBGlocal.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->passedBGlocal.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedBGlocal.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->passedBGlocal.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->passedBGlocal.BG_Common_Header.m_mcount = 0;
  outC->passedBGlocal.BG_Common_Header.nid_c = 0;
  outC->passedBGlocal.BG_Common_Header.nid_bg = 0;
  outC->passedBGlocal.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->passedBGlocal.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->passedBGlocal.BG_Common_Header.bgPosition.timestamp = 0;
  outC->passedBGlocal.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->passedBGlocal.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->passedBGlocal.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->passedBGlocal.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->passedBGlocal.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->passedBGlocal.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->passedBGlocal.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->passedBGlocal.BG_Common_Header.bgPosition.acceleration = 0;
  outC->passedBGlocal.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedBGlocal.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedBGlocal.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->passedBGlocal.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->passedBGlocal.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->passedBGlocal.BG_Common_Header.q_nvlocacc = 0;
  outC->passedBGlocal.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedBGlocal.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->passedBGlocal.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->passedBGlocal.Radio_Common_Header.radioDevice = 0;
  outC->passedBGlocal.Radio_Common_Header.receivedSystemTime = 0;
  outC->passedBGlocal.Radio_Common_Header.nid_message = 0;
  outC->passedBGlocal.Radio_Common_Header.t_train = 0;
  outC->passedBGlocal.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->passedBGlocal.Radio_Common_Header.nid_lrbg = 0;
  outC->passedBGlocal.Radio_Common_Header.t_train_reference = 0;
  outC->passedBGlocal.Radio_Common_Header.nid_em = 0;
  outC->passedBGlocal.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->passedBGlocal.Radio_Common_Header.d_sr = 0;
  outC->passedBGlocal.Radio_Common_Header.t_sh_rqst = 0;
  outC->passedBGlocal.Radio_Common_Header.d_ref = 0;
  outC->passedBGlocal.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->passedBGlocal.Radio_Common_Header.d_emergencystop = 0;
  outC->passedBGlocal.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->passedBGlocal.packets.PacketHeaders[i].nid_packet = 0;
    outC->passedBGlocal.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->passedBGlocal.packets.PacketHeaders[i].valid = kcg_true;
    outC->passedBGlocal.packets.PacketHeaders[i].startAddress = 0;
    outC->passedBGlocal.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->passedBGlocal.packets.PacketData[i1] = 0;
  }
  outC->passedBGlocal.sendingRBC.valid = kcg_true;
  outC->passedBGlocal.sendingRBC.nid_c = 0;
  outC->passedBGlocal.sendingRBC.rbc_id = 0;
  outC->passedBGlocal.sendingRBC.device_id = 0;
  outC->nid_c = 0;
  outC->nid_errorBG = 0;
  outC->errorLinkedBG = kcg_true;
  outC->passedBG_out.valid = kcg_true;
  outC->passedBG_out.source = msrc_undefined_Common_Types_Pkg;
  outC->passedBG_out.radioMetadata.t_train_reference = kcg_true;
  outC->passedBG_out.radioMetadata.nid_em = kcg_true;
  outC->passedBG_out.radioMetadata.q_scale = kcg_true;
  outC->passedBG_out.radioMetadata.d_sr = kcg_true;
  outC->passedBG_out.radioMetadata.t_sh_rqst = kcg_true;
  outC->passedBG_out.radioMetadata.d_ref = kcg_true;
  outC->passedBG_out.radioMetadata.q_dir = kcg_true;
  outC->passedBG_out.radioMetadata.d_emergencystop = kcg_true;
  outC->passedBG_out.radioMetadata.m_version = kcg_true;
  outC->passedBG_out.BG_Common_Header.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->passedBG_out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedBG_out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->passedBG_out.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->passedBG_out.BG_Common_Header.m_mcount = 0;
  outC->passedBG_out.BG_Common_Header.nid_c = 0;
  outC->passedBG_out.BG_Common_Header.nid_bg = 0;
  outC->passedBG_out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->passedBG_out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.bgPosition.timestamp = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.acceleration = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->passedBG_out.BG_Common_Header.q_nvlocacc = 0;
  outC->passedBG_out.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedBG_out.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->passedBG_out.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->passedBG_out.Radio_Common_Header.radioDevice = 0;
  outC->passedBG_out.Radio_Common_Header.receivedSystemTime = 0;
  outC->passedBG_out.Radio_Common_Header.nid_message = 0;
  outC->passedBG_out.Radio_Common_Header.t_train = 0;
  outC->passedBG_out.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->passedBG_out.Radio_Common_Header.nid_lrbg = 0;
  outC->passedBG_out.Radio_Common_Header.t_train_reference = 0;
  outC->passedBG_out.Radio_Common_Header.nid_em = 0;
  outC->passedBG_out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->passedBG_out.Radio_Common_Header.d_sr = 0;
  outC->passedBG_out.Radio_Common_Header.t_sh_rqst = 0;
  outC->passedBG_out.Radio_Common_Header.d_ref = 0;
  outC->passedBG_out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->passedBG_out.Radio_Common_Header.d_emergencystop = 0;
  outC->passedBG_out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i2 = 0; i2 < 30; i2++) {
    outC->passedBG_out.packets.PacketHeaders[i2].nid_packet = 0;
    outC->passedBG_out.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->passedBG_out.packets.PacketHeaders[i2].valid = kcg_true;
    outC->passedBG_out.packets.PacketHeaders[i2].startAddress = 0;
    outC->passedBG_out.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->passedBG_out.packets.PacketData[i3] = 0;
  }
  outC->passedBG_out.sendingRBC.valid = kcg_true;
  outC->passedBG_out.sendingRBC.nid_c = 0;
  outC->passedBG_out.sendingRBC.rbc_id = 0;
  outC->passedBG_out.sendingRBC.device_id = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CaseLinkingInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CheckBGConsistency_Pkg::CaseLinkingInUse */
void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC)
{
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */
  static NID_C nid_c4;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg _3_nid_errorBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */
  static kcg_bool _2_errorLinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg _1_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L19 */
  static Q_LINKORIENTATION _L19_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L16 */
  static ReceivedMessage_T_Common_Types_Pkg _L16_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L14 */
  static ReceivedMessage_T_Common_Types_Pkg _L14_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L13 */
  static kcg_bool _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::then::_L12 */
  static Q_LINKORIENTATION _L12_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */
  static NID_C nid_c;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg nid_errorBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */
  static kcg_bool errorLinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::else::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::else::_L2 */
  static kcg_int _L2_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::else::_L3 */
  static kcg_int _L3_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg _5_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */
  static kcg_bool _6_errorLinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg _7_nid_errorBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */
  static NID_C nid_c8;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L49 */
  static kcg_bool _L49_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L47 */
  static kcg_bool _L47_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L45 */
  static Q_LINKORIENTATION _L45_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L24 */
  static ReceivedMessage_T_Common_Types_Pkg _L24_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L23 */
  static ReceivedMessage_T_Common_Types_Pkg _L23_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L19 */
  static Telegram_T_BG_Types_Pkg _L1916_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L18 */
  static N_PIG _L18_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L16 */
  static N_PIG _L1615_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L15 */
  static kcg_int _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L14 */
  static kcg_int _L1414_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L13 */
  static kcg_bool _L1313_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L52 */
  static Q_LINKORIENTATION _L52_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L58 */
  static BG_Message_T_BG_Types_Pkg _L58_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else::then::_L57 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L57_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg _9_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */
  static kcg_bool _10_errorLinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg _11_nid_errorBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */
  static NID_C nid_c12;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBGlocal */
  static ReceivedMessage_T_Common_Types_Pkg last_passedBGlocal;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isComplete */
  static kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::lastTelegram */
  static Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isSingle */
  static kcg_bool isSingle;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isAnnounced */
  static kcg_bool isAnnounced;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_linkorientation_local */
  static Q_LINKORIENTATION q_linkorientation_local;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG_local */
  static kcg_int nid_errorBG_local;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c_local */
  static kcg_int nid_c_local;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L13 */
  static Telegram_T_BG_Types_Pkg _L13;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L12 */
  static kcg_bool _L12;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L11 */
  static kcg_bool _L11;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L15 */
  static kcg_bool _L15;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L17 */
  static Q_LINKORIENTATION _L17;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L16 */
  static kcg_bool _L16;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L18 */
  static positionedBGs_T_TrainPosition_Types_Pck _L18;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L19 */
  static ReceivedMessage_T_Common_Types_Pkg _L19;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L24 */
  static BG_Header_T_BG_Types_Pkg _L24;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L25 */
  static Q_NVLOCACC _L25;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L26 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L26;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L27 */
  static BG_Message_T_BG_Types_Pkg _L27;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L28 */
  static TelegramHeader_T_BG_Types_Pkg _L28;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L29 */
  static NID_BG _L29;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::_L30 */
  static NID_C _L30;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L26, trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L27, &_L26.telegramHeaders);
  /* 2 */ CheckCompleteness_CheckBGConsistency_Pkg(&_L27, &_L11, &_L12, &_L13);
  _L15 = _L11 ^ _L12;
  isComplete = _L15;
  isSingle = _L12;
  _L25 = q_nvlocacc;
  /* 1 */
  BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(&_L26, _L25, &_L19);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L24, &_L19.BG_Common_Header);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L18, storedBGs);
  /* 1 */
  IsBG_announced_CheckBGConsistency_Pkg_SubFunction(&_L24, &_L18, &_L16, &_L17);
  isAnnounced = _L16;
  IfBlock1_clock = isComplete & isSingle & isAnnounced;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = isComplete & isAnnounced;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_5_passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
    }
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&lastTelegram, &_L13);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L1916_IfBlock1, &lastTelegram);
    _L1615_IfBlock1 = _L1916_IfBlock1.telegramheader.n_pig;
    _L15_IfBlock1 = /* 16 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L1615_IfBlock1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &_L57_IfBlock1,
      trackSideForCheck);
    kcg_copy_BG_Message_T_BG_Types_Pkg(
      &_L58_IfBlock1,
      &_L57_IfBlock1.telegramHeaders);
    _L18_IfBlock1 = _L58_IfBlock1.Telegrams[0].telegramheader.n_pig;
    _L1414_IfBlock1 = /* 17 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L18_IfBlock1);
    _L1313_IfBlock1 = _L15_IfBlock1 > _L1414_IfBlock1;
    _L45_IfBlock1 =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
  }
  q_linkorientation_local = _L17;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    _L52_IfBlock1 = q_linkorientation_local;
    _L47_IfBlock1 = _L45_IfBlock1 == _L52_IfBlock1;
    _L49_IfBlock1 = _L1313_IfBlock1 & _L47_IfBlock1;
  }
  /* last_init_ck_passedBGlocal */ if (outC->init) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &last_passedBGlocal,
      (ReceivedMessage_T_Common_Types_Pkg *)
        &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &last_passedBGlocal,
      &outC->passedBGlocal);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->passedBGlocal, &_L19);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L12_IfBlock1 =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
    _L19_IfBlock1 = q_linkorientation_local;
    _L13_IfBlock1 = _L12_IfBlock1 == _L19_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L14_IfBlock1,
      &outC->passedBGlocal);
    /* 1 */
    WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
      _L13_IfBlock1,
      &_L14_IfBlock1,
      &_L16_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_1_passedBG_out,
      &_L16_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &_1_passedBG_out);
    _2_errorLinkedBG = kcg_false;
    outC->errorLinkedBG = _2_errorLinkedBG;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_L24_IfBlock1,
        &outC->passedBGlocal);
      /* 2 */
      WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
        _L49_IfBlock1,
        &_L24_IfBlock1,
        &_L23_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_9_passedBG_out,
        &_L23_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_9_passedBG_out);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_5_passedBG_out);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &passedBG_out);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _10_errorLinkedBG = kcg_false;
      errorLinkedBG = _10_errorLinkedBG;
    }
    else {
      _L1_IfBlock1 = kcg_true;
      _6_errorLinkedBG = _L1_IfBlock1;
      errorLinkedBG = _6_errorLinkedBG;
    }
    outC->errorLinkedBG = errorLinkedBG;
  }
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &_L28,
    &_L27.Telegrams[0].telegramheader);
  _L29 = _L28.nid_bg;
  nid_errorBG_local = _L29;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _3_nid_errorBG = 16383;
    outC->nid_errorBG = _3_nid_errorBG;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _11_nid_errorBG = 16383;
      nid_errorBG = _11_nid_errorBG;
    }
    else {
      _L3_IfBlock1 = nid_errorBG_local;
      _7_nid_errorBG = _L3_IfBlock1;
      nid_errorBG = _7_nid_errorBG;
    }
    outC->nid_errorBG = nid_errorBG;
  }
  _L30 = _L28.nid_c;
  nid_c_local = _L30;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    nid_c4 = 0;
    outC->nid_c = nid_c4;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      nid_c12 = 0;
      nid_c = nid_c12;
    }
    else {
      _L2_IfBlock1 = nid_c_local;
      nid_c8 = _L2_IfBlock1;
      nid_c = nid_c8;
    }
    outC->nid_c = nid_c;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingInUse_CheckBGConsistency_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

