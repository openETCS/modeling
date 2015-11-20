/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetDistance_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetDistance */
L_internal_real_Type_SDM_Types_Pkg TargetDistance_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetDistance::d_P_of_V_target */ L_internal_real_Type_SDM_Types_Pkg d_P_of_V_target,
  /* TargetLimits_Pkg::TargetDistance::d_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* TargetLimits_Pkg::TargetDistance::d_estfront */ L_internal_real_Type_SDM_Types_Pkg d_estfront,
  /* TargetLimits_Pkg::TargetDistance::d_svl */ L_internal_real_Type_SDM_Types_Pkg d_svl,
  /* TargetLimits_Pkg::TargetDistance::d_eoa */ L_internal_real_Type_SDM_Types_Pkg d_eoa,
  /* TargetLimits_Pkg::TargetDistance::isEoAorSvL */ kcg_bool isEoAorSvL)
{
  /* math::Min::Mi_Output */
  static kcg_real Mi_Output_1;
  /* math::Min::I2 */
  static kcg_real I2_1;
  /* math::Min::I1 */
  static kcg_real I1_1;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_real _L24_1;
  /* math::Min::_L22 */
  static kcg_real _L22_1;
  /* math::Min::_L21 */
  static kcg_real _L21_1;
  /* TargetLimits_Pkg::TargetDistance::_L15 */
  static kcg_bool _L15;
  /* TargetLimits_Pkg::TargetDistance::_L23 */
  static kcg_real _L23;
  /* TargetLimits_Pkg::TargetDistance::_L24 */
  static kcg_real _L24;
  /* TargetLimits_Pkg::TargetDistance::_L31 */
  static L_internal_real_Type_SDM_Types_Pkg _L31;
  /* TargetLimits_Pkg::TargetDistance::_L30 */
  static kcg_real _L30;
  /* TargetLimits_Pkg::TargetDistance::_L29 */
  static L_internal_real_Type_SDM_Types_Pkg _L29;
  /* TargetLimits_Pkg::TargetDistance::_L28 */
  static kcg_real _L28;
  /* TargetLimits_Pkg::TargetDistance::_L27 */
  static L_internal_real_Type_SDM_Types_Pkg _L27;
  /* TargetLimits_Pkg::TargetDistance::_L26 */
  static kcg_real _L26;
  /* TargetLimits_Pkg::TargetDistance::_L25 */
  static L_internal_real_Type_SDM_Types_Pkg _L25;
  /* TargetLimits_Pkg::TargetDistance::_L34 */
  static L_internal_real_Type_SDM_Types_Pkg _L34;
  /* TargetLimits_Pkg::TargetDistance::_L33 */
  static L_internal_real_Type_SDM_Types_Pkg _L33;
  /* TargetLimits_Pkg::TargetDistance::_L32 */
  static kcg_real _L32;
  /* TargetLimits_Pkg::TargetDistance::targetDistance */
  static L_internal_real_Type_SDM_Types_Pkg targetDistance;
  
  _L15 = isEoAorSvL;
  _L25 = d_eoa;
  _L29 = d_estfront;
  _L28 = _L25 - _L29;
  I1_1 = _L28;
  _L21_1 = I1_1;
  _L27 = d_svl;
  _L31 = d_maxsafefront;
  _L30 = _L27 - _L31;
  I2_1 = _L30;
  _L22_1 = I2_1;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L26 = Mi_Output_1;
  _L34 = d_P_of_V_target;
  _L33 = d_maxsafefront;
  _L32 = _L34 - _L33;
  /* 1 */ if (_L15) {
    _L24 = _L26;
  }
  else {
    _L24 = _L32;
  }
  _L23 = /* 1 */ limitPositive_SDM_Types_Pkg(_L24);
  targetDistance = _L23;
  return targetDistance;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TargetDistance_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

