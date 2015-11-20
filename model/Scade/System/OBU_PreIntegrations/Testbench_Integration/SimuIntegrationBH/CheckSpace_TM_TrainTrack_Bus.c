/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::CheckSpace */
void CheckSpace_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::CheckSpace::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_TrainTrack_Bus::CheckSpace::Busy */ kcg_bool *Busy,
  /* TM_TrainTrack_Bus::CheckSpace::SlotsUsed */ kcg_int *SlotsUsed)
{
  static kcg_int i1;
  /* TM_TrainTrack_Bus::CheckSpace */
  static kcg_int acc;
  /* TM_TrainTrack_Bus::CheckSpace */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TM_TrainTrack_Bus::CheckSpace::_L1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1;
  /* TM_TrainTrack_Bus::CheckSpace::_L2 */
  static kcg_int _L2;
  /* TM_TrainTrack_Bus::CheckSpace::_L3 */
  static kcg_bool _L3;
  /* TM_TrainTrack_Bus::CheckSpace::_L4 */
  static kcg_int _L4;
  /* TM_TrainTrack_Bus::CheckSpace::_L5 */
  static kcg_int _L5;
  /* TM_TrainTrack_Bus::CheckSpace::_L6 */
  static array_169242 _L6;
  /* TM_TrainTrack_Bus::CheckSpace::_L8 */
  static kcg_int _L8;
  /* TM_TrainTrack_Bus::CheckSpace::_L9 */
  static kcg_bool _L9;
  
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L1, MessageBus);
  _L5 = 0;
  /* pow */ for (i1 = 0; i1 < 5; i1++) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L6[i1], &_L1);
  }
  _L3 = kcg_true;
  _L4 = _L5;
  /* 1 */ if (_L3) {
    /* 1 */ for (i = 0; i < 5; i++) {
      acc = _L4;
      /* 1 */
      CheckSpaceLoop_TM_TrainTrack_Bus(i, acc, &_L6[i], &cond_iterw, &_L4);
      _L2 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L2 = 0;
  }
  _L8 = BusWidth_TM_TrainTrack_Bus;
  _L9 = _L4 >= _L8;
  *Busy = _L9;
  *SlotsUsed = _L4;
  noname = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckSpace_TM_TrainTrack_Bus.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

