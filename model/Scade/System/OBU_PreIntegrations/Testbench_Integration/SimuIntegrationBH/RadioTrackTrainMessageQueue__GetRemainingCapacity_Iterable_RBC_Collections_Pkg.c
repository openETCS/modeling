/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable */
void RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::inIndex */ kcg_int inIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::inAccumulator */ kcg_int inAccumulator,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::outContinue */ kcg_bool *outContinue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::outAccumulator */ kcg_int *outAccumulator)
{
  static kcg_int noname;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::_L5 */
  static RadioTrackTrainMessageQueueEntry_T _L5;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::_L6 */
  static kcg_bool _L6;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::_L13 */
  static kcg_bool _L13;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::_L24 */
  static kcg_bool _L24;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::_L25 */
  static kcg_bool _L25;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::_L27 */
  static kcg_int _L27;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable::_L33 */
  static kcg_int _L33;
  
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &_L5,
    inRadioTrackTrainMessageQueueEntry);
  _L6 = /* 1 */
    RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(&_L5);
  _L24 = kcg_true;
  _L25 = kcg_false;
  /* 1 */ if (_L6) {
    _L13 = _L24;
  }
  else {
    _L13 = _L25;
  }
  *outContinue = _L13;
  _L33 = inIndex;
  *outAccumulator = _L33;
  _L27 = inAccumulator;
  noname = _L27;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__GetRemainingCapacity_Iterable_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

