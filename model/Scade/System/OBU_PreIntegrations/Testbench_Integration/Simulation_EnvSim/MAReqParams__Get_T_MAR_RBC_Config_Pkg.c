/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_T_MAR_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::MAReqParams__Get_T_MAR */
T_MAR MAReqParams__Get_T_MAR_RBC_Config_Pkg(
  /* RBC_Config_Pkg::MAReqParams__Get_T_MAR::inMAReqParams */MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_T_MAR::out_T_MAR */
  static T_MAR out_T_MAR;
  
  out_T_MAR = (*inMAReqParams).t_mar;
  return out_T_MAR;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MAReqParams__Get_T_MAR_RBC_Config_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

