/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurveArc_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getLocationOnCurveArc */
void getLocationOnCurveArc_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getLocationOnCurveArc::arc */ ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::location */ L_internal_real_Type_SDM_Types_Pkg *location,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::valid */ kcg_bool *valid)
{
  kcg_real tmp;
  
  *valid = 0.0 != (*arc).acceleration;
  if (*valid) {
    tmp = (*arc).acceleration * 2.0;
  }
  else {
    tmp = 1.0;
  }
  *location = (*arc).distance - (v_est * v_est - (*arc).speed * (*arc).speed) /
    tmp;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getLocationOnCurveArc_CalcBrakingCurves_types.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

