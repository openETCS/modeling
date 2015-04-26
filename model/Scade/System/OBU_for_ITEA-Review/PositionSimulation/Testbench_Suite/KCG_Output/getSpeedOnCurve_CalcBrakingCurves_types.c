/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurve */
void getSpeedOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getSpeedOnCurve::position */ L_internal_real_Type_SDM_Types_Pkg position,
  /* CalcBrakingCurves_types::getSpeedOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getSpeedOnCurve::speed */ V_internal_real_Type_SDM_Types_Pkg *speed)
{
  ParabolaArc_T_CalcBrakingCurves_types tmp;
  kcg_int tmp5;
  kcg_bool tmp4;
  kcg_int i;
  kcg_real tmp3;
  kcg_real tmp2;
  kcg_real tmp1;
  /* CalcBrakingCurves_types::getSpeedOnCurve::idx */ kcg_int idx;
  
  idx = - 1;
  for (i = 0; i < 25; i++) {
    tmp5 = idx;
    if ((*curve).valid[i]) {
      tmp1 = (*curve).distances[i];
    }
    else {
      tmp1 = 0.0;
    }
    tmp4 = !(position <= tmp1);
    if (tmp4) {
      idx = tmp5;
    }
    else {
      idx = i;
    }
    if (!tmp4) {
      break;
    }
  }
  if ((0 <= idx) & (idx < 25)) {
    *valid = (*curve).valid[idx];
  }
  else {
    *valid = kcg_false;
  }
  if (*valid) {
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
    *speed = /* 1 */ getSpeedOnCurveArc_CalcBrakingCurves_types(&tmp, position);
  }
  else {
    *speed = 0.0;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getSpeedOnCurve_CalcBrakingCurves_types.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

