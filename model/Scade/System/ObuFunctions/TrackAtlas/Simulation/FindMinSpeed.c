/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindMinSpeed.h"

void FindMinSpeed_reset(outC_FindMinSpeed *outC)
{
}

/* FindMinSpeed */
void FindMinSpeed(
  /* FindMinSpeed::Speed_In */SSP_s_section_t Speed_In,
  /* FindMinSpeed::Speed_Sectiom */SSP_s_section_t Speed_Sectiom,
  outC_FindMinSpeed *outC)
{
  outC->_L2 = Speed_Sectiom;
  outC->I2_1 = outC->_L2;
  outC->_L1 = Speed_In;
  outC->I1_1 = outC->_L1;
  outC->_L21_1 = outC->I1_1;
  outC->_L22_1 = outC->I2_1;
  outC->_L25_1 = outC->_L21_1 <= outC->_L22_1;
  if (outC->_L25_1) {
    outC->_L24_1 = outC->_L21_1;
  }
  else {
    outC->_L24_1 = outC->_L22_1;
  }
  outC->Mi_Output_1 = outC->_L24_1;
  outC->_L3 = outC->Mi_Output_1;
  outC->SpeedOut = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindMinSpeed.c
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

