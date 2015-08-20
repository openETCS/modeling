/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ClockCounter_pwlinear.h"

void ClockCounter_reset_pwlinear(outC_ClockCounter_pwlinear *outC)
{
  outC->init = kcg_true;
}

/* pwlinear::ClockCounter */
void ClockCounter_pwlinear(
  /* pwlinear::ClockCounter::Reset */kcg_bool Reset,
  outC_ClockCounter_pwlinear *outC)
{
  outC->_L16 = 0;
  outC->_L13 = Reset;
  outC->_L11 = 0;
  outC->_L6 = outC->_L1;
  outC->_L8 = 1;
  outC->_L7 = outC->_L8 + outC->_L6;
  if (outC->_L13) {
    outC->_L2 = outC->_L16;
  }
  else {
    outC->_L2 = outC->_L7;
  }
  if (outC->init) {
    outC->_L1 = outC->_L11;
  }
  else {
    outC->_L1 = outC->_L2;
  }
  outC->Count = outC->_L1;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ClockCounter_pwlinear.c
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

