/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpaceLoop_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::CheckSpaceLoop */
void CheckSpaceLoop_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::CheckSpaceLoop::i */kcg_int i,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Acc */kcg_int Acc,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Message */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::cont */kcg_bool *cont,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Count */kcg_int *Count)
{
  static kcg_int tmp1;
  static M_TrainTrack_Message_T_TM_radio_messages tmp;
  
  *cont = kcg_true;
  if ((0 <= i) & (i < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&tmp, &(*Message)[i]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &tmp,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  if (tmp.Message.valid) {
    tmp1 = 1;
  }
  else {
    tmp1 = 0;
  }
  *Count = tmp1 + Acc;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSpaceLoop_TM_TrainTrack_Bus.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

