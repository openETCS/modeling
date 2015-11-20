/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward */
void BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::Index */ kcg_int Index,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::BC_acc */ BCAccumulator_type_CalcBrakingCurves_Pkg *BC_acc,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::LOA_MRSP_Target_speed */ V_internal_real_Type_SDM_Types_Pkg LOA_MRSP_Target_speed,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::exitCond */ kcg_bool *exitCond,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::BC */ BCAccumulator_type_CalcBrakingCurves_Pkg *BC)
{
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L4 */
  static ParabolaArc_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L3 */
  static L_internal_real_Type_SDM_Types_Pkg _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L1 */
  static kcg_int _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L6 */
  static ASafe_T_CalcBrakingCurves_types _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L18 */
  static kcg_int _L18;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L32 */
  static kcg_bool _L32;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L33 */
  static V_internal_real_Type_SDM_Types_Pkg _L33;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L36 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L36;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L41 */
  static L_internal_real_Type_SDM_Types_Pkg _L41;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L40 */
  static V_internal_real_Type_SDM_Types_Pkg _L40;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L39 */
  static kcg_int _L39;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L38 */
  static kcg_int _L38;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L37 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L37;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L42 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L42;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L58 */
  static kcg_int _L58;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L59 */
  static kcg_bool _L59;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::_L61 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L61;
  
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&_L36, BC_acc);
  _L41 = _L36.distance;
  _L40 = _L36.speed;
  _L39 = _L36.distanceIndex;
  _L38 = _L36.speedIndex;
  _L59 = kcg_false;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L6, Asafe);
  /* 1 */
  OneCycle_CalcBrakingCurves_Pkg_internalOperators(
    _L41,
    _L40,
    _L39,
    _L38,
    _L59,
    &_L6,
    &_L3,
    &_L2,
    &_L1,
    &_L18,
    &_L4);
  _L33 = LOA_MRSP_Target_speed;
  _L32 = _L33 <= _L2;
  *exitCond = _L32;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L37, &_L36.BC);
  _L58 = Index;
  /* 1 */
  setArc_CalcBrakingCurves_Pkg_internalOperators(&_L4, &_L37, _L58, &_L61);
  _L42.distance = _L3;
  _L42.speed = _L2;
  _L42.distanceIndex = _L1;
  _L42.speedIndex = _L18;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L42.BC, &_L61);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(BC, &_L42);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

