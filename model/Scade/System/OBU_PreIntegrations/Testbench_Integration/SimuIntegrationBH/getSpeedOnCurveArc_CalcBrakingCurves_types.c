/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurveArc_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurveArc */
V_internal_real_Type_SDM_Types_Pkg getSpeedOnCurveArc_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::arc */ ParabolaArc_T_CalcBrakingCurves_types *arc,
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::location */ L_internal_real_Type_SDM_Types_Pkg location)
{
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L4 */
  static ParabolaArc_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L1 */
  static L_internal_real_Type_SDM_Types_Pkg _L1;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L3 */
  static A_internal_real_Type_SDM_Types_Pkg _L3;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L5 */
  static L_internal_real_Type_SDM_Types_Pkg _L5;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L6 */
  static kcg_real _L6;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L7 */
  static kcg_real _L7;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L8 */
  static kcg_real _L8;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L9 */
  static kcg_real _L9;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L10 */
  static kcg_real _L10;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::_L11 */
  static kcg_real _L11;
  /* CalcBrakingCurves_types::getSpeedOnCurveArc::speed */
  static V_internal_real_Type_SDM_Types_Pkg speed;
  
  kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(&_L4, arc);
  _L3 = _L4.acceleration;
  _L2 = _L4.speed;
  _L1 = _L4.distance;
  _L5 = location;
  _L6 = _L3 + _L3;
  _L7 = _L1 - _L5;
  _L8 = _L2 * _L2;
  _L9 = _L7 * _L6;
  _L11 = _L8 + _L9;
  _L10 = /* 1 */ SqrtR_mathext(_L11);
  speed = _L10;
  return speed;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedOnCurveArc_CalcBrakingCurves_types.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

