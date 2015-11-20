/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToIsolate_Conditions.h"

/* Conditions::ToIsolate */
kcg_bool ToIsolate_Conditions(
  /* Conditions::ToIsolate::ETCS_Isolation_Status */ kcg_bool ETCS_Isolation_Status)
{
  /* Conditions::ToIsolate::_L2 */
  static kcg_bool _L2;
  /* Conditions::ToIsolate::Condition1 */
  static kcg_bool Condition1;
  
  _L2 = ETCS_Isolation_Status;
  Condition1 = _L2;
  return Condition1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToIsolate_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

