/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EitherEdge_digital.h"

void EitherEdge_init_digital(outC_EitherEdge_digital *outC)
{
  outC->init = kcg_true;
  outC->rem_EE_Input = kcg_true;
  outC->EE_Output = kcg_true;
}


void EitherEdge_reset_digital(outC_EitherEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::EitherEdge */
void EitherEdge_digital(
  /* digital::EitherEdge::EE_Input */ kcg_bool EE_Input,
  outC_EitherEdge_digital *outC)
{
  kcg_bool tmp;
  
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** EitherEdge_digital.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

