/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_M146_to_header_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_M146_to_header */
void C_M146_to_header_TM_RBC_conversions(
  /* TM_RBC_conversions::C_M146_to_header::Message_Data_in */ M_146_T_TM_radio_messages *Message_Data_in,
  /* TM_RBC_conversions::C_M146_to_header::Message_Header_Out */ M_TrainTrack_MessageHd_T_TM_radio_messages *Message_Header_Out)
{
  /* TM_RBC_conversions::C_M146_to_header::_L1 */
  static M_146_T_TM_radio_messages _L1;
  /* TM_RBC_conversions::C_M146_to_header::_L2 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L2;
  /* TM_RBC_conversions::C_M146_to_header::_L7 */
  static NID_ENGINE _L7;
  /* TM_RBC_conversions::C_M146_to_header::_L6 */
  static T_TRAIN _L6;
  /* TM_RBC_conversions::C_M146_to_header::_L5 */
  static L_MESSAGE _L5;
  /* TM_RBC_conversions::C_M146_to_header::_L4 */
  static NID_MESSAGE _L4;
  /* TM_RBC_conversions::C_M146_to_header::_L3 */
  static kcg_bool _L3;
  /* TM_RBC_conversions::C_M146_to_header::_L19 */
  static kcg_int _L19;
  /* TM_RBC_conversions::C_M146_to_header::_L20 */
  static T_TRAIN _L20;
  /* TM_RBC_conversions::C_M146_to_header::_L21 */
  static kcg_int _L21;
  /* TM_RBC_conversions::C_M146_to_header::_L25 */
  static kcg_int _L25;
  /* TM_RBC_conversions::C_M146_to_header::_L24 */
  static kcg_int _L24;
  /* TM_RBC_conversions::C_M146_to_header::_L23 */
  static kcg_int _L23;
  /* TM_RBC_conversions::C_M146_to_header::_L22 */
  static kcg_int _L22;
  
  kcg_copy_M_146_T_TM_radio_messages(&_L1, Message_Data_in);
  _L3 = _L1.valid;
  _L4 = _L1.nid_message;
  _L23 = /* 1 */ CAST_NID_MESSAGE_to_int_TM_conversions(_L4);
  _L5 = _L1.l_message;
  _L24 = /* 1 */ CAST_L_MESSAGE_to_int_TM_conversions(_L5);
  _L6 = _L1.t_train;
  _L22 = /* 2 */ CAST_T_TRAIN_to_int_TM_conversions(_L6);
  _L7 = _L1.nid_engine;
  _L25 = /* 1 */ CAST_NID_ENGINE_to_int_TM_conversions(_L7);
  _L20 = _L1.t_train_req;
  _L21 = /* 1 */ CAST_T_TRAIN_to_int_TM_conversions(_L20);
  _L19 = 0;
  _L2.valid = _L3;
  _L2.nid_message = _L23;
  _L2.l_message = _L24;
  _L2.t_train = _L22;
  _L2.nid_engine = _L25;
  _L2.field1 = _L21;
  _L2.field2 = _L19;
  _L2.field3 = _L19;
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(Message_Header_Out, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_M146_to_header_TM_RBC_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

