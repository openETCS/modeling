/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M129_TM_radio_messages.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_M129_init_TM_radio_messages(outC_Send_M129_TM_radio_messages *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->t_train_assigned = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->MessageBus_out[i1].Message.valid = kcg_true;
    outC->MessageBus_out[i1].Message.nid_message = 0;
    outC->MessageBus_out[i1].Message.l_message = 0;
    outC->MessageBus_out[i1].Message.t_train = 0;
    outC->MessageBus_out[i1].Message.nid_engine = 0;
    outC->MessageBus_out[i1].Message.field1 = 0;
    outC->MessageBus_out[i1].Message.field2 = 0;
    outC->MessageBus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->MessageBus_out[i1].OptionalPackets[i] = 0;
    }
  }
  /* 1 */ BufferMsg_init_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_M129_reset_TM_radio_messages(outC_Send_M129_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_radio_messages::Send_M129 */
void Send_M129_TM_radio_messages(
  /* TM_radio_messages::Send_M129::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M129::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M129::Message_129_in */ M_129_T_TM_radio_messages *Message_129_in,
  /* TM_radio_messages::Send_M129::P000 */ P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M129::P001 */ P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M129::P011 */ P011_TM_TrainToTrack *P011,
  /* TM_radio_messages::Send_M129::m_version */ M_VERSION m_version,
  outC_Send_M129_TM_radio_messages *outC)
{
  static kcg_int i;
  static kcg_bool noname;
  static M_VERSION _1_noname;
  /* TM_radio_messages::Send_M129::_L5 */
  static P000_TM_TrainToTrack _L5;
  /* TM_radio_messages::Send_M129::_L6 */
  static P001_TM_TrainToTrack _L6;
  /* TM_radio_messages::Send_M129::_L7 */
  static P011_TM_TrainToTrack _L7;
  /* TM_radio_messages::Send_M129::_L11 */
  static P000_TrainTrack_int_TM_TrainToTrack _L11;
  /* TM_radio_messages::Send_M129::_L13 */
  static P001_TrainTrack_int_TM_TrainToTrack _L13;
  /* TM_radio_messages::Send_M129::_L15 */
  static P011_TrainTrack_int_TM_TrainToTrack _L15;
  /* TM_radio_messages::Send_M129::_L48 */
  static kcg_bool _L48;
  /* TM_radio_messages::Send_M129::_L49 */
  static kcg_bool _L49;
  /* TM_radio_messages::Send_M129::_L50 */
  static kcg_bool _L50;
  /* TM_radio_messages::Send_M129::_L51 */
  static P000_TrainTrack_int_TM_TrainToTrack _L51;
  /* TM_radio_messages::Send_M129::_L53 */
  static array_int_42 _L53;
  /* TM_radio_messages::Send_M129::_L54 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L54;
  /* TM_radio_messages::Send_M129::_L55 */
  static kcg_int _L55;
  /* TM_radio_messages::Send_M129::_L56 */
  static array_int_8 _L56;
  /* TM_radio_messages::Send_M129::_L64 */
  static M_VERSION _L64;
  /* TM_radio_messages::Send_M129::_L63 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L63;
  /* TM_radio_messages::Send_M129::_L62 */
  static M_129_T_TM_radio_messages _L62;
  /* TM_radio_messages::Send_M129::_L60 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L60;
  /* TM_radio_messages::Send_M129::_L59 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L59;
  /* TM_radio_messages::Send_M129::_L65 */
  static M_TrainTrack_Message_T_TM_radio_messages _L65;
  /* TM_radio_messages::Send_M129::_L97 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L97;
  /* TM_radio_messages::Send_M129::_L67 */
  static M_TrainTrack_Message_T_TM_radio_messages _L67;
  /* TM_radio_messages::Send_M129::_L98 */
  static kcg_bool _L98;
  /* TM_radio_messages::Send_M129::_L94 */
  static kcg_int _L94;
  /* TM_radio_messages::Send_M129::_L93 */
  static kcg_bool _L93;
  /* TM_radio_messages::Send_M129::_L100 */
  static kcg_int _L100;
  
  kcg_copy_P000_TM_TrainToTrack(&_L5, P000);
  kcg_copy_P001_TM_TrainToTrack(&_L6, P001);
  kcg_copy_P011_TM_TrainToTrack(&_L7, P011);
  /* 1 */ C_P000_train_compr_TM_TrainToTrack(&_L5, &_L11);
  /* 1 */ C_P001_train_compr_TM_TrainToTrack(&_L6, &_L13);
  /* 1 */ C_P011_train_compr_TM_TrainToTrack(&_L7, &_L15);
  _L48 = _L5.valid;
  _L49 = _L6.valid;
  _L50 = _L49 & _L48;
  noname = _L50;
  /* 1 */ if (_L48) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L51, &_L11);
  }
  else {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L51, &_L13);
  }
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L53[0], &_L51);
  kcg_copy_P011_TrainTrack_int_TM_TrainToTrack(&_L53[17], &_L15);
  _L55 = 0;
  /* pow */ for (i = 0; i < 8; i++) {
    _L56[i] = _L55;
  }
  kcg_copy_array_int_42(&_L54[0], &_L53);
  kcg_copy_array_int_8(&_L54[42], &_L56);
  _L59 = t_train_global;
  kcg_copy_M_129_T_TM_radio_messages(&_L62, Message_129_in);
  /* 2 */ C_M129_to_header_TM_RBC_conversions(&_L62, &_L60);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&_L54, &_L60, &_L65);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L63, MessageBus);
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(&_L63, &_L93, &_L94);
  _L98 = !_L93;
  /* 1 */ BufferMsg_TM_lib_internal(&_L65, _L98, &outC->Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L67,
    &outC->Context_1.Out);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(&_L67, _L94, &_L63, _L59, &_L97, &_L100);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &_L97);
  _L64 = m_version;
  _1_noname = _L64;
  outC->t_train_assigned = _L100;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M129_TM_radio_messages.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

