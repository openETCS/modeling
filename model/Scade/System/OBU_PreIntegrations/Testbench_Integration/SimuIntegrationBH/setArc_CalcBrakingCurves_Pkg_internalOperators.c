/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::setArc */
void setArc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::Arc */ ParabolaArc_T_CalcBrakingCurves_types *Arc,
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::oldBC */ ParabolaCurve_T_CalcBrakingCurves_types *oldBC,
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::index */ kcg_int index,
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::newBC */ ParabolaCurve_T_CalcBrakingCurves_types *newBC)
{
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L1 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L4 */
  static ParabolaCurveDistances_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L5 */
  static ParabolaCurveSpeeds_T_CalcBrakingCurves_types _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L6 */
  static ParabolaCurveAccelerations_T_CalcBrakingCurves_types _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L7 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L7;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L14 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L14;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L16 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L16;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L18 */
  static kcg_bool _L18;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L25 */
  static ParabolaArc_T_CalcBrakingCurves_types _L25;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L31 */
  static A_internal_real_Type_SDM_Types_Pkg _L31;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L30 */
  static V_internal_real_Type_SDM_Types_Pkg _L30;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L29 */
  static L_internal_real_Type_SDM_Types_Pkg _L29;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L22 */
  static ParabolaCurveAccelerations_T_CalcBrakingCurves_types _L22;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L23 */
  static ParabolaCurveSpeeds_T_CalcBrakingCurves_types _L23;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L24 */
  static ParabolaCurveDistances_T_CalcBrakingCurves_types _L24;
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::_L36 */
  static kcg_int _L36;
  
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L1, oldBC);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &_L4,
    &_L1.distances);
  kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(&_L25, Arc);
  _L29 = _L25.distance;
  _L36 = index;
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(&_L24, &_L4);
  if ((0 <= _L36) & (_L36 < 114)) {
    _L24[_L36] = _L29;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&_L5, &_L1.speeds);
  _L30 = _L25.speed;
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&_L23, &_L5);
  if ((0 <= _L36) & (_L36 < 114)) {
    _L23[_L36] = _L30;
  }
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &_L6,
    &_L1.accelerations);
  _L31 = _L25.acceleration;
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(&_L22, &_L6);
  if ((0 <= _L36) & (_L36 < 114)) {
    _L22[_L36] = _L31;
  }
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L7, &_L1.valid);
  _L18 = kcg_true;
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L16, &_L7);
  if ((0 <= _L36) & (_L36 < 114)) {
    _L16[_L36] = _L18;
  }
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
** setArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

