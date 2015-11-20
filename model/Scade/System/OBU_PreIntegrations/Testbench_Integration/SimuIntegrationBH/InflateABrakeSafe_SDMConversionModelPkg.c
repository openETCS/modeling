/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InflateABrakeSafe_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::InflateABrakeSafe */
void InflateABrakeSafe_SDMConversionModelPkg(
  /* SDMConversionModelPkg::InflateABrakeSafe::aBrakeSafe_cm */ av_MergedMap_t_SDMConversionModelPkg *aBrakeSafe_cm,
  /* SDMConversionModelPkg::InflateABrakeSafe::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe)
{
  static kcg_int i5;
  /* SDMConversionModelPkg::InflateABrakeSafe */
  static kcg_int acc4;
  static kcg_int i3;
  static kcg_int i2;
  /* SDMConversionModelPkg::InflateABrakeSafe */
  static kcg_int acc;
  static kcg_int i1;
  static kcg_int i;
  static A_internal_Type_Obu_BasicTypes_Pkg noname;
  static V_internal_Type_Obu_BasicTypes_Pkg _6_noname;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L1 */
  static av_MergedMap_t_SDMConversionModelPkg _L1;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L15 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L15;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L12 */
  static array_real_100 _L12;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L11 */
  static ASafe_T_CalcBrakingCurves_types _L11;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L10 */
  static array_real_100_1 _L10;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L9 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L4 */
  static array_real_1 _L4;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L2 */
  static kcg_real _L2;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L25 */
  static v_MergedSteps_t_SDMConversionModelPkg _L25;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L24 */
  static a_MergedSteps_t_SDMConversionModelPkg _L24;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L26 */
  static ASafe_Data_T_CalcBrakingCurves_types _L26;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L31 */
  static array_real_100_13 _L31;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L32 */
  static ASafeRow_T_CalcBrakingCurves_types _L32;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L34 */
  static V_internal_real_Type_SDM_Types_Pkg _L34;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L35 */
  static A_internal_Type_Obu_BasicTypes_Pkg _L35;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L36 */
  static kcg_int _L36;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L37 */
  static array_real_13 _L37;
  /* SDMConversionModelPkg::InflateABrakeSafe::_L38 */
  static kcg_int _L38;
  
  kcg_copy_av_MergedMap_t_SDMConversionModelPkg(&_L1, aBrakeSafe_cm);
  _L2 = 0.0;
  /* pow */ for (i5 = 0; i5 < 100; i5++) {
    _L12[i5] = _L2;
  }
  _L38 = 0;
  kcg_copy_v_MergedSteps_t_SDMConversionModelPkg(&_L25, &_L1.v);
  _L9 = _L38;
  /* 2 */ for (i3 = 0; i3 < 13; i3++) {
    acc4 = _L9;
    /* 1 */
    InflateABrakeSpeeds_SDMConversionModelPkg(acc4, _L25[i3], &_L9, &_L37[i3]);
  }
  _L34 = _L37[12];
  /* pow */ for (i2 = 0; i2 < 1; i2++) {
    _L4[i2] = _L34;
  }
  kcg_copy_array_real_13(&_L15[0], &_L37);
  kcg_copy_array_real_1(&_L15[13], &_L4);
  _L36 = 0;
  kcg_copy_a_MergedSteps_t_SDMConversionModelPkg(&_L24, &_L1.a);
  _L35 = _L36;
  /* 5 */ for (i1 = 0; i1 < 13; i1++) {
    acc = _L35;
    /* InflateABrakeRow */
    InflateABrakeRow_SDMConversionModelPkg(acc, _L24[i1], &_L35, &_L31[i1]);
  }
  kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&_L32, &_L31[12]);
  /* pow */ for (i = 0; i < 1; i++) {
    kcg_copy_ASafeRow_T_CalcBrakingCurves_types(&_L10[i], &_L32);
  }
  kcg_copy_array_real_100_13(&_L26[0], &_L31);
  kcg_copy_array_real_100_1(&_L26[13], &_L10);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L11.distance_definition,
    &_L12);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &_L11.speed_definition,
    &_L15);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L11.data, &_L26);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(aBrakeSafe, &_L11);
  noname = _L35;
  _6_noname = _L9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InflateABrakeSafe_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

