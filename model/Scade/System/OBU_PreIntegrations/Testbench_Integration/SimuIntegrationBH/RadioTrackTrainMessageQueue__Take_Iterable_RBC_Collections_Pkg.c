/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable */
void RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::inIndex */ kcg_int inIndex,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::inAccumulator */ kcg_int inAccumulator,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::outContinueIteration */ kcg_bool *outContinueIteration,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::outAccumulator */ kcg_int *outAccumulator)
{
  static kcg_int noname;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::_L1 */
  static kcg_int _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::_L2 */
  static kcg_int _L2;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::_L4 */
  static kcg_bool _L4;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::_L5 */
  static kcg_bool _L5;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::_L6 */
  static kcg_bool _L6;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::_L7 */
  static kcg_bool _L7;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take_Iterable::_L3 */
  static RadioTrackTrainMessageQueueEntry_T _L3;
  
  _L1 = inIndex;
  _L2 = inAccumulator;
  noname = _L2;
  *outAccumulator = _L1;
  kcg_copy_RadioTrackTrainMessageQueueEntry_T(
    &_L3,
    inRadioTrackTrainMessageQueueEntry);
  _L4 = /* 1 */
    RadioTrackTrainMessageQueueEntry__IsValid_RBC_Collections_Pkg(&_L3);
  _L6 = kcg_false;
  _L7 = kcg_true;
  /* 1 */ if (_L4) {
    _L5 = _L6;
  }
  else {
    _L5 = _L7;
  }
  *outContinueIteration = _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

