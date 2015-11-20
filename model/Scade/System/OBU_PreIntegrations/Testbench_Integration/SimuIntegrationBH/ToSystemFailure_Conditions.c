/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSystemFailure_Conditions.h"

/* Conditions::ToSystemFailure */
kcg_bool ToSystemFailure_Conditions(
  /* Conditions::ToSystemFailure::Safety_Failure_Occured */ kcg_bool Safety_Failure_Occured)
{
  /* Conditions::ToSystemFailure::_L1 */
  static kcg_bool _L1;
  /* Conditions::ToSystemFailure::Condition13 */
  static kcg_bool Condition13;
  
  _L1 = Safety_Failure_Occured;
  Condition13 = _L1;
  return Condition13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToSystemFailure_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

