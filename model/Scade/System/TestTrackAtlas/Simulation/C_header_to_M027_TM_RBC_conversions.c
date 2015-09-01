/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M027_TM_RBC_conversions.h"

void C_header_to_M027_reset_TM_RBC_conversions(
  outC_C_header_to_M027_TM_RBC_conversions *outC)
{
  /* 1 */ CAST_Int_to_M_ACK_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Int_to_NID_LRBG_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Int_to_T_TRAIN_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_NID_MESSAGE_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_L_MESSAGE_reset_TM_conversions(&outC->Context_1);
  /* 2 */ CAST_Int_to_T_TRAIN_reset_TM_conversions(&outC->Context_2);
}

/* TM_RBC_conversions::C_header_to_M027 */
void C_header_to_M027_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M027::header_in */M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M027_TM_RBC_conversions *outC)
{
  kcg_int noname;
  kcg_int _1_noname;
  kcg_int _2_noname;
  kcg_int _3_noname;
  kcg_int _4_noname;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L1, header_in);
  outC->_L13 = outC->_L1.field8;
  outC->_L12 = outC->_L1.field7;
  outC->_L11 = outC->_L1.field6;
  outC->_L10 = outC->_L1.field5;
  outC->_L9 = outC->_L1.field4;
  outC->_L8 = outC->_L1.field3;
  outC->_L7 = outC->_L1.field2;
  outC->_L6 = outC->_L1.field1;
  outC->_L5 = outC->_L1.t_train;
  outC->_L4 = outC->_L1.l_message;
  outC->_L3 = outC->_L1.nid_message;
  /* 2 */ CAST_Int_to_T_TRAIN_TM_conversions(outC->_L5, &outC->Context_2);
  outC->_L33 = outC->Context_2.t_train;
  /* 1 */ CAST_Int_to_L_MESSAGE_TM_conversions(outC->_L4, &outC->Context_1);
  outC->_L32 = outC->Context_1.l_message;
  /* 1 */
  CAST_Int_to_NID_MESSAGE_TM_conversions(outC->_L3, &outC->_1_Context_1);
  outC->_L31 = outC->_1_Context_1.nid_message;
  /* 1 */ CAST_Int_to_T_TRAIN_TM_conversions(outC->_L8, &outC->_2_Context_1);
  outC->_L29 = outC->_2_Context_1.t_train;
  _4_noname = outC->_L12;
  _3_noname = outC->_L11;
  _2_noname = outC->_L10;
  _1_noname = outC->_L9;
  noname = outC->_L13;
  /* 1 */ CAST_Int_to_NID_LRBG_TM_conversions(outC->_L7, &outC->_3_Context_1);
  outC->_L28 = outC->_3_Context_1.NID_LRBG_out;
  /* 1 */ CAST_Int_to_M_ACK_TM_conversions(outC->_L6, &outC->_4_Context_1);
  outC->_L27 = outC->_4_Context_1.m_ack;
  outC->_L2 = outC->_L1.valid;
  outC->_L26.valid = outC->_L2;
  outC->_L26.nid_message = outC->_L31;
  outC->_L26.l_message = outC->_L32;
  outC->_L26.t_train = outC->_L33;
  outC->_L26.m_ack = outC->_L27;
  outC->_L26.nid_lrbg = outC->_L28;
  outC->_L26.t_train_SH_request = outC->_L29;
  kcg_copy_M_027_T_TM_radio_messages(&outC->message_out, &outC->_L26);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M027_TM_RBC_conversions.c
** Generation date: 2015-09-02T01:48:41
*************************************************************$ */

