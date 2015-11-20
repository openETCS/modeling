/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::makeEmptyParabolaCurve */
void makeEmptyParabolaCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::Curve */ ParabolaCurve_T_CalcBrakingCurves_types *Curve)
{
  static kcg_int i1;
  static kcg_int i;
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::_L13 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L13;
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::_L14 */
  static array_real_114 _L14;
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::_L16 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L16;
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::_L18 */
  static kcg_bool _L18;
  /* CalcBrakingCurves_types::makeEmptyParabolaCurve::_L19 */
  static kcg_real _L19;
  
  _L19 = 0.0;
  /* pow */ for (i1 = 0; i1 < 114; i1++) {
    _L14[i1] = _L19;
  }
  _L18 = kcg_false;
  /* pow */ for (i = 0; i < 114; i++) {
    _L16[i] = _L18;
  }
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &_L13.distances,
    &_L14);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&_L13.speeds, &_L14);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &_L13.accelerations,
    &_L14);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L13.valid, &_L16);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(Curve, &_L13);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** makeEmptyParabolaCurve_CalcBrakingCurves_types.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

