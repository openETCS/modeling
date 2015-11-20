/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_InformationFilter_Pkg.h"

void TransitionBuffer_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
}

/* InformationFilter_Pkg::TransitionBuffer */
void TransitionBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer::In */ReceivedMessage_T_Common_Types_Pkg *In,
  /* InformationFilter_Pkg::TransitionBuffer::Write */kcg_bool Write,
  /* InformationFilter_Pkg::TransitionBuffer::Reset */kcg_bool Reset,
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::buffer */
  static TransitionBuffer_T_InformationFilter_Pkg last_buffer;
  /* InformationFilter_Pkg::TransitionBuffer::stacksize */
  static kcg_int last_stacksize;
  /* InformationFilter_Pkg::TransitionBuffer::c_r */
  static kcg_bool c_r;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &last_buffer,
      (TransitionBuffer_T_InformationFilter_Pkg *)
        &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
    last_stacksize = 0;
  }
  else {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &last_buffer,
      &outC->buffer);
    last_stacksize = outC->outStacksize;
  }
  c_r = !(*In).valid & Write;
  if (c_r) {
    /* 2 */
    TransitionBuffer_read_only_InformationFilter_Pkg(
      &last_buffer,
      last_stacksize,
      In,
      Reset,
      &outC->buffer,
      &outC->outStacksize,
      &outC->Out);
  }
  else {
    _1_else_clock_IfBlock1 = (*In).valid & Write;
    if (_1_else_clock_IfBlock1) {
      /* 1 */
      TransitionBuffer_read_write_InformationFilter_Pkg(
        &last_buffer,
        last_stacksize,
        In,
        Reset,
        &outC->buffer,
        &outC->outStacksize,
        &outC->Out);
    }
    else {
      else_clock_IfBlock1 = !Write & (*In).valid;
      if (else_clock_IfBlock1) {
        /* 1 */
        TransitionBuffer_write_only_InformationFilter_Pkg(
          &last_buffer,
          last_stacksize,
          In,
          Reset,
          &outC->buffer,
          &outC->outStacksize,
          &outC->Out);
      }
      else {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->Out, In);
        if (Reset) {
          outC->outStacksize = 0;
          kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
            &outC->buffer,
            (TransitionBuffer_T_InformationFilter_Pkg *)
              &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
        }
        else {
          outC->outStacksize = last_stacksize;
          kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
            &outC->buffer,
            &last_buffer);
        }
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransitionBuffer_InformationFilter_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

