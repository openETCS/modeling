/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_genSpeedInaccuracies_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_genSpeedInaccuracies */
void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::trueVelocity */Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometrySpeeds */OdometrySpeeds_T_Obu_BasicTypes_Pkg *odometrySpeeds)
{
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L12 */
  static kcg_real _L12;
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L8 */
  static kcg_real _L8;
  
  _L8 = (kcg_real) trueVelocity;
  (*odometrySpeeds).v_rawNominal = (kcg_int)
      ((*odometryProperties).o_nominal * _L8);
  (*odometrySpeeds).v_lower = (kcg_int) ((*odometryProperties).o_min * _L8);
  _L12 = (*odometryProperties).o_max * _L8;
  (*odometrySpeeds).v_safeNominal = (kcg_int) (0.99 * _L12);
  (*odometrySpeeds).v_upper = (kcg_int) _L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genSpeedInaccuracies_Toolbox_Functions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

