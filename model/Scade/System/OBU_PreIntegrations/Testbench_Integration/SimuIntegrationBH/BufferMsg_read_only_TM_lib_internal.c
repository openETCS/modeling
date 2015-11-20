/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_read_only_TM_lib_internal.h"

/* TM_lib_internal::BufferMsg_read_only */
void BufferMsg_read_only_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_read_only::Buffer_In */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_only::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_only::Message_In */ M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  /* TM_lib_internal::BufferMsg_read_only::Buffer_Out */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferMsg_read_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_read_only::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  static M_TrainTrack_Message_T_TM_radio_messages noname;
  /* TM_lib_internal::BufferMsg_read_only::index */
  static kcg_int index;
  /* TM_lib_internal::BufferMsg_read_only::_L1 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L1;
  /* TM_lib_internal::BufferMsg_read_only::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::BufferMsg_read_only::_L3 */
  static M_TrainTrack_Message_T_TM_radio_messages _L3;
  /* TM_lib_internal::BufferMsg_read_only::_L8 */
  static kcg_int _L8;
  /* TM_lib_internal::BufferMsg_read_only::_L9 */
  static kcg_int _L9;
  /* TM_lib_internal::BufferMsg_read_only::_L12 */
  static M_TrainTrack_Message_T_TM_radio_messages _L12;
  /* TM_lib_internal::BufferMsg_read_only::_L13 */
  static kcg_bool _L13;
  /* TM_lib_internal::BufferMsg_read_only::_L14 */
  static kcg_int _L14;
  /* TM_lib_internal::BufferMsg_read_only::_L15 */
  static kcg_int _L15;
  /* TM_lib_internal::BufferMsg_read_only::_L18 */
  static kcg_int _L18;
  /* TM_lib_internal::BufferMsg_read_only::_L19 */
  static kcg_int _L19;
  /* TM_lib_internal::BufferMsg_read_only::_L21 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L21;
  /* TM_lib_internal::BufferMsg_read_only::_L22 */
  static M_TrainTrack_Message_T_TM_radio_messages _L22;
  
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(&_L1, Buffer_In);
  _L2 = Stacksize_old;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L3, Message_In);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L22,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  _L8 = 1;
  _L9 = _L2 - _L8;
  _L14 = 0;
  _L13 = _L9 < _L14;
  /* 1 */ if (_L13) {
    _L15 = _L14;
  }
  else {
    _L15 = _L9;
  }
  index = _L15;
  _L19 = index;
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(&_L21, &_L1);
  if ((0 <= _L19) & (_L19 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L21[_L19], &_L22);
  }
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(Buffer_Out, &_L21);
  *Stacksize_new = _L15;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&noname, &_L3);
  _L18 = index;
  if ((0 <= _L18) & (_L18 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L12, &_L1[_L18]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_L12,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(Message_out, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_read_only_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

