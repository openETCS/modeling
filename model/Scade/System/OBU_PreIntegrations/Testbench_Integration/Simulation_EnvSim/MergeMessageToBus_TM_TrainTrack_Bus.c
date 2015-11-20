/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::MergeMessageToBus */
void MergeMessageToBus_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::MergeMessageToBus::Message_in */M_TrainTrack_Message_T_TM_radio_messages *Message_in,
  /* TM_TrainTrack_Bus::MergeMessageToBus::slots_used */kcg_int slots_used,
  /* TM_TrainTrack_Bus::MergeMessageToBus::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_TrainTrack_Bus::MergeMessageToBus::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_TrainTrack_Bus::MergeMessageToBus::MessageBus_out */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus_out,
  /* TM_TrainTrack_Bus::MergeMessageToBus::t_train_assigned */kcg_int *t_train_assigned)
{
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L12 */
  static M_TrainTrack_Message_T_TM_radio_messages _L12;
  
  *t_train_assigned = slots_used * Time_10ms_TM_TrainTrack_Bus + t_train_global;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L12, Message_in);
  _L12.Message.t_train = *t_train_assigned;
  if (_L12.Message.valid) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      MessageBus_out,
      MessageBus);
    if ((0 <= slots_used) & (slots_used < 5)) {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &(*MessageBus_out)[slots_used],
        &_L12);
    }
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      MessageBus_out,
      MessageBus);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMessageToBus_TM_TrainTrack_Bus.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

