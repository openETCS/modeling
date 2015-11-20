/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_write_only_TM_lib_internal.h"

/* TM_lib_internal::BufferMsg_write_only */
void BufferMsg_write_only_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_write_only::Buffer_In */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_write_only::Message_In */ M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  /* TM_lib_internal::BufferMsg_write_only::Buffer_Out */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_write_only::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  static kcg_int i;
  static kcg_bool noname;
  /* TM_lib_internal::BufferMsg_write_only::_L1 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L1;
  /* TM_lib_internal::BufferMsg_write_only::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::BufferMsg_write_only::_L3 */
  static M_TrainTrack_Message_T_TM_radio_messages _L3;
  /* TM_lib_internal::BufferMsg_write_only::_L4 */
  static array_169506 _L4;
  /* TM_lib_internal::BufferMsg_write_only::_L5 */
  static array_169813 _L5;
  /* TM_lib_internal::BufferMsg_write_only::_L6 */
  static array_172678 _L6;
  /* TM_lib_internal::BufferMsg_write_only::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::BufferMsg_write_only::_L8 */
  static kcg_int _L8;
  /* TM_lib_internal::BufferMsg_write_only::_L9 */
  static M_TrainTrack_Message_T_TM_radio_messages _L9;
  /* TM_lib_internal::BufferMsg_write_only::_L10 */
  static kcg_int _L10;
  /* TM_lib_internal::BufferMsg_write_only::_L11 */
  static kcg_bool _L11;
  /* TM_lib_internal::BufferMsg_write_only::_L12 */
  static kcg_int _L12;
  
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(&_L1, Buffer_In);
  _L2 = Stacksize_old;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L3, Message_In);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L6[i], &_L3);
  }
  kcg_copy_array_169506(&_L4, (array_169506 *) &_L1[0]);
  kcg_copy_array_172678(&_L5[0], &_L6);
  kcg_copy_array_169506(&_L5[1], &_L4);
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(Buffer_Out, &_L5);
  _L8 = 1;
  _L7 = _L2 + _L8;
  _L10 = DIM_FIFO_TrainTrackMessage_TM_lib_internal;
  _L11 = _L7 > _L10;
  /* 1 */ if (_L11) {
    _L12 = _L10;
  }
  else {
    _L12 = _L7;
  }
  *Stacksize_new = _L12;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L9,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(Message_out, &_L9);
  noname = _L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_write_only_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

