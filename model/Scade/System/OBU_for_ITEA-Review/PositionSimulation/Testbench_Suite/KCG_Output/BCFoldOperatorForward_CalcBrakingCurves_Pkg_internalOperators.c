/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward */
void BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::Index */ kcg_int Index,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::BC_acc */ BCAccumulator_type_CalcBrakingCurves_Pkg *BC_acc,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::LOA_MRSP_Target_speed */ V_internal_real_Type_SDM_Types_Pkg LOA_MRSP_Target_speed,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::exitCond */ kcg_bool *exitCond,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::BC */ BCAccumulator_type_CalcBrakingCurves_Pkg *BC)
{
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L4 */ ParabolaArc_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L3 */ kcg_real _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L2 */ kcg_real _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L1 */ kcg_int _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L18 */ kcg_int _L18;
  
  /* 1 */
  OneCycle_CalcBrakingCurves_Pkg_internalOperators(
    (*BC_acc).distance,
    (*BC_acc).speed,
    (*BC_acc).distanceIndex,
    (*BC_acc).speedIndex,
    kcg_false,
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
  if ((0 <= Index) & (Index < 25)) {
    (*BC).BC.distances[Index] = _L4.distance;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*BC).BC.speeds,
    &(*BC_acc).BC.speeds);
  if ((0 <= Index) & (Index < 25)) {
    (*BC).BC.speeds[Index] = _L4.speed;
  }
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*BC).BC.accelerations,
    &(*BC_acc).BC.accelerations);
  if ((0 <= Index) & (Index < 25)) {
    (*BC).BC.accelerations[Index] = _L4.acceleration;
  }
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &(*BC).BC.valid,
    &(*BC_acc).BC.valid);
  if ((0 <= Index) & (Index < 25)) {
    (*BC).BC.valid[Index] = kcg_true;
  }
  *exitCond = LOA_MRSP_Target_speed <= _L2;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

