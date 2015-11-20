/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget */
kcg_bool isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::Target */Target_real_T_TargetManagement_types *Target)
{
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::isVnonZero */
  static kcg_bool isVnonZero;
  
  isVnonZero = (*Target).speed > 0.0;
  return isVnonZero;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

