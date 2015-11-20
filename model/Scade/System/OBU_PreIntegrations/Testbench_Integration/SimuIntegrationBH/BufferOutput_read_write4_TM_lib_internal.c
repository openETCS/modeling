/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write4_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write4 */
void BufferOutput_read_write4_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write4::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write4::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write4::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write4::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write4::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write4::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  static kcg_int i;
  /* TM_lib_internal::BufferOutput_read_write4::index */
  static kcg_int index;
  /* TM_lib_internal::BufferOutput_read_write4::_L23 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L23;
  /* TM_lib_internal::BufferOutput_read_write4::_L21 */
  static M_TrainTrack_Message_T_TM_radio_messages _L21;
  /* TM_lib_internal::BufferOutput_read_write4::_L15 */
  static kcg_int _L15;
  /* TM_lib_internal::BufferOutput_read_write4::_L14 */
  static kcg_int _L14;
  /* TM_lib_internal::BufferOutput_read_write4::_L12 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L12;
  /* TM_lib_internal::BufferOutput_read_write4::_L24 */
  static array_170759 _L24;
  /* TM_lib_internal::BufferOutput_read_write4::_L25 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L25;
  /* TM_lib_internal::BufferOutput_read_write4::_L27 */
  static kcg_int _L27;
  /* TM_lib_internal::BufferOutput_read_write4::_L28 */
  static kcg_int _L28;
  /* TM_lib_internal::BufferOutput_read_write4::_L29 */
  static array_169506 _L29;
  /* TM_lib_internal::BufferOutput_read_write4::_L31 */
  static kcg_int _L31;
  /* TM_lib_internal::BufferOutput_read_write4::_L32 */
  static kcg_int _L32;
  /* TM_lib_internal::BufferOutput_read_write4::_L33 */
  static kcg_int _L33;
  /* TM_lib_internal::BufferOutput_read_write4::_L34 */
  static kcg_bool _L34;
  /* TM_lib_internal::BufferOutput_read_write4::_L35 */
  static kcg_int _L35;
  /* TM_lib_internal::BufferOutput_read_write4::_L36 */
  static array_169000 _L36;
  /* TM_lib_internal::BufferOutput_read_write4::_L37 */
  static M_TrainTrack_Message_T_TM_radio_messages _L37;
  /* TM_lib_internal::BufferOutput_read_write4::_L38 */
  static M_TrainTrack_Message_T_TM_radio_messages _L38;
  /* TM_lib_internal::BufferOutput_read_write4::_L39 */
  static array_169506 _L39;
  /* TM_lib_internal::BufferOutput_read_write4::_L40 */
  static array_172678 _L40;
  /* TM_lib_internal::BufferOutput_read_write4::_L41 */
  static array_169506 _L41;
  /* TM_lib_internal::BufferOutput_read_write4::_L42 */
  static M_TrainTrack_Message_T_TM_radio_messages _L42;
  
  _L33 = Stacksize_old;
  _L35 = 0;
  _L34 = _L33 == _L35;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L23, Message_In);
  kcg_copy_array_169000(&_L36, (array_169000 *) &_L23[1]);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L38,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L40[i], &_L38);
  }
  kcg_copy_array_169000(&_L39[0], &_L36);
  kcg_copy_array_172678(&_L39[3], &_L40);
  kcg_copy_array_169506(&_L29, (array_169506 *) &_L23[0]);
  /* 1 */ if (_L34) {
    kcg_copy_array_169506(&_L41, &_L39);
  }
  else {
    kcg_copy_array_169506(&_L41, &_L29);
  }
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(&_L12, Buffer_In);
  kcg_copy_array_170759(&_L24, (array_170759 *) &_L12[0]);
  kcg_copy_array_169506(&_L25[0], &_L41);
  kcg_copy_array_170759(&_L25[4], &_L24);
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(Buffer_Out, &_L25);
  _L15 = Stacksize_old;
  _L32 = 3;
  _L31 = _L15 + _L32;
  *Stacksize_new = _L31;
  _L28 = 1;
  _L27 = _L15 - _L28;
  index = _L27;
  _L14 = index;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L37, &_L23[0]);
  if ((0 <= _L14) & (_L14 < 100)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L21, &_L12[_L14]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_L21,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
  /* 2 */ if (_L34) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L42, &_L37);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L42, &_L21);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(Message_out, &_L42);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write4_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

