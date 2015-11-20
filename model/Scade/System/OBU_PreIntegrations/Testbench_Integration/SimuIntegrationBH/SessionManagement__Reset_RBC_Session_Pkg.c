/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__Reset_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__Reset */
void SessionManagement__Reset_RBC_Session_Pkg(
  /* RBC_Session_Pkg::SessionManagement__Reset::inSessionManagement */ SessionManagement_T *inSessionManagement,
  /* RBC_Session_Pkg::SessionManagement__Reset::outSessionManagement */ SessionManagement_T *outSessionManagement)
{
  static SessionManagement_T noname;
  /* RBC_Session_Pkg::SessionManagement__Reset::_L1 */
  static SessionManagement_T _L1;
  /* RBC_Session_Pkg::SessionManagement__Reset::_L2 */
  static SessionManagement_T _L2;
  
  kcg_copy_SessionManagement_T(&_L1, inSessionManagement);
  kcg_copy_SessionManagement_T(&noname, &_L1);
  kcg_copy_SessionManagement_T(
    &_L2,
    (SessionManagement_T *) &SESSION_MANAGEMENT_DEFAULT);
  kcg_copy_SessionManagement_T(outSessionManagement, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SessionManagement__Reset_RBC_Session_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

