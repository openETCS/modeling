/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addGradient_SDMModelPkg.h"

/* SDMModelPkg::addGradient */
void addGradient_SDMModelPkg(
  /* SDMModelPkg::addGradient::aBrakeSafe */ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::addGradient::aGradient */A_gradient_t_SDM_GradientAcceleration_types *aGradient,
  /* SDMModelPkg::addGradient::aSafe */ASafe_T_CalcBrakingCurves_types *aSafe)
{
  static kcg_real tmp1;
  static array_real_100_14 tmp;
  static kcg_int i;
  /* SDMModelPkg::addGradient::_L17 */
  static L_internal_real_Type_SDM_Types_Pkg _L17;
  /* SDMModelPkg::addGradient::_L28 */
  static array_real_100 _L28;
  
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &(*aSafe).speed_definition,
    &(*aBrakeSafe).speed_definition);
  _L17 = 0.0;
  for (i = 0; i < 100; i++) {
    tmp1 = _L17;
    /* 1 */
    collectGradientLocations_SDMModelPkg(
      tmp1,
      &(*aGradient)[i],
      &_L17,
      &_L28[i]);
  }
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &(*aSafe).distance_definition,
    &_L28);
  for (i = 0; i < 14; i++) {
    /* 1 */
    iterateASafeData_SDMModelPkg(&(*aBrakeSafe).data[i], aGradient, &tmp[i]);
  }
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&(*aSafe).data, &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** addGradient_SDMModelPkg.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

