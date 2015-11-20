/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::limitPositive */
kcg_real limitPositive_SDM_Types_Pkg(
  /* SDM_Types_Pkg::limitPositive::in */kcg_real in)
{
  /* SDM_Types_Pkg::limitPositive::limited */
  static kcg_real limited;
  
  if (in >= 0.0) {
    limited = in;
  }
  else {
    limited = 0.0;
  }
  return limited;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** limitPositive_SDM_Types_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

