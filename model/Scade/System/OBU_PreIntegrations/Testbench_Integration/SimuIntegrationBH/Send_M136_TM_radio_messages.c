/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M136_TM_radio_messages.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_M136_init_TM_radio_messages(outC_Send_M136_TM_radio_messages *outC)
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
void Send_M136_reset_TM_radio_messages(outC_Send_M136_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_radio_messages::Send_M136 */
void Send_M136_TM_radio_messages(
  /* TM_radio_messages::Send_M136::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M136::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M136::Message_136_in */ M_136_T_TM_radio_messages *Message_136_in,
  /* TM_radio_messages::Send_M136::P000 */ P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M136::P001 */ P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M136::P004 */ P004_TM_TrainToTrack *P004,
  /* TM_radio_messages::Send_M136::P005 */ P005_TM_TrainToTrack *P005,
  /* TM_radio_messages::Send_M136::P044 */ P044_TM_TrainToTrack *P044,
  /* TM_radio_messages::Send_M136::m_version */ M_VERSION m_version,
  outC_Send_M136_TM_radio_messages *outC)
{
  static kcg_int i;
  static kcg_bool noname;
  static M_VERSION _1_noname;
  /* TM_radio_messages::Send_M136::_L5 */
  static M_VERSION _L5;
  /* TM_radio_messages::Send_M136::_L6 */
  static P000_TM_TrainToTrack _L6;
  /* TM_radio_messages::Send_M136::_L7 */
  static P001_TM_TrainToTrack _L7;
  /* TM_radio_messages::Send_M136::_L8 */
  static P004_TM_TrainToTrack _L8;
  /* TM_radio_messages::Send_M136::_L9 */
  static P005_TM_TrainToTrack _L9;
  /* TM_radio_messages::Send_M136::_L10 */
  static P044_TM_TrainToTrack _L10;
  /* TM_radio_messages::Send_M136::_L15 */
  static P004_TrainTrack_int_TM_TrainToTrack _L15;
  /* TM_radio_messages::Send_M136::_L23 */
  static P044_TrainTrack_int_TM_TrainToTrack _L23;
  /* TM_radio_messages::Send_M136::_L21 */
  static P005_TrainTrack_int_TM_TrainToTrack _L21;
  /* TM_radio_messages::Send_M136::_L31 */
  static P000_TrainTrack_int_TM_TrainToTrack _L31;
  /* TM_radio_messages::Send_M136::_L30 */
  static P000_TrainTrack_int_TM_TrainToTrack _L30;
  /* TM_radio_messages::Send_M136::_L28 */
  static kcg_bool _L28;
  /* TM_radio_messages::Send_M136::_L27 */
  static kcg_bool _L27;
  /* TM_radio_messages::Send_M136::_L26 */
  static P001_TrainTrack_int_TM_TrainToTrack _L26;
  /* TM_radio_messages::Send_M136::_L24 */
  static kcg_bool _L24;
  /* TM_radio_messages::Send_M136::_L34 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L34;
  /* TM_radio_messages::Send_M136::_L33 */
  static M_136_T_TM_radio_messages _L33;
  /* TM_radio_messages::Send_M136::_L44 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L44;
  /* TM_radio_messages::Send_M136::_L43 */
  static M_TrainTrack_Message_T_TM_radio_messages _L43;
  /* TM_radio_messages::Send_M136::_L41 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L41;
  /* TM_radio_messages::Send_M136::_L38 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L38;
  /* TM_radio_messages::Send_M136::_L48 */
  static array_int_20 _L48;
  /* TM_radio_messages::Send_M136::_L47 */
  static kcg_int _L47;
  /* TM_radio_messages::Send_M136::_L46 */
  static array_int_2 _L46;
  /* TM_radio_messages::Send_M136::_L45 */
  static array_int_23 _L45;
  /* TM_radio_messages::Send_M136::_L50 */
  static array_int_48 _L50;
  /* TM_radio_messages::Send_M136::_L49 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L49;
  /* TM_radio_messages::Send_M136::_L42 */
  static M_TrainTrack_Message_T_TM_radio_messages _L42;
  /* TM_radio_messages::Send_M136::_L51 */
  static kcg_bool _L51;
  /* TM_radio_messages::Send_M136::_L40 */
  static kcg_int _L40;
  /* TM_radio_messages::Send_M136::_L39 */
  static kcg_bool _L39;
  /* TM_radio_messages::Send_M136::_L52 */
  static kcg_int _L52;
  
  _L5 = m_version;
  kcg_copy_P000_TM_TrainToTrack(&_L6, P000);
  kcg_copy_P001_TM_TrainToTrack(&_L7, P001);
  kcg_copy_P004_TM_TrainToTrack(&_L8, P004);
  kcg_copy_P005_TM_TrainToTrack(&_L9, P005);
  kcg_copy_P044_TM_TrainToTrack(&_L10, P044);
  /* 1 */ C_P004_train_compr_TM_TrainToTrack(&_L8, &_L15);
  /* 1 */ C_P005_train_compr_TM_TrainToTrack(&_L9, &_L21);
  /* 1 */ C_P044_train_compr_TM_TrainToTrack(&_L10, &_L23);
  _L28 = _L7.valid;
  _L27 = _L6.valid;
  _L24 = _L28 & _L27;
  /* 3 */ C_P001_train_compr_TM_TrainToTrack(&_L7, &_L26);
  noname = _L24;
  /* 3 */ C_P000_train_compr_TM_TrainToTrack(&_L6, &_L30);
  /* 1 */ if (_L27) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L31, &_L30);
  }
  else {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L31, &_L26);
  }
  kcg_copy_M_136_T_TM_radio_messages(&_L33, Message_136_in);
  /* 2 */ C_M136_to_header_TM_RBC_conversions(&_L33, &_L34);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L48[0], &_L31);
  kcg_copy_P004_TrainTrack_int_TM_TrainToTrack(&_L48[17], &_L15);
  kcg_copy_array_int_20(&_L45[0], &_L48);
  kcg_copy_P005_TrainTrack_int_TM_TrainToTrack(&_L45[20], &_L21);
  kcg_copy_array_int_23(&_L50[0], &_L45);
  kcg_copy_P044_TrainTrack_int_TM_TrainToTrack(&_L50[23], &_L23);
  _L47 = 0;
  /* pow */ for (i = 0; i < 2; i++) {
    _L46[i] = _L47;
  }
  kcg_copy_array_int_48(&_L49[0], &_L50);
  kcg_copy_array_int_2(&_L49[48], &_L46);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&_L49, &_L34, &_L43);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L44, MessageBus);
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(&_L44, &_L39, &_L40);
  _L51 = !_L39;
  /* 1 */ BufferMsg_TM_lib_internal(&_L43, _L51, &outC->Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L42,
    &outC->Context_1.Out);
  _L41 = t_train_global;
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(&_L42, _L40, &_L44, _L41, &_L38, &_L52);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &_L38);
  _1_noname = _L5;
  outC->t_train_assigned = _L52;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M136_TM_radio_messages.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

