/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg.h"

/* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
void RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg(
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::inRadioTrackTrainMessageQueue */ RadioTrackTrainMessageQueue_T *inRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueue */ RadioTrackTrainMessageQueue_T *_22_outRadioTrackTrainMessageQueue,
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueueEntry */ RadioTrackTrainMessageQueueEntry_T *_21_outRadioTrackTrainMessageQueueEntry)
{
  static kcg_int i4;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
  static kcg_int acc;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take */
  static kcg_bool cond_iterw;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueueEntry */
  static RadioTrackTrainMessageQueueEntry_T _6_outRadioTrackTrainMessageQueueEntry;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueue */
  static RadioTrackTrainMessageQueue_T _5_outRadioTrackTrainMessageQueue;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L10 */
  static RadioTrackTrainMessageQueue_T _L10_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L9 */
  static array_168500 _L9_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L8 */
  static RadioTrackTrainMessageQueueEntry_T _L8_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L7 */
  static RadioTrackTrainMessageQueueEntries_T _L7_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L6 */
  static RadioTrackTrainMessageQueueEntry_T _L6_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L5 */
  static kcg_int _L5_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L4 */
  static RadioTrackTrainMessageQueueEntry_T _L4_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L3 */
  static array_170975 _L3_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L2 */
  static RadioTrackTrainMessageQueueEntries_T _L2_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::then::_L1 */
  static RadioTrackTrainMessageQueue_T _L1_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueueEntry */
  static RadioTrackTrainMessageQueueEntry_T outRadioTrackTrainMessageQueueEntry;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueue */
  static RadioTrackTrainMessageQueue_T outRadioTrackTrainMessageQueue;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  static kcg_int noname;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::foundIndex */
  static kcg_int foundIndex_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L14 */
  static kcg_int _L14_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L15 */
  static kcg_int _L15_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L13 */
  static kcg_int _L13_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L12 */
  static RadioTrackTrainMessageQueueEntry_T _L12_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L11 */
  static RadioTrackTrainMessageQueue_T _L11_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L10 */
  static RadioTrackTrainMessageQueueEntry_T _L1020_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L9 */
  static RadioTrackTrainMessageQueueEntries_T _L919_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L8 */
  static RadioTrackTrainMessageQueueEntries_T _L818_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L7 */
  static RadioTrackTrainMessageQueue_T _L717_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L6 */
  static kcg_bool _L616_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L5 */
  static kcg_int _L515_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L4 */
  static array_int_8 _L414_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L3 */
  static RadioTrackTrainMessageQueueEntries_T _L313_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L2 */
  static kcg_int _L212_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::else::_L1 */
  static RadioTrackTrainMessageQueueEntries_T _L111_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueue */
  static RadioTrackTrainMessageQueue_T _7_outRadioTrackTrainMessageQueue;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueueEntry */
  static RadioTrackTrainMessageQueueEntry_T _8_outRadioTrackTrainMessageQueueEntry;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::then::_L23 */
  static RadioTrackTrainMessageQueue_T _L23_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1::else::then::_L24 */
  static RadioTrackTrainMessageQueueEntry_T _L24_IfBlock1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueue */
  static RadioTrackTrainMessageQueue_T _9_outRadioTrackTrainMessageQueue;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::outRadioTrackTrainMessageQueueEntry */
  static RadioTrackTrainMessageQueueEntry_T _10_outRadioTrackTrainMessageQueueEntry;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::remainingCapacity */
  static kcg_int remainingCapacity;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::_L1 */
  static RadioTrackTrainMessageQueue_T _L1;
  /* RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take::_L2 */
  static kcg_int _L2;
  
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L1, inRadioTrackTrainMessageQueue);
  _L2 = /* 1 */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(&_L1);
  remainingCapacity = _L2;
  IfBlock1_clock = remainingCapacity == 0;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_L1_IfBlock1,
      inRadioTrackTrainMessageQueue);
    /* 2 */
    RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
      &_L1_IfBlock1,
      &_L2_IfBlock1);
    kcg_copy_array_170975(&_L3_IfBlock1, (array_170975 *) &_L2_IfBlock1[0]);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &_L8_IfBlock1,
      (RadioTrackTrainMessageQueueEntry_T *)
        &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &_L9_IfBlock1[0],
      &_L8_IfBlock1);
    kcg_copy_array_170975(&_L7_IfBlock1[0], &_L3_IfBlock1);
    kcg_copy_array_168500(&_L7_IfBlock1[7], &_L9_IfBlock1);
    /* 1 */
    RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
      &_L7_IfBlock1,
      &_L10_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_5_outRadioTrackTrainMessageQueue,
      &_L10_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      _22_outRadioTrackTrainMessageQueue,
      &_5_outRadioTrackTrainMessageQueue);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &_L6_IfBlock1,
      (RadioTrackTrainMessageQueueEntry_T *)
        &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
    _L5_IfBlock1 = RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY - 1;
    if ((0 <= _L5_IfBlock1) & (_L5_IfBlock1 < 8)) {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &_L4_IfBlock1,
        &_L2_IfBlock1[_L5_IfBlock1]);
    }
    else {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(&_L4_IfBlock1, &_L6_IfBlock1);
    }
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &_6_outRadioTrackTrainMessageQueueEntry,
      &_L4_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      _21_outRadioTrackTrainMessageQueueEntry,
      &_6_outRadioTrackTrainMessageQueueEntry);
  }
  else {
    else_clock_IfBlock1 = remainingCapacity ==
      RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L23_IfBlock1,
        inRadioTrackTrainMessageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_9_outRadioTrackTrainMessageQueue,
        &_L23_IfBlock1);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outRadioTrackTrainMessageQueue,
        &_9_outRadioTrackTrainMessageQueue);
    }
    else {
      _L515_IfBlock1 = 0;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L717_IfBlock1,
        inRadioTrackTrainMessageQueue);
      /* 4 */
      RadioTrackTrainMessageQueue__GetEntries_RBC_Collections_Pkg(
        &_L717_IfBlock1,
        &_L313_IfBlock1);
      for (i4 = 0; i4 < 8; i4++) {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &_L111_IfBlock1[i4],
          &_L313_IfBlock1[7 - i4]);
      }
      _L616_IfBlock1 = kcg_true;
      _L15_IfBlock1 = _L515_IfBlock1;
      if (_L616_IfBlock1) {
        for (i3 = 0; i3 < 8; i3++) {
          acc = _L15_IfBlock1;
          /* 2 */
          RadioTrackTrainMessageQueue__Take_Iterable_RBC_Collections_Pkg(
            i3,
            acc,
            &_L111_IfBlock1[i3],
            &cond_iterw,
            &_L15_IfBlock1);
          _L14_IfBlock1 = i3 + 1;
          if (!cond_iterw) {
            break;
          }
        }
      }
      else {
        _L14_IfBlock1 = 0;
      }
      foundIndex_IfBlock1 = _L15_IfBlock1;
      _L13_IfBlock1 = foundIndex_IfBlock1;
      /* pow */ for (i2 = 0; i2 < 8; i2++) {
        _L414_IfBlock1[i2] = _L13_IfBlock1;
      }
      for (i1 = 0; i1 < 8; i1++) {
        /* 2 */
        RadioTrackTrainMessageQueue__Take_Iterable2_RBC_Collections_Pkg(
          i1,
          _L414_IfBlock1[i1],
          &_L111_IfBlock1[i1],
          &_L919_IfBlock1[i1]);
      }
      for (i = 0; i < 8; i++) {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &_L818_IfBlock1[i],
          &_L919_IfBlock1[7 - i]);
      }
      /* 3 */
      RadioTrackTrainMessageQueue__SetEntries_RBC_Collections_Pkg(
        &_L818_IfBlock1,
        &_L11_IfBlock1);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_7_outRadioTrackTrainMessageQueue,
        &_L11_IfBlock1);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outRadioTrackTrainMessageQueue,
        &_7_outRadioTrackTrainMessageQueue);
    }
    kcg_copy_RadioTrackTrainMessageQueue_T(
      _22_outRadioTrackTrainMessageQueue,
      &outRadioTrackTrainMessageQueue);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &_L24_IfBlock1,
        (RadioTrackTrainMessageQueueEntry_T *)
          &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &_10_outRadioTrackTrainMessageQueueEntry,
        &_L24_IfBlock1);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outRadioTrackTrainMessageQueueEntry,
        &_10_outRadioTrackTrainMessageQueueEntry);
    }
    else {
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &_L12_IfBlock1,
        (RadioTrackTrainMessageQueueEntry_T *)
          &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_ENTRY_DEFAULT);
      _L212_IfBlock1 = foundIndex_IfBlock1;
      if ((0 <= _L212_IfBlock1) & (_L212_IfBlock1 < 8)) {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &_L1020_IfBlock1,
          &_L111_IfBlock1[_L212_IfBlock1]);
      }
      else {
        kcg_copy_RadioTrackTrainMessageQueueEntry_T(
          &_L1020_IfBlock1,
          &_L12_IfBlock1);
      }
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &_8_outRadioTrackTrainMessageQueueEntry,
        &_L1020_IfBlock1);
      kcg_copy_RadioTrackTrainMessageQueueEntry_T(
        &outRadioTrackTrainMessageQueueEntry,
        &_8_outRadioTrackTrainMessageQueueEntry);
    }
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      _21_outRadioTrackTrainMessageQueueEntry,
      &outRadioTrackTrainMessageQueueEntry);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
    }
    else {
      noname = _L14_IfBlock1;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

