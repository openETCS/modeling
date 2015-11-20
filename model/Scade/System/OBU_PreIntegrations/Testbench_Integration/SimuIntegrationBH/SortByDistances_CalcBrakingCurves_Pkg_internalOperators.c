/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortByDistances_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
void SortByDistances_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::reverseBC */ ParabolaCurve_T_CalcBrakingCurves_types *reverseBC,
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::sortedBC */ ParabolaCurve_T_CalcBrakingCurves_types *sortedBC)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
  static ParabolaCurve_T_CalcBrakingCurves_types acc;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L1 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L2 */
  static ParabolaCurveDistances_T_CalcBrakingCurves_types _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L3 */
  static ParabolaCurveSpeeds_T_CalcBrakingCurves_types _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L4 */
  static ParabolaCurveAccelerations_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L5 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L7 */
  static ParabolaCurveDistances_T_CalcBrakingCurves_types _L7;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L8 */
  static ParabolaCurveSpeeds_T_CalcBrakingCurves_types _L8;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L9 */
  static ParabolaCurveAccelerations_T_CalcBrakingCurves_types _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L18 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L18;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L19 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L19;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L21 */
  static kcg_int _L21;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L22 */
  static kcg_bool _L22;
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::_L23 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L23;
  
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L1, reverseBC);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &_L2,
    &_L1.distances);
  for (i4 = 0; i4 < 114; i4++) {
    _L7[i4] = _L2[113 - i4];
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&_L3, &_L1.speeds);
  for (i3 = 0; i3 < 114; i3++) {
    _L8[i3] = _L3[113 - i3];
  }
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &_L4,
    &_L1.accelerations);
  for (i2 = 0; i2 < 114; i2++) {
    _L9[i2] = _L4[113 - i2];
  }
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L5, &_L1.valid);
  for (i1 = 0; i1 < 114; i1++) {
    _L23[i1] = _L5[113 - i1];
  }
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &_L18.distances,
    &_L7);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&_L18.speeds, &_L8);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &_L18.accelerations,
    &_L9);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L18.valid, &_L23);
  _L22 = kcg_true;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L19, &_L18);
  if (_L22) {
    for (i = 0; i < 114; i++) {
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&acc, &_L19);
      /* 1 */
      deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
        &acc,
        &cond_iterw,
        &_L19);
      _L21 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L21 = 0;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(sortedBC, &_L19);
  noname = _L21;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SortByDistances_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

