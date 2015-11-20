/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetDistance_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetDistance */
L_internal_real_Type_SDM_Types_Pkg TargetDistance_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetDistance::d_P_of_V_target */L_internal_real_Type_SDM_Types_Pkg d_P_of_V_target,
  /* TargetLimits_Pkg::TargetDistance::d_maxsafefront */L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* TargetLimits_Pkg::TargetDistance::d_estfront */L_internal_real_Type_SDM_Types_Pkg d_estfront,
  /* TargetLimits_Pkg::TargetDistance::d_svl */L_internal_real_Type_SDM_Types_Pkg d_svl,
  /* TargetLimits_Pkg::TargetDistance::d_eoa */L_internal_real_Type_SDM_Types_Pkg d_eoa,
  /* TargetLimits_Pkg::TargetDistance::isEoAorSvL */kcg_bool isEoAorSvL)
{
  static kcg_real tmp;
  /* TargetLimits_Pkg::TargetDistance::_L30 */
  static kcg_real _L30;
  /* TargetLimits_Pkg::TargetDistance::_L28 */
  static kcg_real _L28;
  /* TargetLimits_Pkg::TargetDistance::targetDistance */
  static L_internal_real_Type_SDM_Types_Pkg targetDistance;
  
  _L30 = d_svl - d_maxsafefront;
  _L28 = d_eoa - d_estfront;
  if (isEoAorSvL) {
    if (_L28 <= _L30) {
      tmp = _L28;
    }
    else {
      tmp = _L30;
    }
  }
  else {
    tmp = d_P_of_V_target - d_maxsafefront;
  }
  targetDistance = /* 1 */ limitPositive_SDM_Types_Pkg(tmp);
  return targetDistance;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TargetDistance_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

