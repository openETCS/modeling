/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosRepParams__Get_Q_DIR_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::PosRepParams__Get_Q_DIR */
Q_DIR PosRepParams__Get_Q_DIR_RBC_Config_Pkg(
  /* RBC_Config_Pkg::PosRepParams__Get_Q_DIR::inPosRepParams */PosRepParams_T *inPosRepParams)
{
  /* RBC_Config_Pkg::PosRepParams__Get_Q_DIR::out_Q_DIR */
  static Q_DIR out_Q_DIR;
  
  out_Q_DIR = (*inPosRepParams).q_dir;
  return out_Q_DIR;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosRepParams__Get_Q_DIR_RBC_Config_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

