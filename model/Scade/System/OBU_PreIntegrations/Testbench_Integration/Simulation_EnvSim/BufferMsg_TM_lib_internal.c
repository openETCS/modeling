/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_TM_lib_internal.h"

void BufferMsg_reset_TM_lib_internal(outC_BufferMsg_TM_lib_internal *outC)
{
  outC->init = kcg_true;
}

/* TM_lib_internal::BufferMsg */
void BufferMsg_TM_lib_internal(
  /* TM_lib_internal::BufferMsg::In */M_TrainTrack_Message_T_TM_radio_messages *In,
  /* TM_lib_internal::BufferMsg::Write */kcg_bool Write,
  outC_BufferMsg_TM_lib_internal *outC)
{
  /* TM_lib_internal::BufferMsg::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_lib_internal::BufferMsg::stacksize */
  static kcg_int last_stacksize;
  /* TM_lib_internal::BufferMsg::buffer */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal last_buffer;
  /* TM_lib_internal::BufferMsg::c_r */
  static kcg_bool c_r;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_stacksize = 0;
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &last_buffer,
      (M_TrainTrackMessage_buffer_t_TM_lib_internal *)
        &DEFAULT_M_TrainTrackMessage_buffer_TM_lib_internal);
  }
  else {
    last_stacksize = outC->stacksize;
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &last_buffer,
      &outC->buffer);
  }
  c_r = !(*In).Message.valid & Write;
  if (c_r) {
    /* 1 */
    BufferMsg_read_only_TM_lib_internal(
      &last_buffer,
      last_stacksize,
      In,
      &outC->buffer,
      &outC->stacksize,
      &outC->Out);
  }
  else {
    _1_else_clock_IfBlock1 = (*In).Message.valid & Write;
    if (_1_else_clock_IfBlock1) {
      /* 1 */
      BufferMsg_read_write_TM_lib_internal(
        &last_buffer,
        last_stacksize,
        In,
        &outC->buffer,
        &outC->stacksize,
        &outC->Out);
    }
    else {
      else_clock_IfBlock1 = !Write & (*In).Message.valid;
      if (else_clock_IfBlock1) {
        /* 1 */
        BufferMsg_write_only_TM_lib_internal(
          &last_buffer,
          last_stacksize,
          In,
          &outC->buffer,
          &outC->stacksize,
          &outC->Out);
      }
      else {
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, In);
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &outC->buffer,
          &last_buffer);
        outC->stacksize = last_stacksize;
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferMsg_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

