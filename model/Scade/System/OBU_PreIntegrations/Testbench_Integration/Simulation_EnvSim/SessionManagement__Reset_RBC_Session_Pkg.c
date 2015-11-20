/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__Reset_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__Reset */
void SessionManagement__Reset_RBC_Session_Pkg(
  /* RBC_Session_Pkg::SessionManagement__Reset::inSessionManagement */SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__Reset::outSessionManagement */SessionManagement_T *outSessionManagement)
{
  kcg_copy_SessionManagement_T(
    outSessionManagement,
    (SessionManagement_T *) &SESSION_MANAGEMENT_DEFAULT);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SessionManagement__Reset_RBC_Session_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

