/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_pwlinear_int.h"

#ifndef KCG_USER_DEFINED_INIT
void Counter_init_pwlinear_int(outC_Counter_pwlinear_int *outC)
{
  outC->init = kcg_true;
  outC->_L9 = 0;
  outC->Count = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


void Counter_reset_pwlinear_int(outC_Counter_pwlinear_int *outC)
{
  outC->init = kcg_true;
}

/* pwlinear::Counter */
void Counter_pwlinear_int(
  /* pwlinear::Counter::Incr */ kcg_int Incr,
  /* pwlinear::Counter::Reset */ kcg_bool Reset,
  outC_Counter_pwlinear_int *outC)
{
  /* pwlinear::Counter::_L2 */
  static kcg_int _L2;
  /* pwlinear::Counter::_L3 */
  static kcg_bool _L3;
  /* pwlinear::Counter::_L4 */
  static kcg_int _L4;
  /* pwlinear::Counter::_L18 */
  static kcg_int _L18;
  /* pwlinear::Counter::_L46 */
  static kcg_int _L46;
  
  _L2 = Incr;
  _L3 = Reset;
  _L46 = 0;
  /* fby_1_init_5 */ if (outC->init) {
    _L18 = _L46;
  }
  else {
    _L18 = outC->_L9;
  }
  /* 1 */ if (_L3) {
    _L4 = _L46;
  }
  else {
    _L4 = _L18;
  }
  outC->_L9 = _L4 + _L2;
  outC->Count = outC->_L9;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Counter_pwlinear_int.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

