/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/prova/KCG\kcg_s2c_config.txt
** Generation date: 2014-04-14T14:16:45
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
  if (outC->init) {
    outC->Output1 = 0;
  }
  else {
    outC->Output1 = inC->Input1 + inC->Input2;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ciao.c
** Generation date: 2014-04-14T14:16:45
*************************************************************$ */

