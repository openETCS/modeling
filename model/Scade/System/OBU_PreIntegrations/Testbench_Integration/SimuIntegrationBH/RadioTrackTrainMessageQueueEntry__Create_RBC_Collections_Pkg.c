/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create */
void RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::inRadioTrackTrainMessage */ CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::outRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntry_T *outRadioTrackTrainMessageQueueEntry)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::_L1 */
  static CompressedRadioMessage_TM _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::_L2 */
  static RadioTrackTrainMessageQueueEntry_T _L2;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::_L3 */
  static RadioTrackTrainMessageQueueEntry_T _L3;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::_L4 */
  static kcg_bool _L4;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create::_L5 */
  static RadioTrackTrainMessageQueueEntry_T _L5;
  
  kcg_copy_CompressedRadioMessage_TM(&_L1, inRadioTrackTrainMessage);
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &_L3,
    (RadioTrackTrainMessageQueueEntry_T *)
      &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(&_L2, &_L3);
  if (kcg_true) {
    kcg_copy_CompressedRadioMessage_TM(&_L2.m_Entry, &_L1);
  }
  _L4 = kcg_true;
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(&_L5, &_L2);
  if (kcg_true) {
    _L5.m_IsValid = _L4;
  }
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    outRadioTrackTrainMessageQueueEntry,
    &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

