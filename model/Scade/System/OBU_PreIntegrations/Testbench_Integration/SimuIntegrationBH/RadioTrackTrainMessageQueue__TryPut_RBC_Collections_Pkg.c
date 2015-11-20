/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut */
void RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::inRadioTrackTrainMessageQueue */ RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::inRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntry_T *inRadioTrackTrainMessageQueueEntry,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::outRadioTrackTrainMessageQueue */ RadioTrackTrainMessageQueue_T *_3_outRadioTrackTrainMessageQueue)
{
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::outRadioTrackTrainMessageQueue */
  static RadioTrackTrainMessageQueue_T _1_outRadioTrackTrainMessageQueue;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::IfBlock1::then::_L8 */
  static array_168500 _L8_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::IfBlock1::then::_L6 */
  static RadioTrackTrainMessageQueue_T _L6_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::IfBlock1::then::_L5 */
  static RadioTrackTrainMessageQueueEntries_T _L5_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::IfBlock1::then::_L4 */
  static RadioTrackTrainMessageQueueEntries_T _L4_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::IfBlock1::then::_L3 */
  static RadioTrackTrainMessageQueue_T _L3_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::IfBlock1::then::_L2 */
  static RadioTrackTrainMessageQueueEntry_T _L2_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::IfBlock1::then::_L1 */
  static array_170975 _L1_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::outRadioTrackTrainMessageQueue */
  static RadioTrackTrainMessageQueue_T outRadioTrackTrainMessageQueue;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::IfBlock1::else::_L1 */
  static RadioTrackTrainMessageQueue_T _L12_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::hasCapacity */
  static kcg_bool hasCapacity;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::_L1 */
  static RadioTrackTrainMessageQueue_T _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::_L4 */
  static kcg_int _L4;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::_L5 */
  static kcg_bool _L5;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut::_L6 */
  static kcg_int _L6;
  
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L1, inRadioTrackTrainMessageQueue);
  _L4 = /* 1 */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(&_L1);
  _L6 = 0;
  _L5 = _L4 > _L6;
  hasCapacity = _L5;
  IfBlock1_clock = hasCapacity;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &_L2_IfBlock1,
      inRadioTrackTrainMessageQueueEntry);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &_L8_IfBlock1[0],
      &_L2_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_L3_IfBlock1,
      inRadioTrackTrainMessageQueue);
    /* 1 */
    RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
      &_L3_IfBlock1,
      &_L5_IfBlock1);
    kcg_copy_array_170975(&_L1_IfBlock1, (array_170975 *) &_L5_IfBlock1[0]);
    kcg_copy_array_168500(&_L4_IfBlock1[0], &_L8_IfBlock1);
    kcg_copy_array_170975(&_L4_IfBlock1[1], &_L1_IfBlock1);
    /* 1 */
    RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
      &_L4_IfBlock1,
      &_L6_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_1_outRadioTrackTrainMessageQueue,
      &_L6_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      _3_outRadioTrackTrainMessageQueue,
      &_1_outRadioTrackTrainMessageQueue);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_L12_IfBlock1,
      inRadioTrackTrainMessageQueue);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outRadioTrackTrainMessageQueue,
      &_L12_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      _3_outRadioTrackTrainMessageQueue,
      &outRadioTrackTrainMessageQueue);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

