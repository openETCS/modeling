/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2 */
void RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::inIndex */ kcg_int inIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::inComparisonIndex */ kcg_int inComparisonIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::outRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntry_T *outRadioTrackTrainMessageQueueEntry)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::_L1 */
  static kcg_int _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::_L3 */
  static kcg_bool _L3;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::_L4 */
  static RadioTrackTrainMessageQueueEntry_T _L4;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::_L5 */
  static RadioTrackTrainMessageQueueEntry_T _L5;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::_L6 */
  static RadioTrackTrainMessageQueueEntry_T _L6;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable2::_L13 */
  static kcg_int _L13;
  
  _L1 = inIndex;
  _L13 = inComparisonIndex;
  _L3 = _L1 == _L13;
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &_L6,
    (RadioTrackTrainMessageQueueEntry_T *)
      &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &_L5,
    inRadioTrackTrainMessageQueueEntry);
  /* 1 */ if (_L3) {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(&_L4, &_L6);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(&_L4, &_L5);
  }
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    outRadioTrackTrainMessageQueueEntry,
    &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

