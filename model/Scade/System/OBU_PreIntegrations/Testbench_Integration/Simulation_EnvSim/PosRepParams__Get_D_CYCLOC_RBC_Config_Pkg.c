/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC */
D_CYCLOC PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC::inPosRepParams */PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_D_CYCLOC::out_D_CYCLOC */
  static D_CYCLOC out_D_CYCLOC;
  
  out_D_CYCLOC = (*inPosRepParams).d_cycloc;
  return out_D_CYCLOC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

