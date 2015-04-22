/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-22T00:28:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DRAFT_test_numeric.h"

void DRAFT_test_numeric_reset(outC_DRAFT_test_numeric *outC)
{
}

/* DRAFT_test_numeric */
void DRAFT_test_numeric(
  inC_DRAFT_test_numeric *inC,
  outC_DRAFT_test_numeric *outC)
{
  kcg_int noname;
  
  outC->_L7 = DIM_TM_nvkvintsetarray;
  noname = outC->_L7;
  outC->_L6 = 25;
  outC->_L5 = inC->In;
  outC->_L4 = outC->_L5 % outC->_L6;
  outC->MOD = outC->_L4;
  outC->_L3 = 25;
  outC->_L1 = inC->In;
  outC->_L2 = outC->_L1 / outC->_L3;
  outC->DIV = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DRAFT_test_numeric.c
** Generation date: 2015-04-22T00:28:15
*************************************************************$ */

