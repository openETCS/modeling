/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc */
void InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::target */ Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::BCACCForEBDFoot */ BCAccumulator_type_CalcBrakingCurves_Pkg *BCACCForEBDFoot)
{
  kcg_int i;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L4 */ ParabolaCurveValid_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L5 */ array_real_25 _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L11 */ kcg_real _L11;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L15 */ kcg_real _L15;
  
  (*BCACCForEBDFoot).distance = (*target).distance;
  _L15 = /* 2 */ dV_ebi_for_V_SDM_Types_Pkg((*target).speed) + (*target).speed;
  (*BCACCForEBDFoot).speed = _L15;
  /* 3 */
  getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
    (*target).distance,
    &(*aSafe).distance_definition,
    &_L11,
    &(*BCACCForEBDFoot).distanceIndex);
  /* 3 */
  getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
    _L15,
    &(*aSafe).speed_definition,
    &_L11,
    &(*BCACCForEBDFoot).speedIndex);
  _L11 = - 1.0;
  for (i = 0; i < 25; i++) {
    _L5[i] = _L11;
    _L4[i] = kcg_false;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*BCACCForEBDFoot).BC.speeds,
    &_L5);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*BCACCForEBDFoot).BC.accelerations,
    &(*BCACCForEBDFoot).BC.speeds);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &(*BCACCForEBDFoot).BC.distances,
    &_L5);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &(*BCACCForEBDFoot).BC.valid,
    &_L4);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

