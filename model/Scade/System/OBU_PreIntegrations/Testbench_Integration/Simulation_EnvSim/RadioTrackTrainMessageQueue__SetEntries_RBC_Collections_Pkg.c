/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries */
void RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries::inRadioTrackTrainMessageQueueEntries */RadioTrackTrainMessageQueueEntries_T *inRadioTrackTrainMessageQueueEntries,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries::out_RadioTrackTrainMessageQueue */RadioTrackTrainMessageQueue_T *out_RadioTrackTrainMessageQueue)
{
  kcg_copy_RadioTrackTrainMessageQueue_T(
    out_RadioTrackTrainMessageQueue,
    (RadioTrackTrainMessageQueue_T *) &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_DEFAULT);
  kcg_copy_RadioTrackTrainMessageQueueEntries_T(
    &(*out_RadioTrackTrainMessageQueue).m_Entries,
    inRadioTrackTrainMessageQueueEntries);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

