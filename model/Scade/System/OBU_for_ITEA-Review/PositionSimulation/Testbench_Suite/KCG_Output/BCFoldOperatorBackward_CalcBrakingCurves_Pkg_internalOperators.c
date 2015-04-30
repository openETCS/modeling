/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward */
void BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Index */ kcg_int Index,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC_acc */ BCAccumulator_type_CalcBrakingCurves_Pkg *BC_acc,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::d_est_front */ L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::exitCond */ kcg_bool *exitCond,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC */ BCAccumulator_type_CalcBrakingCurves_Pkg *BC)
{
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L4 */ ParabolaArc_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L3 */ kcg_real _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L2 */ kcg_real _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L1 */ kcg_int _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L18 */ kcg_int _L18;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L61 */ kcg_int _L61;
  
  _L61 = Index + 1;
  /* 1 */
  OneCycle_CalcBrakingCurves_Pkg_internalOperators(
    (*BC_acc).distance,
    (*BC_acc).speed,
    (*BC_acc).distanceIndex,
    (*BC_acc).speedIndex,
    kcg_true,
    Asafe,
    &_L3,
    &_L2,
    &_L1,
    &_L18,
    &_L4);
  (*BC).distance = _L3;
  (*BC).speed = _L2;
  (*BC).distanceIndex = _L1;
  (*BC).speedIndex = _L18;
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &(*BC).BC.distances,
    &(*BC_acc).BC.distances);
  if ((0 <= _L61) & (_L61 < 25)) {
    (*BC).BC.distances[_L61] = _L4.distance;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*BC).BC.speeds,
    &(*BC_acc).BC.speeds);
  if ((0 <= _L61) & (_L61 < 25)) {
    (*BC).BC.speeds[_L61] = _L4.speed;
  }
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*BC).BC.accelerations,
    &(*BC_acc).BC.accelerations);
  if ((0 <= _L61) & (_L61 < 25)) {
    (*BC).BC.accelerations[_L61] = _L4.acceleration;
  }
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &(*BC).BC.valid,
    &(*BC_acc).BC.valid);
  if ((0 <= _L61) & (_L61 < 25)) {
    (*BC).BC.valid[_L61] = kcg_true;
  }
  *exitCond = _L3 > d_est_front;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

