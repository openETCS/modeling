/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry */
void RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry::inRadioTrackTrainMessageQueueEntry */RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry::outRadioTrackTrainMessage */CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  kcg_copy_CompressedRadioMessage_TM(
    outRadioTrackTrainMessage,
    &(*inRadioTrackTrainMessageQueueEntry).m_Entry);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

