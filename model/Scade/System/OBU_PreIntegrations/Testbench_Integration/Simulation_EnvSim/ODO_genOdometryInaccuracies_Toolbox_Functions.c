/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genOdometryInaccuracies_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_genOdometryInaccuracies */
void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::trueLocation */L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryLocations */OdometryLocations_T_Obu_BasicTypes_Pkg *odometryLocations)
{
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L16 */
  static kcg_real _L16;
  
  _L16 = (kcg_real) trueLocation;
  (*odometryLocations).o_nominal = (kcg_int)
      ((*odometryProperties).o_nominal * _L16);
  (*odometryLocations).o_min = (kcg_int) ((*odometryProperties).o_min * _L16);
  (*odometryLocations).o_max = (kcg_int) ((*odometryProperties).o_max * _L16);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genOdometryInaccuracies_Toolbox_Functions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

