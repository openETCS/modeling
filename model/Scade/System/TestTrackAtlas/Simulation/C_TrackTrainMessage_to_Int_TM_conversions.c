/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"

void C_TrackTrainMessage_to_Int_reset_TM_conversions(
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC)
{
  /* 1 */ CAST_NID_MESSAGE_to_int_reset_TM_conversions(&outC->_10_Context_1);
  /* 1 */ CAST_T_TRAIN_to_int_reset_TM_conversions(&outC->_9_Context_1);
  /* 1 */ CAST_M_ACK_to_int_reset_TM_conversions(&outC->_8_Context_1);
  /* 1 */ CAST_NID_LRBG_to_int_reset_TM_conversions(&outC->_7_Context_1);
  /* 2 */ CAST_T_TRAIN_to_int_reset_TM_conversions(&outC->Context_2);
  /* 1 */ CAST_NID_EM_to_int_reset_TM_conversions(&outC->_6_Context_1);
  /* 1 */ CAST_Q_SCALE_to_int_reset_TM_conversions(&outC->_5_Context_1);
  /* 1 */ CAST_D_SR_to_int_reset_TM_conversions(&outC->_4_Context_1);
  /* 3 */ CAST_T_TRAIN_to_int_reset_TM_conversions(&outC->Context_3);
  /* 1 */ CAST_D_REF_to_int_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Q_DIR_to_int_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_M_VERSION_to_int_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_D_EMERGENCYSTOP_to_int_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::C_TrackTrainMessage_to_Int */
void C_TrackTrainMessage_to_Int_TM_conversions(
  /* TM_conversions::C_TrackTrainMessage_to_Int::Message_In */Radio_TrackTrain_Header_T_Radio_Types_Pkg *Message_In,
  outC_C_TrackTrainMessage_to_Int_TM_conversions *outC)
{
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&outC->_L1, Message_In);
  outC->_L16 = outC->_L1.m_version;
  outC->_L15 = outC->_L1.d_emergencystop;
  outC->_L14 = outC->_L1.q_dir;
  outC->_L13 = outC->_L1.d_ref;
  outC->_L12 = outC->_L1.t_sh_rqst;
  outC->_L11 = outC->_L1.d_sr;
  outC->_L10 = outC->_L1.q_scale;
  outC->_L9 = outC->_L1.nid_em;
  outC->_L8 = outC->_L1.t_train_reference;
  outC->_L7 = outC->_L1.nid_lrbg;
  outC->_L6 = outC->_L1.m_ack;
  outC->_L5 = outC->_L1.t_train;
  outC->_L4 = outC->_L1.nid_message;
  outC->_L3 = outC->_L1.receivedSystemTime;
  /* 1 */
  CAST_D_EMERGENCYSTOP_to_int_TM_conversions(outC->_L15, &outC->Context_1);
  outC->_L45 = outC->Context_1.d_emergencystop_int;
  /* 1 */ CAST_M_VERSION_to_int_TM_conversions(outC->_L16, &outC->_1_Context_1);
  outC->_L44 = outC->_1_Context_1.m_version_int;
  /* 1 */ CAST_Q_DIR_to_int_TM_conversions(outC->_L14, &outC->_2_Context_1);
  outC->_L43 = outC->_2_Context_1.q_dir_int;
  /* 1 */ CAST_D_REF_to_int_TM_conversions(outC->_L13, &outC->_3_Context_1);
  outC->_L42 = outC->_3_Context_1.d_ref_int;
  /* 3 */ CAST_T_TRAIN_to_int_TM_conversions(outC->_L12, &outC->Context_3);
  outC->_L41 = outC->Context_3.t_train_int;
  /* 1 */ CAST_D_SR_to_int_TM_conversions(outC->_L11, &outC->_4_Context_1);
  outC->_L40 = outC->_4_Context_1.d_sr_int;
  /* 1 */ CAST_Q_SCALE_to_int_TM_conversions(outC->_L10, &outC->_5_Context_1);
  outC->_L39 = outC->_5_Context_1.d;
  /* 1 */ CAST_NID_EM_to_int_TM_conversions(outC->_L9, &outC->_6_Context_1);
  outC->_L38 = outC->_6_Context_1.nid_em_int;
  /* 2 */ CAST_T_TRAIN_to_int_TM_conversions(outC->_L8, &outC->Context_2);
  outC->_L37 = outC->Context_2.t_train_int;
  /* 1 */ CAST_NID_LRBG_to_int_TM_conversions(outC->_L7, &outC->_7_Context_1);
  outC->_L36 = outC->_7_Context_1.nid_lrbg_int;
  /* 1 */ CAST_M_ACK_to_int_TM_conversions(outC->_L6, &outC->_8_Context_1);
  outC->_L35 = outC->_8_Context_1.m_ack_int;
  /* 1 */ CAST_T_TRAIN_to_int_TM_conversions(outC->_L5, &outC->_9_Context_1);
  outC->_L34 = outC->_9_Context_1.t_train_int;
  /* 1 */
  CAST_NID_MESSAGE_to_int_TM_conversions(outC->_L4, &outC->_10_Context_1);
  outC->_L33 = outC->_10_Context_1.nid_message_int;
  outC->_L2 = outC->_L1.radioDevice;
  outC->_L32.radioDevice = outC->_L2;
  outC->_L32.receivedSystemTime = outC->_L3;
  outC->_L32.nid_message = outC->_L33;
  outC->_L32.t_train = outC->_L34;
  outC->_L32.m_ack = outC->_L35;
  outC->_L32.nid_lrbg = outC->_L36;
  outC->_L32.t_train_reference = outC->_L37;
  outC->_L32.nid_em = outC->_L38;
  outC->_L32.q_scale = outC->_L39;
  outC->_L32.d_sr = outC->_L40;
  outC->_L32.t_sh_rqst = outC->_L41;
  outC->_L32.d_ref = outC->_L42;
  outC->_L32.q_dir = outC->_L43;
  outC->_L32.d_emergencystop = outC->_L45;
  outC->_L32.m_version = outC->_L44;
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->Message_Out, &outC->_L32);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_TrackTrainMessage_to_Int_TM_conversions.c
** Generation date: 2015-09-02T01:48:41
*************************************************************$ */

