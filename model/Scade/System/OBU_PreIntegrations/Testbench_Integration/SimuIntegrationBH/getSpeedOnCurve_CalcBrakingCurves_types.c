/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getSpeedOnCurve */
void getSpeedOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getSpeedOnCurve::position */ L_internal_real_Type_SDM_Types_Pkg position,
  /* CalcBrakingCurves_types::getSpeedOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getSpeedOnCurve::speed */ V_internal_real_Type_SDM_Types_Pkg *speed)
{
  static kcg_int i1;
  /* CalcBrakingCurves_types::getSpeedOnCurve */
  static kcg_int acc;
  static kcg_int i;
  /* CalcBrakingCurves_types::searchIdxFloor::_L93 */
  static kcg_bool _L93_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L92 */
  static kcg_bool _L92_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L90 */
  static kcg_real _L90_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L89 */
  static L_internal_real_Type_SDM_Types_Pkg _L89_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L88 */
  static kcg_bool _L88_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L86 */
  static kcg_int _L86_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L74 */
  static L_internal_real_Type_SDM_Types_Pkg _L74_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L84 */
  static kcg_int _L84_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L77 */
  static kcg_bool _L77_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L40 */
  static L_internal_real_Type_SDM_Types_Pkg _L40_1;
  /* CalcBrakingCurves_types::searchIdxFloor::_L8 */
  static kcg_int _L8_1;
  /* CalcBrakingCurves_types::getSpeedOnCurve */
  static V_internal_real_Type_SDM_Types_Pkg op_call;
  /* CalcBrakingCurves_types::getSpeedOnCurve */
  static kcg_bool ck_every;
  static kcg_int noname;
  /* CalcBrakingCurves_types::getSpeedOnCurve::idx */
  static kcg_int idx;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L17 */
  static ParabolaArc_T_CalcBrakingCurves_types _L17;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L16 */
  static array_real_114 _L16;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L15 */
  static V_internal_real_Type_SDM_Types_Pkg _L15;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L14 */
  static kcg_int _L14;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L13 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L13;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L12 */
  static kcg_bool _L12;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L11 */
  static kcg_real _L11;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L7 */
  static ParabolaCurveDistances_T_CalcBrakingCurves_types _L7;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L8 */
  static ParabolaCurveSpeeds_T_CalcBrakingCurves_types _L8;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L9 */
  static ParabolaCurveAccelerations_T_CalcBrakingCurves_types _L9;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L10 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L10;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L6 */
  static kcg_real _L6;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L5 */
  static kcg_int _L5;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L2 */
  static kcg_real _L2;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L18 */
  static L_internal_real_Type_SDM_Types_Pkg _L18;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L19 */
  static L_internal_real_Type_SDM_Types_Pkg _L19;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L20 */
  static kcg_int _L20;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L21 */
  static kcg_int _L21;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L22 */
  static kcg_bool _L22;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L23 */
  static kcg_bool _L23;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L25 */
  static kcg_real _L25;
  /* CalcBrakingCurves_types::getSpeedOnCurve::_L24 */
  static kcg_bool _L24;
  
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L13, curve);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &_L9,
    &_L13.accelerations);
  _L5 = - 1;
  _L18 = position;
  /* pow */ for (i1 = 0; i1 < 114; i1++) {
    _L16[i1] = _L18;
  }
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &_L7,
    &_L13.distances);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L10, &_L13.valid);
  _L22 = kcg_true;
  _L20 = _L5;
  if (_L22) {
    for (i = 0; i < 114; i++) {
      acc = _L20;
      _L8_1 = acc;
      _L40_1 = _L16[i];
      _L88_1 = _L10[i];
      _L74_1 = _L7[i];
      _L90_1 = 0.0;
      /* 2 */ if (_L88_1) {
        _L89_1 = _L74_1;
      }
      else {
        _L89_1 = _L90_1;
      }
      _L77_1 = _L40_1 <= _L89_1;
      _L93_1 = !_L77_1;
      _L86_1 = i;
      /* 1 */ if (_L93_1) {
        _L84_1 = _L8_1;
      }
      else {
        _L84_1 = _L86_1;
      }
      _L20 = _L84_1;
      _L92_1 = !_L77_1;
      _L21 = i + 1;
      if (!_L92_1) {
        break;
      }
    }
  }
  else {
    _L21 = 0;
  }
  idx = _L20;
  _L14 = idx;
  if ((0 <= _L14) & (_L14 < 114)) {
    _L6 = _L9[_L14];
  }
  else {
    _L6 = 0.0;
  }
  _L25 = 0.0;
  _L24 = _L6 >= _L25;
  if ((0 <= _L14) & (_L14 < 114)) {
    _L12 = _L10[_L14];
  }
  else {
    _L12 = kcg_false;
  }
  _L23 = _L24 & _L12;
  ck_every = _L23;
  if ((0 <= _L14) & (_L14 < 114)) {
    _L11 = _L7[_L14];
  }
  else {
    _L11 = 0.0;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&_L8, &_L13.speeds);
  if ((0 <= _L14) & (_L14 < 114)) {
    _L2 = _L8[_L14];
  }
  else {
    _L2 = 0.0;
  }
  _L17.distance = _L11;
  _L17.speed = _L2;
  _L17.acceleration = _L6;
  _L19 = position;
  /* ck_getSpeedOnCurve */ if (ck_every) {
    op_call = /* 1 */ getSpeedOnCurveArc_CalcBrakingCurves_types(&_L17, _L19);
  }
  *valid = _L23;
  /* ck_getSpeedOnCurve */ if (ck_every) {
    _L15 = op_call;
  }
  else {
    _L15 = 0.0;
  }
  *speed = _L15;
  noname = _L21;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getSpeedOnCurve_CalcBrakingCurves_types.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

