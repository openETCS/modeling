/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RisingEdge_digital.h"

#ifndef KCG_USER_DEFINED_INIT
void RisingEdge_init_digital(outC_RisingEdge_digital *outC)
{
  outC->init = kcg_true;
  outC->rem__L1 = kcg_true;
  outC->RE_Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void RisingEdge_reset_digital(outC_RisingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::RisingEdge */
void RisingEdge_digital(
  /* digital::RisingEdge::RE_Input */ kcg_bool RE_Input,
  outC_RisingEdge_digital *outC)
{
  /* digital::RisingEdge::_L1 */
  static kcg_bool _L1;
  /* digital::RisingEdge::_L6 */
  static kcg_bool _L6;
  /* digital::RisingEdge::_L3 */
  static kcg_bool _L3;
  /* digital::RisingEdge::_L8 */
  static kcg_bool _L8;
  
  _L1 = RE_Input;
  /* fby_1_init_1 */ if (outC->init) {
    _L3 = _L1;
  }
  else {
    _L3 = outC->rem__L1;
  }
  _L8 = !_L3;
  _L6 = _L8 & _L1;
  outC->RE_Output = _L6;
  outC->rem__L1 = _L1;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RisingEdge_digital.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

