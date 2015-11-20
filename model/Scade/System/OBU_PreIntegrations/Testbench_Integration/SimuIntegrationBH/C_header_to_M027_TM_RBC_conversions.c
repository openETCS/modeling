/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M027_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M027 */
void C_header_to_M027_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M027::header_in */ M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  /* TM_RBC_conversions::C_header_to_M027::message_out */ M_027_T_TM_radio_messages *message_out)
{
  static kcg_int noname;
  static kcg_int _1_noname;
  static kcg_int _2_noname;
  static kcg_int _3_noname;
  static kcg_int _4_noname;
  /* TM_RBC_conversions::C_header_to_M027::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L1;
  /* TM_RBC_conversions::C_header_to_M027::_L13 */
  static kcg_int _L13;
  /* TM_RBC_conversions::C_header_to_M027::_L12 */
  static kcg_int _L12;
  /* TM_RBC_conversions::C_header_to_M027::_L11 */
  static kcg_int _L11;
  /* TM_RBC_conversions::C_header_to_M027::_L10 */
  static kcg_int _L10;
  /* TM_RBC_conversions::C_header_to_M027::_L9 */
  static kcg_int _L9;
  /* TM_RBC_conversions::C_header_to_M027::_L8 */
  static kcg_int _L8;
  /* TM_RBC_conversions::C_header_to_M027::_L7 */
  static kcg_int _L7;
  /* TM_RBC_conversions::C_header_to_M027::_L6 */
  static kcg_int _L6;
  /* TM_RBC_conversions::C_header_to_M027::_L5 */
  static kcg_int _L5;
  /* TM_RBC_conversions::C_header_to_M027::_L4 */
  static kcg_int _L4;
  /* TM_RBC_conversions::C_header_to_M027::_L3 */
  static kcg_int _L3;
  /* TM_RBC_conversions::C_header_to_M027::_L2 */
  static kcg_bool _L2;
  /* TM_RBC_conversions::C_header_to_M027::_L26 */
  static M_027_T_TM_radio_messages _L26;
  /* TM_RBC_conversions::C_header_to_M027::_L27 */
  static M_ACK _L27;
  /* TM_RBC_conversions::C_header_to_M027::_L28 */
  static NID_LRBG _L28;
  /* TM_RBC_conversions::C_header_to_M027::_L29 */
  static T_TRAIN _L29;
  /* TM_RBC_conversions::C_header_to_M027::_L33 */
  static T_TRAIN _L33;
  /* TM_RBC_conversions::C_header_to_M027::_L32 */
  static L_MESSAGE _L32;
  /* TM_RBC_conversions::C_header_to_M027::_L31 */
  static NID_MESSAGE _L31;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L1, header_in);
  _L13 = _L1.field8;
  _L12 = _L1.field7;
  _L11 = _L1.field6;
  _L10 = _L1.field5;
  _L9 = _L1.field4;
  _L8 = _L1.field3;
  _L7 = _L1.field2;
  _L6 = _L1.field1;
  _L5 = _L1.t_train;
  _L4 = _L1.l_message;
  _L3 = _L1.nid_message;
  _L2 = _L1.valid;
  _L31 = /* 1 */ CAST_Int_to_NID_MESSAGE_TM_conversions(_L3);
  _L32 = /* 1 */ CAST_Int_to_L_MESSAGE_TM_conversions(_L4);
  _L33 = /* 2 */ CAST_Int_to_T_TRAIN_TM_conversions(_L5);
  _L27 = /* 1 */ CAST_Int_to_M_ACK_TM_conversions(_L6);
  _L28 = /* 1 */ CAST_Int_to_NID_LRBG_TM_conversions(_L7);
  _L29 = /* 1 */ CAST_Int_to_T_TRAIN_TM_conversions(_L8);
  _L26.valid = _L2;
  _L26.nid_message = _L31;
  _L26.l_message = _L32;
  _L26.t_train = _L33;
  _L26.m_ack = _L27;
  _L26.nid_lrbg = _L28;
  _L26.t_train_SH_request = _L29;
  kcg_copy_M_027_T_TM_radio_messages(message_out, &_L26);
  noname = _L13;
  _1_noname = _L9;
  _2_noname = _L10;
  _3_noname = _L11;
  _4_noname = _L12;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_header_to_M027_TM_RBC_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

