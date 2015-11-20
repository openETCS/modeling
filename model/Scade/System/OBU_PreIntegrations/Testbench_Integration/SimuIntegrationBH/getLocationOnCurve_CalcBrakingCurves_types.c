/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* CalcBrakingCurves_types::getLocationOnCurve */
void getLocationOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getLocationOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getLocationOnCurve::speed */ V_internal_real_Type_SDM_Types_Pkg speed,
  /* CalcBrakingCurves_types::getLocationOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getLocationOnCurve::location */ L_internal_real_Type_SDM_Types_Pkg *location)
{
  static kcg_int i1;
  /* CalcBrakingCurves_types::getLocationOnCurve */
  static kcg_int acc;
  static kcg_int i;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L115 */
  static kcg_bool _L115_1;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L114 */
  static kcg_bool _L114_1;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L112 */
  static kcg_real _L112_1;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L111 */
  static V_internal_real_Type_SDM_Types_Pkg _L111_1;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L90 */
  static kcg_bool _L90_1;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L86 */
  static kcg_int _L86_1;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L74 */
  static V_internal_real_Type_SDM_Types_Pkg _L74_1;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L84 */
  static kcg_int _L84_1;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L40 */
  static V_internal_real_Type_SDM_Types_Pkg _L40_1;
  /* CalcBrakingCurves_types::searchIdxFloorBackward::_L8 */
  static kcg_int _L8_1;
  /* CalcBrakingCurves_types::getLocationOnCurve */
  static kcg_bool op_call;
  /* CalcBrakingCurves_types::getLocationOnCurve */
  static L_internal_real_Type_SDM_Types_Pkg _2_op_call;
  /* CalcBrakingCurves_types::getLocationOnCurve */
  static kcg_bool ck_every;
  static kcg_int noname;
  /* CalcBrakingCurves_types::getLocationOnCurve::idx */
  static kcg_int idx;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L1 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L1;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L17 */
  static kcg_int _L17;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L15 */
  static array_real_114 _L15;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L34 */
  static kcg_real _L34;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L32 */
  static ParabolaArc_T_CalcBrakingCurves_types _L32;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L31 */
  static kcg_real _L31;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L30 */
  static kcg_bool _L30;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L28 */
  static kcg_real _L28;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L24 */
  static ParabolaCurveDistances_T_CalcBrakingCurves_types _L24;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L25 */
  static ParabolaCurveSpeeds_T_CalcBrakingCurves_types _L25;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L26 */
  static ParabolaCurveAccelerations_T_CalcBrakingCurves_types _L26;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L27 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L27;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L35 */
  static L_internal_real_Type_SDM_Types_Pkg _L35;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L36 */
  static V_internal_real_Type_SDM_Types_Pkg _L36;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L39 */
  static kcg_int _L39;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L40 */
  static kcg_bool _L40;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L43 */
  static kcg_int _L43;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L44 */
  static kcg_int _L44;
  /* CalcBrakingCurves_types::getLocationOnCurve::_L45 */
  static kcg_bool _L45;
  
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L1, curve);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L27, &_L1.valid);
  _L17 = - 1;
  _L2 = speed;
  /* pow */ for (i1 = 0; i1 < 114; i1++) {
    _L15[i1] = _L2;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(&_L25, &_L1.speeds);
  _L45 = kcg_true;
  _L43 = _L17;
  if (_L45) {
    for (i = 0; i < 114; i++) {
      acc = _L43;
      _L8_1 = acc;
      _L40_1 = _L15[i];
      _L90_1 = _L27[i];
      _L74_1 = _L25[i];
      _L112_1 = 0.0;
      /* 3 */ if (_L90_1) {
        _L111_1 = _L74_1;
      }
      else {
        _L111_1 = _L112_1;
      }
      _L115_1 = _L40_1 >= _L111_1;
      _L86_1 = i;
      /* 1 */ if (_L115_1) {
        _L84_1 = _L86_1;
      }
      else {
        _L84_1 = _L8_1;
      }
      _L43 = _L84_1;
      _L114_1 = !_L115_1;
      _L44 = i + 1;
      if (!_L114_1) {
        break;
      }
    }
  }
  else {
    _L44 = 0;
  }
  idx = _L43;
  _L39 = idx;
  if ((0 <= _L39) & (_L39 < 114)) {
    _L30 = _L27[_L39];
  }
  else {
    _L30 = kcg_false;
  }
  ck_every = _L30;
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &_L24,
    &_L1.distances);
  if ((0 <= _L39) & (_L39 < 114)) {
    _L31 = _L24[_L39];
  }
  else {
    _L31 = 0.0;
  }
  if ((0 <= _L39) & (_L39 < 114)) {
    _L28 = _L25[_L39];
  }
  else {
    _L28 = 0.0;
  }
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &_L26,
    &_L1.accelerations);
  if ((0 <= _L39) & (_L39 < 114)) {
    _L34 = _L26[_L39];
  }
  else {
    _L34 = 0.0;
  }
  _L32.distance = _L31;
  _L32.speed = _L28;
  _L32.acceleration = _L34;
  _L36 = speed;
  /* ck_getLocationOnCurve */ if (ck_every) {
    /* 1 */
    getLocationOnCurveArc_CalcBrakingCurves_types(
      &_L32,
      _L36,
      &_2_op_call,
      &op_call);
    _L35 = _2_op_call;
  }
  else {
    _L35 = 0.0;
  }
  *location = _L35;
  /* ck_getLocationOnCurve */ if (ck_every) {
    _L40 = op_call;
  }
  else {
    _L40 = kcg_false;
  }
  *valid = _L40;
  noname = _L44;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getLocationOnCurve_CalcBrakingCurves_types.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

