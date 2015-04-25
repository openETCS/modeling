/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlipFlopJK_digital.h"

void FlipFlopJK_init_digital(outC_FlipFlopJK_digital *outC)
{
  outC->init = kcg_true;
  outC->FFJK_Output = kcg_true;
}


void FlipFlopJK_reset_digital(outC_FlipFlopJK_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::FlipFlopJK */
void FlipFlopJK_digital(
  /* digital::FlipFlopJK::Set */ kcg_bool Set,
  /* digital::FlipFlopJK::Reset */ kcg_bool Reset,
  /* digital::FlipFlopJK::Init */ kcg_bool Init,
  outC_FlipFlopJK_digital *outC)
{
  if (outC->init) {
    outC->init = kcg_false;
    outC->FFJK_Output = Init;
  }
  else if (Set & Reset) {
    outC->FFJK_Output = !outC->FFJK_Output;
  }
  else {
    outC->FFJK_Output = Set | (!Reset & outC->FFJK_Output);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FlipFlopJK_digital.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

