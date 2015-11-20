/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::setArc */
void setArc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::Arc */ParabolaArc_T_CalcBrakingCurves_types *Arc,
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::oldBC */ParabolaCurve_T_CalcBrakingCurves_types *oldBC,
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::index */kcg_int index,
  /* CalcBrakingCurves_Pkg::internalOperators::setArc::newBC */ParabolaCurve_T_CalcBrakingCurves_types *newBC)
{
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &(*newBC).distances,
    &(*oldBC).distances);
  if ((0 <= index) & (index < 114)) {
    (*newBC).distances[index] = (*Arc).distance;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*newBC).speeds,
    &(*oldBC).speeds);
  if ((0 <= index) & (index < 114)) {
    (*newBC).speeds[index] = (*Arc).speed;
  }
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*newBC).accelerations,
    &(*oldBC).accelerations);
  if ((0 <= index) & (index < 114)) {
    (*newBC).accelerations[index] = (*Arc).acceleration;
  }
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &(*newBC).valid,
    &(*oldBC).valid);
  if ((0 <= index) & (index < 114)) {
    (*newBC).valid[index] = kcg_true;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

