/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MAReqParams__Get_T_CYCRQST_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::MAReqParams__Get_T_CYCRQST */
T_CYCRQST MAReqParams__Get_T_CYCRQST_RBC_Config_Pkg(
  /* RBC_Config_Pkg::MAReqParams__Get_T_CYCRQST::inMAReqParams */MAReqParams_T *inMAReqParams)
{
  /* RBC_Config_Pkg::MAReqParams__Get_T_CYCRQST::out_T_CYCRQST */
  static T_CYCRQST out_T_CYCRQST;
  
  out_T_CYCRQST = (*inMAReqParams).t_cycrqst;
  return out_T_CYCRQST;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MAReqParams__Get_T_CYCRQST_RBC_Config_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

