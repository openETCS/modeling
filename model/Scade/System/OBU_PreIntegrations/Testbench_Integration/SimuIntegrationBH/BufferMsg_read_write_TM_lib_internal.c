/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_read_write_TM_lib_internal.h"

/* TM_lib_internal::BufferMsg_read_write */
void BufferMsg_read_write_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_read_write::Buffer_In */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_read_write::Message_In */ M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  /* TM_lib_internal::BufferMsg_read_write::Buffer_Out */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferMsg_read_write::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_read_write::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  static kcg_int i;
  /* TM_lib_internal::BufferMsg_read_write::index */
  static kcg_int index;
  /* TM_lib_internal::BufferMsg_read_write::_L23 */
  static M_TrainTrack_Message_T_TM_radio_messages _L23;
  /* TM_lib_internal::BufferMsg_read_write::_L21 */
  static M_TrainTrack_Message_T_TM_radio_messages _L21;
  /* TM_lib_internal::BufferMsg_read_write::_L15 */
  static kcg_int _L15;
  /* TM_lib_internal::BufferMsg_read_write::_L14 */
  static kcg_int _L14;
  /* TM_lib_internal::BufferMsg_read_write::_L12 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L12;
  /* TM_lib_internal::BufferMsg_read_write::_L24 */
  static array_169506 _L24;
  /* TM_lib_internal::BufferMsg_read_write::_L25 */
  static array_169813 _L25;
  /* TM_lib_internal::BufferMsg_read_write::_L26 */
  static array_172678 _L26;
  /* TM_lib_internal::BufferMsg_read_write::_L33 */
  static kcg_bool _L33;
  /* TM_lib_internal::BufferMsg_read_write::_L32 */
  static kcg_int _L32;
  /* TM_lib_internal::BufferMsg_read_write::_L31 */
  static kcg_int _L31;
  /* TM_lib_internal::BufferMsg_read_write::_L30 */
  static kcg_int _L30;
  /* TM_lib_internal::BufferMsg_read_write::_L29 */
  static kcg_int _L29;
  /* TM_lib_internal::BufferMsg_read_write::_L37 */
  static M_TrainTrack_Message_T_TM_radio_messages _L37;
  /* TM_lib_internal::BufferMsg_read_write::_L38 */
  static kcg_int _L38;
  /* TM_lib_internal::BufferMsg_read_write::_L40 */
  static kcg_bool _L40;
  /* TM_lib_internal::BufferMsg_read_write::_L39 */
  static kcg_int _L39;
  /* TM_lib_internal::BufferMsg_read_write::_L41 */
  static M_TrainTrack_Message_T_TM_radio_messages _L41;
  /* TM_lib_internal::BufferMsg_read_write::_L42 */
  static M_TrainTrack_Message_T_TM_radio_messages _L42;
  
  _L39 = 0;
  _L38 = Stacksize_old;
  _L40 = _L39 == _L38;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L42,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L23, Message_In);
  /* 3 */ if (_L40) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L41, &_L42);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L41, &_L23);
  }
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L26[i], &_L41);
  }
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(&_L12, Buffer_In);
  kcg_copy_array_169506(&_L24, (array_169506 *) &_L12[0]);
  kcg_copy_array_172678(&_L25[0], &_L26);
  kcg_copy_array_169506(&_L25[1], &_L24);
  kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(Buffer_Out, &_L25);
  _L15 = Stacksize_old;
  *Stacksize_new = _L15;
  _L30 = 1;
  _L31 = _L15 - _L30;
  _L32 = 0;
  _L33 = _L31 < _L32;
  /* 1 */ if (_L33) {
    _L29 = _L32;
  }
  else {
    _L29 = _L31;
  }
  index = _L29;
  _L14 = index;
  if ((0 <= _L14) & (_L14 < 5)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L21, &_L12[_L14]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_L21,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
  /* 2 */ if (_L40) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L37, &_L23);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L37, &_L21);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(Message_out, &_L37);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_read_write_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

