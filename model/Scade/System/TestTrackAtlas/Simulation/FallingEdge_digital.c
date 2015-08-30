/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
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
  outC->_L1 = FE_Input;
  outC->_L5 = !outC->_L1;
  if (outC->init) {
    outC->_L4 = outC->_L1;
  }
  else {
    outC->_L4 = outC->rem__L1;
  }
  outC->_L3 = outC->_L4 & outC->_L5;
  outC->FE_Output = outC->_L3;
  outC->rem__L1 = outC->_L1;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FallingEdge_digital.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

