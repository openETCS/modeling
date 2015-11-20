/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InformationFilter_InformationFilter_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void InformationFilter_init_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->rem_inLevel = M_LEVEL_Level_0;
  outC->rem_inSupervisingDevice = 0;
  outC->currBuffersize = 0;
  outC->bufferHasPriority = kcg_true;
  outC->storeInBuffer = kcg_true;
  outC->bufferMsg.valid = kcg_true;
  outC->bufferMsg.source = msrc_undefined_Common_Types_Pkg;
  outC->bufferMsg.radioMetadata.t_train_reference = kcg_true;
  outC->bufferMsg.radioMetadata.nid_em = kcg_true;
  outC->bufferMsg.radioMetadata.q_scale = kcg_true;
  outC->bufferMsg.radioMetadata.d_sr = kcg_true;
  outC->bufferMsg.radioMetadata.t_sh_rqst = kcg_true;
  outC->bufferMsg.radioMetadata.d_ref = kcg_true;
  outC->bufferMsg.radioMetadata.q_dir = kcg_true;
  outC->bufferMsg.radioMetadata.d_emergencystop = kcg_true;
  outC->bufferMsg.radioMetadata.m_version = kcg_true;
  outC->bufferMsg.BG_Common_Header.valid = kcg_true;
  outC->bufferMsg.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->bufferMsg.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->bufferMsg.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->bufferMsg.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->bufferMsg.BG_Common_Header.m_mcount = 0;
  outC->bufferMsg.BG_Common_Header.nid_c = 0;
  outC->bufferMsg.BG_Common_Header.nid_bg = 0;
  outC->bufferMsg.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->bufferMsg.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->bufferMsg.BG_Common_Header.bgPosition.timestamp = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.acceleration = 0;
  outC->bufferMsg.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->bufferMsg.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->bufferMsg.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->bufferMsg.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->bufferMsg.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->bufferMsg.BG_Common_Header.q_nvlocacc = 0;
  outC->bufferMsg.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->bufferMsg.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->bufferMsg.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->bufferMsg.Radio_Common_Header.radioDevice = 0;
  outC->bufferMsg.Radio_Common_Header.receivedSystemTime = 0;
  outC->bufferMsg.Radio_Common_Header.nid_message = 0;
  outC->bufferMsg.Radio_Common_Header.t_train = 0;
  outC->bufferMsg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->bufferMsg.Radio_Common_Header.nid_lrbg = 0;
  outC->bufferMsg.Radio_Common_Header.t_train_reference = 0;
  outC->bufferMsg.Radio_Common_Header.nid_em = 0;
  outC->bufferMsg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->bufferMsg.Radio_Common_Header.d_sr = 0;
  outC->bufferMsg.Radio_Common_Header.t_sh_rqst = 0;
  outC->bufferMsg.Radio_Common_Header.d_ref = 0;
  outC->bufferMsg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->bufferMsg.Radio_Common_Header.d_emergencystop = 0;
  outC->bufferMsg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->bufferMsg.packets.PacketHeaders[i].nid_packet = 0;
    outC->bufferMsg.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->bufferMsg.packets.PacketHeaders[i].valid = kcg_true;
    outC->bufferMsg.packets.PacketHeaders[i].startAddress = 0;
    outC->bufferMsg.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->bufferMsg.packets.PacketData[i1] = 0;
  }
  outC->bufferMsg.sendingRBC.valid = kcg_true;
  outC->bufferMsg.sendingRBC.nid_c = 0;
  outC->bufferMsg.sendingRBC.rbc_id = 0;
  outC->bufferMsg.sendingRBC.device_id = 0;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
  outC->_L4_1.valid = kcg_true;
  outC->_L4_1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L4_1.radioMetadata.t_train_reference = kcg_true;
  outC->_L4_1.radioMetadata.nid_em = kcg_true;
  outC->_L4_1.radioMetadata.q_scale = kcg_true;
  outC->_L4_1.radioMetadata.d_sr = kcg_true;
  outC->_L4_1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L4_1.radioMetadata.d_ref = kcg_true;
  outC->_L4_1.radioMetadata.q_dir = kcg_true;
  outC->_L4_1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L4_1.radioMetadata.m_version = kcg_true;
  outC->_L4_1.BG_Common_Header.valid = kcg_true;
  outC->_L4_1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4_1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L4_1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4_1.BG_Common_Header.m_mcount = 0;
  outC->_L4_1.BG_Common_Header.nid_c = 0;
  outC->_L4_1.BG_Common_Header.nid_bg = 0;
  outC->_L4_1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L4_1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L4_1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L4_1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L4_1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L4_1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L4_1.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L4_1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L4_1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L4_1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L4_1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L4_1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L4_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L4_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L4_1.BG_Common_Header.q_nvlocacc = 0;
  outC->_L4_1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L4_1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L4_1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L4_1.Radio_Common_Header.radioDevice = 0;
  outC->_L4_1.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L4_1.Radio_Common_Header.nid_message = 0;
  outC->_L4_1.Radio_Common_Header.t_train = 0;
  outC->_L4_1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L4_1.Radio_Common_Header.nid_lrbg = 0;
  outC->_L4_1.Radio_Common_Header.t_train_reference = 0;
  outC->_L4_1.Radio_Common_Header.nid_em = 0;
  outC->_L4_1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4_1.Radio_Common_Header.d_sr = 0;
  outC->_L4_1.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L4_1.Radio_Common_Header.d_ref = 0;
  outC->_L4_1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4_1.Radio_Common_Header.d_emergencystop = 0;
  outC->_L4_1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L4_1.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L4_1.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L4_1.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L4_1.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L4_1.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L4_1.packets.PacketData[i3] = 0;
  }
  outC->_L4_1.sendingRBC.valid = kcg_true;
  outC->_L4_1.sendingRBC.nid_c = 0;
  outC->_L4_1.sendingRBC.rbc_id = 0;
  outC->_L4_1.sendingRBC.device_id = 0;
  outC->outMessage.valid = kcg_true;
  outC->outMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outMessage.radioMetadata.nid_em = kcg_true;
  outC->outMessage.radioMetadata.q_scale = kcg_true;
  outC->outMessage.radioMetadata.d_sr = kcg_true;
  outC->outMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessage.radioMetadata.d_ref = kcg_true;
  outC->outMessage.radioMetadata.q_dir = kcg_true;
  outC->outMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessage.radioMetadata.m_version = kcg_true;
  outC->outMessage.BG_Common_Header.valid = kcg_true;
  outC->outMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outMessage.BG_Common_Header.m_mcount = 0;
  outC->outMessage.BG_Common_Header.nid_c = 0;
  outC->outMessage.BG_Common_Header.nid_bg = 0;
  outC->outMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessage.Radio_Common_Header.radioDevice = 0;
  outC->outMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outMessage.Radio_Common_Header.nid_message = 0;
  outC->outMessage.Radio_Common_Header.t_train = 0;
  outC->outMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outMessage.Radio_Common_Header.t_train_reference = 0;
  outC->outMessage.Radio_Common_Header.nid_em = 0;
  outC->outMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessage.Radio_Common_Header.d_sr = 0;
  outC->outMessage.Radio_Common_Header.t_sh_rqst = 0;
  outC->outMessage.Radio_Common_Header.d_ref = 0;
  outC->outMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i4 = 0; i4 < 30; i4++) {
    outC->outMessage.packets.PacketHeaders[i4].nid_packet = 0;
    outC->outMessage.packets.PacketHeaders[i4].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[i4].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[i4].startAddress = 0;
    outC->outMessage.packets.PacketHeaders[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->outMessage.packets.PacketData[i5] = 0;
  }
  outC->outMessage.sendingRBC.valid = kcg_true;
  outC->outMessage.sendingRBC.nid_c = 0;
  outC->outMessage.sendingRBC.rbc_id = 0;
  outC->outMessage.sendingRBC.device_id = 0;
  /* 1 */ TransitionBuffer_init_InformationFilter_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ TransitionBuffer_reset_InformationFilter_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::InformationFilter */
void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inMode */ M_MODE inMode,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */ kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */ kcg_bool inTrainDataValid,
  /* InformationFilter_Pkg::InformationFilter::inMorcStatus */ morcStatus_T_RCM_Session_Types_Pkg *inMorcStatus,
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  /* linear::MemoryBasic::Memorized */
  static struct_172526 Memorized_1;
  /* linear::MemoryBasic::Write */
  static kcg_bool Write_1;
  /* linear::MemoryBasic::Init */
  static struct_172526 Init_1;
  /* linear::MemoryBasic::BM_Input */
  static struct_172526 BM_Input_1;
  /* linear::MemoryBasic::_L7 */
  static struct_172526 _L7_1;
  /* linear::MemoryBasic::_L6 */
  static struct_172526 _L6_1;
  /* linear::MemoryBasic::_L5 */
  static kcg_bool _L5_1;
  /* linear::MemoryBasic::_L2 */
  static struct_172526 _L2_1;
  /* InformationFilter_Pkg::InformationFilter */
  static kcg_bool op_call;
  /* InformationFilter_Pkg::InformationFilter */
  static ReceivedMessage_T_Common_Types_Pkg _1_op_call;
  /* InformationFilter_Pkg::InformationFilter */
  static ReceivedMessage_T_Common_Types_Pkg _2_op_call;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _60_SSM_TR_SM1 _10_SM1_fired;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static kcg_bool _9_SM1_reset_nxt;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _56_SSM_ST_SM1 _8_SM1_state_nxt;
  /* InformationFilter_Pkg::InformationFilter::bufferHasPriority */
  static kcg_bool _7_bufferHasPriority;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _60_SSM_TR_SM1 _6_SM1_fired;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static kcg_bool _5_SM1_reset_nxt;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _56_SSM_ST_SM1 _4_SM1_state_nxt;
  /* InformationFilter_Pkg::InformationFilter::bufferHasPriority */
  static kcg_bool _3_bufferHasPriority;
  /* InformationFilter_Pkg::InformationFilter::SM1::State2::_L2 */
  static kcg_bool _L2_SM1_State2;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _60_SSM_TR_SM1 SM1_fired;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _56_SSM_ST_SM1 SM1_state_nxt;
  /* InformationFilter_Pkg::InformationFilter::bufferHasPriority */
  static kcg_bool bufferHasPriority;
  /* InformationFilter_Pkg::InformationFilter::SM1::State3::_L1 */
  static kcg_bool _L1_SM1_State3;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _60_SSM_TR_SM1 _16_SM1_fired_strong;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static kcg_bool _15_SM1_reset_act;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _56_SSM_ST_SM1 _14_SM1_state_act;
  /* InformationFilter_Pkg::InformationFilter::SM1::State1 */
  static kcg_bool br_1_guard_SM1_State1;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _60_SSM_TR_SM1 _13_SM1_fired_strong;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static kcg_bool _12_SM1_reset_act;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _56_SSM_ST_SM1 _11_SM1_state_act;
  /* InformationFilter_Pkg::InformationFilter::SM1::State2 */
  static kcg_bool br_1_guard_SM1_State2;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _60_SSM_TR_SM1 SM1_fired_strong;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static kcg_bool SM1_reset_act;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _56_SSM_ST_SM1 SM1_state_act;
  /* InformationFilter_Pkg::InformationFilter::SM1::State3 */
  static kcg_bool br_1_guard_SM1_State3;
  /* InformationFilter_Pkg::InformationFilter */
  static kcg_bool ck_every;
  static kcg_bool noname;
  static kcg_bool _17_noname;
  /* InformationFilter_Pkg::InformationFilter::currBuffersize */
  static kcg_int last_currBuffersize;
  /* InformationFilter_Pkg::InformationFilter::bufferHasPriority */
  static kcg_bool last_bufferHasPriority;
  /* InformationFilter_Pkg::InformationFilter::storeInBuffer */
  static kcg_bool last_storeInBuffer;
  /* InformationFilter_Pkg::InformationFilter::bufferMsg */
  static ReceivedMessage_T_Common_Types_Pkg last_bufferMsg;
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */
  static kcg_int last_inSupervisingDevice;
  /* InformationFilter_Pkg::InformationFilter::inLevel */
  static M_LEVEL last_inLevel;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _56_SSM_ST_SM1 SM1_state_sel;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _56_SSM_ST_SM1 _20_SM1_state_act;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static kcg_bool SM1_reset_sel;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static kcg_bool SM1_reset_prv;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _60_SSM_TR_SM1 _19_SM1_fired_strong;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _60_SSM_TR_SM1 _18_SM1_fired;
  /* InformationFilter_Pkg::InformationFilter::releaseBuffer */
  static kcg_bool releaseBuffer;
  /* InformationFilter_Pkg::InformationFilter::morcRadioStatus */
  static morcStatus_T_RCM_Session_Types_Pkg morcRadioStatus;
  /* InformationFilter_Pkg::InformationFilter::cond4_8_5_4c */
  static kcg_bool cond4_8_5_4c;
  /* InformationFilter_Pkg::InformationFilter::cond4_8_5_4b */
  static kcg_bool cond4_8_5_4b;
  /* InformationFilter_Pkg::InformationFilter::cond4_8_5_4a */
  static kcg_bool cond4_8_5_4a;
  /* InformationFilter_Pkg::InformationFilter::_L5 */
  static M_LEVEL _L5;
  /* InformationFilter_Pkg::InformationFilter::_L6 */
  static M_MODE _L6;
  /* InformationFilter_Pkg::InformationFilter::_L18 */
  static kcg_int _L18;
  /* InformationFilter_Pkg::InformationFilter::_L32 */
  static kcg_bool _L32;
  /* InformationFilter_Pkg::InformationFilter::_L33 */
  static kcg_bool _L33;
  /* InformationFilter_Pkg::InformationFilter::_L60 */
  static ReceivedMessage_T_Common_Types_Pkg _L60;
  /* InformationFilter_Pkg::InformationFilter::_L72 */
  static filterRelatedEvents_T_Common_Types_Pkg _L72;
  /* InformationFilter_Pkg::InformationFilter::_L95 */
  static ReceivedMessage_T_Common_Types_Pkg _L95;
  /* InformationFilter_Pkg::InformationFilter::_L93 */
  static ReceivedMessage_T_Common_Types_Pkg _L93;
  /* InformationFilter_Pkg::InformationFilter::_L92 */
  static kcg_bool _L92;
  /* InformationFilter_Pkg::InformationFilter::_L96 */
  static kcg_bool _L96;
  /* InformationFilter_Pkg::InformationFilter::_L97 */
  static kcg_bool _L97;
  /* InformationFilter_Pkg::InformationFilter::_L98 */
  static ReceivedMessage_T_Common_Types_Pkg _L98;
  /* InformationFilter_Pkg::InformationFilter::_L99 */
  static ReceivedMessage_T_Common_Types_Pkg _L99;
  /* InformationFilter_Pkg::InformationFilter::_L100 */
  static ReceivedMessage_T_Common_Types_Pkg _L100;
  /* InformationFilter_Pkg::InformationFilter::_L103 */
  static ReceivedMessage_T_Common_Types_Pkg _L103;
  /* InformationFilter_Pkg::InformationFilter::_L104 */
  static kcg_bool _L104;
  /* InformationFilter_Pkg::InformationFilter::_L105 */
  static kcg_bool _L105;
  /* InformationFilter_Pkg::InformationFilter::_L106 */
  static kcg_bool _L106;
  /* InformationFilter_Pkg::InformationFilter::_L108 */
  static ReceivedMessage_T_Common_Types_Pkg _L108;
  /* InformationFilter_Pkg::InformationFilter::_L109 */
  static ReceivedMessage_T_Common_Types_Pkg _L109;
  /* InformationFilter_Pkg::InformationFilter::_L110 */
  static ReceivedMessage_T_Common_Types_Pkg _L110;
  /* InformationFilter_Pkg::InformationFilter::_L111 */
  static kcg_bool _L111;
  /* InformationFilter_Pkg::InformationFilter::_L112 */
  static kcg_bool _L112;
  /* InformationFilter_Pkg::InformationFilter::_L118 */
  static kcg_bool _L118;
  /* InformationFilter_Pkg::InformationFilter::_L119 */
  static kcg_int _L119;
  /* InformationFilter_Pkg::InformationFilter::_L121 */
  static kcg_bool _L121;
  /* InformationFilter_Pkg::InformationFilter::_L122 */
  static kcg_bool _L122;
  /* InformationFilter_Pkg::InformationFilter::_L123 */
  static ReceivedMessage_T_Common_Types_Pkg _L123;
  /* InformationFilter_Pkg::InformationFilter::_L124 */
  static ReceivedMessage_T_Common_Types_Pkg _L124;
  /* InformationFilter_Pkg::InformationFilter::_L125 */
  static kcg_bool _L125;
  /* InformationFilter_Pkg::InformationFilter::_L126 */
  static kcg_bool _L126;
  /* InformationFilter_Pkg::InformationFilter::_L127 */
  static kcg_bool _L127;
  /* InformationFilter_Pkg::InformationFilter::_L128 */
  static ReceivedMessage_T_Common_Types_Pkg _L128;
  /* InformationFilter_Pkg::InformationFilter::_L131 */
  static kcg_bool _L131;
  /* InformationFilter_Pkg::InformationFilter::_L133 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L133;
  /* InformationFilter_Pkg::InformationFilter::_L134 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L134;
  /* InformationFilter_Pkg::InformationFilter::_L136 */
  static kcg_bool _L136;
  /* InformationFilter_Pkg::InformationFilter::_L137 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L137;
  /* InformationFilter_Pkg::InformationFilter::_L138 */
  static kcg_bool _L138;
  /* InformationFilter_Pkg::InformationFilter::_L140 */
  static kcg_bool _L140;
  /* InformationFilter_Pkg::InformationFilter::_L141 */
  static kcg_bool _L141;
  /* InformationFilter_Pkg::InformationFilter::_L144 */
  static kcg_int _L144;
  /* InformationFilter_Pkg::InformationFilter::_L145 */
  static M_LEVEL _L145;
  /* InformationFilter_Pkg::InformationFilter::_L146 */
  static M_LEVEL _L146;
  /* InformationFilter_Pkg::InformationFilter::_L147 */
  static kcg_int _L147;
  /* InformationFilter_Pkg::InformationFilter::_L148 */
  static kcg_bool _L148;
  /* InformationFilter_Pkg::InformationFilter::_L149 */
  static kcg_bool _L149;
  /* InformationFilter_Pkg::InformationFilter::_L152 */
  static morcStatus_T_RCM_Session_Types_Pkg _L152;
  /* InformationFilter_Pkg::InformationFilter::_L132 */
  static morcStatus_T_RCM_Session_Types_Pkg _L132;
  
  /* last_init_ck_bufferHasPriority */ if (outC->init) {
    last_bufferHasPriority = kcg_false;
  }
  else {
    last_bufferHasPriority = outC->bufferHasPriority;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_State1_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* last_init_ck_currBuffersize */ if (outC->init) {
    last_currBuffersize = 0;
  }
  else {
    last_currBuffersize = outC->currBuffersize;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _54_SSM_st_State3_SM1 :
      br_1_guard_SM1_State3 = last_currBuffersize == 0;
      if (br_1_guard_SM1_State3) {
        SM1_state_act = _55_SSM_st_State2_SM1;
      }
      else {
        SM1_state_act = _54_SSM_st_State3_SM1;
      }
      break;
    
  }
  _L144 = inSupervisingDevice;
  /* last_init_ck_inSupervisingDevice */ if (outC->init) {
    last_inSupervisingDevice = 0;
  }
  else {
    last_inSupervisingDevice = outC->rem_inSupervisingDevice;
  }
  _L147 = last_inSupervisingDevice;
  _L148 = _L144 != _L147;
  _L145 = inLevel;
  /* last_init_ck_inLevel */ if (outC->init) {
    last_inLevel = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  }
  else {
    last_inLevel = outC->rem_inLevel;
  }
  _L146 = last_inLevel;
  _L149 = _L145 != _L146;
  _L112 = _L148 | _L149;
  releaseBuffer = _L112;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_State1_SM1 :
      br_1_guard_SM1_State1 = kcg_true;
      if (br_1_guard_SM1_State1) {
        _14_SM1_state_act = _55_SSM_st_State2_SM1;
      }
      else {
        _14_SM1_state_act = SSM_st_State1_SM1;
      }
      _20_SM1_state_act = _14_SM1_state_act;
      break;
    case _55_SSM_st_State2_SM1 :
      br_1_guard_SM1_State2 = releaseBuffer & (last_currBuffersize > 0);
      if (br_1_guard_SM1_State2) {
        _11_SM1_state_act = _54_SSM_st_State3_SM1;
      }
      else {
        _11_SM1_state_act = _55_SSM_st_State2_SM1;
      }
      _20_SM1_state_act = _11_SM1_state_act;
      break;
    case _54_SSM_st_State3_SM1 :
      _20_SM1_state_act = SM1_state_act;
      break;
    
  }
  /* act_SM1 */ switch (_20_SM1_state_act) {
    case SSM_st_State1_SM1 :
      _7_bufferHasPriority = last_bufferHasPriority;
      outC->bufferHasPriority = _7_bufferHasPriority;
      break;
    case _55_SSM_st_State2_SM1 :
      _L2_SM1_State2 = kcg_false;
      _3_bufferHasPriority = _L2_SM1_State2;
      outC->bufferHasPriority = _3_bufferHasPriority;
      break;
    case _54_SSM_st_State3_SM1 :
      _L1_SM1_State3 = kcg_true;
      bufferHasPriority = _L1_SM1_State3;
      outC->bufferHasPriority = bufferHasPriority;
      break;
    
  }
  _L118 = outC->bufferHasPriority;
  /* last_init_ck_bufferMsg */ if (outC->init) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &last_bufferMsg,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &last_bufferMsg,
      &outC->bufferMsg);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L103, &last_bufferMsg);
  _L121 = _L103.valid;
  /* last_init_ck_storeInBuffer */ if (outC->init) {
    last_storeInBuffer = kcg_false;
  }
  else {
    last_storeInBuffer = outC->storeInBuffer;
  }
  _L104 = last_storeInBuffer;
  _L122 = _L121 & _L104;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L124,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  /* 4 */ if (_L122) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L123, &_L103);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L123, &_L124);
  }
  _L125 = outC->bufferHasPriority;
  _L106 = kcg_false;
  cond4_8_5_4a = _L106;
  _L140 = cond4_8_5_4a;
  cond4_8_5_4b = _L106;
  _L141 = cond4_8_5_4b;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L152, inMorcStatus);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&morcRadioStatus, &_L152);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L132, &morcRadioStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L133, &_L132.session);
  _L134 = _L133.phase;
  _L137 = sp_terminated_RCM_Session_Types_Pkg;
  _L136 = _L134 == _L137;
  cond4_8_5_4c = _L136;
  _L138 = cond4_8_5_4c;
  _L105 = _L140 | _L141 | _L138;
  /* 1 */
  TransitionBuffer_InformationFilter_Pkg(
    &_L123,
    _L125,
    _L105,
    &outC->Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L100, &outC->Context_1.Out);
  _L119 = outC->Context_1.outStacksize;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L110,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&Init_1, &_L110);
  kcg_copy_struct_172526(&_L7_1, &Init_1);
  /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_struct_172526(&_L6_1, &_L7_1);
  }
  else {
    kcg_copy_struct_172526(&_L6_1, &outC->_L4_1);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L109, inMessage);
  _L111 = _L109.valid;
  _L127 = outC->bufferHasPriority;
  _L126 = _L111 & _L127;
  Write_1 = _L126;
  _L5_1 = Write_1;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&BM_Input_1, &_L109);
  kcg_copy_struct_172526(&_L2_1, &BM_Input_1);
  /* 1 */ if (_L5_1) {
    kcg_copy_struct_172526(&outC->_L4_1, &_L2_1);
  }
  else {
    kcg_copy_struct_172526(&outC->_L4_1, &_L6_1);
  }
  kcg_copy_struct_172526(&Memorized_1, &outC->_L4_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L108, &Memorized_1);
  _L131 = !kcg_comp_ReceivedMessage_T_Common_Types_Pkg(&_L108, &_L110);
  /* 5 */ if (_L131) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L128, &_L108);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L128, &_L109);
  }
  /* 3 */ if (_L118) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, &_L100);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, &_L128);
  }
  _L96 = _L99.valid;
  ck_every = _L96;
  _L5 = inLevel;
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&_L72, inFilterEvents);
  _L18 = inSupervisingDevice;
  _L6 = inMode;
  /* ck_InformationFilter */ if (ck_every) {
    /* FilterSequence */
    FilterSequence_InformationFilter_Pkg(
      &_L99,
      _L5,
      &_L72,
      _L18,
      _L6,
      &_2_op_call,
      &_1_op_call,
      &op_call);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L60,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  /* ck_InformationFilter */ if (ck_every) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L95, &_2_op_call);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L95, &_L60);
  }
  /* 2 */ if (_L96) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L98, &_L95);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L98, &_L99);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &_L98);
  _L32 = inActiveCab;
  _L33 = inTrainDataValid;
  noname = _L32;
  _17_noname = _L33;
  _L97 = kcg_false;
  /* ck_InformationFilter */ if (ck_every) {
    _L92 = op_call;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L93, &_1_op_call);
  }
  else {
    _L92 = _L97;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L93, &_L60);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->bufferMsg, &_L93);
  outC->storeInBuffer = _L92;
  /* init_SM1 */ if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_State1_SM1 :
      _15_SM1_reset_act = br_1_guard_SM1_State1;
      outC->SM1_reset_act = _15_SM1_reset_act;
      if (br_1_guard_SM1_State1) {
        _16_SM1_fired_strong = SSM_TR_State1_1_SM1;
      }
      else {
        _16_SM1_fired_strong = _59_SSM_TR_no_trans_SM1;
      }
      _19_SM1_fired_strong = _16_SM1_fired_strong;
      break;
    case _55_SSM_st_State2_SM1 :
      _12_SM1_reset_act = br_1_guard_SM1_State2;
      outC->SM1_reset_act = _12_SM1_reset_act;
      if (br_1_guard_SM1_State2) {
        _13_SM1_fired_strong = _58_SSM_TR_State2_1_SM1;
      }
      else {
        _13_SM1_fired_strong = _59_SSM_TR_no_trans_SM1;
      }
      _19_SM1_fired_strong = _13_SM1_fired_strong;
      break;
    case _54_SSM_st_State3_SM1 :
      SM1_reset_act = br_1_guard_SM1_State3;
      outC->SM1_reset_act = SM1_reset_act;
      if (br_1_guard_SM1_State3) {
        SM1_fired_strong = _57_SSM_TR_State3_1_SM1;
      }
      else {
        SM1_fired_strong = _59_SSM_TR_no_trans_SM1;
      }
      _19_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_20_SM1_state_act) {
    case SSM_st_State1_SM1 :
      _8_SM1_state_nxt = SSM_st_State1_SM1;
      outC->SM1_state_nxt = _8_SM1_state_nxt;
      _9_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _9_SM1_reset_nxt;
      _10_SM1_fired = _19_SM1_fired_strong;
      _18_SM1_fired = _10_SM1_fired;
      break;
    case _55_SSM_st_State2_SM1 :
      _4_SM1_state_nxt = _55_SSM_st_State2_SM1;
      outC->SM1_state_nxt = _4_SM1_state_nxt;
      _5_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _5_SM1_reset_nxt;
      _6_SM1_fired = _19_SM1_fired_strong;
      _18_SM1_fired = _6_SM1_fired;
      break;
    case _54_SSM_st_State3_SM1 :
      SM1_state_nxt = _54_SSM_st_State3_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _19_SM1_fired_strong;
      _18_SM1_fired = SM1_fired;
      break;
    
  }
  outC->currBuffersize = _L119;
  outC->rem_inLevel = inLevel;
  outC->rem_inSupervisingDevice = inSupervisingDevice;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InformationFilter_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

