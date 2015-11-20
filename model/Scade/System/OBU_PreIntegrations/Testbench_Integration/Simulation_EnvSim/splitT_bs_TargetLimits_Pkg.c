/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "splitT_bs_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::splitT_bs */
void splitT_bs_TargetLimits_Pkg(
  /* TargetLimits_Pkg::splitT_bs::bs */T_internal_real_Type_SDM_Types_Pkg bs,
  /* TargetLimits_Pkg::splitT_bs::isSB_FBAvailable */kcg_bool isSB_FBAvailable,
  /* TargetLimits_Pkg::splitT_bs::isSB_CmdAvailable */kcg_bool isSB_CmdAvailable,
  /* TargetLimits_Pkg::splitT_bs::bs1 */T_internal_real_Type_SDM_Types_Pkg *bs1,
  /* TargetLimits_Pkg::splitT_bs::bs2 */T_internal_real_Type_SDM_Types_Pkg *bs2)
{
  if (isSB_CmdAvailable) {
    *bs1 = bs;
  }
  else {
    *bs1 = 0.0;
  }
  *bs2 = *bs1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** splitT_bs_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

