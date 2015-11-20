/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable */
void RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::inIndex */kcg_int inIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::inAccumulator */kcg_int inAccumulator,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::inRadioTrackTrainMessageQueueEntry */RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::outContinue */kcg_bool *outContinue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::outAccumulator */kcg_int *outAccumulator)
{
  static kcg_bool tmp;
  
  *outAccumulator = inIndex;
  tmp = /* 1 */
    RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(
      inRadioTrackTrainMessageQueueEntry);
  if (tmp) {
    *outContinue = kcg_true;
  }
  else {
    *outContinue = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

