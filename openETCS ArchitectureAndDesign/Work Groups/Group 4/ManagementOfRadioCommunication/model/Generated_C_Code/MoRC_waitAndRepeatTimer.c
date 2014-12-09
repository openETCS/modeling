/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_waitAndRepeatTimer.h"

void MoRC_waitAndRepeatTimer_init(MoRC_outC_waitAndRepeatTimer *outC)
{
  outC->init = kcg_true;
  outC->_L22 = 0;
  outC->elapsed = kcg_true;
  outC->triggerAction = kcg_true;
  MoRC_countDownTimer_init(&outC->Context_1);
}


void MoRC_waitAndRepeatTimer_reset(MoRC_outC_waitAndRepeatTimer *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_countDownTimer_reset(&outC->Context_1);
}

/* waitAndRepeatTimer */
void MoRC_waitAndRepeatTimer(
  /* waitAndRepeatTimer::actualTime */ MoRC_time_Type actualTime,
  /* waitAndRepeatTimer::re_start */ kcg_bool re_start,
  /* waitAndRepeatTimer::stop */ kcg_bool stop,
  /* waitAndRepeatTimer::repeatInterval */ MoRC_time_Type repeatInterval,
  /* waitAndRepeatTimer::maxNoOfRepetitions */ kcg_int maxNoOfRepetitions,
  MoRC_outC_waitAndRepeatTimer *outC)
{
  /* waitAndRepeatTimer::_L9 */ kcg_int _L9;
  /* waitAndRepeatTimer::_L14 */ kcg_bool _L14;
  
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
  MoRC_countDownTimer(
    re_start,
    stop,
    actualTime,
    kcg_true,
    repeatInterval,
    &outC->Context_1);
  outC->triggerAction = (_L14 && outC->Context_1.expired) || (_L14 &&
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

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_waitAndRepeatTimer.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

