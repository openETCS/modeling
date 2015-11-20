/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M156_TM_radio_messages.h"

void Send_M156_reset_TM_radio_messages(outC_Send_M156_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_radio_messages::Send_M156 */
void Send_M156_TM_radio_messages(
  /* TM_radio_messages::Send_M156::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M156::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M156::Message_156_in */M_156_T_TM_radio_messages *Message_156_in,
  /* TM_radio_messages::Send_M156::m_version */M_VERSION m_version,
  outC_Send_M156_TM_radio_messages *outC)
{
  static kcg_int i;
  static M_TrainTrack_Message_T_TM_radio_messages tmp1;
  static M_TrainTrack_MessageHd_T_TM_radio_messages tmp;
  /* TM_radio_messages::Send_M156::_L17 */
  static array_int_50 _L17;
  /* TM_radio_messages::Send_M156::_L9 */
  static kcg_int _L9;
  /* TM_radio_messages::Send_M156::_L8 */
  static kcg_bool _L8;
  
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(MessageBus, &_L8, &_L9);
  for (i = 0; i < 50; i++) {
    _L17[i] = 0;
  }
  /* 1 */ C_M156_to_header_TM_RBC_conversions(Message_156_in, &tmp);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&_L17, &tmp, &tmp1);
  /* 1 */ BufferMsg_TM_lib_internal(&tmp1, (kcg_bool) !_L8, &outC->Context_1);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->Context_1.Out,
    _L9,
    MessageBus,
    t_train_global,
    &outC->MessageBus_out,
    &outC->t_train_assigned);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M156_TM_radio_messages.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

