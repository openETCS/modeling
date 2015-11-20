/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed */
void getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedIn */ V_internal_real_Type_SDM_Types_Pkg SpeedIn,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::ASafeSpeeds */ ASafeSpeedDefinition_T_CalcBrakingCurves_types *ASafeSpeeds,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedStepOut */ V_internal_real_Type_SDM_Types_Pkg *SpeedStepOut,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::SpeedStepIndexOut */ kcg_int *SpeedStepIndexOut)
{
  static kcg_int i1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed */
  static kcg_int acc;
  static kcg_int i;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::SearchIdxFloor::_L86 */
  static kcg_int _L86_1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::SearchIdxFloor::_L74 */
  static kcg_real _L74_1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::SearchIdxFloor::_L84 */
  static kcg_int _L84_1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::SearchIdxFloor::_L77 */
  static kcg_bool _L77_1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::SearchIdxFloor::_L40 */
  static kcg_real _L40_1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::SearchIdxFloor::_L8 */
  static kcg_int _L8_1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::_L5 */
  static V_internal_real_Type_SDM_Types_Pkg _L5;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::_L3 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L3;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::_L2 */
  static kcg_int _L2;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::_L6 */
  static kcg_real _L6;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::_L7 */
  static kcg_real _L7;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::_L1 */
  static kcg_int _L1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getSpeedStepFromSpeed::_L8 */
  static ASafeSpeedDefinition_T_CalcBrakingCurves_types _L8;
  
  _L2 = 0;
  _L5 = SpeedIn;
  /* pow */ for (i1 = 0; i1 < 14; i1++) {
    _L3[i1] = _L5;
  }
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(&_L8, ASafeSpeeds);
  _L7 = 0.0;
  _L1 = _L2;
  for (i = 0; i < 14; i++) {
    acc = _L1;
    _L8_1 = acc;
    _L40_1 = _L3[i];
    _L74_1 = _L8[i];
    _L77_1 = _L40_1 < _L74_1;
    _L86_1 = i;
    /* 1 */ if (_L77_1) {
      _L84_1 = _L8_1;
    }
    else {
      _L84_1 = _L86_1;
    }
    _L1 = _L84_1;
  }
  if ((0 <= _L1) & (_L1 < 14)) {
    _L6 = _L8[_L1];
  }
  else {
    _L6 = _L7;
  }
  *SpeedStepOut = _L6;
  *SpeedStepIndexOut = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

