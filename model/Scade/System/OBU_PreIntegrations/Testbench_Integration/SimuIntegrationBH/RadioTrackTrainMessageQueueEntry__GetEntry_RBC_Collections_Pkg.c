/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry */
void RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry::_L1 */
  static RadioTrackTrainMessageQueueEntry_T _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry::_L2 */
  static CompressedRadioMessage_TM _L2;
  
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &_L1,
    inRadioTrackTrainMessageQueueEntry);
  kcg_copy_CompressedRadioMessage_TM(&_L2, &_L1.m_Entry);
  kcg_copy_CompressedRadioMessage_TM(outRadioTrackTrainMessage, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

