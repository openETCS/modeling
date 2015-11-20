/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSystemFailure_Conditions.h"

/* Conditions::ToSystemFailure */
kcg_bool ToSystemFailure_Conditions(
  /* Conditions::ToSystemFailure::Safety_Failure_Occured */kcg_bool Safety_Failure_Occured)
{
  /* Conditions::ToSystemFailure::Condition13 */
  static kcg_bool Condition13;
  
  Condition13 = Safety_Failure_Occured;
  return Condition13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToSystemFailure_Conditions.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

