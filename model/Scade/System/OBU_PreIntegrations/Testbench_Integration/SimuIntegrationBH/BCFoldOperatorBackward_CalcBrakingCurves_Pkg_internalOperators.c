/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward */
void BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Index */ kcg_int Index,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC_acc */ BCAccumulator_type_CalcBrakingCurves_Pkg *BC_acc,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::d_est_front */ L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::exitCond */ kcg_bool *exitCond,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC */ BCAccumulator_type_CalcBrakingCurves_Pkg *BC)
{
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L4 */
  static ParabolaArc_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L3 */
  static L_internal_real_Type_SDM_Types_Pkg _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L1 */
  static kcg_int _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L6 */
  static ASafe_T_CalcBrakingCurves_types _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L18 */
  static kcg_int _L18;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L32 */
  static kcg_bool _L32;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L33 */
  static L_internal_real_Type_SDM_Types_Pkg _L33;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L36 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L36;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L41 */
  static L_internal_real_Type_SDM_Types_Pkg _L41;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L40 */
  static V_internal_real_Type_SDM_Types_Pkg _L40;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L39 */
  static kcg_int _L39;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L38 */
  static kcg_int _L38;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L37 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L37;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L42 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L42;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L59 */
  static kcg_bool _L59;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L60 */
  static kcg_int _L60;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L61 */
  static kcg_int _L61;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L62 */
  static kcg_int _L62;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L63 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L63;
  
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&_L36, BC_acc);
  _L41 = _L36.distance;
  _L40 = _L36.speed;
  _L39 = _L36.distanceIndex;
  _L38 = _L36.speedIndex;
  _L59 = kcg_true;
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
  _L33 = d_est_front;
  _L32 = _L3 > _L33;
  *exitCond = _L32;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L37, &_L36.BC);
  _L60 = Index;
  _L62 = 1;
  _L61 = _L60 + _L62;
  /* 1 */
  setArc_CalcBrakingCurves_Pkg_internalOperators(&_L4, &_L37, _L61, &_L63);
  _L42.distance = _L3;
  _L42.speed = _L2;
  _L42.distanceIndex = _L1;
  _L42.speedIndex = _L18;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L42.BC, &_L63);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(BC, &_L42);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

