/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DIV_real_XCP_numeric.h"

void DIV_real_reset_XCP_numeric(outC_DIV_real_XCP_numeric *outC)
{
}

/* XCP_numeric::DIV_real */
void DIV_real_XCP_numeric(
  /* XCP_numeric::DIV_real::Dividend */kcg_real Dividend,
  /* XCP_numeric::DIV_real::Divisor */kcg_real Divisor,
  /* XCP_numeric::DIV_real::Default */kcg_real Default,
  outC_DIV_real_XCP_numeric *outC)
{
  kcg_bool tmp;
  
  outC->_L5 = Divisor;
  outC->_L6 = ZERO_real_XCP_numeric;
  outC->_L7 = outC->_L5 == outC->_L6;
  outC->_L8 = !outC->_L7;
  outC->Exception = outC->_L7;
  tmp = outC->_L8;
  outC->_L1 = Dividend;
  outC->_L2 = Divisor;
  outC->_L3 = Default;
  if (tmp) {
    outC->_L4 = outC->_L1 / outC->_L2;
  }
  else {
    outC->_L4 = outC->_L3;
  }
  outC->Result = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DIV_real_XCP_numeric.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

