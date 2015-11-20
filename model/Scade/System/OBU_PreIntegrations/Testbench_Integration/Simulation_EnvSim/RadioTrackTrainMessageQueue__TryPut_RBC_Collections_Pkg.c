/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut */
void RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::inRadioTrackTrainMessageQueue */RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::inRadioTrackTrainMessageQueueEntry */RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::outRadioTrackTrainMessageQueue */RadioTrackTrainMessageQueue_T *outRadioTrackTrainMessageQueue)
{
  static array__155611 tmp1;
  static RadioTrackTrainMessageQueueEntries_T tmp;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::hasCapacity */
  static kcg_bool hasCapacity;
  
  hasCapacity = /* 1 */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
      inRadioTrackTrainMessageQueue) > 0;
  if (hasCapacity) {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &(&tmp1[0])[0],
      inRadioTrackTrainMessageQueueEntry);
    /* 1 */
    RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
      inRadioTrackTrainMessageQueue,
      &tmp);
    kcg_copy_array__166359(&tmp1[1], (array__166359 *) &tmp[0]);
    /* 1 */
    RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
      &tmp1,
      outRadioTrackTrainMessageQueue);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueue_T(
      outRadioTrackTrainMessageQueue,
      inRadioTrackTrainMessageQueue);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

