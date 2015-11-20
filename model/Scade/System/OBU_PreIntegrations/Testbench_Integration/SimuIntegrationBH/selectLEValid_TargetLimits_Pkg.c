/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectLEValid_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::selectLEValid */
void selectLEValid_TargetLimits_Pkg(
  /* TargetLimits_Pkg::selectLEValid::valid1 */ kcg_bool valid1,
  /* TargetLimits_Pkg::selectLEValid::i1 */ kcg_real i1,
  /* TargetLimits_Pkg::selectLEValid::valid2 */ kcg_bool valid2,
  /* TargetLimits_Pkg::selectLEValid::i2 */ kcg_real i2,
  /* TargetLimits_Pkg::selectLEValid::isUpper */ kcg_bool *isUpper,
  /* TargetLimits_Pkg::selectLEValid::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::selectLEValid::o */ kcg_real *o)
{
  /* TargetLimits_Pkg::selectLEValid::_L1 */
  static kcg_bool _L1;
  /* TargetLimits_Pkg::selectLEValid::_L2 */
  static kcg_real _L2;
  /* TargetLimits_Pkg::selectLEValid::_L4 */
  static kcg_real _L4;
  /* TargetLimits_Pkg::selectLEValid::_L9 */
  static kcg_bool _L9;
  /* TargetLimits_Pkg::selectLEValid::_L15 */
  static kcg_real _L15;
  /* TargetLimits_Pkg::selectLEValid::_L14 */
  static kcg_real _L14;
  /* TargetLimits_Pkg::selectLEValid::_L13 */
  static kcg_bool _L13;
  /* TargetLimits_Pkg::selectLEValid::_L11 */
  static kcg_bool _L11;
  /* TargetLimits_Pkg::selectLEValid::_L12 */
  static kcg_real _L12;
  /* TargetLimits_Pkg::selectLEValid::_L10 */
  static kcg_bool _L10;
  /* TargetLimits_Pkg::selectLEValid::_L16 */
  static kcg_bool _L16;
  
  _L1 = valid1;
  _L2 = i1;
  _L4 = i2;
  _L9 = valid2;
  _L16 = /* 1 */ isLEValid_TargetLimits_Pkg(_L1, _L2, _L9, _L4);
  *isUpper = _L16;
  _L10 = valid2;
  _L14 = i1;
  _L15 = i2;
  /* 1 */ if (_L16) {
    _L12 = _L14;
  }
  else {
    _L12 = _L15;
  }
  _L13 = valid1;
  /* 1 */ if (_L16) {
    _L11 = _L13;
  }
  else {
    _L11 = _L10;
  }
  *valid = _L11;
  *o = _L12;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** selectLEValid_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

