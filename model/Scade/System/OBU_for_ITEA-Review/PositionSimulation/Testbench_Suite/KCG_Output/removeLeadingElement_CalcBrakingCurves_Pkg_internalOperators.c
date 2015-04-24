/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeLeadingElement_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::removeLeadingElement */
void removeLeadingElement_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::removeLeadingElement::oldBC */ ParabolaCurve_T_CalcBrakingCurves_types *oldBC,
  /* CalcBrakingCurves_Pkg::internalOperators::removeLeadingElement::newBC */ ParabolaCurve_T_CalcBrakingCurves_types *newBC)
{
  array_real_25 tmp1;
  ParabolaCurveValid_T_CalcBrakingCurves_types tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::removeLeadingElement::_L12 */ array_real_1 _L12;
  
  _L12[0] = - 1.0;
  kcg_copy_array_real_24(&tmp1[0], (array_real_24 *) &(*oldBC).distances[1]);
  kcg_copy_array_real_1(&tmp1[24], &_L12);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &(*newBC).distances,
    &tmp1);
  kcg_copy_array_real_24(&tmp1[0], (array_real_24 *) &(*oldBC).speeds[1]);
  kcg_copy_array_real_1(&tmp1[24], &_L12);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*newBC).speeds,
    &tmp1);
  kcg_copy_array_real_24(
    &tmp1[0],
    (array_real_24 *) &(*oldBC).accelerations[1]);
  kcg_copy_array_real_1(&tmp1[24], &_L12);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*newBC).accelerations,
    &tmp1);
  kcg_copy_array_bool_24(&tmp[0], (array_bool_24 *) &(*oldBC).valid[1]);
  (&tmp[24])[0] = kcg_false;
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&(*newBC).valid, &tmp);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** removeLeadingElement_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

