/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"

/* TM_conversions::C_TrackTrainMessage_to_Int */
void C_TrackTrainMessage_to_Int_TM_conversions(
  /* TM_conversions::C_TrackTrainMessage_to_Int::Message_In */ Radio_TrackTrain_Header_T_TM_transitional *Message_In,
  /* TM_conversions::C_TrackTrainMessage_to_Int::Message_Out */ Radio_TrackTrain_Header_T_TM *Message_Out)
{
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L1 */
  static Radio_TrackTrain_Header_T_TM_transitional _L1;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L16 */
  static M_VERSION _L16;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L15 */
  static D_EMERGENCYSTOP _L15;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L14 */
  static Q_DIR _L14;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L13 */
  static D_REF _L13;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L12 */
  static T_TRAIN _L12;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L11 */
  static D_SR _L11;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L10 */
  static Q_SCALE _L10;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L9 */
  static NID_EM _L9;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L8 */
  static T_TRAIN _L8;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L7 */
  static NID_LRBG _L7;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L6 */
  static M_ACK _L6;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L5 */
  static T_TRAIN _L5;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L4 */
  static NID_MESSAGE _L4;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L2 */
  static kcg_int _L2;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L32 */
  static Radio_TrackTrain_Header_T_TM _L32;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L33 */
  static kcg_int _L33;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L34 */
  static kcg_int _L34;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L35 */
  static kcg_int _L35;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L36 */
  static kcg_int _L36;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L37 */
  static kcg_int _L37;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L38 */
  static kcg_int _L38;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L39 */
  static kcg_int _L39;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L40 */
  static kcg_int _L40;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L41 */
  static kcg_int _L41;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L42 */
  static kcg_int _L42;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L43 */
  static kcg_int _L43;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L44 */
  static kcg_int _L44;
  /* TM_conversions::C_TrackTrainMessage_to_Int::_L45 */
  static kcg_int _L45;
  
  kcg_copy_Radio_TrackTrain_Header_T_TM_transitional(&_L1, Message_In);
  _L2 = _L1.radioDevice;
  _L3 = _L1.receivedSystemTime;
  _L4 = _L1.nid_message;
  _L33 = /* 1 */ CAST_NID_MESSAGE_to_int_TM_conversions(_L4);
  _L5 = _L1.t_train;
  _L34 = /* 1 */ CAST_T_TRAIN_to_int_TM_conversions(_L5);
  _L6 = _L1.m_ack;
  _L35 = /* 1 */ CAST_M_ACK_to_int_TM_conversions(_L6);
  _L7 = _L1.nid_lrbg;
  _L36 = /* 1 */ CAST_NID_LRBG_to_int_TM_conversions(_L7);
  _L8 = _L1.t_train_reference;
  _L37 = /* 2 */ CAST_T_TRAIN_to_int_TM_conversions(_L8);
  _L9 = _L1.nid_em;
  _L38 = /* 1 */ CAST_NID_EM_to_int_TM_conversions(_L9);
  _L10 = _L1.q_scale;
  _L39 = /* 1 */ CAST_Q_SCALE_to_int_TM_conversions(_L10);
  _L11 = _L1.d_sr;
  _L40 = /* 1 */ CAST_D_SR_to_int_TM_conversions(_L11);
  _L12 = _L1.t_sh_rqst;
  _L41 = /* 3 */ CAST_T_TRAIN_to_int_TM_conversions(_L12);
  _L13 = _L1.d_ref;
  _L42 = /* 1 */ CAST_D_REF_to_int_TM_conversions(_L13);
  _L14 = _L1.q_dir;
  _L43 = /* 1 */ CAST_Q_DIR_to_int_TM_conversions(_L14);
  _L15 = _L1.d_emergencystop;
  _L45 = /* 1 */ CAST_D_EMERGENCYSTOP_to_int_TM_conversions(_L15);
  _L16 = _L1.m_version;
  _L44 = /* 1 */ CAST_M_VERSION_to_int_TM_conversions(_L16);
  _L32.radioDevice = _L2;
  _L32.receivedSystemTime = _L3;
  _L32.nid_message = _L33;
  _L32.t_train = _L34;
  _L32.m_ack = _L35;
  _L32.nid_lrbg = _L36;
  _L32.t_train_reference = _L37;
  _L32.nid_em = _L38;
  _L32.q_scale = _L39;
  _L32.d_sr = _L40;
  _L32.t_sh_rqst = _L41;
  _L32.d_ref = _L42;
  _L32.q_dir = _L43;
  _L32.d_emergencystop = _L45;
  _L32.m_version = _L44;
  kcg_copy_Radio_TrackTrain_Header_T_TM(Message_Out, &_L32);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_TrackTrainMessage_to_Int_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

