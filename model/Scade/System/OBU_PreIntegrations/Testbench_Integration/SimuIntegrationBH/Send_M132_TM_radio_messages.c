/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M132_TM_radio_messages.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_M132_init_TM_radio_messages(outC_Send_M132_TM_radio_messages *outC)
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
void Send_M132_reset_TM_radio_messages(outC_Send_M132_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_radio_messages::Send_M132 */
void Send_M132_TM_radio_messages(
  /* TM_radio_messages::Send_M132::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M132::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M132::Message_132_in */ M_132_T_TM_radio_messages *Message_132_in,
  /* TM_radio_messages::Send_M132::P000 */ P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M132::P001 */ P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M132::P009 */ P009_TM_TrainToTrack *P009,
  /* TM_radio_messages::Send_M132::m_version */ M_VERSION m_version,
  outC_Send_M132_TM_radio_messages *outC)
{
  static kcg_int i;
  static kcg_bool noname;
  static M_VERSION _1_noname;
  /* TM_radio_messages::Send_M132::_L6 */
  static M_VERSION _L6;
  /* TM_radio_messages::Send_M132::_L7 */
  static P000_TM_TrainToTrack _L7;
  /* TM_radio_messages::Send_M132::_L8 */
  static P001_TM_TrainToTrack _L8;
  /* TM_radio_messages::Send_M132::_L9 */
  static P009_TM_TrainToTrack _L9;
  /* TM_radio_messages::Send_M132::_L15 */
  static P009_TrainTrack_int_TM_TrainToTrack _L15;
  /* TM_radio_messages::Send_M132::_L41 */
  static P000_TrainTrack_int_TM_TrainToTrack _L41;
  /* TM_radio_messages::Send_M132::_L40 */
  static P000_TrainTrack_int_TM_TrainToTrack _L40;
  /* TM_radio_messages::Send_M132::_L38 */
  static kcg_bool _L38;
  /* TM_radio_messages::Send_M132::_L37 */
  static kcg_bool _L37;
  /* TM_radio_messages::Send_M132::_L36 */
  static P001_TrainTrack_int_TM_TrainToTrack _L36;
  /* TM_radio_messages::Send_M132::_L34 */
  static kcg_bool _L34;
  /* TM_radio_messages::Send_M132::_L45 */
  static M_132_T_TM_radio_messages _L45;
  /* TM_radio_messages::Send_M132::_L44 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L44;
  /* TM_radio_messages::Send_M132::_L51 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L51;
  /* TM_radio_messages::Send_M132::_L50 */
  static M_TrainTrack_Message_T_TM_radio_messages _L50;
  /* TM_radio_messages::Send_M132::_L49 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L49;
  /* TM_radio_messages::Send_M132::_L46 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L46;
  /* TM_radio_messages::Send_M132::_L57 */
  static array_int_30 _L57;
  /* TM_radio_messages::Send_M132::_L56 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L56;
  /* TM_radio_messages::Send_M132::_L55 */
  static array_int_20 _L55;
  /* TM_radio_messages::Send_M132::_L58 */
  static kcg_int _L58;
  /* TM_radio_messages::Send_M132::_L47 */
  static M_TrainTrack_Message_T_TM_radio_messages _L47;
  /* TM_radio_messages::Send_M132::_L59 */
  static kcg_bool _L59;
  /* TM_radio_messages::Send_M132::_L54 */
  static kcg_int _L54;
  /* TM_radio_messages::Send_M132::_L53 */
  static kcg_bool _L53;
  /* TM_radio_messages::Send_M132::_L60 */
  static kcg_int _L60;
  
  _L6 = m_version;
  kcg_copy_P000_TM_TrainToTrack(&_L7, P000);
  kcg_copy_P001_TM_TrainToTrack(&_L8, P001);
  kcg_copy_P009_TM_TrainToTrack(&_L9, P009);
  /* 1 */ C_P009_train_compr_TM_TrainToTrack(&_L9, &_L15);
  _L34 = _L8.valid;
  /* 4 */ C_P001_train_compr_TM_TrainToTrack(&_L8, &_L36);
  _L38 = _L7.valid;
  _L37 = _L34 & _L38;
  noname = _L37;
  /* 4 */ C_P000_train_compr_TM_TrainToTrack(&_L7, &_L40);
  /* 3 */ if (_L38) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L41, &_L40);
  }
  else {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L41, &_L36);
  }
  kcg_copy_M_132_T_TM_radio_messages(&_L45, Message_132_in);
  /* 2 */ C_M132_to_header_TM_RBC_conversions(&_L45, &_L44);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L55[0], &_L41);
  kcg_copy_P009_TrainTrack_int_TM_TrainToTrack(&_L55[17], &_L15);
  _L58 = 0;
  /* pow */ for (i = 0; i < 30; i++) {
    _L57[i] = _L58;
  }
  kcg_copy_array_int_20(&_L56[0], &_L55);
  kcg_copy_array_int_30(&_L56[20], &_L57);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&_L56, &_L44, &_L50);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L49, MessageBus);
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(&_L49, &_L53, &_L54);
  _L59 = !_L53;
  /* 1 */ BufferMsg_TM_lib_internal(&_L50, _L59, &outC->Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L47,
    &outC->Context_1.Out);
  _L46 = t_train_global;
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(&_L47, _L54, &_L49, _L46, &_L51, &_L60);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &_L51);
  _1_noname = _L6;
  outC->t_train_assigned = _L60;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M132_TM_radio_messages.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

