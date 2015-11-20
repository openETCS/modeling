/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_Check_Utilities.h"

/* Utilities::Int_Check */
kcg_bool Int_Check_Utilities(
  /* Utilities::Int_Check::int_in */kcg_int int_in,
  /* Utilities::Int_Check::max_value */kcg_int max_value,
  /* Utilities::Int_Check::min_value */kcg_int min_value)
{
  /* Utilities::Int_Check::error */
  static kcg_bool error;
  
  if ((min_value > int_in) | (int_in > max_value)) {
    error = kcg_true;
  }
  else {
    error = kcg_false;
  }
  return error;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Int_Check_Utilities.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

