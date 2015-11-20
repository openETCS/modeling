/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addGradient_SDMModelPkg.h"

/* SDMModelPkg::addGradient */
void addGradient_SDMModelPkg(
  /* SDMModelPkg::addGradient::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::addGradient::aGradient */ A_gradient_t_SDM_GradientAcceleration_types *aGradient,
  /* SDMModelPkg::addGradient::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe)
{
  /* SDMModelPkg::addGradient */
  static kcg_real acc;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  static L_internal_real_Type_SDM_Types_Pkg noname;
  /* SDMModelPkg::addGradient::_L2 */
  static A_gradient_t_SDM_GradientAcceleration_types _L2;
  /* SDMModelPkg::addGradient::_L12 */
  static ASafe_T_CalcBrakingCurves_types _L12;
  /* SDMModelPkg::addGradient::_L13 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L13;
  /* SDMModelPkg::addGradient::_L17 */
  static L_internal_real_Type_SDM_Types_Pkg _L17;
  /* SDMModelPkg::addGradient::_L20 */
  static kcg_real _L20;
  /* SDMModelPkg::addGradient::_L26 */
  static ASafe_Data_T_CalcBrakingCurves_types _L26;
  /* SDMModelPkg::addGradient::_L27 */
  static ASafe_T_CalcBrakingCurves_types _L27;
  /* SDMModelPkg::addGradient::_L28 */
  static array_real_100 _L28;
  /* SDMModelPkg::addGradient::_L29 */
  static ASafe_T_CalcBrakingCurves_types _L29;
  /* SDMModelPkg::addGradient::_L30 */
  static array_170198 _L30;
  /* SDMModelPkg::addGradient::_L31 */
  static A_gradient_t_SDM_GradientAcceleration_types _L31;
  /* SDMModelPkg::addGradient::_L32 */
  static ASafe_Data_T_CalcBrakingCurves_types _L32;
  
  _L20 = 0.0;
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&_L2, aGradient);
  _L17 = _L20;
  /* 1 */ for (i2 = 0; i2 < 100; i2++) {
    acc = _L17;
    /* 1 */
    collectGradientLocations_SDMModelPkg(acc, &_L2[i2], &_L17, &_L28[i2]);
  }
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L27, aBrakeSafe);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &_L13,
    &_L27.speed_definition);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L29, aBrakeSafe);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L26, &_L29.data);
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&_L31, aGradient);
  /* pow */ for (i1 = 0; i1 < 14; i1++) {
    kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(&_L30[i1], &_L31);
  }
  /* 2 */ for (i = 0; i < 14; i++) {
    /* 1 */ iterateASafeData_SDMModelPkg(&_L26[i], &_L30[i], &_L32[i]);
  }
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L12.distance_definition,
    &_L28);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &_L12.speed_definition,
    &_L13);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L12.data, &_L32);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(aSafe, &_L12);
  noname = _L17;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** addGradient_SDMModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

