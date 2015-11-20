/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M136_TM_radio_messages.h"

void Send_M136_reset_TM_radio_messages(outC_Send_M136_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_radio_messages::Send_M136 */
void Send_M136_TM_radio_messages(
  /* TM_radio_messages::Send_M136::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M136::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M136::Message_136_in */M_136_T_TM_radio_messages *Message_136_in,
  /* TM_radio_messages::Send_M136::P000 */P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M136::P001 */P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M136::P004 */P004_TM_TrainToTrack *P004,
  /* TM_radio_messages::Send_M136::P005 */P005_TM_TrainToTrack *P005,
  /* TM_radio_messages::Send_M136::P044 */P044_TM_TrainToTrack *P044,
  /* TM_radio_messages::Send_M136::m_version */M_VERSION m_version,
  outC_Send_M136_TM_radio_messages *outC)
{
  static kcg_int i;
  static M_TrainTrack_Message_T_TM_radio_messages tmp2;
  static array_int_50 tmp1;
  static M_TrainTrack_MessageHd_T_TM_radio_messages tmp;
  /* TM_radio_messages::Send_M136::_L46 */
  static array_int_2 _L46;
  /* TM_radio_messages::Send_M136::_L40 */
  static kcg_int _L40;
  /* TM_radio_messages::Send_M136::_L39 */
  static kcg_bool _L39;
  
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(MessageBus, &_L39, &_L40);
  for (i = 0; i < 2; i++) {
    _L46[i] = 0;
  }
  if ((*P000).valid) {
    /* 3 */
    C_P000_train_compr_TM_TrainToTrack(
      P000,
      (P000_TrainTrack_int_TM_TrainToTrack *) &(&(&(&tmp1[0])[0])[0])[0]);
  }
  else {
    /* 3 */
    C_P001_train_compr_TM_TrainToTrack(
      P001,
      (P001_TrainTrack_int_TM_TrainToTrack *) &(&(&(&tmp1[0])[0])[0])[0]);
  }
  /* 1 */
  C_P004_train_compr_TM_TrainToTrack(
    P004,
    (P004_TrainTrack_int_TM_TrainToTrack *) &(&(&(&tmp1[0])[0])[0])[17]);
  /* 1 */
  C_P005_train_compr_TM_TrainToTrack(
    P005,
    (P005_TrainTrack_int_TM_TrainToTrack *) &(&(&tmp1[0])[0])[20]);
  /* 1 */
  C_P044_train_compr_TM_TrainToTrack(
    P044,
    (P044_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[23]);
  kcg_copy_array_int_2(&tmp1[48], &_L46);
  /* 2 */ C_M136_to_header_TM_RBC_conversions(Message_136_in, &tmp);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&tmp1, &tmp, &tmp2);
  /* 1 */ BufferMsg_TM_lib_internal(&tmp2, (kcg_bool) !_L39, &outC->Context_1);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->Context_1.Out,
    _L40,
    MessageBus,
    t_train_global,
    &outC->MessageBus_out,
    &outC->t_train_assigned);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M136_TM_radio_messages.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

