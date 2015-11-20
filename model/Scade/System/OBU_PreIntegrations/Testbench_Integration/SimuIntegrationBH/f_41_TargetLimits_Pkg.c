/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "f_41_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::f_41 */
V_internal_real_Type_SDM_Types_Pkg f_41_TargetLimits_Pkg(
  /* TargetLimits_Pkg::f_41::v_in */ V_internal_real_Type_SDM_Types_Pkg v_in)
{
  /* TargetLimits_Pkg::f_41::_L1 */
  static kcg_real _L1;
  /* TargetLimits_Pkg::f_41::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* TargetLimits_Pkg::f_41::_L5 */
  static kcg_real _L5;
  /* TargetLimits_Pkg::f_41::_L8 */
  static kcg_real _L8;
  /* TargetLimits_Pkg::f_41::_L9 */
  static kcg_real _L9;
  /* TargetLimits_Pkg::f_41::_L10 */
  static kcg_real _L10;
  /* TargetLimits_Pkg::f_41::_L11 */
  static kcg_real _L11;
  /* TargetLimits_Pkg::f_41::_L13 */
  static kcg_real _L13;
  /* TargetLimits_Pkg::f_41::v_out */
  static V_internal_real_Type_SDM_Types_Pkg v_out;
  
  _L1 = 2.0 / 3.6;
  _L2 = v_in;
  _L5 = 30.0 / 3.6;
  _L8 = 10.0 / (500.0 - 30.0) / 3.6;
  _L9 = _L2 - _L5;
  _L13 = /* 1 */ limitPositive_SDM_Types_Pkg(_L9);
  _L10 = _L13 * _L8;
  _L11 = _L10 + _L1;
  v_out = _L11;
  return v_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** f_41_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

