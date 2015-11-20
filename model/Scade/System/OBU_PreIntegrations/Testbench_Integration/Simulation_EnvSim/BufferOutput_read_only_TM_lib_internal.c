/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_only_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_only */
void BufferOutput_read_only_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_only::Buffer_In */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_only::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_only::Message_In */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_only::Buffer_Out */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_only::Stacksize_new */kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_only::Message_out */M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_only::_L9 */
  static kcg_int _L9;
  
  _L9 = Stacksize_old - 1;
  if (_L9 < 0) {
    *Stacksize_new = 0;
  }
  else {
    *Stacksize_new = _L9;
  }
  kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
    Buffer_Out,
    Buffer_In);
  if ((0 <= *Stacksize_new) & (*Stacksize_new < 100)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &(*Buffer_Out)[*Stacksize_new],
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      &(*Buffer_In)[*Stacksize_new]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &EMPTY_TrainTrackMessage_TM_lib_internal);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferOutput_read_only_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

