/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create */
void RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::inRadioTrackTrainMessage */CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::outRadioTrackTrainMessageQueueEntry */RadioTrackTrainMessageQueueEntry_T *outRadioTrackTrainMessageQueueEntry)
{
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    outRadioTrackTrainMessageQueueEntry,
    (RadioTrackTrainMessageQueueEntry_T *)
      &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
  kcg_copy_CompressedRadioMessage_TM(
    &(*outRadioTrackTrainMessageQueueEntry).m_Entry,
    inRadioTrackTrainMessage);
  (*outRadioTrackTrainMessageQueueEntry).m_IsValid = kcg_true;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

