/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapEntryForLevel_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::mapEntryForLevel */
void mapEntryForLevel_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::mapEntryForLevel::dmi_entryRequest */DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::mapEntryForLevel::new_entryRequest */DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *new_entryRequest)
{
  if ((*dmi_entryRequest).valid & ((*dmi_entryRequest).entry_request ==
      Enter_revalidate_ETCS_level_DMI_Types_Pkg)) {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      new_entryRequest,
      dmi_entryRequest);
    (*new_entryRequest).entry_request = Show_main_window_DMI_Types_Pkg;
  }
  else {
    kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      new_entryRequest,
      dmi_entryRequest);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mapEntryForLevel_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

