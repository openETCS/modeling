/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write1_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write1 */
void BufferOutput_read_write1_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write1::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write1::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write1::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write1::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write1::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write1::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  static kcg_int i1;
  static kcg_int i;
  /* TM_lib_internal::BufferOutput_read_write1::index */
  static kcg_int index;
  /* TM_lib_internal::BufferOutput_read_write1::_L23 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L23;
  /* TM_lib_internal::BufferOutput_read_write1::_L21 */
  static M_TrainTrack_Message_T_TM_radio_messages _L21;
  /* TM_lib_internal::BufferOutput_read_write1::_L15 */
  static kcg_int _L15;
  /* TM_lib_internal::BufferOutput_read_write1::_L14 */
  static kcg_int _L14;
  /* TM_lib_internal::BufferOutput_read_write1::_L12 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L12;
  /* TM_lib_internal::BufferOutput_read_write1::_L24 */
  static array_169119 _L24;
  /* TM_lib_internal::BufferOutput_read_write1::_L25 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L25;
  /* TM_lib_internal::BufferOutput_read_write1::_L27 */
  static kcg_int _L27;
  /* TM_lib_internal::BufferOutput_read_write1::_L28 */
  static kcg_int _L28;
  /* TM_lib_internal::BufferOutput_read_write1::_L29 */
  static M_TrainTrack_Message_T_TM_radio_messages _L29;
  /* TM_lib_internal::BufferOutput_read_write1::_L30 */
  static M_TrainTrack_Message_T_TM_radio_messages _L30;
  /* TM_lib_internal::BufferOutput_read_write1::_L31 */
  static array_172678 _L31;
  /* TM_lib_internal::BufferOutput_read_write1::_L32 */
  static array_172678 _L32;
  /* TM_lib_internal::BufferOutput_read_write1::_L33 */
  static M_TrainTrack_Message_T_TM_radio_messages _L33;
  /* TM_lib_internal::BufferOutput_read_write1::_L34 */
  static kcg_int _L34;
  /* TM_lib_internal::BufferOutput_read_write1::_L35 */
  static kcg_bool _L35;
  /* TM_lib_internal::BufferOutput_read_write1::_L36 */
  static kcg_int _L36;
  /* TM_lib_internal::BufferOutput_read_write1::_L37 */
  static array_172678 _L37;
  
  _L34 = Stacksize_old;
  _L36 = 0;
  _L35 = _L34 == _L36;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L30,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  /* pow */ for (i1 = 0; i1 < 1; i1++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L32[i1], &_L30);
  }
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L23, Message_In);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L29, &_L23[0]);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L37[i], &_L29);
  }
  /* 1 */ if (_L35) {
    kcg_copy_array_172678(&_L31, &_L32);
  }
  else {
    kcg_copy_array_172678(&_L31, &_L37);
  }
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(&_L12, Buffer_In);
  kcg_copy_array_169119(&_L24, (array_169119 *) &_L12[0]);
  kcg_copy_array_172678(&_L25[0], &_L31);
  kcg_copy_array_169119(&_L25[1], &_L24);
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(Buffer_Out, &_L25);
  _L15 = Stacksize_old;
  *Stacksize_new = _L15;
  _L28 = 1;
  _L27 = _L15 - _L28;
  index = _L27;
  _L14 = index;
  if ((0 <= _L14) & (_L14 < 100)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L21, &_L12[_L14]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_L21,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
  /* 2 */ if (_L35) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L33, &_L29);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L33, &_L21);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(Message_out, &_L33);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_read_write1_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

