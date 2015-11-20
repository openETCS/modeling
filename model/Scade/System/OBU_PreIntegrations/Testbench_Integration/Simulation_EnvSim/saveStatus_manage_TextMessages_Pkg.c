/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "saveStatus_manage_TextMessages_Pkg.h"

/* manage_TextMessages_Pkg::saveStatus */
void saveStatus_manage_TextMessages_Pkg(
  /* manage_TextMessages_Pkg::saveStatus::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_TextMessages_Pkg::saveStatus::inStatusElement */DMI_TXT_MSG_status_T_DMI_Types_Pkg *inStatusElement,
  /* manage_TextMessages_Pkg::saveStatus::outStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *outStatusList)
{
  static kcg_bool tmp;
  static kcg_int i;
  /* manage_TextMessages_Pkg::saveStatus::_L5 */
  static kcg_int _L5;
  
  for (i = 0; i < 31; i++) {
    /* 1 */
    setNew_manage_TextMessages_Pkg(
      i,
      &(*inStatusList)[i],
      inStatusElement,
      &tmp,
      &(*outStatusList)[i]);
    _L5 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L5; i < 31; i++) {
    kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
      &(*outStatusList)[i],
      (DMI_TXT_MSG_status_T_DMI_Types_Pkg *)
        &cFreeTestStatusElement_DMI_Types_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** saveStatus_manage_TextMessages_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

