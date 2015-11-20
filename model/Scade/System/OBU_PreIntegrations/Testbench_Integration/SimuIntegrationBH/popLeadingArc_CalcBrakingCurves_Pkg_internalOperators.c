/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "popLeadingArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc */
void popLeadingArc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::oldBC */ ParabolaCurve_T_CalcBrakingCurves_types *oldBC,
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::newBC */ ParabolaCurve_T_CalcBrakingCurves_types *newBC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L1 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L4 */
  static ParabolaCurveDistances_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L5 */
  static ParabolaCurveSpeeds_T_CalcBrakingCurves_types _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L6 */
  static ParabolaCurveAccelerations_T_CalcBrakingCurves_types _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L7 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L7;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L14 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L14;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L15 */
  static array_bool_113 _L15;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L16 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L16;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L17 */
  static array_bool_1 _L17;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L18 */
  static kcg_bool _L18;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L19 */
  static array_real_113 _L19;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L22 */
  static array_real_114 _L22;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L23 */
  static array_real_114 _L23;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L24 */
  static array_real_114 _L24;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L25 */
  static array_real_113 _L25;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L26 */
  static array_real_113 _L26;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L27 */
  static kcg_real _L27;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L28 */
  static array_real_1 _L28;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L40 */
  static array_real_1 _L40;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L39 */
  static kcg_real _L39;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L42 */
  static kcg_real _L42;
  /* CalcBrakingCurves_Pkg::internalOperators::popLeadingArc::_L41 */
  static array_real_1 _L41;
  
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L1, oldBC);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &_L4,
    &_L1.distances);
  kcg_copy_array_real_113(&_L26, (array_real_113 *) &_L4[1]);
  _L42 = 0.0;
  /* pow */ for (i3 = 0; i3 < 1; i3++) {
    _L41[i3] = _L42;
  }
  kcg_copy_array_real_113(&_L24[0], &_L26);
  kcg_copy_array_real_1(&_L24[113], &_L41);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&_L5, &_L1.speeds);
  kcg_copy_array_real_113(&_L25, (array_real_113 *) &_L5[1]);
  _L39 = 0.0;
  /* pow */ for (i2 = 0; i2 < 1; i2++) {
    _L40[i2] = _L39;
  }
  kcg_copy_array_real_113(&_L23[0], &_L25);
  kcg_copy_array_real_1(&_L23[113], &_L40);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &_L6,
    &_L1.accelerations);
  kcg_copy_array_real_113(&_L19, (array_real_113 *) &_L6[1]);
  _L27 = 0.0;
  /* pow */ for (i1 = 0; i1 < 1; i1++) {
    _L28[i1] = _L27;
  }
  kcg_copy_array_real_113(&_L22[0], &_L19);
  kcg_copy_array_real_1(&_L22[113], &_L28);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L7, &_L1.valid);
  kcg_copy_array_bool_113(&_L15, (array_bool_113 *) &_L7[1]);
  _L18 = kcg_false;
  /* pow */ for (i = 0; i < 1; i++) {
    _L17[i] = _L18;
  }
  kcg_copy_array_bool_113(&_L16[0], &_L15);
  kcg_copy_array_bool_1(&_L16[113], &_L17);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &_L14.distances,
    &_L24);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&_L14.speeds, &_L23);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &_L14.accelerations,
    &_L22);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L14.valid, &_L16);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(newBC, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** popLeadingArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

