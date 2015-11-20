/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSpaceLoop_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::CheckSpaceLoop */
void CheckSpaceLoop_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::CheckSpaceLoop::i */ kcg_int i,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Acc */ kcg_int Acc,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Message */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::cont */ kcg_bool *cont,
  /* TM_TrainTrack_Bus::CheckSpaceLoop::Count */ kcg_int *Count)
{
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1;
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L2 */
  static kcg_int _L2;
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L3 */
  static kcg_int _L3;
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L8 */
  static M_TrainTrack_Message_T_TM_radio_messages _L8;
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L9 */
  static kcg_bool _L9;
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L16 */
  static kcg_int _L16;
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L17 */
  static kcg_int _L17;
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L18 */
  static kcg_int _L18;
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L19 */
  static kcg_int _L19;
  /* TM_TrainTrack_Bus::CheckSpaceLoop::_L20 */
  static kcg_bool _L20;
  
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L1, Message);
  _L2 = i;
  _L3 = Acc;
  _L20 = kcg_true;
  *cont = _L20;
  if ((0 <= _L2) & (_L2 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L8, &_L1[_L2]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_L8,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  _L9 = _L8.Message.valid;
  _L17 = 1;
  _L18 = 0;
  /* 1 */ if (_L9) {
    _L16 = _L17;
  }
  else {
    _L16 = _L18;
  }
  _L19 = _L16 + _L3;
  *Count = _L19;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckSpaceLoop_TM_TrainTrack_Bus.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

