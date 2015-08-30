/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Safe_MOD_int.h"

void Safe_MOD_int_reset(outC_Safe_MOD_int *outC)
{
}

/* Safe_MOD_int */
void Safe_MOD_int(
  /* Safe_MOD_int::Dividend */kcg_int Dividend,
  /* Safe_MOD_int::Divisor */kcg_int Divisor,
  outC_Safe_MOD_int *outC)
{
  outC->_L9 = - 1;
  outC->_L2 = Divisor;
  outC->_L5 = 0;
  outC->_L4 = outC->_L2 == outC->_L5;
  outC->_L1 = Dividend;
  outC->_L7 = 1;
  if (outC->_L4) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L2;
  }
  outC->_L3 = outC->_L1 % outC->_L6;
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
** Safe_MOD_int.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

