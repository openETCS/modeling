/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.h"

#ifndef KCG_USER_DEFINED_INIT
void DMI_entry_requested_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L42 = kcg_true;
  for (i = 0; i < 15; i++) {
    outC->_L41[i] = kcg_true;
  }
  for (i1 = 0; i1 < 15; i1++) {
    outC->_L38[i1] = kcg_true;
  }
  outC->_L40 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  for (i2 = 0; i2 < 15; i2++) {
    outC->_L23[i2] = kcg_true;
  }
  for (i3 = 0; i3 < 15; i3++) {
    outC->_L22[i3] = kcg_true;
  }
  outC->_L21 = kcg_true;
  for (i4 = 0; i4 < 15; i4++) {
    outC->_L8[i4] = kcg_true;
  }
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  for (i5 = 0; i5 < 15; i5++) {
    outC->_L5[i5] = kcg_true;
  }
  outC->_L3 = kcg_true;
  for (i6 = 0; i6 < 15; i6++) {
    outC->_L2[i6] = kcg_true;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = 0;
  outC->_L1.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->LevelMenu = kcg_true;
  outC->hideMainmenu = kcg_true;
  outC->mainmenu = kcg_true;
  outC->driverID = kcg_true;
  outC->trainRN = kcg_true;
  /* 4 */
  WindowReqToMask_init_DMI_Control_Pkg_Sub_func_EntryRequest(&outC->Context_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DMI_entry_requested_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  /* 4 */
  WindowReqToMask_reset_DMI_Control_Pkg_Sub_func_EntryRequest(&outC->Context_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested */
void DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::DMI_entry_request */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_entry_request,
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L1,
    DMI_entry_request);
  outC->_L40 = outC->_L1.entry_request;
  /* 4 */
  WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
    outC->_L40,
    &outC->Context_4);
  kcg_copy_array_bool_15(&outC->_L38, &outC->Context_4.window_mask);
  kcg_copy_array_bool_15(
    &outC->_L8,
    (array_bool_15 *) &Mainmenu_window_mask_DMI_Control_Pkg);
  outC->_L7 = kcg_comp_array_bool_15(&outC->_L38, &outC->_L8);
  kcg_copy_array_bool_15(
    &outC->_L23,
    (array_bool_15 *) &ValidateTraindata_window_mask_DMI_Control_Pkg);
  outC->_L24 = kcg_comp_array_bool_15(&outC->_L23, &outC->_L38);
  outC->_L25 = outC->_L7 | outC->_L24;
  outC->mainmenu = outC->_L25;
  kcg_copy_array_bool_15(
    &outC->_L2,
    (array_bool_15 *) &DriverID_window_mask_DMI_Control_Pkg);
  outC->_L6 = kcg_comp_array_bool_15(&outC->_L38, &outC->_L2);
  outC->driverID = outC->_L6;
  kcg_copy_array_bool_15(
    &outC->_L5,
    (array_bool_15 *) &TrainRN_window_mask_DMI_Control_Pkg);
  outC->_L3 = kcg_comp_array_bool_15(&outC->_L5, &outC->_L38);
  outC->trainRN = outC->_L3;
  kcg_copy_array_bool_15(
    &outC->_L22,
    (array_bool_15 *) &HideMainmenu_window_mask_DMI_Control_Pkg);
  outC->_L21 = kcg_comp_array_bool_15(&outC->_L38, &outC->_L22);
  outC->hideMainmenu = outC->_L21;
  kcg_copy_array_bool_15(
    &outC->_L41,
    (array_bool_15 *) &cETCS_Level_Menu_mask_DMI_Control_Pkg);
  outC->_L42 = kcg_comp_array_bool_15(&outC->_L38, &outC->_L41);
  outC->LevelMenu = outC->_L42;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

