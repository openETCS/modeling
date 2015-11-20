/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findForCheck_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::findForCheck */
kcg_bool findForCheck_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::findForCheck::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::findForCheck::inCompareElement */DMI_TXT_MSG_status_T_DMI_Types_Pkg *inCompareElement)
{
  static kcg_int i;
  /* manage_TextMessages_Pkg::findForCheck::outFound */
  static kcg_bool outFound;
  
  outFound = kcg_false;
  for (i = 0; i < 31; i++) {
    outFound = /* 1 */
      findElement_manage_TextMessages_Pkg(
        outFound,
        &(*inStatusList)[i],
        inCompareElement);
  }
  return outFound;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** findForCheck_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

