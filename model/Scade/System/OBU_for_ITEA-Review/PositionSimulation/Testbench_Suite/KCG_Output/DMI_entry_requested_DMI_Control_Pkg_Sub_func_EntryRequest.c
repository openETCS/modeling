/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested */
void DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::DMI_entry_request */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_entry_request,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::trainRN */ kcg_bool *trainRN,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::window_mask */ array_bool_15 *window_mask,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::driverID */ kcg_bool *driverID,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::mainmenu */ kcg_bool *mainmenu,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::hideMainmenu */ kcg_bool *hideMainmenu)
{
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L38 */ array_bool_15 _L38;
  
  /* 4 */
  WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
    (*DMI_entry_request).entry_request,
    &_L38);
  *mainmenu = kcg_comp_array_bool_15(
      &_L38,
      (array_bool_15 *) &Mainmenu_window_mask_DMI_Control_Pkg) |
    kcg_comp_array_bool_15(
      (array_bool_15 *) &ValidateTraindata_window_mask_DMI_Control_Pkg,
      &_L38);
  if (*mainmenu) {
    kcg_copy_array_bool_15(
      window_mask,
      (array_bool_15 *) &Mainmenu_window_mask_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_bool_15(window_mask, &_L38);
  }
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

