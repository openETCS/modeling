/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToPassiveShunting_Conditions.h"

/* Conditions::ToPassiveShunting */
kcg_bool ToPassiveShunting_Conditions(
  /* Conditions::ToPassiveShunting::Train_Permitted_PS */kcg_bool Train_Permitted_PS,
  /* Conditions::ToPassiveShunting::Continue_Shunting_Function_Active */kcg_bool Continue_Shunting_Function_Active,
  /* Conditions::ToPassiveShunting::Desks_Closed */kcg_bool Desks_Closed)
{
  /* Conditions::ToPassiveShunting::Condition26 */
  static kcg_bool Condition26;
  
  Condition26 = Desks_Closed & Train_Permitted_PS &
    Continue_Shunting_Function_Active;
  return Condition26;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToPassiveShunting_Conditions.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

