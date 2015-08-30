/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T04:52:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlipFlopReset_digital.h"

void FlipFlopReset_reset_digital(outC_FlipFlopReset_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::FlipFlopReset */
void FlipFlopReset_digital(
  inC_FlipFlopReset_digital *inC,
  outC_FlipFlopReset_digital *outC)
{
  outC->_L8 = inC->Reset;
  outC->_L12 = !outC->_L8;
  outC->_L7 = inC->Set;
  outC->_L4 = outC->_L2;
  outC->_L11 = outC->_L7 | outC->_L4;
  outC->_L14 = outC->_L12 & outC->_L11;
  outC->_L10 = inC->Init;
  if (outC->init) {
    outC->_L2 = outC->_L10;
  }
  else {
    outC->_L2 = outC->_L14;
  }
  outC->FFR_Output = outC->_L2;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlipFlopReset_digital.c
** Generation date: 2015-08-30T04:52:33
*************************************************************$ */

