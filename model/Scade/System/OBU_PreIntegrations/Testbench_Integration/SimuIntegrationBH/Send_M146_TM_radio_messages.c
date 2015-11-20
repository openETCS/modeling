/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M146_TM_radio_messages.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_M146_init_TM_radio_messages(outC_Send_M146_TM_radio_messages *outC)
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
void Send_M146_reset_TM_radio_messages(outC_Send_M146_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_radio_messages::Send_M146 */
void Send_M146_TM_radio_messages(
  /* TM_radio_messages::Send_M146::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M146::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M146::Message_146_in */ M_146_T_TM_radio_messages *Message_146_in,
  /* TM_radio_messages::Send_M146::m_version */ M_VERSION m_version,
  outC_Send_M146_TM_radio_messages *outC)
{
  static kcg_int i;
  static M_VERSION noname;
  /* TM_radio_messages::Send_M146::_L1 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L1;
  /* TM_radio_messages::Send_M146::_L2 */
  static M_146_T_TM_radio_messages _L2;
  /* TM_radio_messages::Send_M146::_L4 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L4;
  /* TM_radio_messages::Send_M146::_L5 */
  static M_VERSION _L5;
  /* TM_radio_messages::Send_M146::_L6 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* TM_radio_messages::Send_M146::_L8 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L8;
  /* TM_radio_messages::Send_M146::_L7 */
  static kcg_int _L7;
  /* TM_radio_messages::Send_M146::_L13 */
  static M_TrainTrack_Message_T_TM_radio_messages _L13;
  /* TM_radio_messages::Send_M146::_L10 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L10;
  /* TM_radio_messages::Send_M146::_L9 */
  static M_TrainTrack_Message_T_TM_radio_messages _L9;
  /* TM_radio_messages::Send_M146::_L14 */
  static kcg_bool _L14;
  /* TM_radio_messages::Send_M146::_L12 */
  static kcg_int _L12;
  /* TM_radio_messages::Send_M146::_L11 */
  static kcg_bool _L11;
  /* TM_radio_messages::Send_M146::_L15 */
  static kcg_int _L15;
  
  kcg_copy_M_146_T_TM_radio_messages(&_L2, Message_146_in);
  /* 1 */ C_M146_to_header_TM_RBC_conversions(&_L2, &_L1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L4, MessageBus);
  _L5 = m_version;
  _L6 = t_train_global;
  _L7 = 0;
  /* pow */ for (i = 0; i < 50; i++) {
    _L8[i] = _L7;
  }
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&_L8, &_L1, &_L13);
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(&_L4, &_L11, &_L12);
  _L14 = !_L11;
  /* 1 */ BufferMsg_TM_lib_internal(&_L13, _L14, &outC->Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L9, &outC->Context_1.Out);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(&_L9, _L12, &_L4, _L6, &_L10, &_L15);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &_L10);
  noname = _L5;
  outC->t_train_assigned = _L15;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M146_TM_radio_messages.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

