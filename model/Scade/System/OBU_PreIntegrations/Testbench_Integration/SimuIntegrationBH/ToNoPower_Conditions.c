/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToNoPower_Conditions.h"

/* Conditions::ToNoPower */
kcg_bool ToNoPower_Conditions(
  /* Conditions::ToNoPower::OnBoard_Powered */ kcg_bool OnBoard_Powered)
{
  /* Conditions::ToNoPower::_L1 */
  static kcg_bool _L1;
  /* Conditions::ToNoPower::_L2 */
  static kcg_bool _L2;
  /* Conditions::ToNoPower::Condition29 */
  static kcg_bool Condition29;
  
  _L1 = OnBoard_Powered;
  _L2 = !_L1;
  Condition29 = _L2;
  return Condition29;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToNoPower_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

