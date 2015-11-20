/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doEntryRequest_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::doEntryRequest */
void doEntryRequest_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::doEntryRequest::dmi_entryRequest */DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_menuRequest */DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *new_menuRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::new_entryRequest */DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *new_entryRequest,
  /* manage_DMI_Output_Pkg::doEntryRequest::sendTrainDataToDMI */kcg_bool *sendTrainDataToDMI,
  /* manage_DMI_Output_Pkg::doEntryRequest::outLevelsNeeded */kcg_bool *outLevelsNeeded)
{
  /* 1 */
  mapEntryForLevel_manage_DMI_Output_Pkg(dmi_entryRequest, new_entryRequest);
  if ((*dmi_entryRequest).valid) {
    switch ((*dmi_entryRequest).entry_request) {
      case Show_main_window_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          new_menuRequest,
          (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cMenuStart_manage_DMI_Output_Pkg);
        *sendTrainDataToDMI = kcg_false;
        break;
      case Validate_train_data_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          new_menuRequest,
          (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cMenuTrainData_manage_DMI_Output_Pkg);
        *sendTrainDataToDMI = kcg_true;
        break;
      case Enter_revalidate_ETCS_level_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          new_menuRequest,
          (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cMenuLevel_manage_DMI_Output_Pkg);
        *sendTrainDataToDMI = kcg_true;
        break;
      case Enter_revalidate_driver_identifier_DMI_Types_Pkg :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          new_menuRequest,
          (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cNoMenu_manage_DMI_Output_Pkg);
        *sendTrainDataToDMI = kcg_true;
        break;
      
      default :
        kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
          new_menuRequest,
          (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
            &cNoMenu_manage_DMI_Output_Pkg);
        *sendTrainDataToDMI = kcg_false;
    }
    (*new_menuRequest).system_clock = inSystemTime;
    *outLevelsNeeded = (*dmi_entryRequest).entry_request ==
      Enter_revalidate_ETCS_level_DMI_Types_Pkg;
  }
  else {
    *outLevelsNeeded = kcg_false;
    *sendTrainDataToDMI = kcg_false;
    kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      new_menuRequest,
      (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cNoMenu_manage_DMI_Output_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** doEntryRequest_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

