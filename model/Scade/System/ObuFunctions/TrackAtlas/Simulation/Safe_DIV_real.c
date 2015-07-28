/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Safe_DIV_real.h"

void Safe_DIV_real_reset(outC_Safe_DIV_real *outC)
{
}

/* Safe_DIV_real */
void Safe_DIV_real(
  /* Safe_DIV_real::Dividend */kcg_real Dividend,
  /* Safe_DIV_real::Divisor */kcg_real Divisor,
  outC_Safe_DIV_real *outC)
{
  outC->_L9 = - 1.0;
  outC->_L2 = Divisor;
  outC->_L5 = 0.0;
  outC->_L4 = outC->_L2 == outC->_L5;
  outC->_L1 = Dividend;
  outC->_L7 = 1.0;
  if (outC->_L4) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L2;
  }
  outC->_L3 = outC->_L1 / outC->_L6;
  if (outC->_L4) {
    outC->_L8 = outC->_L9;
  }
  else {
    outC->_L8 = outC->_L3;
  }
  outC->Div0 = outC->_L4;
  outC->Result = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Safe_DIV_real.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

