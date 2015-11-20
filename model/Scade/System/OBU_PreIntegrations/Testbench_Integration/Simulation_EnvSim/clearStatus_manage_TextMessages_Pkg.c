/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "clearStatus_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::clearStatus */
void clearStatus_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::clearStatus::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::clearStatus::inMessageID */DMI_TextMessage_ID_T_DMI_Types_Pkg inMessageID,
  /* manage_TextMessages_Pkg::clearStatus::outStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList,
  /* manage_TextMessages_Pkg::clearStatus::outIndex */kcg_int *outIndex)
{
  static kcg_bool tmp;
  static kcg_int i;
  
  for (i = 0; i < 31; i++) {
    /* 1 */
    deleteElement_manage_TextMessages_Pkg(
      i,
      &(*inStatusList)[i],
      inMessageID,
      &tmp,
      &(*outStatusList)[i]);
    *outIndex = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = *outIndex; i < 31; i++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &(*outStatusList)[i],
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
        &cFreeTestStatusElement_DMI_Types_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** clearStatus_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

