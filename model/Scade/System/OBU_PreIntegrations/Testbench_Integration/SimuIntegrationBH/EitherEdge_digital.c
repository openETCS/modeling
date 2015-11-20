/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EitherEdge_digital.h"

#ifndef KCG_USER_DEFINED_INIT
void EitherEdge_init_digital(outC_EitherEdge_digital *outC)
{
  outC->init = kcg_true;
  outC->rem__L1 = kcg_true;
  outC->EE_Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EitherEdge_reset_digital(outC_EitherEdge_digital *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* digital::EitherEdge */
void EitherEdge_digital(
  /* digital::EitherEdge::EE_Input */ kcg_bool EE_Input,
  outC_EitherEdge_digital *outC)
{
  /* digital::EitherEdge::_L1 */
  static kcg_bool _L1;
  /* digital::EitherEdge::_L3 */
  static kcg_bool _L3;
  /* digital::EitherEdge::_L4 */
  static kcg_bool _L4;
  
  _L1 = EE_Input;
  /* fby_1_init_2 */ if (outC->init) {
    _L4 = _L1;
  }
  else {
    _L4 = outC->rem__L1;
  }
  _L3 = _L4 ^ _L1;
  outC->EE_Output = _L3;
  outC->rem__L1 = _L1;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EitherEdge_digital.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

