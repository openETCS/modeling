/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries */
void RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries::inRadioTrackTrainMessageQueue */RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries::outRadioTrackTrainMessageQueueEntries */RadioTrackTrainMessageQueueEntries_T *outRadioTrackTrainMessageQueueEntries)
{
  kcg_copy_RadioTrackTrainMessageQueueEntries_T(
    outRadioTrackTrainMessageQueueEntries,
    &(*inRadioTrackTrainMessageQueue).m_Entries);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

