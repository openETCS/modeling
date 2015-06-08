/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:04:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RisingEdgeRetrigger_digital.h"

void RisingEdgeRetrigger_reset_digital(outC_RisingEdgeRetrigger_digital *outC)
{
  outC->init = kcg_true;
  /* 11 */ count_down_reset_digital(&outC->Context_11);
}

/* digital::RisingEdgeRetrigger */
void RisingEdgeRetrigger_digital(
  /* digital::RisingEdgeRetrigger::RER_Input */kcg_bool RER_Input,
  /* digital::RisingEdgeRetrigger::NumberOfCycle */kcg_int NumberOfCycle,
  outC_RisingEdgeRetrigger_digital *outC)
{
  kcg_int tmp;
  kcg_int tmp1;
  
  outC->_L50 = 0;
  outC->_L36 = kcg_false;
  if (outC->init) {
    outC->_L39 = outC->_L36;
  }
  else {
    outC->_L39 = outC->_L43;
  }
  outC->_L47 = kcg_false;
  outC->_L13 = RER_Input;
  outC->_L14 = outC->_L31;
  outC->_L16 = outC->_L13 & outC->_L14;
  if (outC->init) {
    outC->_L46 = outC->_L47;
  }
  else {
    outC->_L46 = outC->_L16;
  }
  outC->_L38 = outC->_L39 | outC->_L46;
  outC->tmp = outC->_L38;
  outC->_L41 = NumberOfCycle;
  if (outC->tmp) {
    /* 11 */ count_down_digital(outC->_L46, outC->_L41, &outC->Context_11);
    tmp1 = outC->Context_11.cpt;
    outC->_L48 = tmp1;
  }
  else {
    if (outC->init) {
      tmp = outC->_L50;
    }
    else {
      tmp = outC->_L48;
    }
    outC->_L48 = tmp;
  }
  outC->_L44 = 0;
  outC->_L35 = outC->_L44 < outC->_L48;
  outC->_L43 = outC->_L38 & outC->_L35;
  outC->_L31 = !outC->_L13;
  outC->RER_Output = outC->_L43;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RisingEdgeRetrigger_digital.c
** Generation date: 2015-06-05T13:04:05
*************************************************************$ */

