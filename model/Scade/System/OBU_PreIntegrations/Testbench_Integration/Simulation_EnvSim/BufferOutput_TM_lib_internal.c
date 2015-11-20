/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_TM_lib_internal.h"

void BufferOutput_reset_TM_lib_internal(outC_BufferOutput_TM_lib_internal *outC)
{
  outC->init = kcg_true;
}

/* TM_lib_internal::BufferOutput */
void BufferOutput_TM_lib_internal(
  /* TM_lib_internal::BufferOutput::In */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *In,
  /* TM_lib_internal::BufferOutput::Write */kcg_bool Write,
  outC_BufferOutput_TM_lib_internal *outC)
{
  /* TM_lib_internal::BufferOutput::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput::stacksize */
  static kcg_int last_stacksize;
  /* TM_lib_internal::BufferOutput::buffer */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal last_buffer;
  /* TM_lib_internal::BufferOutput::c_r */
  static kcg_bool c_r;
  /* TM_lib_internal::BufferOutput::bussize */
  static kcg_int bussize;
  /* TM_lib_internal::BufferOutput::_L19 */
  static kcg_bool _L19;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_stacksize = 0;
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &last_buffer,
      (M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *)
        &DEFAULT_output_buffer_TM_lib_internal);
  }
  else {
    last_stacksize = outC->stacksize;
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &last_buffer,
      &outC->buffer);
  }
  /* 2 */ CheckSpace_TM_TrainTrack_Bus(In, &_L19, &bussize);
  _L19 = bussize > 0;
  c_r = !_L19 & Write;
  if (c_r) {
    /* 1 */
    BufferOutput_read_only_TM_lib_internal(
      &last_buffer,
      last_stacksize,
      In,
      &outC->buffer,
      &outC->stacksize,
      &outC->Out);
  }
  else {
    _1_else_clock_IfBlock1 = Write & _L19;
    if (_1_else_clock_IfBlock1) {
      /* 1 */
      BufferOutput_read_write_TM_lib_internal(
        &last_buffer,
        last_stacksize,
        In,
        bussize,
        &outC->buffer,
        &outC->stacksize,
        &outC->Out);
    }
    else {
      else_clock_IfBlock1 = !Write & _L19;
      if (else_clock_IfBlock1) {
        /* 1 */
        BufferOutput_write_only_TM_lib_internal(
          &last_buffer,
          last_stacksize,
          In,
          bussize,
          &outC->buffer,
          &outC->stacksize,
          &outC->Out);
      }
      else {
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &outC->Out,
          (M_TrainTrack_Message_T_TM_radio_messages *)
            &EMPTY_TrainTrackMessage_TM_lib_internal);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &outC->buffer,
          &last_buffer);
        outC->stacksize = last_stacksize;
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferOutput_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

