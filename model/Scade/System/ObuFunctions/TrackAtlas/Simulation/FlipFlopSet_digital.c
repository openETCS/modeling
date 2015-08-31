/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T04:54:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlipFlopSet_digital.h"

void FlipFlopSet_reset_digital(outC_FlipFlopSet_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::FlipFlopSet */
void FlipFlopSet_digital(
  inC_FlipFlopSet_digital *inC,
  outC_FlipFlopSet_digital *outC)
{
  outC->_L5 = inC->Set;
  outC->_L6 = inC->Reset;
  outC->_L11 = !outC->_L6;
  outC->_L4 = outC->_L2;
  outC->_L12 = outC->_L11 & outC->_L4;
  outC->_L13 = outC->_L5 | outC->_L12;
  outC->_L10 = inC->Init;
  if (outC->init) {
    outC->_L2 = outC->_L10;
  }
  else {
    outC->_L2 = outC->_L13;
  }
  outC->FFS_Output = outC->_L2;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlipFlopSet_digital.c
** Generation date: 2015-08-30T04:54:49
*************************************************************$ */

