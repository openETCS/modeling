/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2 */
void RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::inIndex */kcg_int inIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::inComparisonIndex */kcg_int inComparisonIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::inRadioTrackTrainMessageQueueEntry */RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::outRadioTrackTrainMessageQueueEntry */RadioTrackTrainMessageQueueEntry_T *outRadioTrackTrainMessageQueueEntry)
{
  if (inIndex == inComparisonIndex) {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      outRadioTrackTrainMessageQueueEntry,
      (RadioTrackTrainMessageQueueEntry_T *)
        &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      outRadioTrackTrainMessageQueueEntry,
      inRadioTrackTrainMessageQueueEntry);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

