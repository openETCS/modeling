/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSleeping_Conditions.h"

/* Conditions::ToSleeping */
kcg_bool ToSleeping_Conditions(
  /* Conditions::ToSleeping::All_Desks_Closed */ kcg_bool All_Desks_Closed,
  /* Conditions::ToSleeping::Train_Standstill */ kcg_bool Train_Standstill,
  /* Conditions::ToSleeping::Train_Req_SL */ kcg_bool Train_Req_SL)
{
  /* Conditions::ToSleeping::_L4 */
  static kcg_bool _L4;
  /* Conditions::ToSleeping::_L5 */
  static kcg_bool _L5;
  /* Conditions::ToSleeping::_L6 */
  static kcg_bool _L6;
  /* Conditions::ToSleeping::_L11 */
  static kcg_bool _L11;
  /* Conditions::ToSleeping::Condition14 */
  static kcg_bool Condition14;
  
  _L4 = Train_Standstill;
  _L5 = Train_Req_SL;
  _L11 = All_Desks_Closed;
  _L6 = _L5 & _L4 & _L11;
  Condition14 = _L6;
  return Condition14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToSleeping_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

