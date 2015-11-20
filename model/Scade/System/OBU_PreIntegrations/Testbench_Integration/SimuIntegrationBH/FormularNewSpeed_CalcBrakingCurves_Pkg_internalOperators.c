/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed */
void FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inAcceleration */ A_internal_real_Type_SDM_Types_Pkg inAcceleration,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD0 */ L_internal_real_Type_SDM_Types_Pkg inD0,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD1 */ L_internal_real_Type_SDM_Types_Pkg inD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inBeginSpeed */ V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::outSpeedAtD1 */ V_internal_real_Type_SDM_Types_Pkg *outSpeedAtD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::valid */ kcg_bool *valid)
{
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed */
  static kcg_real op_call;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed */
  static kcg_bool ck_every;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L1 */
  static kcg_real _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L2 */
  static A_internal_real_Type_SDM_Types_Pkg _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L3 */
  static L_internal_real_Type_SDM_Types_Pkg _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L4 */
  static L_internal_real_Type_SDM_Types_Pkg _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L5 */
  static V_internal_real_Type_SDM_Types_Pkg _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L6 */
  static kcg_real _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L7 */
  static kcg_real _L7;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L9 */
  static kcg_real _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L10 */
  static kcg_real _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L11 */
  static V_internal_real_Type_SDM_Types_Pkg _L11;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L12 */
  static kcg_real _L12;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L13 */
  static kcg_bool _L13;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L14 */
  static kcg_real _L14;
  
  _L6 = 2.0;
  _L2 = inAcceleration;
  _L3 = inD0;
  _L4 = inD1;
  _L9 = _L3 - _L4;
  _L7 = _L6 * _L2 * _L9;
  _L5 = inBeginSpeed;
  _L11 = /* 1 */ Square_mathext_V_internal_real_Type(_L5);
  _L10 = _L7 + _L11;
  _L12 = 0.0;
  _L13 = _L10 > _L12;
  ck_every = _L13;
  /* ck_FormularNewSpeed */ if (ck_every) {
    op_call = /* 1 */ SqrtR_mathext(_L10);
  }
  _L14 = 0.0;
  /* ck_FormularNewSpeed */ if (ck_every) {
    _L1 = op_call;
  }
  else {
    _L1 = _L14;
  }
  *outSpeedAtD1 = _L1;
  *valid = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

