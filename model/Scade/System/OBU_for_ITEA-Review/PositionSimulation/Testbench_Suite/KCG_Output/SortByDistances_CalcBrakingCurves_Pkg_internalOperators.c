/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortByDistances_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::SortByDistances */
void SortByDistances_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::Input1 */ ParabolaCurve_T_CalcBrakingCurves_types *Input1,
  /* CalcBrakingCurves_Pkg::internalOperators::SortByDistances::Output1 */ ParabolaCurve_T_CalcBrakingCurves_types *Output1)
{
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types tmp4;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types tmp3;
  ParabolaCurveValid_T_CalcBrakingCurves_types tmp2;
  ParabolaCurve_T_CalcBrakingCurves_types tmp1;
  kcg_bool tmp;
  kcg_int i;
  
  for (i = 0; i < 25; i++) {
    (*Output1).distances[i] = (*Input1).distances[24 - i];
    tmp4[i] = (*Input1).speeds[24 - i];
    tmp3[i] = (*Input1).accelerations[24 - i];
    tmp2[i] = (*Input1).valid[24 - i];
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*Output1).speeds,
    &tmp4);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*Output1).accelerations,
    &tmp3);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &(*Output1).valid,
    &tmp2);
  for (i = 0; i < 25; i++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&tmp1, Output1);
    /* 1 */
    deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
      &tmp1,
      &tmp,
      Output1);
    if (!tmp) {
      break;
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SortByDistances_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

