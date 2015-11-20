/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write4_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write4 */
void BufferOutput_read_write4_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write4::Buffer_In */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write4::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write4::Message_In */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write4::Buffer_Out */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write4::Stacksize_new */kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write4::Message_out */M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write4::_L34 */
  static kcg_bool _L34;
  /* TM_lib_internal::BufferOutput_read_write4::_L40 */
  static array__158696 _L40;
  
  _L34 = Stacksize_old == 0;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L40[0],
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  *Stacksize_new = Stacksize_old + 3;
  if (_L34) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      &(*Message_In)[0]);
    kcg_copy_array__166223(
      &(*Buffer_Out)[0],
      (array__166223 *) &(*Message_In)[1]);
    kcg_copy_array__158696(&(*Buffer_Out)[3], &_L40);
  }
  else {
    if ((0 <= Stacksize_old - 1) & (Stacksize_old - 1 < 100)) {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        Message_out,
        &(*Buffer_In)[Stacksize_old - 1]);
    }
    else {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        Message_out,
        (M_TrainTrack_Message_T_TM_radio_messages *)
          &EMPTY_TrainTrackMessage_TM_lib_internal);
    }
    kcg_copy_array__165722(
      &(*Buffer_Out)[0],
      (array__165722 *) &(*Message_In)[0]);
  }
  kcg_copy_array__166219(&(*Buffer_Out)[4], (array__166219 *) &(*Buffer_In)[0]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferOutput_read_write4_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

