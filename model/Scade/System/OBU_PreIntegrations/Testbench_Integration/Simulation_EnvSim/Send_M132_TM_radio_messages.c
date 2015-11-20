/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M132_TM_radio_messages.h"

void Send_M132_reset_TM_radio_messages(outC_Send_M132_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_radio_messages::Send_M132 */
void Send_M132_TM_radio_messages(
  /* TM_radio_messages::Send_M132::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M132::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M132::Message_132_in */M_132_T_TM_radio_messages *Message_132_in,
  /* TM_radio_messages::Send_M132::P000 */P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M132::P001 */P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M132::P009 */P009_TM_TrainToTrack *P009,
  /* TM_radio_messages::Send_M132::m_version */M_VERSION m_version,
  outC_Send_M132_TM_radio_messages *outC)
{
  static kcg_int i;
  static M_TrainTrack_Message_T_TM_radio_messages tmp2;
  static array_int_50 tmp1;
  static M_TrainTrack_MessageHd_T_TM_radio_messages tmp;
  /* TM_radio_messages::Send_M132::_L57 */
  static array_int_30 _L57;
  /* TM_radio_messages::Send_M132::_L54 */
  static kcg_int _L54;
  /* TM_radio_messages::Send_M132::_L53 */
  static kcg_bool _L53;
  
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(MessageBus, &_L53, &_L54);
  for (i = 0; i < 30; i++) {
    _L57[i] = 0;
  }
  if ((*P000).valid) {
    /* 4 */
    C_P000_train_compr_TM_TrainToTrack(
      P000,
      (P000_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[0]);
  }
  else {
    /* 4 */
    C_P001_train_compr_TM_TrainToTrack(
      P001,
      (P001_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[0]);
  }
  /* 1 */
  C_P009_train_compr_TM_TrainToTrack(
    P009,
    (P009_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[17]);
  kcg_copy_array_int_30(&tmp1[20], &_L57);
  /* 2 */ C_M132_to_header_TM_RBC_conversions(Message_132_in, &tmp);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&tmp1, &tmp, &tmp2);
  /* 1 */ BufferMsg_TM_lib_internal(&tmp2, (kcg_bool) !_L53, &outC->Context_1);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->Context_1.Out,
    _L54,
    MessageBus,
    t_train_global,
    &outC->MessageBus_out,
    &outC->t_train_assigned);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M132_TM_radio_messages.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

