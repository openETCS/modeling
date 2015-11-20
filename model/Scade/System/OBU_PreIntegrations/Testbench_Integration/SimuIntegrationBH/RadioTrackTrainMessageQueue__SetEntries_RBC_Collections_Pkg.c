/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries */
void RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries::inRadioTrackTrainMessageQueueEntries */ RadioTrackTrainMessageQueueEntries_T *inRadioTrackTrainMessageQueueEntries,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries::out_RadioTrackTrainMessageQueue */ RadioTrackTrainMessageQueue_T *out_RadioTrackTrainMessageQueue)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries::_L1 */
  static RadioTrackTrainMessageQueueEntries_T _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries::_L3 */
  static RadioTrackTrainMessageQueue_T _L3;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__SetEntries::_L5 */
  static RadioTrackTrainMessageQueue_T _L5;
  
  kcg_copy_RadioTrackTrainMessageQueueEntries_T(
    &_L1,
    inRadioTrackTrainMessageQueueEntries);
  kcg_copy_RadioTrackTrainMessageQueue_T(
    &_L5,
    (RadioTrackTrainMessageQueue_T *) &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_DEFAULT);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L3, &_L5);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueueEntries_T(&_L3.m_Entries, &_L1);
  }
  kcg_copy_RadioTrackTrainMessageQueue_T(out_RadioTrackTrainMessageQueue, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

