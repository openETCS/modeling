/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_write_only_TM_lib_internal.h"

/* TM_lib_internal::BufferMsg_write_only */
void BufferMsg_write_only_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_write_only::Buffer_In */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_write_only::Message_In */M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  /* TM_lib_internal::BufferMsg_write_only::Buffer_Out */M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_new */kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_write_only::Message_out */M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferMsg_write_only::_L7 */
  static kcg_int _L7;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    Message_out,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  _L7 = Stacksize_old + 1;
  if (_L7 > DIM_FIFO_TrainTrackMessage_TM_lib_internal) {
    *Stacksize_new = DIM_FIFO_TrainTrackMessage_TM_lib_internal;
  }
  else {
    *Stacksize_new = _L7;
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &(&(*Buffer_Out)[0])[0],
    Message_In);
  kcg_copy_array__165722(&(*Buffer_Out)[1], (array__165722 *) &(*Buffer_In)[0]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_write_only_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

