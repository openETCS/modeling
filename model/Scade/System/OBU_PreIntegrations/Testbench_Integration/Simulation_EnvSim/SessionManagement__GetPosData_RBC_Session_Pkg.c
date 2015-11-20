/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__GetPosData */
void SessionManagement__GetPosData_RBC_Session_Pkg(
  /* RBC_Session_Pkg::SessionManagement__GetPosData::inSessionManagement */SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__GetPosData::outPositionManagement */PosData_T *outPositionManagement)
{
  kcg_copy_PosData_T(outPositionManagement, &(*inSessionManagement).m_PosData);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SessionManagement__GetPosData_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

