/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FallingEdge_digital.h"

void FallingEdge_init_digital(outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
  outC->rem_FE_Input = kcg_true;
  outC->FE_Output = kcg_true;
}


void FallingEdge_reset_digital(outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::FallingEdge */
void FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */ kcg_bool FE_Input,
  outC_FallingEdge_digital *outC)
{
  kcg_bool tmp;
  
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FallingEdge_digital.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

