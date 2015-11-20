/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  static L_internal_real_Type_SDM_Types_Pkg noname;
  static V_internal_real_Type_SDM_Types_Pkg _1_noname;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L3 */
  static ASafe_T_CalcBrakingCurves_types _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L1 */
  static Target_real_T_TargetManagement_types _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L9 */
  static L_internal_real_Type_SDM_Types_Pkg _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L10 */
  static kcg_int _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L11 */
  static V_internal_real_Type_SDM_Types_Pkg _L11;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L12 */
  static kcg_int _L12;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L13 */
  static L_internal_real_Type_SDM_Types_Pkg _L13;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L14 */
  static V_internal_real_Type_SDM_Types_Pkg _L14;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L15 */
  static kcg_real _L15;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L16 */
  static V_internal_real_Type_SDM_Types_Pkg _L16;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L17 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L17;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L18 */
  static ASafeDistanceDefinition_T_CalcBrakingCurves_types _L18;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L19 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L19;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L20 */
  static Target_real_T_TargetManagement_types _L20;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L21 */
  static ASafe_T_CalcBrakingCurves_types _L21;
  /* CalcBrakingCurves_Pkg::internalOperators::InitilizeAccForEBDFootCalc::_L23 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L23;
  
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L3, aSafe);
  kcg_copy_Target_real_T_TargetManagement_types(&_L20, target);
  _L13 = _L20.distance;
  kcg_copy_Target_real_T_TargetManagement_types(&_L1, target);
  _L14 = _L1.speed;
  _L16 = /* 2 */ dV_ebi_for_V_SDM_Types_Pkg(_L14);
  _L15 = _L16 + _L14;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L21, aSafe);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L18,
    &_L21.distance_definition);
  /* 3 */
  getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
    _L13,
    &_L18,
    &_L9,
    &_L10);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &_L19,
    &_L3.speed_definition);
  /* 3 */
  getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
    _L15,
    &_L19,
    &_L11,
    &_L12);
  /* 2 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&_L23);
  _L17.distance = _L13;
  _L17.speed = _L15;
  _L17.distanceIndex = _L10;
  _L17.speedIndex = _L12;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L17.BC, &_L23);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(BCACCForEBDFoot, &_L17);
  noname = _L9;
  _1_noname = _L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

