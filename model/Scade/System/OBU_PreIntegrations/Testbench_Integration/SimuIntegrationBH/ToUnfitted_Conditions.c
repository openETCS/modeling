/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToUnfitted_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToUnfitted_init_Conditions(outC_ToUnfitted_Conditions *outC)
{
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
  outC->Condition21 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToUnfitted_reset_Conditions(outC_ToUnfitted_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToUnfitted */
void ToUnfitted_Conditions(
  /* Conditions::ToUnfitted::Current_Level */ M_LEVEL Current_Level,
  outC_ToUnfitted_Conditions *outC)
{
  /* Conditions::ToUnfitted::Current_Level */
  static M_LEVEL last_Current_Level;
  /* Conditions::ToUnfitted::_L451 */
  static kcg_bool _L451;
  /* Conditions::ToUnfitted::_L450 */
  static kcg_bool _L450;
  /* Conditions::ToUnfitted::_L441 */
  static M_LEVEL _L441;
  /* Conditions::ToUnfitted::_L439 */
  static M_LEVEL _L439;
  /* Conditions::ToUnfitted::_L454 */
  static kcg_bool _L454;
  /* Conditions::ToUnfitted::_L455 */
  static M_LEVEL _L455;
  /* Conditions::ToUnfitted::_L456 */
  static M_LEVEL _L456;
  
  _L439 = Current_Level;
  _L441 = Current_Level;
  /* last_init_ck_Current_Level */ if (outC->init) {
    last_Current_Level = M_LEVEL_Level_0;
  }
  else {
    last_Current_Level = outC->rem_Current_Level;
  }
  _L456 = last_Current_Level;
  _L450 = _L441 != _L456;
  _L455 = M_LEVEL_Level_0;
  _L454 = _L439 == _L455;
  _L451 = _L454 & _L450;
  outC->Condition21 = _L451;
  outC->rem_Current_Level = Current_Level;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToUnfitted_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

