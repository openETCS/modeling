/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlipFlopJK_digital.h"

#ifndef KCG_USER_DEFINED_INIT
void FlipFlopJK_init_digital(outC_FlipFlopJK_digital *outC)
{
  outC->init = kcg_true;
  outC->_L2 = kcg_true;
  outC->FFJK_Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FlipFlopJK_reset_digital(outC_FlipFlopJK_digital *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* digital::FlipFlopJK */
void FlipFlopJK_digital(
  /* digital::FlipFlopJK::Set */ kcg_bool Set,
  /* digital::FlipFlopJK::Reset */ kcg_bool Reset,
  /* digital::FlipFlopJK::Init */ kcg_bool Init,
  outC_FlipFlopJK_digital *outC)
{
  /* digital::FlipFlopJK::_L10 */
  static kcg_bool _L10;
  /* digital::FlipFlopJK::_L11 */
  static kcg_bool _L11;
  /* digital::FlipFlopJK::_L12 */
  static kcg_bool _L12;
  /* digital::FlipFlopJK::_L4 */
  static kcg_bool _L4;
  /* digital::FlipFlopJK::_L5 */
  static kcg_bool _L5;
  /* digital::FlipFlopJK::_L6 */
  static kcg_bool _L6;
  /* digital::FlipFlopJK::_L9 */
  static kcg_bool _L9;
  /* digital::FlipFlopJK::_L18 */
  static kcg_bool _L18;
  /* digital::FlipFlopJK::_L20 */
  static kcg_bool _L20;
  /* digital::FlipFlopJK::_L21 */
  static kcg_bool _L21;
  
  _L4 = outC->_L2;
  _L9 = Init;
  _L5 = Set;
  _L6 = Reset;
  _L12 = _L5 & _L6;
  _L11 = !_L4;
  _L20 = !_L6;
  _L21 = _L20 & _L4;
  _L18 = _L5 | _L21;
  /* 5 */ if (_L12) {
    _L10 = _L11;
  }
  else {
    _L10 = _L18;
  }
  /* 1 */ if (outC->init) {
    outC->_L2 = _L9;
  }
  else {
    outC->_L2 = _L10;
  }
  outC->FFJK_Output = outC->_L2;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FlipFlopJK_digital.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

