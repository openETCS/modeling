/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_write_only_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_write_only */
void BufferOutput_write_only_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_write_only::Buffer_In */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_write_only::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_write_only::Message_In */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_write_only::Bus_Size */kcg_int Bus_Size,
  /* TM_lib_internal::BufferOutput_write_only::Buffer_Out */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_write_only::Stacksize_new */kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_write_only::Message_out */M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_write_only::IfBlock1::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput_write_only::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput_write_only::IfBlock1::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput_write_only::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = Bus_Size == 1;
  if (IfBlock1_clock) {
    /* 1 */
    BufferOutput_write_only1_TM_lib_internal(
      Buffer_In,
      Stacksize_old,
      Message_In,
      Buffer_Out,
      Stacksize_new,
      Message_out);
  }
  else {
    _2_else_clock_IfBlock1 = Bus_Size == 2;
    if (_2_else_clock_IfBlock1) {
      /* 1 */
      BufferOutput_write_only2_TM_lib_internal(
        Buffer_In,
        Stacksize_old,
        Message_In,
        Buffer_Out,
        Stacksize_new,
        Message_out);
    }
    else {
      _1_else_clock_IfBlock1 = Bus_Size == 3;
      if (_1_else_clock_IfBlock1) {
        /* 1 */
        BufferOutput_write_only3_TM_lib_internal(
          Buffer_In,
          Stacksize_old,
          Message_In,
          Buffer_Out,
          Stacksize_new,
          Message_out);
      }
      else {
        else_clock_IfBlock1 = Bus_Size == 4;
        if (else_clock_IfBlock1) {
          /* 1 */
          BufferOutput_write_only4_TM_lib_internal(
            Buffer_In,
            Stacksize_old,
            Message_In,
            Buffer_Out,
            Stacksize_new,
            Message_out);
        }
        else {
          /* 1 */
          BufferOutput_write_only5_TM_lib_internal(
            Buffer_In,
            Stacksize_old,
            Message_In,
            Buffer_Out,
            Stacksize_new,
            Message_out);
        }
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferOutput_write_only_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

