/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OneCycle_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::OneCycle */
void OneCycle_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistance */ L_internal_real_Type_SDM_Types_Pkg currentDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeed */ V_internal_real_Type_SDM_Types_Pkg currentSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistanceIndex */ kcg_int currentDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeedIndex */ kcg_int currentSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::backwardCalculation */ kcg_bool backwardCalculation,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::inAsafe */ ASafe_T_CalcBrakingCurves_types *inAsafe,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistance */ L_internal_real_Type_SDM_Types_Pkg *newDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeed */ V_internal_real_Type_SDM_Types_Pkg *newSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistanceIndex */ kcg_int *newDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeedIndex */ kcg_int *newSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newArc */ ParabolaArc_T_CalcBrakingCurves_types *newArc)
{
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currAcceleration */
  static kcg_real currAcceleration;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::AsafeDistances */
  static ASafeDistanceDefinition_T_CalcBrakingCurves_types AsafeDistances;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::AsafeSpeeds */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types AsafeSpeeds;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::AsafeData */
  static ASafe_Data_T_CalcBrakingCurves_types AsafeData;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeedValid */
  static kcg_bool newSpeedValid;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newAcceleration */
  static kcg_real newAcceleration;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistanceIndexInt */
  static kcg_int newDistanceIndexInt;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeedIndexInt */
  static kcg_int newSpeedIndexInt;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L1 */
  static V_internal_real_Type_SDM_Types_Pkg _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L9 */
  static ASafe_T_CalcBrakingCurves_types _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L13 */
  static ASafeDistanceDefinition_T_CalcBrakingCurves_types _L13;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L12 */
  static ASafe_Data_T_CalcBrakingCurves_types _L12;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L11 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L11;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L17 */
  static A_internal_real_Type_SDM_Types_Pkg _L17;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L21 */
  static kcg_int _L21;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L22 */
  static kcg_int _L22;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L24 */
  static ASafe_Data_T_CalcBrakingCurves_types _L24;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L25 */
  static ASafeDistanceDefinition_T_CalcBrakingCurves_types _L25;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L26 */
  static L_internal_real_Type_SDM_Types_Pkg _L26;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L27 */
  static kcg_int _L27;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L30 */
  static kcg_real _L30;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L31 */
  static V_internal_real_Type_SDM_Types_Pkg _L31;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L32 */
  static kcg_real _L32;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L34 */
  static kcg_real _L34;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L35 */
  static kcg_int _L35;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L39 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L39;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L40 */
  static kcg_bool _L40;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L53 */
  static kcg_bool _L53;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L52 */
  static V_internal_real_Type_SDM_Types_Pkg _L52;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L55 */
  static kcg_real _L55;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L54 */
  static kcg_bool _L54;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L56 */
  static ParabolaArc_T_CalcBrakingCurves_types _L56;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L58 */
  static L_internal_real_Type_SDM_Types_Pkg _L58;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L59 */
  static L_internal_real_Type_SDM_Types_Pkg _L59;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L60 */
  static V_internal_real_Type_SDM_Types_Pkg _L60;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L61 */
  static kcg_real _L61;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L64 */
  static kcg_int _L64;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L63 */
  static kcg_bool _L63;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L65 */
  static kcg_int _L65;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L67 */
  static kcg_int _L67;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L66 */
  static kcg_bool _L66;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L38 */
  static kcg_real _L38;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L76 */
  static ASafe_Data_T_CalcBrakingCurves_types _L76;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L75 */
  static A_internal_real_Type_SDM_Types_Pkg _L75;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L79 */
  static kcg_int _L79;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L80 */
  static kcg_int _L80;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L81 */
  static kcg_real _L81;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L82 */
  static kcg_int _L82;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L84 */
  static kcg_bool _L84;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L87 */
  static kcg_int _L87;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L88 */
  static kcg_int _L88;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L89 */
  static kcg_bool _L89;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L98 */
  static kcg_bool _L98;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L99 */
  static kcg_bool _L99;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L100 */
  static kcg_int _L100;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L102 */
  static kcg_bool _L102;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L103 */
  static kcg_int _L103;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L104 */
  static kcg_int _L104;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L105 */
  static kcg_int _L105;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L106 */
  static kcg_real _L106;
  
  _L22 = currentDistanceIndex;
  _L21 = currentSpeedIndex;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L9, inAsafe);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L12, &_L9.data);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&AsafeData, &_L12);
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L24, &AsafeData);
  _L17 = /* 1 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      _L22,
      _L21,
      &_L24);
  currAcceleration = _L17;
  _L106 = currAcceleration;
  _L26 = currentDistance;
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L13,
    &_L9.distance_definition);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &AsafeDistances,
    &_L13);
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L25,
    &AsafeDistances);
  _L32 = 0.0;
  _L84 = backwardCalculation;
  _L102 = !_L84;
  _L27 = currentDistanceIndex;
  _L103 = cMAX_DISTANCE_STEPS_CalcBrakingCurves_types;
  _L87 = /* 3 */
    nextIndex_CalcBrakingCurves_Pkg_internalOperators(_L102, _L27, _L103);
  if ((0 <= _L87) & (_L87 < 100)) {
    _L30 = _L25[_L87];
  }
  else {
    _L30 = _L32;
  }
  _L31 = currentSpeed;
  /* 1 */
  FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
    _L106,
    _L26,
    _L30,
    _L31,
    &_L1,
    &_L98);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &_L11,
    &_L9.speed_definition);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(&AsafeSpeeds, &_L11);
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(&_L39, &AsafeSpeeds);
  _L38 = 0.0;
  _L89 = backwardCalculation;
  _L35 = currentSpeedIndex;
  _L100 = cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types;
  _L88 = /* 1 */
    nextIndex_CalcBrakingCurves_Pkg_internalOperators(_L89, _L35, _L100);
  if ((0 <= _L88) & (_L88 < 14)) {
    _L34 = _L39[_L88];
  }
  else {
    _L34 = _L38;
  }
  _L40 = _L1 <= _L34;
  _L99 = _L98 & _L40;
  newSpeedValid = _L99;
  _L53 = newSpeedValid;
  /* 1 */ if (_L53) {
    _L52 = _L1;
  }
  else {
    _L52 = _L34;
  }
  *newSpeed = _L52;
  _L54 = newSpeedValid;
  _L59 = currentDistance;
  _L60 = currentSpeed;
  _L61 = currAcceleration;
  _L58 = /* 1 */
    FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
      _L59,
      _L34,
      _L60,
      _L61);
  /* 2 */ if (_L54) {
    _L55 = _L30;
  }
  else {
    _L55 = _L58;
  }
  *newDistance = _L55;
  _L66 = newSpeedValid;
  _L82 = currentDistanceIndex;
  /* 4 */ if (_L66) {
    _L67 = _L87;
  }
  else {
    _L67 = _L82;
  }
  newDistanceIndexInt = _L67;
  _L79 = newDistanceIndexInt;
  _L63 = newSpeedValid;
  _L65 = currentSpeedIndex;
  /* 3 */ if (_L63) {
    _L64 = _L65;
  }
  else {
    _L64 = _L88;
  }
  newSpeedIndexInt = _L64;
  _L80 = newSpeedIndexInt;
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L76, &AsafeData);
  _L75 = /* 2 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      _L79,
      _L80,
      &_L76);
  newAcceleration = _L75;
  _L81 = newAcceleration;
  _L56.distance = _L55;
  _L56.speed = _L52;
  _L56.acceleration = _L81;
  kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(newArc, &_L56);
  _L105 = newSpeedIndexInt;
  *newSpeedIndex = _L105;
  _L104 = newDistanceIndexInt;
  *newDistanceIndex = _L104;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** OneCycle_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

