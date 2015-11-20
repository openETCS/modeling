/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_TrackSideInputFifo_Toolbox_Functions_5.h"

#ifndef KCG_USER_DEFINED_INIT
void TRAIN_TrackSideInputFifo_init_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
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
  outC->_L50 = 0;
  outC->_L32 = 0;
  outC->entry = 0;
  for (i2 = 0; i2 < 5; i2++) {
    outC->buffer[i2].valid = kcg_true;
    outC->buffer[i2].systemTimeMsgReceived = 0;
    outC->buffer[i2].msg_type = msrc_undefined_Common_Types_Pkg;
    outC->buffer[i2].btm_msg.present = kcg_true;
    outC->buffer[i2].btm_msg.checkResult = kcg_true;
    outC->buffer[i2].btm_msg.api_bad_balise_received = kcg_true;
    outC->buffer[i2].btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->buffer[i2].btm_msg.api_header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->buffer[i2].btm_msg.api_header.q_media = Q_MEDIA_Balise;
    outC->buffer[i2].btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
    outC->buffer[i2].btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->buffer[i2].btm_msg.api_header.m_dup = M_DUP_No_duplicates;
    outC->buffer[i2].btm_msg.api_header.m_mcount = 0;
    outC->buffer[i2].btm_msg.api_header.nid_c = 0;
    outC->buffer[i2].btm_msg.api_header.nid_bg = 0;
    outC->buffer[i2].btm_msg.api_header.q_link = Q_LINK_Unlinked;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
      kcg_true;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->buffer[i2].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->buffer[i2].rtm_msg.present = kcg_true;
    outC->buffer[i2].rtm_msg.apiConsistencyError = kcg_true;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.radioDevice = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.nid_message = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.t_train = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.nid_lrbg = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.t_train_reference = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.nid_em = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.d_sr = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.d_ref = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.d_emergencystop = 0;
    outC->buffer[i2].rtm_msg.Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->buffer[i2].rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
    outC->buffer[i2].rtm_msg.Radio_MetaData.nid_em = kcg_true;
    outC->buffer[i2].rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->buffer[i2].rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->buffer[i2].rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
    outC->buffer[i2].rtm_msg.Radio_MetaData.d_ref = kcg_true;
    outC->buffer[i2].rtm_msg.Radio_MetaData.q_dir = kcg_true;
    outC->buffer[i2].rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
    outC->buffer[i2].rtm_msg.Radio_MetaData.m_version = kcg_true;
    outC->buffer[i2].rtm_msg.sendingRBC_Id.valid = kcg_true;
    outC->buffer[i2].rtm_msg.sendingRBC_Id.nid_c = 0;
    outC->buffer[i2].rtm_msg.sendingRBC_Id.rbc_id = 0;
    outC->buffer[i2].rtm_msg.sendingRBC_Id.device_id = 0;
    for (i = 0; i < 30; i++) {
      outC->buffer[i2].packets.PacketHeaders[i].nid_packet = 0;
      outC->buffer[i2].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->buffer[i2].packets.PacketHeaders[i].valid = kcg_true;
      outC->buffer[i2].packets.PacketHeaders[i].startAddress = 0;
      outC->buffer[i2].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->buffer[i2].packets.PacketData[i1] = 0;
    }
  }
  outC->next_entry = 0;
  outC->l_size = 0;
  for (i5 = 0; i5 < 5; i5++) {
    outC->_L4_IfBlock1[i5].valid = kcg_true;
    outC->_L4_IfBlock1[i5].systemTimeMsgReceived = 0;
    outC->_L4_IfBlock1[i5].msg_type = msrc_undefined_Common_Types_Pkg;
    outC->_L4_IfBlock1[i5].btm_msg.present = kcg_true;
    outC->_L4_IfBlock1[i5].btm_msg.checkResult = kcg_true;
    outC->_L4_IfBlock1[i5].btm_msg.api_bad_balise_received = kcg_true;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.q_media = Q_MEDIA_Balise;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.m_dup = M_DUP_No_duplicates;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.m_mcount = 0;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.nid_c = 0;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.nid_bg = 0;
    outC->_L4_IfBlock1[i5].btm_msg.api_header.q_link = Q_LINK_Unlinked;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
      kcg_true;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->_L4_IfBlock1[i5].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->_L4_IfBlock1[i5].rtm_msg.present = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.apiConsistencyError = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.radioDevice = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.nid_message = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.t_train = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.nid_lrbg = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.t_train_reference = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.nid_em = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.d_sr = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.d_ref = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.d_emergencystop = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_MetaData.nid_em = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_MetaData.d_ref = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_MetaData.q_dir = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.Radio_MetaData.m_version = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.sendingRBC_Id.valid = kcg_true;
    outC->_L4_IfBlock1[i5].rtm_msg.sendingRBC_Id.nid_c = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.sendingRBC_Id.rbc_id = 0;
    outC->_L4_IfBlock1[i5].rtm_msg.sendingRBC_Id.device_id = 0;
    for (i3 = 0; i3 < 30; i3++) {
      outC->_L4_IfBlock1[i5].packets.PacketHeaders[i3].nid_packet = 0;
      outC->_L4_IfBlock1[i5].packets.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
      outC->_L4_IfBlock1[i5].packets.PacketHeaders[i3].valid = kcg_true;
      outC->_L4_IfBlock1[i5].packets.PacketHeaders[i3].startAddress = 0;
      outC->_L4_IfBlock1[i5].packets.PacketHeaders[i3].endAddress = 0;
    }
    for (i4 = 0; i4 < 500; i4++) {
      outC->_L4_IfBlock1[i5].packets.PacketData[i4] = 0;
    }
  }
  outC->_L20_IfBlock1 = 0;
  outC->size = 0;
  outC->outValid = kcg_true;
  outC->outData.valid = kcg_true;
  outC->outData.systemTimeMsgReceived = 0;
  outC->outData.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outData.btm_msg.present = kcg_true;
  outC->outData.btm_msg.checkResult = kcg_true;
  outC->outData.btm_msg.api_bad_balise_received = kcg_true;
  outC->outData.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outData.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outData.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->outData.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->outData.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outData.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->outData.btm_msg.api_header.m_mcount = 0;
  outC->outData.btm_msg.api_header.nid_c = 0;
  outC->outData.btm_msg.api_header.nid_bg = 0;
  outC->outData.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outData.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outData.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outData.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outData.rtm_msg.present = kcg_true;
  outC->outData.rtm_msg.apiConsistencyError = kcg_true;
  outC->outData.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->outData.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->outData.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->outData.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->outData.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outData.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->outData.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->outData.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->outData.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outData.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->outData.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->outData.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->outData.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outData.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->outData.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outData.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->outData.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->outData.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->outData.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->outData.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->outData.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i6 = 0; i6 < 30; i6++) {
    outC->outData.packets.PacketHeaders[i6].nid_packet = 0;
    outC->outData.packets.PacketHeaders[i6].q_dir = Q_DIR_Reverse;
    outC->outData.packets.PacketHeaders[i6].valid = kcg_true;
    outC->outData.packets.PacketHeaders[i6].startAddress = 0;
    outC->outData.packets.PacketHeaders[i6].endAddress = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->outData.packets.PacketData[i7] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::TRAIN_TrackSideInputFifo */
void TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inData */ API_TrackSideInput_T_API_Msg_Pkg *inData,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inValid */ kcg_bool inValid,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inReady */ kcg_bool inReady,
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  static kcg_int i1;
  static kcg_int i;
  /* math::Min::Mi_Output */
  static kcg_int Mi_Output_1;
  /* math::Min::I2 */
  static kcg_int I2_1;
  /* math::Min::I1 */
  static kcg_int I1_1;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_int _L24_1;
  /* math::Min::_L22 */
  static kcg_int _L22_1;
  /* math::Min::_L21 */
  static kcg_int _L21_1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::buffer */
  static array_170320 _3_buffer;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::next_entry */
  static kcg_int _2_next_entry;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L22 */
  static array_170320 _L22_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L19 */
  static array_170320 _L19_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L1 */
  static array_170320 _L1_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L21 */
  static kcg_int _L21_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L14 */
  static kcg_int _L14_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L9 */
  static kcg_int _L9_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L8 */
  static kcg_int _L8_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L2 */
  static API_TrackSideInput_T_API_Msg_Pkg _L2_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::buffer */
  static array_170320 buffer;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::next_entry */
  static kcg_int next_entry;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::entry */
  static kcg_int last_entry;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::buffer */
  static array_170320 last_buffer;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::next_entry */
  static kcg_int last_next_entry;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::l_size */
  static kcg_int last_l_size;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L18 */
  static API_TrackSideInput_T_API_Msg_Pkg _L18;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L19 */
  static array_170320 _L19;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L22 */
  static kcg_int _L22;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L23 */
  static kcg_int _L23;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L25 */
  static kcg_int _L25;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L26 */
  static kcg_int _L26;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L27 */
  static kcg_bool _L27;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L28 */
  static kcg_int _L28;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L30 */
  static kcg_int _L30;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L31 */
  static kcg_int _L31;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L33 */
  static kcg_int _L33;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L38 */
  static kcg_int _L38;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L40 */
  static kcg_int _L40;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L44 */
  static kcg_bool _L44;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L45 */
  static kcg_int _L45;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L47 */
  static kcg_int _L47;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L49 */
  static kcg_int _L49;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L51 */
  static kcg_int _L51;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L52 */
  static kcg_int _L52;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L53 */
  static kcg_int _L53;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L55 */
  static kcg_int _L55;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L56 */
  static kcg_bool _L56;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L57 */
  static kcg_bool _L57;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L59 */
  static kcg_int _L59;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L60 */
  static kcg_int _L60;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L61 */
  static kcg_int _L61;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L62 */
  static kcg_int _L62;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L63 */
  static kcg_bool _L63;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L64 */
  static kcg_bool _L64;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L66 */
  static kcg_bool _L66;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L67 */
  static kcg_bool _L67;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L68 */
  static API_TrackSideInput_T_API_Msg_Pkg _L68;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L69 */
  static kcg_int _L69;
  
  IfBlock1_clock = inValid;
  /* last_init_ck_next_entry */ if (outC->init1) {
    last_next_entry = 0;
  }
  else {
    last_next_entry = outC->next_entry;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* fby_1_init_3 */ if (outC->init) {
      _L14_IfBlock1 = 0;
    }
    else {
      _L14_IfBlock1 = outC->_L20_IfBlock1;
    }
    _2_next_entry = _L14_IfBlock1;
    outC->next_entry = _2_next_entry;
  }
  else {
    next_entry = last_next_entry;
    outC->next_entry = next_entry;
  }
  /* last_init_ck_buffer */ if (outC->init1) {
    /* pow */ for (i1 = 0; i1 < 5; i1++) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &last_buffer[i1],
        (API_TrackSideInput_T_API_Msg_Pkg *)
          &cEmtpyTrackSideInputMessage_Toolbox);
    }
  }
  else {
    kcg_copy_array_170320(&last_buffer, &outC->buffer);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* pow */ for (i = 0; i < 5; i++) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &_L19_IfBlock1[i],
        (API_TrackSideInput_T_API_Msg_Pkg *)
          &cEmtpyTrackSideInputMessage_Toolbox);
    }
    /* fby_1_init_8 */ if (outC->init) {
      kcg_copy_array_170320(&_L22_IfBlock1, &_L19_IfBlock1);
    }
    else {
      kcg_copy_array_170320(&_L22_IfBlock1, &outC->_L4_IfBlock1);
    }
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L2_IfBlock1, inData);
    _L9_IfBlock1 = _2_next_entry;
    kcg_copy_array_170320(&_L1_IfBlock1, &_L22_IfBlock1);
    if ((0 <= _L9_IfBlock1) & (_L9_IfBlock1 < 5)) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &_L1_IfBlock1[_L9_IfBlock1],
        &_L2_IfBlock1);
    }
    kcg_copy_array_170320(&_3_buffer, &_L1_IfBlock1);
    kcg_copy_array_170320(&outC->buffer, &_3_buffer);
    kcg_copy_array_170320(&outC->_L4_IfBlock1, &_3_buffer);
    _L8_IfBlock1 = _2_next_entry + 1;
    _L21_IfBlock1 = 5;
    outC->_L20_IfBlock1 = _L8_IfBlock1 % _L21_IfBlock1;
  }
  else {
    kcg_copy_array_170320(&buffer, &last_buffer);
    kcg_copy_array_170320(&outC->buffer, &buffer);
  }
  kcg_copy_array_170320(&_L19, &outC->buffer);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &_L68,
    (API_TrackSideInput_T_API_Msg_Pkg *) &cEmtpyTrackSideInputMessage_Toolbox);
  /* last_init_ck_entry */ if (outC->init1) {
    last_entry = 0;
  }
  else {
    last_entry = outC->entry;
  }
  /* fby_1_init_2 */ if (outC->init1) {
    _L49 = 0;
  }
  else {
    _L49 = outC->_L50;
  }
  outC->entry = _L49;
  _L22 = outC->entry;
  if ((0 <= _L22) & (_L22 < 5)) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L18, &_L19[_L22]);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L18, &_L68);
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->outData, &_L18);
  _L27 = inValid;
  _L25 = 1;
  _L26 = 0;
  /* 1 */ if (_L27) {
    _L23 = _L25;
  }
  else {
    _L23 = _L26;
  }
  /* last_init_ck_l_size */ if (outC->init1) {
    last_l_size = 0;
  }
  else {
    last_l_size = outC->l_size;
  }
  /* fby_1_init_1 */ if (outC->init1) {
    _L38 = 0;
  }
  else {
    _L38 = outC->_L32;
  }
  I1_1 = _L38;
  _L21_1 = I1_1;
  _L40 = 5;
  I2_1 = _L40;
  _L22_1 = I2_1;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L45 = Mi_Output_1;
  outC->l_size = _L45;
  _L44 = inReady & (outC->l_size > 0);
  _L30 = - 1;
  _L31 = 0;
  /* 2 */ if (_L44) {
    _L28 = _L30;
  }
  else {
    _L28 = _L31;
  }
  _L33 = outC->l_size;
  outC->_L32 = _L33 + _L23 + _L28;
  _L56 = inReady & (outC->l_size > 0);
  _L59 = 1;
  _L60 = 0;
  /* 3 */ if (_L56) {
    _L47 = _L59;
  }
  else {
    _L47 = _L60;
  }
  _L52 = outC->entry;
  _L57 = inValid & (outC->l_size == 5);
  _L61 = 1;
  _L62 = 0;
  /* 4 */ if (_L57) {
    _L55 = _L61;
  }
  else {
    _L55 = _L62;
  }
  _L53 = _L52 + _L47 + _L55;
  _L51 = 5;
  outC->_L50 = _L53 % _L51;
  _L63 = kcg_true;
  _L66 = inReady & (outC->l_size > 0);
  _L67 = kcg_false;
  /* 5 */ if (_L66) {
    _L64 = _L63;
  }
  else {
    _L64 = _L67;
  }
  outC->outValid = _L64;
  _L69 = outC->l_size;
  outC->size = _L69;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    outC->init = kcg_false;
  }
  outC->init1 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TRAIN_TrackSideInputFifo_Toolbox_Functions_5.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

