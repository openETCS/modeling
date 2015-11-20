/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSystemNational_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToSystemNational_init_Conditions(outC_ToSystemNational_Conditions *outC)
{
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
  outC->Condition56 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToSystemNational_reset_Conditions(outC_ToSystemNational_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToSystemNational */
void ToSystemNational_Conditions(
  /* Conditions::ToSystemNational::Current_Level */ M_LEVEL Current_Level,
  outC_ToSystemNational_Conditions *outC)
{
  /* Conditions::ToSystemNational::Current_Level */
  static M_LEVEL last_Current_Level;
  /* Conditions::ToSystemNational::_L451 */
  static kcg_bool _L451;
  /* Conditions::ToSystemNational::_L450 */
  static kcg_bool _L450;
  /* Conditions::ToSystemNational::_L441 */
  static M_LEVEL _L441;
  /* Conditions::ToSystemNational::_L439 */
  static M_LEVEL _L439;
  /* Conditions::ToSystemNational::_L454 */
  static kcg_bool _L454;
  /* Conditions::ToSystemNational::_L455 */
  static M_LEVEL _L455;
  /* Conditions::ToSystemNational::_L456 */
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
  _L455 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L454 = _L439 == _L455;
  _L451 = _L454 & _L450;
  outC->Condition56 = _L451;
  outC->rem_Current_Level = Current_Level;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToSystemNational_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

