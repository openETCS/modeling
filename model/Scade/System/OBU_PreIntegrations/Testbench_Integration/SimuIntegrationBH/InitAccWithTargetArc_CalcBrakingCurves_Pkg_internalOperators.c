/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  static L_internal_real_Type_SDM_Types_Pkg noname;
  static V_internal_real_Type_SDM_Types_Pkg _1_noname;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L2 */
  static Target_real_T_TargetManagement_types _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L1 */
  static ASafe_T_CalcBrakingCurves_types _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L4 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L5 */
  static ASafeDistanceDefinition_T_CalcBrakingCurves_types _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L6 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L7 */
  static ASafe_Data_T_CalcBrakingCurves_types _L7;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L8 */
  static V_internal_real_Type_SDM_Types_Pkg _L8;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L9 */
  static kcg_int _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L10 */
  static L_internal_real_Type_SDM_Types_Pkg _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L11 */
  static kcg_int _L11;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L17 */
  static V_internal_real_Type_SDM_Types_Pkg _L17;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L19 */
  static V_internal_real_Type_SDM_Types_Pkg _L19;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L20 */
  static A_internal_real_Type_SDM_Types_Pkg _L20;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L30 */
  static V_internal_real_Type_SDM_Types_Pkg _L30;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L32 */
  static Target_real_T_TargetManagement_types _L32;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L33 */
  static Target_real_T_TargetManagement_types _L33;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L34 */
  static L_internal_real_Type_SDM_Types_Pkg _L34;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L35 */
  static L_internal_real_Type_SDM_Types_Pkg _L35;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L36 */
  static L_internal_real_Type_SDM_Types_Pkg _L36;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L63 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L63;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L64 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L64;
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::_L68 */
  static ParabolaArc_T_CalcBrakingCurves_types _L68;
  
  kcg_copy_Target_real_T_TargetManagement_types(&_L2, target);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L1, aSafe);
  _L36 = EBDfoot;
  kcg_copy_Target_real_T_TargetManagement_types(&_L32, target);
  _L19 = _L32.speed;
  _L34 = EBDfoot;
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L5,
    &_L1.distance_definition);
  /* 1 */
  getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
    _L34,
    &_L5,
    &_L10,
    &_L11);
  _L17 = _L2.speed;
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &_L6,
    &_L1.speed_definition);
  /* 1 */
  getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
    _L17,
    &_L6,
    &_L8,
    &_L9);
  _L35 = EBDfoot;
  kcg_copy_Target_real_T_TargetManagement_types(&_L33, target);
  _L30 = _L33.speed;
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L7, &_L1.data);
  _L20 = /* 2 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      _L11,
      _L9,
      &_L7);
  _L68.distance = _L35;
  _L68.speed = _L30;
  _L68.acceleration = _L20;
  /* 4 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&_L63);
  /* 1 */
  setArc_CalcBrakingCurves_Pkg_internalOperators(&_L68, &_L63, 0, &_L64);
  _L4.distance = _L36;
  _L4.speed = _L19;
  _L4.distanceIndex = _L11;
  _L4.speedIndex = _L9;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L4.BC, &_L64);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(Output1, &_L4);
  noname = _L10;
  _1_noname = _L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

