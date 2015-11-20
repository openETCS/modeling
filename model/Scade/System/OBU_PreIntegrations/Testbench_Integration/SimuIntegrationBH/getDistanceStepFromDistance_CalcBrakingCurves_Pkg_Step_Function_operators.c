/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance */
void getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceIn */ L_internal_real_Type_SDM_Types_Pkg DistanceIn,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::ASafeDistances */ ASafeDistanceDefinition_T_CalcBrakingCurves_types *ASafeDistances,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceStepOut */ L_internal_real_Type_SDM_Types_Pkg *DistanceStepOut,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceStepIndexOut */ kcg_int *DistanceStepIndexOut)
{
  static kcg_int i1;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance */
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
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::_L5 */
  static L_internal_real_Type_SDM_Types_Pkg _L5;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::_L4 */
  static ASafeDistanceDefinition_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::_L3 */
  static array_real_100 _L3;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::_L2 */
  static kcg_int _L2;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::_L7 */
  static kcg_real _L7;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::_L8 */
  static kcg_real _L8;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::_L1 */
  static kcg_int _L1;
  
  _L2 = 0;
  _L5 = DistanceIn;
  /* pow */ for (i1 = 0; i1 < 100; i1++) {
    _L3[i1] = _L5;
  }
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &_L4,
    ASafeDistances);
  _L7 = 0.0;
  _L1 = _L2;
  for (i = 0; i < 100; i++) {
    acc = _L1;
    _L8_1 = acc;
    _L40_1 = _L3[i];
    _L74_1 = _L4[i];
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
  if ((0 <= _L1) & (_L1 < 100)) {
    _L8 = _L4[_L1];
  }
  else {
    _L8 = _L7;
  }
  *DistanceStepOut = _L8;
  *DistanceStepIndexOut = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

