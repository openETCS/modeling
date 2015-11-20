/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M155_TM_radio_messages.h"

#ifndef KCG_USER_DEFINED_INIT
void Send_M155_init_TM_radio_messages(outC_Send_M155_TM_radio_messages *outC)
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
void Send_M155_reset_TM_radio_messages(outC_Send_M155_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_radio_messages::Send_M155 */
void Send_M155_TM_radio_messages(
  /* TM_radio_messages::Send_M155::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M155::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M155::Message_155_in */ M_155_T_TM_radio_messages *Message_155_in,
  /* TM_radio_messages::Send_M155::m_version */ M_VERSION m_version,
  outC_Send_M155_TM_radio_messages *outC)
{
  static kcg_int i;
  static M_VERSION noname;
  /* TM_radio_messages::Send_M155::_L1 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L1;
  /* TM_radio_messages::Send_M155::_L2 */
  static M_155_T_TM_radio_messages _L2;
  /* TM_radio_messages::Send_M155::_L6 */
  static M_VERSION _L6;
  /* TM_radio_messages::Send_M155::_L8 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L8;
  /* TM_radio_messages::Send_M155::_L7 */
  static kcg_int _L7;
  /* TM_radio_messages::Send_M155::_L14 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L14;
  /* TM_radio_messages::Send_M155::_L13 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L13;
  /* TM_radio_messages::Send_M155::_L11 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L11;
  /* TM_radio_messages::Send_M155::_L9 */
  static M_TrainTrack_Message_T_TM_radio_messages _L9;
  /* TM_radio_messages::Send_M155::_L12 */
  static M_TrainTrack_Message_T_TM_radio_messages _L12;
  /* TM_radio_messages::Send_M155::_L18 */
  static kcg_bool _L18;
  /* TM_radio_messages::Send_M155::_L17 */
  static kcg_int _L17;
  /* TM_radio_messages::Send_M155::_L16 */
  static kcg_bool _L16;
  /* TM_radio_messages::Send_M155::_L19 */
  static kcg_int _L19;
  
  kcg_copy_M_155_T_TM_radio_messages(&_L2, Message_155_in);
  /* 1 */ C_M155_to_header_TM_RBC_conversions(&_L2, &_L1);
  _L6 = m_version;
  _L7 = 0;
  /* pow */ for (i = 0; i < 50; i++) {
    _L8[i] = _L7;
  }
  noname = _L6;
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&_L8, &_L1, &_L9);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L13, MessageBus);
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(&_L13, &_L16, &_L17);
  _L18 = !_L16;
  /* 1 */ BufferMsg_TM_lib_internal(&_L9, _L18, &outC->Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L12,
    &outC->Context_1.Out);
  _L14 = t_train_global;
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(&_L12, _L17, &_L13, _L14, &_L11, &_L19);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->MessageBus_out,
    &_L11);
  outC->t_train_assigned = _L19;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M155_TM_radio_messages.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

