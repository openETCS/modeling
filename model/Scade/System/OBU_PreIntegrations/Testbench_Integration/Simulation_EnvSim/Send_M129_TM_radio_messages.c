/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M129_TM_radio_messages.h"

void Send_M129_reset_TM_radio_messages(outC_Send_M129_TM_radio_messages *outC)
{
  /* 1 */ BufferMsg_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_radio_messages::Send_M129 */
void Send_M129_TM_radio_messages(
  /* TM_radio_messages::Send_M129::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_radio_messages::Send_M129::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_radio_messages::Send_M129::Message_129_in */M_129_T_TM_radio_messages *Message_129_in,
  /* TM_radio_messages::Send_M129::P000 */P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M129::P001 */P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M129::P011 */P011_TM_TrainToTrack *P011,
  /* TM_radio_messages::Send_M129::m_version */M_VERSION m_version,
  outC_Send_M129_TM_radio_messages *outC)
{
  static kcg_int i;
  static M_TrainTrack_Message_T_TM_radio_messages tmp2;
  static array_int_50 tmp1;
  static M_TrainTrack_MessageHd_T_TM_radio_messages tmp;
  /* TM_radio_messages::Send_M129::_L56 */
  static array_int_8 _L56;
  /* TM_radio_messages::Send_M129::_L94 */
  static kcg_int _L94;
  /* TM_radio_messages::Send_M129::_L93 */
  static kcg_bool _L93;
  
  /* 1 */ CheckSpace_TM_TrainTrack_Bus(MessageBus, &_L93, &_L94);
  for (i = 0; i < 8; i++) {
    _L56[i] = 0;
  }
  if ((*P000).valid) {
    /* 1 */
    C_P000_train_compr_TM_TrainToTrack(
      P000,
      (P000_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[0]);
  }
  else {
    /* 1 */
    C_P001_train_compr_TM_TrainToTrack(
      P001,
      (P001_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[0]);
  }
  /* 1 */
  C_P011_train_compr_TM_TrainToTrack(
    P011,
    (P011_TrainTrack_int_TM_TrainToTrack *) &(&tmp1[0])[17]);
  kcg_copy_array_int_8(&tmp1[42], &_L56);
  /* 2 */ C_M129_to_header_TM_RBC_conversions(Message_129_in, &tmp);
  /* 1 */ Merge_PacketsToMessage_TM_TrainToTrack(&tmp1, &tmp, &tmp2);
  /* 1 */ BufferMsg_TM_lib_internal(&tmp2, (kcg_bool) !_L93, &outC->Context_1);
  /* 1 */
  MergeMessageToBus_TM_TrainTrack_Bus(
    &outC->Context_1.Out,
    _L94,
    MessageBus,
    t_train_global,
    &outC->MessageBus_out,
    &outC->t_train_assigned);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_M129_TM_radio_messages.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

