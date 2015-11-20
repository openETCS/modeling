/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeSafe_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeSafe */
void InflateABrakeSafe_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeSafe::aBrakeSafe_cm */av_MergedMap_t_SDMConversionModelPkg *aBrakeSafe_cm,
  /* SDMConversionModelPkg::InflateABrakeSafe::aBrakeSafe */ASafe_T_CalcBrakingCurves_types *aBrakeSafe)
{
  static kcg_int tmp;
  static kcg_int i;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L10 */
  static array_real_100_1 _L10;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L4 */
  static array_real_1 _L4;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L31 */
  static array_real_100_13 _L31;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L35 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L35;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L37 */
  static array_real_13 _L37;
  
  tmp = 0;
  for (i = 0; i < 13; i++) {
    _L35 = tmp;
    /* 1 */
    InflateABrakeSpeeds_SDMConversionModelPkg(
      _L35,
      (*aBrakeSafe_cm).v[i],
      &tmp,
      &_L37[i]);
  }
  _L35 = 0;
  for (i = 0; i < 13; i++) {
    tmp = _L35;
    /* InflateABrakeRow */
    InflateABrakeRow_SDMConversionModelPkg(
      tmp,
      (*aBrakeSafe_cm).a[i],
      &_L35,
      &_L31[i]);
  }
  for (i = 0; i < 100; i++) {
    (*aBrakeSafe).distance_definition[i] = 0.0;
  }
  _L4[0] = _L37[12];
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&_L10[0], &_L31[12]);
  kcg_copy_array_real_13(&(*aBrakeSafe).speed_definition[0], &_L37);
  kcg_copy_array_real_1(&(*aBrakeSafe).speed_definition[13], &_L4);
  kcg_copy_array_real_100_13(&(*aBrakeSafe).data[0], &_L31);
  kcg_copy_array_real_100_1(&(*aBrakeSafe).data[13], &_L10);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InflateABrakeSafe_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

