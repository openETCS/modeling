/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isLEValid_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::isLEValid */
kcg_bool isLEValid_TargetLimits_Pkg(
  /* TargetLimits_Pkg::isLEValid::valid1 */ kcg_bool valid1,
  /* TargetLimits_Pkg::isLEValid::i1 */ kcg_real i1,
  /* TargetLimits_Pkg::isLEValid::valid2 */ kcg_bool valid2,
  /* TargetLimits_Pkg::isLEValid::i2 */ kcg_real i2)
{
  /* TargetLimits_Pkg::isLEValid::_L1 */
  static kcg_bool _L1;
  /* TargetLimits_Pkg::isLEValid::_L2 */
  static kcg_real _L2;
  /* TargetLimits_Pkg::isLEValid::_L4 */
  static kcg_real _L4;
  /* TargetLimits_Pkg::isLEValid::_L8 */
  static kcg_bool _L8;
  /* TargetLimits_Pkg::isLEValid::_L7 */
  static kcg_bool _L7;
  /* TargetLimits_Pkg::isLEValid::_L6 */
  static kcg_bool _L6;
  /* TargetLimits_Pkg::isLEValid::_L5 */
  static kcg_bool _L5;
  /* TargetLimits_Pkg::isLEValid::_L9 */
  static kcg_bool _L9;
  /* TargetLimits_Pkg::isLEValid::result */
  static kcg_bool result;
  
  _L1 = valid1;
  _L2 = i1;
  _L4 = i2;
  _L5 = _L2 <= _L4;
  _L9 = valid2;
  _L7 = !_L9;
  _L6 = _L5 | _L7;
  _L8 = _L1 & _L6;
  result = _L8;
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isLEValid_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

