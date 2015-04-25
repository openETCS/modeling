/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"

void waitAndRepeatTimer_init_MoRC_Pck_Utils(
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC)
{
  outC->init = kcg_true;
  outC->_L22 = 0;
  outC->elapsed = kcg_true;
  outC->triggerAction = kcg_true;
  countDownTimer_init_MoRC_Pck_Utils(&outC->Context_1);
}


void waitAndRepeatTimer_reset_MoRC_Pck_Utils(
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC)
{
  outC->init = kcg_true;
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}

/* MoRC_Pck::Utils::waitAndRepeatTimer */
void waitAndRepeatTimer_MoRC_Pck_Utils(
  /* MoRC_Pck::Utils::waitAndRepeatTimer::actualTime */ time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::re_start */ kcg_bool re_start,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::stop */ kcg_bool stop,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::repeatInterval */ time_Type_MoRC_Pck repeatInterval,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::maxNoOfRepetitions */ kcg_int maxNoOfRepetitions,
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC)
{
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L9 */ kcg_int _L9;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L14 */ kcg_bool _L14;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L9 = 0;
  }
  else {
    _L9 = outC->_L22;
  }
  outC->elapsed = _L9 >= maxNoOfRepetitions;
  _L14 = !outC->elapsed;
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    re_start,
    stop,
    actualTime,
    kcg_true,
    repeatInterval,
    &outC->Context_1);
  outC->triggerAction = (_L14 & outC->Context_1.expired) | (_L14 &
      outC->Context_1.started);
  if (re_start) {
    outC->_L22 = 0;
  }
  else if (outC->Context_1.expired) {
    outC->_L22 = 1 + _L9;
  }
  else {
    outC->_L22 = _L9;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** waitAndRepeatTimer_MoRC_Pck_Utils.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

