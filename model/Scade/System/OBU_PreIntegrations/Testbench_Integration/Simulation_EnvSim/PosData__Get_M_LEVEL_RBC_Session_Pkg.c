/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Get_M_LEVEL_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Get_M_LEVEL */
M_LEVEL PosData__Get_M_LEVEL_RBC_Session_Pkg(
  /* RBC_Session_Pkg::PosData__Get_M_LEVEL::inPosData */PosData_T *inPosData)
{
  /* RBC_Session_Pkg::PosData__Get_M_LEVEL::out_M_LEVEL */
  static M_LEVEL out_M_LEVEL;
  
  out_M_LEVEL = (*inPosData).m_level;
  return out_M_LEVEL;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PosData__Get_M_LEVEL_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

