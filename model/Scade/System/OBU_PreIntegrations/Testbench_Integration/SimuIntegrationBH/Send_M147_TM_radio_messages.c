/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M147_TM_radio_messages.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_M147_init_TM_radio_messages(outC_Send_M147_TM_radio_messages *outC)
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
void Send_M147_reset_TM_radio_messages(outC_Send_M147_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_radio_messages::Send_M147 */
void Send_M147_TM_radio_messages(
  /* TM_radio_messages::Send_M147::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M147::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M147::Message_147_in */ M_147_T_TM_radio_messages *Message_147_in,
  /* TM_radio_messages::Send_M147::P000 */ P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M147::P001 */ P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M147::m_version */ M_VERSION m_version,
  outC_Send_M147_TM_radio_messages *outC)
{
  static kcg_int i;
  static M_VERSION noname;
  static kcg_bool _1_noname;
  /* TM_radio_messages::Send_M147::_L1 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L1;
  /* TM_radio_messages::Send_M147::_L2 */
  static M_147_T_TM_radio_messages _L2;
  /* TM_radio_messages::Send_M147::_L96 */
  static P001_TM_TrainToTrack _L96;
  /* TM_radio_messages::Send_M147::_L95 */
  static P000_TM_TrainToTrack _L95;
  /* TM_radio_messages::Send_M147::_L94 */
  static M_VERSION _L94;
  /* TM_radio_messages::Send_M147::_L93 */
  static kcg_int _L93;
  /* TM_radio_messages::Send_M147::_L92 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L92;
  /* TM_radio_messages::Send_M147::_L90 */
  static P000_TrainTrack_int_TM_TrainToTrack _L90;
  /* TM_radio_messages::Send_M147::_L89 */
  static kcg_bool _L89;
  /* TM_radio_messages::Send_M147::_L88 */
  static kcg_bool _L88;
  /* TM_radio_messages::Send_M147::_L87 */
  static kcg_bool _L87;
  /* TM_radio_messages::Send_M147::_L86 */
  static array_int_33 _L86;
  /* TM_radio_messages::Send_M147::_L84 */
  static P001_TrainTrack_int_TM_TrainToTrack _L84;
  /* TM_radio_messages::Send_M147::_L83 */
  static P000_TrainTrack_int_TM_TrainToTrack _L83;
  /* TM_radio_messages::Send_M147::_L104 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L104;
  /* TM_radio_messages::Send_M147::_L102 */
  static M_TrainTrack_Message_T_TM_radio_messages _L102;
  /* TM_radio_messages::Send_M147::_L101 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L101;
  /* TM_radio_messages::Send_M147::_L100 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L100;
  /* TM_radio_messages::Send_M147::_L103 */
  static M_TrainTrack_Message_T_TM_radio_messages _L103;
  /* TM_radio_messages::Send_M147::_L105 */
  static kcg_bool _L105;
  /* TM_radio_messages::Send_M147::_L99 */
  static kcg_int _L99;
  /* TM_radio_messages::Send_M147::_L98 */
  static kcg_bool _L98;
  /* TM_radio_messages::Send_M147::_L106 */
  static kcg_int _L106;
  
  kcg_copy_M_147_T_TM_radio_messages(&_L2, Message_147_in);
  /* 1 */ C_M147_to_header_TM_RBC_conversions(&_L2, &_L1);
  _L94 = m_version;
  noname = _L94;
  kcg_copy_P000_TM_TrainToTrack(&_L95, P000);
  /* 6 */ C_P000_train_compr_TM_TrainToTrack(&_L95, &_L83);
  kcg_copy_P001_TM_TrainToTrack(&_L96, P001);
  /* 6 */ C_P001_train_compr_TM_TrainToTrack(&_L96, &_L84);
  _L93 = 0;
  /* pow */ for (i = 0; i < 33; i++) {
    _L86[i] = _L93;
  }
  _L87 = _L95.valid;
  _L88 = _L96.valid;
  _L89 = _L88 & _L87;
  _1_noname = _L89;
  /* 5 */ if (_L87) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L90, &_L83);
  }
  else {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L90, &_L84);
  }
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&_L92[0], &_L90);
  kcg_copy_array_int_33(&_L92[17], &_L86);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&_L92, &_L1, &_L102);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L104, MessageBus);
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(&_L104, &_L98, &_L99);
  _L105 = !_L98;
  /* 1 */ BufferMsg_TM_lib_internal(&_L102, _L105, &outC->Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L103,
    &outC->Context_1.Out);
  _L101 = t_train_global;
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &_L103,
    _L99,
    &_L104,
    _L101,
    &_L100,
    &_L106);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &_L100);
  outC->t_train_assigned = _L106;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M147_TM_radio_messages.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

