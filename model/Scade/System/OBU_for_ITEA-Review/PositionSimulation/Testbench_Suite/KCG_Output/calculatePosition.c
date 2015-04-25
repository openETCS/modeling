/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculatePosition.h"

void calculatePosition_init(outC_calculatePosition *outC)
{
  outC->init = kcg_true;
  outC->timestamp = 0;
  outC->velocity = 0.0;
  outC->position = 0.0;
}


void calculatePosition_reset(outC_calculatePosition *outC)
{
  outC->init = kcg_true;
}

/* calculatePosition */
void calculatePosition(
  /* calculatePosition::accelerationPercent */ kcg_real accelerationPercent,
  /* calculatePosition::deltaTime */ kcg_int deltaTime,
  /* calculatePosition::positionIn */ kcg_real positionIn,
  /* calculatePosition::velocityIn */ kcg_real velocityIn,
  outC_calculatePosition *outC)
{
  kcg_int tmp;
  /* calculatePosition::timeInSeconds */ kcg_real timeInSeconds;
  /* calculatePosition::accelerationInm_s_2 */ kcg_real accelerationInm_s_2;
  /* calculatePosition::_L36 */ kcg_real _L36;
  
  accelerationInm_s_2 = accelerationPercent / 100.0 * 0.5;
  timeInSeconds = (kcg_real) deltaTime / 1000.0;
  if ((accelerationInm_s_2 < 0.0) & (velocityIn == 0.0)) {
    outC->position = positionIn;
  }
  else {
    outC->position = accelerationInm_s_2 / 0.5 * timeInSeconds * timeInSeconds +
      velocityIn * timeInSeconds + positionIn;
  }
  _L36 = accelerationInm_s_2 * timeInSeconds + velocityIn;
  if (_L36 >= 0.0) {
    outC->velocity = _L36;
  }
  else {
    outC->velocity = 0.0;
  }
  if (outC->init) {
    outC->init = kcg_false;
    tmp = 0;
  }
  else {
    tmp = outC->timestamp;
  }
  outC->timestamp = deltaTime + tmp;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculatePosition.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

