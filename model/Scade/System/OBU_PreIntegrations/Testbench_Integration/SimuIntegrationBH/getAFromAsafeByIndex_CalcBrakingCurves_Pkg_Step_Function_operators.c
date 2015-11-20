/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex */
A_internal_real_Type_SDM_Types_Pkg getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::DistanceIndex */ kcg_int DistanceIndex,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::SpeedIndex */ kcg_int SpeedIndex,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::Asafe */ ASafe_Data_T_CalcBrakingCurves_types *Asafe)
{
  /* math::Min::Mi_Output */
  static kcg_int Mi_Output_1;
  /* math::Min::I2 */
  static kcg_int I2_1;
  /* math::Min::I1 */
  static kcg_int I1_1;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_int _L24_1;
  /* math::Min::_L22 */
  static kcg_int _L22_1;
  /* math::Min::_L21 */
  static kcg_int _L21_1;
  /* math::Min::Mi_Output */
  static kcg_int Mi_Output_2;
  /* math::Min::I2 */
  static kcg_int I2_2;
  /* math::Min::I1 */
  static kcg_int I1_2;
  /* math::Min::_L25 */
  static kcg_bool _L25_2;
  /* math::Min::_L24 */
  static kcg_int _L24_2;
  /* math::Min::_L22 */
  static kcg_int _L22_2;
  /* math::Min::_L21 */
  static kcg_int _L21_2;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::_L5 */
  static kcg_int _L5;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::_L6 */
  static kcg_int _L6;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::_L9 */
  static kcg_int _L9;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::_L13 */
  static kcg_int _L13;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::_L14 */
  static kcg_int _L14;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::_L15 */
  static kcg_int _L15;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::_L16 */
  static kcg_real _L16;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::_L17 */
  static ASafe_Data_T_CalcBrakingCurves_types _L17;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::_L18 */
  static kcg_real _L18;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::outA */
  static A_internal_real_Type_SDM_Types_Pkg outA;
  
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&_L17, Asafe);
  _L18 = 0.0;
  _L5 = SpeedIndex;
  I1_1 = _L5;
  _L21_1 = I1_1;
  _L9 = cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types;
  I2_1 = _L9;
  _L22_1 = I2_1;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L14 = Mi_Output_1;
  _L6 = DistanceIndex;
  I1_2 = _L6;
  _L21_2 = I1_2;
  _L13 = cMAX_DISTANCE_STEPS_CalcBrakingCurves_types;
  I2_2 = _L13;
  _L22_2 = I2_2;
  _L25_2 = _L21_2 <= _L22_2;
  /* 1 */ if (_L25_2) {
    _L24_2 = _L21_2;
  }
  else {
    _L24_2 = _L22_2;
  }
  Mi_Output_2 = _L24_2;
  _L15 = Mi_Output_2;
  if ((0 <= _L14) & (_L14 < 14) & ((0 <= _L15) & (_L15 < 100))) {
    _L16 = _L17[_L14][_L15];
  }
  else {
    _L16 = _L18;
  }
  outA = _L16;
  return outA;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

