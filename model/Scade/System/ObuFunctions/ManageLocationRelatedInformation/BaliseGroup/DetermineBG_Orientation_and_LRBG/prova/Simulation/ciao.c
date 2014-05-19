/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/prova/Simulation\kcg_s2c_config.txt
** Generation date: 2014-04-14T14:18:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ciao.h"

void ciao_reset(outC_ciao *outC)
{
  outC->init = kcg_true;
}

/* ciao */
void ciao(inC_ciao *inC, outC_ciao *outC)
{
  /* ciao::Output1 */ kcg_int last_Output1;
  
  if (outC->init) {
    last_Output1 = 0;
  }
  else {
    last_Output1 = outC->Output1;
  }
  outC->_L1 = inC->Input1;
  outC->_L2 = inC->Input2;
  outC->_L3 = outC->_L1 + outC->_L2;
  if (outC->init) {
    outC->_L5 = 0;
  }
  else {
    outC->_L5 = outC->_L3;
  }
  outC->Output1 = outC->_L5;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ciao.c
** Generation date: 2014-04-14T14:18:48
*************************************************************$ */

