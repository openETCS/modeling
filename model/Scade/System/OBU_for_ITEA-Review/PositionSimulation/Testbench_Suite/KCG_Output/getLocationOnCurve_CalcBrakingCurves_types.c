/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getLocationOnCurve */
void getLocationOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getLocationOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getLocationOnCurve::speed */ V_internal_real_Type_SDM_Types_Pkg speed,
  /* CalcBrakingCurves_types::getLocationOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getLocationOnCurve::location */ L_internal_real_Type_SDM_Types_Pkg *location)
{
  ParabolaArc_T_CalcBrakingCurves_types tmp;
  kcg_int tmp4;
  kcg_int i;
  kcg_real tmp3;
  kcg_real tmp2;
  kcg_real tmp1;
  /* CalcBrakingCurves_types::getLocationOnCurve::idx */ kcg_int idx;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L30 */ kcg_bool _L30;
  
  idx = - 1;
  for (i = 0; i < 25; i++) {
    tmp4 = idx;
    if ((*curve).valid[i]) {
      tmp1 = (*curve).speeds[i];
    }
    else {
      tmp1 = 0.0;
    }
    _L30 = speed >= tmp1;
    if (_L30) {
      idx = i;
    }
    else {
      idx = tmp4;
    }
    if (_L30) {
      break;
    }
  }
  if ((0 <= idx) & (idx < 25)) {
    _L30 = (*curve).valid[idx];
  }
  else {
    _L30 = kcg_false;
  }
  if (_L30) {
    if ((0 <= idx) & (idx < 25)) {
      tmp3 = (*curve).distances[idx];
      tmp2 = (*curve).speeds[idx];
      tmp1 = (*curve).accelerations[idx];
    }
    else {
      tmp3 = 0.0;
      tmp2 = 0.0;
      tmp1 = 0.0;
    }
    tmp.distance = tmp3;
    tmp.speed = tmp2;
    tmp.acceleration = tmp1;
    /* 1 */
    getLocationOnCurveArc_CalcBrakingCurves_types(&tmp, speed, location, valid);
  }
  else {
    *valid = kcg_false;
    *location = 0.0;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getLocationOnCurve_CalcBrakingCurves_types.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

