/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToNonLeading_Conditions.h"

/* Conditions::ToNonLeading */
kcg_bool ToNonLeading_Conditions(
  /* Conditions::ToNonLeading::Train_Permitted_NL */ kcg_bool Train_Permitted_NL,
  /* Conditions::ToNonLeading::Train_Standstill */ kcg_bool Train_Standstill,
  /* Conditions::ToNonLeading::Driver_Req_NL */ kcg_bool Driver_Req_NL)
{
  /* Conditions::ToNonLeading::_L4 */
  static kcg_bool _L4;
  /* Conditions::ToNonLeading::_L5 */
  static kcg_bool _L5;
  /* Conditions::ToNonLeading::_L6 */
  static kcg_bool _L6;
  /* Conditions::ToNonLeading::_L11 */
  static kcg_bool _L11;
  /* Conditions::ToNonLeading::Condition46 */
  static kcg_bool Condition46;
  
  _L4 = Train_Standstill;
  _L5 = Driver_Req_NL;
  _L11 = Train_Permitted_NL;
  _L6 = _L5 & _L4 & _L11;
  Condition46 = _L6;
  return Condition46;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToNonLeading_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

