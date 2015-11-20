/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeDistDisplay.h"

/* ComputeDistDisplay */
kcg_real ComputeDistDisplay(
  /* ComputeDistDisplay::MaxLinearDistance */ kcg_real MaxLinearDistance,
  /* ComputeDistDisplay::MaxLogDistance */ kcg_real MaxLogDistance,
  /* ComputeDistDisplay::ObjectPosition */ kcg_real ObjectPosition,
  /* ComputeDistDisplay::TrainPosition */ kcg_real TrainPosition,
  /* ComputeDistDisplay::Zoomlevel */ kcg_int Zoomlevel)
{
  /* ComputeDistDisplay::ObjectScreenYPosition */
  static kcg_real _1_ObjectScreenYPosition;
  /* ComputeDistDisplay::IfBlock1::then::_L4 */
  static kcg_real _L4_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::then::_L2 */
  static kcg_real _L2_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::then::_L1 */
  static kcg_real _L1_IfBlock1;
  /* ComputeDistDisplay::ObjectScreenYPosition */
  static kcg_real ObjectScreenYPosition;
  /* ComputeDistDisplay::IfBlock1::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* ComputeDistDisplay::ObjectScreenYPosition */
  static kcg_real _5_ObjectScreenYPosition;
  /* ComputeDistDisplay::IfBlock1::else::else::then::_L1 */
  static kcg_real _L18_IfBlock1;
  /* ComputeDistDisplay::ObjectScreenYPosition */
  static kcg_real _4_ObjectScreenYPosition;
  /* ComputeDistDisplay::IfBlock1::else::else::else::_L13 */
  static kcg_real _L13_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else::else::_L9 */
  static kcg_real _L9_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else::else::_L8 */
  static kcg_real _L8_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else::else::_L7 */
  static kcg_real _L7_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else::else::_L6 */
  static kcg_real _L6_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else::else::_L5 */
  static kcg_real _L5_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else::else::_L3 */
  static kcg_real _L3_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else::else::_L2 */
  static kcg_real _L29_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else::else::_L1 */
  static kcg_real _L110_IfBlock1;
  /* ComputeDistDisplay::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* ComputeDistDisplay::ObjectScreenYPosition */
  static kcg_real _2_ObjectScreenYPosition;
  /* ComputeDistDisplay::IfBlock1::else::then::_L2 */
  static kcg_real _L27_IfBlock1;
  /* ComputeDistDisplay::ObjectScreenYPosition */
  static kcg_real _3_ObjectScreenYPosition;
  /* ComputeDistDisplay::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* ComputeDistDisplay::linearScaleFactor */
  static kcg_real linearScaleFactor;
  /* ComputeDistDisplay::l_objectDistance */
  static kcg_real l_objectDistance;
  /* ComputeDistDisplay::_L2 */
  static kcg_real _L2;
  /* ComputeDistDisplay::_L3 */
  static array_real_6 _L3;
  /* ComputeDistDisplay::_L5 */
  static kcg_int _L5;
  /* ComputeDistDisplay::_L6 */
  static kcg_real _L6;
  /* ComputeDistDisplay::_L7 */
  static kcg_real _L7;
  /* ComputeDistDisplay::_L8 */
  static kcg_real _L8;
  /* ComputeDistDisplay::ObjectScreenYPosition */
  static kcg_real _11_ObjectScreenYPosition;
  
  _L6 = ObjectPosition;
  _L7 = TrainPosition;
  _L8 = _L6 - _L7;
  l_objectDistance = _L8;
  IfBlock1_clock = l_objectDistance <= MaxLinearDistance;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = l_objectDistance;
  }
  else {
    _6_else_clock_IfBlock1 = l_objectDistance < 0.0;
    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
      _L27_IfBlock1 = 0.0;
      _3_ObjectScreenYPosition = _L27_IfBlock1;
      ObjectScreenYPosition = _3_ObjectScreenYPosition;
    }
    else {
      else_clock_IfBlock1 = l_objectDistance > MaxLogDistance;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L18_IfBlock1 = 262.0;
        _5_ObjectScreenYPosition = _L18_IfBlock1;
        _2_ObjectScreenYPosition = _5_ObjectScreenYPosition;
      }
      else {
        _L6_IfBlock1 = logScaleFactor;
        _L110_IfBlock1 = l_objectDistance;
        _L29_IfBlock1 = /* 1 */ LogR_mathext(_L110_IfBlock1);
        _L13_IfBlock1 = MaxLinearDistance;
        _L9_IfBlock1 = /* 2 */ LogR_mathext(_L13_IfBlock1);
        _L3_IfBlock1 = _L29_IfBlock1 - _L9_IfBlock1;
        _L5_IfBlock1 = _L6_IfBlock1 * _L3_IfBlock1;
        _L8_IfBlock1 = ScaleLine5;
        _L7_IfBlock1 = _L5_IfBlock1 + _L8_IfBlock1;
        _4_ObjectScreenYPosition = _L7_IfBlock1;
        _2_ObjectScreenYPosition = _4_ObjectScreenYPosition;
      }
      ObjectScreenYPosition = _2_ObjectScreenYPosition;
    }
  }
  kcg_copy_array_real_6(&_L3, (array_real_6 *) &LinearScaleFactors);
  _L5 = Zoomlevel;
  if ((0 <= _L5) & (_L5 < 6)) {
    _L2 = _L3[_L5];
  }
  else {
    _L2 = - 1.0;
  }
  linearScaleFactor = _L2;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = linearScaleFactor;
    _L2_IfBlock1 = _L1_IfBlock1 / _L4_IfBlock1;
    _1_ObjectScreenYPosition = _L2_IfBlock1;
    _11_ObjectScreenYPosition = _1_ObjectScreenYPosition;
  }
  else {
    _11_ObjectScreenYPosition = ObjectScreenYPosition;
  }
  return _11_ObjectScreenYPosition;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ComputeDistDisplay.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

