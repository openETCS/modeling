/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextIndex_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::nextIndex */
kcg_int nextIndex_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::upwards */ kcg_bool upwards,
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::currentIndex */ kcg_int currentIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::limit */ kcg_int limit)
{
  /* math::Max::Ma_Output */
  static kcg_int Ma_Output_1;
  /* math::Max::I2 */
  static kcg_int I2_11;
  /* math::Max::I1 */
  static kcg_int I1_12;
  /* math::Max::_L4 */
  static kcg_int _L4_1;
  /* math::Max::_L3 */
  static kcg_bool _L3_1;
  /* math::Max::_L2 */
  static kcg_int _L2_1;
  /* math::Max::_L1 */
  static kcg_int _L1_1;
  /* math::Min::Mi_Output */
  static kcg_int Mi_Output_1;
  /* math::Min::I2 */
  static kcg_int I2_1;
  /* math::Min::I1 */
  static kcg_int I1_1;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_int _L24_1;
  /* math::Min::_L22 */
  static kcg_int _L22_1;
  /* math::Min::_L21 */
  static kcg_int _L21_1;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L2 */
  static kcg_int _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L1 */
  static kcg_bool _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L3 */
  static kcg_int _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L4 */
  static kcg_int _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L5 */
  static kcg_int _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L6 */
  static kcg_int _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L7 */
  static kcg_int _L7;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L16 */
  static kcg_int _L16;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L15 */
  static kcg_int _L15;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L14 */
  static kcg_int _L14;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L21 */
  static kcg_int _L21;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L22 */
  static kcg_int _L22;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::nextIndex */
  static kcg_int nextIndex;
  
  _L2 = currentIndex;
  _L1 = upwards;
  _L22 = limit;
  _L15 = 1;
  _L21 = _L22 - _L15;
  I1_1 = _L21;
  _L21_1 = I1_1;
  _L16 = _L15 + _L2;
  I2_1 = _L16;
  _L22_1 = I2_1;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L14 = Mi_Output_1;
  _L7 = 1;
  _L6 = _L2 - _L7;
  I1_12 = _L6;
  _L1_1 = I1_12;
  _L4 = 0;
  I2_11 = _L4;
  _L2_1 = I2_11;
  _L3_1 = _L1_1 >= _L2_1;
  /* 2 */ if (_L3_1) {
    _L4_1 = _L1_1;
  }
  else {
    _L4_1 = _L2_1;
  }
  Ma_Output_1 = _L4_1;
  _L5 = Ma_Output_1;
  /* 1 */ if (_L1) {
    _L3 = _L14;
  }
  else {
    _L3 = _L5;
  }
  nextIndex = _L3;
  return nextIndex;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextIndex_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

