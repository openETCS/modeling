/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EitherEdge_digital.h"

void EitherEdge_reset_digital(outC_EitherEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::EitherEdge */
void EitherEdge_digital(
  /* digital::EitherEdge::EE_Input */kcg_bool EE_Input,
  outC_EitherEdge_digital *outC)
{
  static kcg_bool tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = EE_Input;
  }
  else {
    tmp = outC->rem_EE_Input;
  }
  outC->EE_Output = tmp ^ EE_Input;
  outC->rem_EE_Input = EE_Input;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EitherEdge_digital.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

