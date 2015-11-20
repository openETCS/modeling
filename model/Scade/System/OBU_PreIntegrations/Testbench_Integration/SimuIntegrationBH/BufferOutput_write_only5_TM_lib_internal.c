/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_write_only5_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_write_only5 */
void BufferOutput_write_only5_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_write_only5::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_write_only5::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_write_only5::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_write_only5::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_write_only5::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_write_only5::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  static kcg_bool noname;
  /* TM_lib_internal::BufferOutput_write_only5::_L1 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L1;
  /* TM_lib_internal::BufferOutput_write_only5::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::BufferOutput_write_only5::_L3 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L3;
  /* TM_lib_internal::BufferOutput_write_only5::_L4 */
  static array_170449 _L4;
  /* TM_lib_internal::BufferOutput_write_only5::_L5 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L5;
  /* TM_lib_internal::BufferOutput_write_only5::_L6 */
  static array_169813 _L6;
  /* TM_lib_internal::BufferOutput_write_only5::_L7 */
  static kcg_int _L7;
  /* TM_lib_internal::BufferOutput_write_only5::_L8 */
  static kcg_int _L8;
  /* TM_lib_internal::BufferOutput_write_only5::_L9 */
  static M_TrainTrack_Message_T_TM_radio_messages _L9;
  /* TM_lib_internal::BufferOutput_write_only5::_L10 */
  static kcg_int _L10;
  /* TM_lib_internal::BufferOutput_write_only5::_L11 */
  static kcg_bool _L11;
  /* TM_lib_internal::BufferOutput_write_only5::_L12 */
  static kcg_int _L12;
  
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(&_L1, Buffer_In);
  _L2 = Stacksize_old;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L3, Message_In);
  kcg_copy_array_169813(&_L6, (array_169813 *) &_L3[0]);
  kcg_copy_array_170449(&_L4, (array_170449 *) &_L1[0]);
  kcg_copy_array_169813(&_L5[0], &_L6);
  kcg_copy_array_170449(&_L5[5], &_L4);
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(Buffer_Out, &_L5);
  _L8 = 5;
  _L7 = _L2 + _L8;
  _L10 = DIM_FIFO_TrainTrackOutput_TM_lib_internal;
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
** BufferOutput_write_only5_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

