/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::CheckSpace */
void CheckSpace_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::CheckSpace::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_TrainTrack_Bus::CheckSpace::Busy */kcg_bool *Busy,
  /* TM_TrainTrack_Bus::CheckSpace::SlotsUsed */kcg_int *SlotsUsed)
{
  static kcg_int tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  
  *SlotsUsed = 0;
  for (i = 0; i < 5; i++) {
    tmp1 = *SlotsUsed;
    /* 1 */
    CheckSpaceLoop_TM_TrainTrack_Bus(i, tmp1, MessageBus, &tmp, SlotsUsed);
    if (!tmp) {
      break;
    }
  }
  *Busy = *SlotsUsed >= BusWidth_TM_TrainTrack_Bus;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSpace_TM_TrainTrack_Bus.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

