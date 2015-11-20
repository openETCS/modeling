/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__SetPosData_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__SetPosData */
void SessionManagement__SetPosData_RBC_Session_Pkg(
  /* RBC_Session_Pkg::SessionManagement__SetPosData::inSessionManagement */SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__SetPosData::inPosData */PosData_T *inPosData,
  /* RBC_Session_Pkg::SessionManagement__SetPosData::outSessionManagement */SessionManagement_T *outSessionManagement)
{
  kcg_copy_SessionManagement_T(outSessionManagement, inSessionManagement);
  kcg_copy_PosData_T(&(*outSessionManagement).m_PosData, inPosData);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SessionManagement__SetPosData_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

