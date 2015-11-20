/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeService_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeService */
void InflateABrakeService_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeService::aBrake */a_Brake_t_SDMConversionModelPkg *aBrake,
  /* SDMConversionModelPkg::InflateABrakeService::aBrakeService */ASafe_T_CalcBrakingCurves_types *aBrakeService)
{
  static kcg_int tmp;
  static kcg_int i;
  /* SDMConversionModelPkg::InflateABrakeService::_L14 */
  static array_real_8 _L14;
  /* SDMConversionModelPkg::InflateABrakeService::_L28 */
  static array_real_100_8 _L28;
  /* SDMConversionModelPkg::InflateABrakeService::_L36 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L36;
  /* SDMConversionModelPkg::InflateABrakeService::_L37 */
  static array_real_100_6 _L37;
  /* SDMConversionModelPkg::InflateABrakeService::_L39 */
  static array_real_6 _L39;
  
  tmp = 0;
  for (i = 0; i < 6; i++) {
    _L36 = tmp;
    /* 1 */
    InflateABrakeSpeeds_SDMConversionModelPkg(
      _L36,
      (*aBrake).service.v[i],
      &tmp,
      &_L39[i]);
  }
  _L36 = 0;
  for (i = 0; i < 6; i++) {
    tmp = _L36;
    /* 1 */
    InflateABrakeRow_SDMConversionModelPkg(
      tmp,
      (*aBrake).service.a[i],
      &_L36,
      &_L37[i]);
  }
  for (i = 0; i < 8; i++) {
    kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&_L28[i], &_L37[5]);
  }
  for (i = 0; i < 100; i++) {
    (*aBrakeService).distance_definition[i] = 0.0;
  }
  for (i = 0; i < 8; i++) {
    _L14[i] = _L39[5];
  }
  kcg_copy_array_real_6(&(*aBrakeService).speed_definition[0], &_L39);
  kcg_copy_array_real_8(&(*aBrakeService).speed_definition[6], &_L14);
  kcg_copy_array_real_100_6(&(*aBrakeService).data[0], &_L37);
  kcg_copy_array_real_100_8(&(*aBrakeService).data[6], &_L28);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InflateABrakeService_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

