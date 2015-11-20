/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition */
L_internal_real_Type_SDM_Types_Pkg FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginDistance */ L_internal_real_Type_SDM_Types_Pkg inBeginDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inEndSpeed */ V_internal_real_Type_SDM_Types_Pkg inEndSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginSpeed */ V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inAcceleration */ A_internal_real_Type_SDM_Types_Pkg inAcceleration)
{
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition */
  static kcg_real op_call;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition */
  static kcg_bool ck_every;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L1 */
  static L_internal_real_Type_SDM_Types_Pkg _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L3 */
  static V_internal_real_Type_SDM_Types_Pkg _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L4 */
  static A_internal_real_Type_SDM_Types_Pkg _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L5 */
  static kcg_real _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L6 */
  static V_internal_real_Type_SDM_Types_Pkg _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L7 */
  static V_internal_real_Type_SDM_Types_Pkg _L7;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L8 */
  static kcg_real _L8;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L9 */
  static kcg_real _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L10 */
  static kcg_real _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L11 */
  static kcg_real _L11;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L18 */
  static kcg_real _L18;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L19 */
  static A_internal_real_Type_SDM_Types_Pkg _L19;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L20 */
  static kcg_bool _L20;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L21 */
  static kcg_real _L21;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::outD1 */
  static L_internal_real_Type_SDM_Types_Pkg outD1;
  
  _L19 = inAcceleration;
  _L21 = 0.0;
  _L20 = _L19 != _L21;
  ck_every = _L20;
  _L2 = inEndSpeed;
  _L7 = /* 2 */ Square_mathext_V_internal_real_Type(_L2);
  _L3 = inBeginSpeed;
  _L6 = /* 1 */ Square_mathext_V_internal_real_Type(_L3);
  _L8 = _L7 - _L6;
  _L11 = 2.0;
  _L4 = inAcceleration;
  _L10 = _L11 * _L4;
  /* ck_FormularNewPosition */ if (ck_every) {
    op_call = _L8 / _L10;
  }
  _L1 = inBeginDistance;
  _L18 = 0.0;
  /* ck_FormularNewPosition */ if (ck_every) {
    _L9 = op_call;
  }
  else {
    _L9 = _L18;
  }
  _L5 = _L1 - _L9;
  outD1 = _L5;
  return outD1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

