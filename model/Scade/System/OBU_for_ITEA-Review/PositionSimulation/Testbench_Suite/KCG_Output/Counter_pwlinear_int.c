/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_pwlinear_int.h"

void Counter_init_pwlinear_int(outC_Counter_pwlinear_int *outC)
{
  outC->init = kcg_true;
  outC->Count = 0;
}


void Counter_reset_pwlinear_int(outC_Counter_pwlinear_int *outC)
{
  outC->init = kcg_true;
}

/* pwlinear::Counter */
void Counter_pwlinear_int(
  /* pwlinear::Counter::Incr */ kcg_int Incr,
  /* pwlinear::Counter::Reset */ kcg_bool Reset,
  outC_Counter_pwlinear_int *outC)
{
  kcg_int tmp;
  
  if (Reset) {
    tmp = 0;
  }
  else if (outC->init) {
    tmp = 0;
  }
  else {
    tmp = outC->Count;
  }
  outC->init = kcg_false;
  outC->Count = tmp + Incr;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Counter_pwlinear_int.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

