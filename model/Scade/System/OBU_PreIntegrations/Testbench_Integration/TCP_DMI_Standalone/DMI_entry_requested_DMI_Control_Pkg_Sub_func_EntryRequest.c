/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested */
void DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::DMI_entry_request */DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_entry_request,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::trainRN */kcg_bool *trainRN,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::driverID */kcg_bool *driverID,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::mainmenu */kcg_bool *mainmenu,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::hideMainmenu */kcg_bool *hideMainmenu,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::LevelMenu */kcg_bool *LevelMenu)
{
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L38 */ array_bool_15 _L38;
  
  /* 4 */
  WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
    (*DMI_entry_request).entry_request,
    &_L38);
  *LevelMenu = kcg_comp_array_bool_15(
      &_L38,
      (array_bool_15 *) &cETCS_Level_Menu_mask_DMI_Control_Pkg);
  *mainmenu = kcg_comp_array_bool_15(
      &_L38,
      (array_bool_15 *) &Mainmenu_window_mask_DMI_Control_Pkg) |
    kcg_comp_array_bool_15(
      (array_bool_15 *) &ValidateTraindata_window_mask_DMI_Control_Pkg,
      &_L38);
  *hideMainmenu = kcg_comp_array_bool_15(
      &_L38,
      (array_bool_15 *) &HideMainmenu_window_mask_DMI_Control_Pkg);
  *driverID = kcg_comp_array_bool_15(
      &_L38,
      (array_bool_15 *) &DriverID_window_mask_DMI_Control_Pkg);
  *trainRN = kcg_comp_array_bool_15(
      (array_bool_15 *) &TrainRN_window_mask_DMI_Control_Pkg,
      &_L38);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

