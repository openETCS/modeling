/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "waitAndRepeatTimer_MoRC_Pck_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void waitAndRepeatTimer_init_MoRC_Pck_Utils(
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC)
{
  outC->init = kcg_true;
  outC->_L22 = 0;
  outC->elapsed = kcg_true;
  outC->triggerAction = kcg_true;
  /* 1 */ countDownTimer_init_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


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
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L1 */
  static kcg_bool _L1;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L3 */
  static time_Type_MoRC_Pck _L3;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L4 */
  static kcg_bool _L4;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L5 */
  static time_Type_MoRC_Pck _L5;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L6 */
  static kcg_int _L6;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L7 */
  static kcg_int _L7;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L8 */
  static kcg_int _L8;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L9 */
  static kcg_int _L9;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L10 */
  static kcg_bool _L10;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L11 */
  static kcg_int _L11;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L14 */
  static kcg_bool _L14;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L15 */
  static kcg_bool _L15;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L21 */
  static kcg_bool _L21;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L23 */
  static kcg_int _L23;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L24 */
  static kcg_bool _L24;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L25 */
  static kcg_bool _L25;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L27 */
  static kcg_bool _L27;
  /* MoRC_Pck::Utils::waitAndRepeatTimer::_L28 */
  static kcg_bool _L28;
  
  _L21 = re_start;
  _L24 = stop;
  _L3 = actualTime;
  _L4 = kcg_true;
  _L5 = repeatInterval;
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(_L21, _L24, _L3, _L4, _L5, &outC->Context_1);
  _L1 = outC->Context_1.expired;
  _L27 = outC->Context_1.started;
  _L7 = 1;
  /* fby_1_init_1 */ if (outC->init) {
    _L9 = 0;
  }
  else {
    _L9 = outC->_L22;
  }
  _L6 = _L7 + _L9;
  /* 1 */ if (_L1) {
    _L8 = _L6;
  }
  else {
    _L8 = _L9;
  }
  _L11 = maxNoOfRepetitions;
  _L10 = _L9 >= _L11;
  outC->elapsed = _L10;
  _L14 = !_L10;
  _L15 = _L14 & _L1;
  _L28 = _L14 & _L27;
  _L25 = _L15 | _L28;
  outC->triggerAction = _L25;
  _L23 = 0;
  /* 2 */ if (_L21) {
    outC->_L22 = _L23;
  }
  else {
    outC->_L22 = _L8;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** waitAndRepeatTimer_MoRC_Pck_Utils.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

