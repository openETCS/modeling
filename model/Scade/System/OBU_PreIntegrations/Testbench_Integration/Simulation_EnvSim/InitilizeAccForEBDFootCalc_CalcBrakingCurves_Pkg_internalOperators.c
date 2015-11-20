/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc */
void InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::target */Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::aSafe */ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::BCACCForEBDFoot */BCAccumulator_type_CalcBrakingCurves_Pkg *BCACCForEBDFoot)
{
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L9 */
  static L_internal_real_Type_SDM_Types_Pkg _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L15 */
  static kcg_real _L15;
  
  (*BCACCForEBDFoot).distance = (*target).distance;
  _L15 = /* 2 */ dV_ebi_for_V_SDM_Types_Pkg((*target).speed) + (*target).speed;
  (*BCACCForEBDFoot).speed = _L15;
  /* 3 */
  getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
    (*target).distance,
    &(*aSafe).distance_definition,
    &_L9,
    &(*BCACCForEBDFoot).distanceIndex);
  /* 3 */
  getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
    _L15,
    &(*aSafe).speed_definition,
    &_L9,
    &(*BCACCForEBDFoot).speedIndex);
  /* 2 */
  makeEmptyParabolaCurve_CalcBrakingCurves_types(&(*BCACCForEBDFoot).BC);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

