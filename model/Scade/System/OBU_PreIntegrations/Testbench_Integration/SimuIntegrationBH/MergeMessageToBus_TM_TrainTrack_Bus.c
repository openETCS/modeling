/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"

/* TM_TrainTrack_Bus::MergeMessageToBus */
void MergeMessageToBus_TM_TrainTrack_Bus(
  /* TM_TrainTrack_Bus::MergeMessageToBus::Message_in */ M_TrainTrack_Message_T_TM_radio_messages *Message_in,
  /* TM_TrainTrack_Bus::MergeMessageToBus::slots_used */ kcg_int slots_used,
  /* TM_TrainTrack_Bus::MergeMessageToBus::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* TM_TrainTrack_Bus::MergeMessageToBus::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* TM_TrainTrack_Bus::MergeMessageToBus::MessageBus_out */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus_out,
  /* TM_TrainTrack_Bus::MergeMessageToBus::t_train_assigned */ kcg_int *t_train_assigned)
{
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L1 */
  static kcg_int _L1;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L2 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L3 */
  static kcg_int _L3;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L4 */
  static kcg_int _L4;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L6 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L7 */
  static M_TrainTrack_Message_T_TM_radio_messages _L7;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L12 */
  static M_TrainTrack_Message_T_TM_radio_messages _L12;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L13 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L13;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L14 */
  static kcg_bool _L14;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L15 */
  static kcg_int _L15;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L16 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L16;
  /* TM_TrainTrack_Bus::MergeMessageToBus::_L17 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L17;
  
  _L1 = slots_used;
  _L2 = t_train_global;
  _L6 = Time_10ms_TM_TrainTrack_Bus;
  _L4 = _L1 * _L6;
  _L3 = _L4 + _L2;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L7, Message_in);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L12, &_L7);
  if (kcg_true) {
    _L12.Message.t_train = _L3;
  }
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L13, MessageBus);
  _L14 = _L12.Message.valid;
  _L15 = slots_used;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L16, &_L13);
  if ((0 <= _L15) & (_L15 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L16[_L15], &_L12);
  }
  /* 1 */ if (_L14) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L17, &_L16);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L17, &_L13);
  }
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(MessageBus_out, &_L17);
  *t_train_assigned = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergeMessageToBus_TM_TrainTrack_Bus.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

