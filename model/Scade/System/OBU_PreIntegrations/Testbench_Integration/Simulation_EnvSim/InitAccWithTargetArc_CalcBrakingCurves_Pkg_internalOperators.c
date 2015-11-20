/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
void InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::EBDfoot */L_internal_real_Type_SDM_Types_Pkg EBDfoot,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::target */Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::aSafe */ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::Output1 */BCAccumulator_type_CalcBrakingCurves_Pkg *Output1)
{
  static struct__158077 tmp;
  static ParabolaCurve_T_CalcBrakingCurves_types tmp1;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L8 */
  static V_internal_real_Type_SDM_Types_Pkg _L8;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L9 */
  static kcg_int _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L11 */
  static kcg_int _L11;
  
  (*Output1).distance = EBDfoot;
  (*Output1).speed = (*target).speed;
  /* 1 */
  getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
    EBDfoot,
    &(*aSafe).distance_definition,
    &_L8,
    &_L11);
  (*Output1).distanceIndex = _L11;
  /* 1 */
  getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
    (*target).speed,
    &(*aSafe).speed_definition,
    &_L8,
    &_L9);
  (*Output1).speedIndex = _L9;
  _L8 = /* 2 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      _L11,
      _L9,
      &(*aSafe).data);
  /* 4 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&tmp1);
  tmp.distance = EBDfoot;
  tmp.speed = (*target).speed;
  tmp.acceleration = _L8;
  /* 1 */
  setArc_CalcBrakingCurves_Pkg_internalOperators(
    &tmp,
    &tmp1,
    0,
    &(*Output1).BC);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

