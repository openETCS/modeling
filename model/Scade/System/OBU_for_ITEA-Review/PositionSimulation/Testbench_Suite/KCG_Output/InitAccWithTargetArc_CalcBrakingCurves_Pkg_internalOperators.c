/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
void InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::EBDfoot */ L_internal_real_Type_SDM_Types_Pkg EBDfoot,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::target */ Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::Output1 */ BCAccumulator_type_CalcBrakingCurves_Pkg *Output1)
{
  kcg_int i;
  array_real_25 tmp3;
  array_real_25 tmp2;
  array_real_25 tmp1;
  ParabolaCurveValid_T_CalcBrakingCurves_types tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L8 */ kcg_real _L8;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L9 */ kcg_int _L9;
  
  (*Output1).distance = EBDfoot;
  (*Output1).speed = (*target).speed;
  /* 1 */
  getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
    EBDfoot,
    &(*aSafe).distance_definition,
    &_L8,
    &i);
  (*Output1).distanceIndex = i;
  /* 1 */
  getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
    (*target).speed,
    &(*aSafe).speed_definition,
    &_L8,
    &_L9);
  (*Output1).speedIndex = _L9;
  (&tmp1[0])[0] = /* 2 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      i,
      _L9,
      &(*aSafe).data);
  _L8 = - 1.0;
  for (i = 0; i < 24; i++) {
    (&tmp1[1])[i] = _L8;
  }
  (&tmp3[0])[0] = EBDfoot;
  kcg_copy_array_real_24(&tmp3[1], (array_real_24 *) &tmp1[1]);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &(*Output1).BC.distances,
    &tmp3);
  (&tmp2[0])[0] = (*target).speed;
  kcg_copy_array_real_24(&tmp2[1], (array_real_24 *) &tmp1[1]);
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*Output1).BC.speeds,
    &tmp2);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*Output1).BC.accelerations,
    &tmp1);
  (&tmp[0])[0] = kcg_true;
  for (i = 0; i < 24; i++) {
    (&tmp[1])[i] = kcg_false;
  }
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &(*Output1).BC.valid,
    &tmp);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

