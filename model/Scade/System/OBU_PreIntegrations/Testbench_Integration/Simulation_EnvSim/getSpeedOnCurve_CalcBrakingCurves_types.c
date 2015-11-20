/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurve */
void getSpeedOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurve::curve */ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getSpeedOnCurve::position */L_internal_real_Type_SDM_Types_Pkg position,
  /* CalcBrakingCurves_types::getSpeedOnCurve::valid */kcg_bool *valid,
  /* CalcBrakingCurves_types::getSpeedOnCurve::speed */V_internal_real_Type_SDM_Types_Pkg *speed)
{
  static struct__158077 tmp;
  static kcg_int tmp4;
  static kcg_int i;
  static kcg_bool tmp3;
  static kcg_real tmp2;
  static kcg_real tmp1;
  /* CalcBrakingCurves_types::getSpeedOnCurve::idx */
  static kcg_int idx;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L6 */
  static kcg_real _L6;
  
  idx = - 1;
  for (i = 0; i < 114; i++) {
    tmp4 = idx;
    if ((*curve).valid[i]) {
      _L6 = (*curve).distances[i];
    }
    else {
      _L6 = 0.0;
    }
    tmp3 = !(position <= _L6);
    if (tmp3) {
      idx = tmp4;
    }
    else {
      idx = i;
    }
    if (!tmp3) {
      break;
    }
  }
  if ((0 <= idx) & (idx < 114)) {
    _L6 = (*curve).accelerations[idx];
    tmp3 = (*curve).valid[idx];
  }
  else {
    tmp3 = kcg_false;
    _L6 = 0.0;
  }
  *valid = (_L6 >= 0.0) & tmp3;
  if (*valid) {
    if ((0 <= idx) & (idx < 114)) {
      tmp2 = (*curve).distances[idx];
      tmp1 = (*curve).speeds[idx];
    }
    else {
      tmp2 = 0.0;
      tmp1 = 0.0;
    }
    tmp.distance = tmp2;
    tmp.speed = tmp1;
    tmp.acceleration = _L6;
    *speed = /* 1 */ getSpeedOnCurveArc_CalcBrakingCurves_types(&tmp, position);
  }
  else {
    *speed = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getSpeedOnCurve_CalcBrakingCurves_types.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

