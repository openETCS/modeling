/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurveArc_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getLocationOnCurveArc */
void getLocationOnCurveArc_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getLocationOnCurveArc::arc */ ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::location */ L_internal_real_Type_SDM_Types_Pkg *location,
  /* CalcBrakingCurves_types::getLocationOnCurveArc::valid */ kcg_bool *valid)
{
  /* CalcBrakingCurves_types::getLocationOnCurveArc::A1 */
  static kcg_bool A1;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L1 */
  static ParabolaArc_T_CalcBrakingCurves_types _L1;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L5 */
  static L_internal_real_Type_SDM_Types_Pkg _L5;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L4 */
  static V_internal_real_Type_SDM_Types_Pkg _L4;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L3 */
  static A_internal_real_Type_SDM_Types_Pkg _L3;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L6 */
  static kcg_real _L6;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L7 */
  static kcg_real _L7;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L9 */
  static kcg_real _L9;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L10 */
  static kcg_real _L10;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L11 */
  static kcg_real _L11;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L15 */
  static kcg_real _L15;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L13 */
  static kcg_bool _L13;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L14 */
  static kcg_real _L14;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L16 */
  static kcg_real _L16;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L23 */
  static kcg_real _L23;
  /* CalcBrakingCurves_types::getLocationOnCurveArc::_L24 */
  static kcg_real _L24;
  
  kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(&_L1, arc);
  _L2 = v_est;
  _L5 = _L1.distance;
  _L10 = _L2 * _L2;
  _L4 = _L1.speed;
  _L9 = _L4 * _L4;
  _L11 = _L10 - _L9;
  _L14 = 0.0;
  _L3 = _L1.acceleration;
  _L13 = _L14 != _L3;
  _L24 = 2.0;
  _L23 = _L3 * _L24;
  _L16 = 1.0;
  /* 1 */ if (_L13) {
    _L15 = _L23;
  }
  else {
    _L15 = _L16;
  }
  _L7 = _L11 / _L15;
  _L6 = _L5 - _L7;
  *location = _L6;
  *valid = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLocationOnCurveArc_CalcBrakingCurves_types.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

