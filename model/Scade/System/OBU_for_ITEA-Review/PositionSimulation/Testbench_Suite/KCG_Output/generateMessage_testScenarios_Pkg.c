/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "generateMessage_testScenarios_Pkg.h"

void generateMessage_init_testScenarios_Pkg(
  outC_generateMessage_testScenarios_Pkg *outC)
{
  int i;
  
  for (i = 0; i < 500; i++) {
    outC->TrackMessage.packets.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->TrackMessage.packets.PacketHeaders[i].endAddress = 0;
    outC->TrackMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->TrackMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->TrackMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->TrackMessage.packets.PacketHeaders[i].nid_packet = 0;
  }
  outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train_reference = 0.0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessage.rtm_msg.present = kcg_true;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->TrackMessage.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->TrackMessage.btm_msg.api_header.nid_bg = 0;
  outC->TrackMessage.btm_msg.api_header.nid_c = 0;
  outC->TrackMessage.btm_msg.api_header.m_mcount = 0;
  outC->TrackMessage.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->TrackMessage.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->TrackMessage.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->TrackMessage.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->TrackMessage.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->TrackMessage.btm_msg.api_bad_balise_received = kcg_true;
  outC->TrackMessage.btm_msg.checkResult = kcg_true;
  outC->TrackMessage.btm_msg.present = kcg_true;
  outC->TrackMessage.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->TrackMessage.systemTimeMsgReceived = 0;
  outC->TrackMessage.valid = kcg_true;
  Story00_init_Story00_first_test(&outC->Context_1);
}


void generateMessage_reset_testScenarios_Pkg(
  outC_generateMessage_testScenarios_Pkg *outC)
{
  /* 1 */ Story00_reset_Story00_first_test(&outC->Context_1);
}

/* testScenarios_Pkg::generateMessage */
void generateMessage_testScenarios_Pkg(
  /* testScenarios_Pkg::generateMessage::position */ L_internal_Type_Obu_BasicTypes_Pkg position,
  /* testScenarios_Pkg::generateMessage::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* testScenarios_Pkg::generateMessage::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_generateMessage_testScenarios_Pkg *outC)
{
  /* testScenarios_Pkg::generateMessage::_L23 */ kcg_bool _L23;
  
  outC->TrackMessage.systemTimeMsgReceived = systemTime;
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(
    &outC->TrackMessage.rtm_msg,
    (API_RadioMsgHeader_T_API_Msg_Pkg *)
      &cEmptyRadioMsgHeader_trackElements_Pkg);
  /* 1 */
  Story00_Story00_first_test(
    (kcg_real) position,
    0,
    kcg_false,
    &outC->Context_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->TrackMessage.packets,
    &outC->Context_1.Packets_Out);
  _L23 = outC->Context_1.TelegramHeader.nid_c != 0;
  outC->TrackMessage.valid = _L23;
  if (_L23) {
    outC->TrackMessage.msg_type = msrc_Eurobalise_Common_Types_Pkg;
  }
  else {
    outC->TrackMessage.msg_type = msrc_undefined_Common_Types_Pkg;
  }
  outC->TrackMessage.btm_msg.present = _L23;
  outC->TrackMessage.btm_msg.checkResult = kcg_true;
  outC->TrackMessage.btm_msg.api_bad_balise_received = kcg_false;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->TrackMessage.btm_msg.api_header,
    &outC->Context_1.TelegramHeader);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection,
    odometry);
  /* 1 */
  doLocInacc_trackElements_Pkg(
    position,
    &outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** generateMessage_testScenarios_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

