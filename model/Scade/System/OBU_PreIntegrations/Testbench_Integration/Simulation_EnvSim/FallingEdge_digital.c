/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FallingEdge_digital.h"

void FallingEdge_reset_digital(outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::FallingEdge */
void FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */kcg_bool FE_Input,
  outC_FallingEdge_digital *outC)
{
  static kcg_bool tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = FE_Input;
  }
  else {
    tmp = outC->rem_FE_Input;
  }
  outC->FE_Output = tmp & !FE_Input;
  outC->rem_FE_Input = FE_Input;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FallingEdge_digital.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

