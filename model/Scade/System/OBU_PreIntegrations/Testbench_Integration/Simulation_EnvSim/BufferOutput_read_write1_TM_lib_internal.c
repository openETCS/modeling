/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write1_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write1 */
void BufferOutput_read_write1_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write1::Buffer_In */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write1::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write1::Message_In */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write1::Buffer_Out */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write1::Stacksize_new */kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write1::Message_out */M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write1::_L32 */
  static array__158696 _L32;
  /* TM_lib_internal::BufferOutput_read_write1::_L35 */
  static kcg_bool _L35;
  /* TM_lib_internal::BufferOutput_read_write1::_L37 */
  static array__158696 _L37;
  
  *Stacksize_new = Stacksize_old;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L37[0],
    &(*Message_In)[0]);
  _L35 = *Stacksize_new == 0;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L32[0],
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  if (_L35) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      &(*Message_In)[0]);
    kcg_copy_array__158696(&(*Buffer_Out)[0], &_L32);
  }
  else {
    if ((0 <= *Stacksize_new - 1) & (*Stacksize_new - 1 < 100)) {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        Message_out,
        &(*Buffer_In)[*Stacksize_new - 1]);
    }
    else {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        Message_out,
        (M_TrainTrack_Message_T_TM_radio_messages *)
          &EMPTY_TrainTrackMessage_TM_lib_internal);
    }
    kcg_copy_array__158696(&(*Buffer_Out)[0], &_L37);
  }
  kcg_copy_array__166237(&(*Buffer_Out)[1], (array__166237 *) &(*Buffer_In)[0]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferOutput_read_write1_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

