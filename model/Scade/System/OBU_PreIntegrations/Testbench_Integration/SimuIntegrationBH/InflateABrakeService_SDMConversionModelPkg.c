/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeService_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeService */
void InflateABrakeService_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeService::aBrake */ a_Brake_t_SDMConversionModelPkg *aBrake,
  /* SDMConversionModelPkg::InflateABrakeService::aBrakeService */ ASafe_T_CalcBrakingCurves_types *aBrakeService)
{
  static kcg_int i5;
  /* SDMConversionModelPkg::InflateABrakeService */
  static kcg_int acc4;
  static kcg_int i3;
  static kcg_int i2;
  /* SDMConversionModelPkg::InflateABrakeService */
  static kcg_int acc;
  static kcg_int i1;
  static kcg_int i;
  static A_internal_Type_Obu_BasicTypes_Pkg noname;
  static V_internal_Type_Obu_BasicTypes_Pkg _6_noname;
  /* SDMConversionModelPkg::InflateABrakeService::_L2 */
  static av_Map_t_SDMConversionModelPkg _L2;
  /* SDMConversionModelPkg::InflateABrakeService::_L3 */
  static a_Brake_t_SDMConversionModelPkg _L3;
  /* SDMConversionModelPkg::InflateABrakeService::_L7 */
  static v_BrakeSteps_t_SDMConversionModelPkg _L7;
  /* SDMConversionModelPkg::InflateABrakeService::_L6 */
  static a_BrakeSteps_t_SDMConversionModelPkg _L6;
  /* SDMConversionModelPkg::InflateABrakeService::_L11 */
  static ASafe_T_CalcBrakingCurves_types _L11;
  /* SDMConversionModelPkg::InflateABrakeService::_L12 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L12;
  /* SDMConversionModelPkg::InflateABrakeService::_L14 */
  static array_real_8 _L14;
  /* SDMConversionModelPkg::InflateABrakeService::_L17 */
  static kcg_real _L17;
  /* SDMConversionModelPkg::InflateABrakeService::_L16 */
  static array_real_100 _L16;
  /* SDMConversionModelPkg::InflateABrakeService::_L28 */
  static array_real_100_8 _L28;
  /* SDMConversionModelPkg::InflateABrakeService::_L25 */
  static ASafe_Data_T_CalcBrakingCurves_types _L25;
  /* SDMConversionModelPkg::InflateABrakeService::_L30 */
  static ASafeRow_T_CalcBrakingCurves_types _L30;
  /* SDMConversionModelPkg::InflateABrakeService::_L31 */
  static V_internal_real_Type_SDM_Types_Pkg _L31;
  /* SDMConversionModelPkg::InflateABrakeService::_L13 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* SDMConversionModelPkg::InflateABrakeService::_L36 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L36;
  /* SDMConversionModelPkg::InflateABrakeService::_L37 */
  static array_real_100_6 _L37;
  /* SDMConversionModelPkg::InflateABrakeService::_L38 */
  static kcg_int _L38;
  /* SDMConversionModelPkg::InflateABrakeService::_L39 */
  static array_real_6 _L39;
  /* SDMConversionModelPkg::InflateABrakeService::_L40 */
  static kcg_int _L40;
  
  _L17 = 0.0;
  /* pow */ for (i5 = 0; i5 < 100; i5++) {
    _L16[i5] = _L17;
  }
  _L40 = 0;
  kcg_copy_a_Brake_t_SDMConversionModelPkg(&_L3, aBrake);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&_L2, &_L3.service);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&_L7, &_L2.v);
  _L13 = _L40;
  /* 1 */ for (i3 = 0; i3 < 6; i3++) {
    acc4 = _L13;
    /* 1 */
    InflateABrakeSpeeds_SDMConversionModelPkg(acc4, _L7[i3], &_L13, &_L39[i3]);
  }
  _L31 = _L39[5];
  /* pow */ for (i2 = 0; i2 < 8; i2++) {
    _L14[i2] = _L31;
  }
  kcg_copy_array_real_6(&_L12[0], &_L39);
  kcg_copy_array_real_8(&_L12[6], &_L14);
  _L38 = 0;
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(&_L6, &_L2.a);
  _L36 = _L38;
  /* 5 */ for (i1 = 0; i1 < 6; i1++) {
    acc = _L36;
    /* 1 */
    InflateABrakeRow_SDMConversionModelPkg(acc, _L6[i1], &_L36, &_L37[i1]);
  }
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&_L30, &_L37[5]);
  /* pow */ for (i = 0; i < 8; i++) {
    kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&_L28[i], &_L30);
  }
  kcg_copy_array_real_100_6(&_L25[0], &_L37);
  kcg_copy_array_real_100_8(&_L25[6], &_L28);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L11.distance_definition,
    &_L16);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &_L11.speed_definition,
    &_L12);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L11.data, &_L25);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(aBrakeService, &_L11);
  noname = _L36;
  _6_noname = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeService_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

