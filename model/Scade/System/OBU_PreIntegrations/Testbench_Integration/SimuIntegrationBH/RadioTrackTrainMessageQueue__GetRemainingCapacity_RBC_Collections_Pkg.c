/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity */
kcg_int RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::inRadioTrackTrainMessageQueue */ RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity */
  static kcg_int acc;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::index */
  static kcg_int index;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::remainingCapacity */
  static kcg_int remainingCapacity;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L1 */
  static RadioTrackTrainMessageQueue_T _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L2 */
  static RadioTrackTrainMessageQueueEntries_T _L2;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L10 */
  static kcg_int _L10;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L11 */
  static kcg_bool _L11;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L26 */
  static kcg_int _L26;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L27 */
  static kcg_int _L27;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L28 */
  static kcg_int _L28;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L30 */
  static kcg_bool _L30;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L31 */
  static kcg_int _L31;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L32 */
  static kcg_int _L32;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L33 */
  static kcg_int _L33;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L34 */
  static kcg_int _L34;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L35 */
  static kcg_int _L35;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L37 */
  static kcg_int _L37;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L38 */
  static kcg_int _L38;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L42 */
  static RadioTrackTrainMessageQueueEntry_T _L42;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L43 */
  static RadioTrackTrainMessageQueueEntry_T _L43;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L44 */
  static kcg_int _L44;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L45 */
  static kcg_bool _L45;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L51 */
  static kcg_int _L51;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L52 */
  static kcg_int _L52;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L53 */
  static kcg_int _L53;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::_L54 */
  static kcg_int _L54;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity::outRemainingCapacity */
  static kcg_int outRemainingCapacity;
  
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L1, inRadioTrackTrainMessageQueue);
  /* 1 */
  RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(&_L1, &_L2);
  _L27 = 0;
  _L11 = kcg_true;
  _L26 = _L27;
  if (_L11) {
    for (i = 0; i < 8; i++) {
      acc = _L26;
      /* 1 */
      RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_RBC_Collections_Pkg(
        i,
        acc,
        &_L2[i],
        &cond_iterw,
        &_L26);
      _L10 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L10 = 0;
  }
  noname = _L10;
  _L28 = RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY - 1;
  index = _L26;
  _L37 = index;
  _L30 = _L28 == _L37;
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &_L43,
    (RadioTrackTrainMessageQueueEntry_T *)
      &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
  _L44 = index;
  if ((0 <= _L44) & (_L44 < 8)) {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(&_L42, &_L2[_L44]);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(&_L42, &_L43);
  }
  _L45 = /* 1 */
    RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(&_L42);
  _L52 = 0;
  _L34 = RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
  _L38 = index;
  _L33 = 0;
  _L32 = _L38 + _L33;
  _L35 = _L34 - _L32;
  remainingCapacity = _L35;
  _L53 = remainingCapacity;
  /* 2 */ if (_L45) {
    _L51 = _L52;
  }
  else {
    _L51 = _L53;
  }
  _L54 = remainingCapacity;
  /* 1 */ if (_L30) {
    _L31 = _L51;
  }
  else {
    _L31 = _L54;
  }
  outRemainingCapacity = _L31;
  return outRemainingCapacity;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

