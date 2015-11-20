/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries */
void RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries::inRadioTrackTrainMessageQueue */ RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries::outRadioTrackTrainMessageQueueEntries */ RadioTrackTrainMessageQueueEntries_T *outRadioTrackTrainMessageQueueEntries)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries::_L1 */
  static RadioTrackTrainMessageQueue_T _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetEntries::_L2 */
  static RadioTrackTrainMessageQueueEntries_T _L2;
  
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L1, inRadioTrackTrainMessageQueue);
  kcg_copy_RadioTrackTrainMessageQueueEntries_T(&_L2, &_L1.m_Entries);
  kcg_copy_RadioTrackTrainMessageQueueEntries_T(
    outRadioTrackTrainMessageQueueEntries,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

