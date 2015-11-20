/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FallingEdge_digital.h"

#ifndef KCG_USER_DEFINED_INIT
void FallingEdge_init_digital(outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
  outC->rem__L1 = kcg_true;
  outC->FE_Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FallingEdge_reset_digital(outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* digital::FallingEdge */
void FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */ kcg_bool FE_Input,
  outC_FallingEdge_digital *outC)
{
  /* digital::FallingEdge::_L1 */
  static kcg_bool _L1;
  /* digital::FallingEdge::_L3 */
  static kcg_bool _L3;
  /* digital::FallingEdge::_L4 */
  static kcg_bool _L4;
  /* digital::FallingEdge::_L5 */
  static kcg_bool _L5;
  
  _L1 = FE_Input;
  /* fby_1_init_2 */ if (outC->init) {
    _L4 = _L1;
  }
  else {
    _L4 = outC->rem__L1;
  }
  _L5 = !_L1;
  _L3 = _L4 & _L5;
  outC->FE_Output = _L3;
  outC->rem__L1 = _L1;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FallingEdge_digital.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

