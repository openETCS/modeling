/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToPassiveShunting_Conditions.h"

/* Conditions::ToPassiveShunting */
kcg_bool ToPassiveShunting_Conditions(
  /* Conditions::ToPassiveShunting::Train_Permitted_PS */ kcg_bool Train_Permitted_PS,
  /* Conditions::ToPassiveShunting::Continue_Shunting_Function_Active */ kcg_bool Continue_Shunting_Function_Active,
  /* Conditions::ToPassiveShunting::Desks_Closed */ kcg_bool Desks_Closed)
{
  /* Conditions::ToPassiveShunting::_L1 */
  static kcg_bool _L1;
  /* Conditions::ToPassiveShunting::_L2 */
  static kcg_bool _L2;
  /* Conditions::ToPassiveShunting::_L3 */
  static kcg_bool _L3;
  /* Conditions::ToPassiveShunting::_L4 */
  static kcg_bool _L4;
  /* Conditions::ToPassiveShunting::Condition26 */
  static kcg_bool Condition26;
  
  _L1 = Train_Permitted_PS;
  _L2 = Continue_Shunting_Function_Active;
  _L3 = Desks_Closed;
  _L4 = _L3 & _L1 & _L2;
  Condition26 = _L4;
  return Condition26;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToPassiveShunting_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

