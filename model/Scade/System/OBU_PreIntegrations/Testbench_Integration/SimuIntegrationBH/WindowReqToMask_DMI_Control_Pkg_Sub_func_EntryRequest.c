/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.h"

#ifndef KCG_USER_DEFINED_INIT
void WindowReqToMask_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_int i5;
  static kcg_int i6;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i = 0; i < 15; i++) {
    outC->_L27[i] = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  }
  outC->_L26 = 0;
  outC->_L25 = 0;
  for (i1 = 0; i1 < 15; i1++) {
    outC->_L24[i1] = 0;
  }
  for (i2 = 0; i2 < 15; i2++) {
    outC->_L23[i2] = kcg_true;
  }
  for (i3 = 0; i3 < 15; i3++) {
    outC->_L22[i3] = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  }
  outC->_L21 = 0;
  outC->_L20 = kcg_true;
  outC->_L19 = 0;
  outC->_L18 = 0;
  outC->_L1 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  for (i4 = 0; i4 < 15; i4++) {
    outC->window_mask[i4] = kcg_true;
  }
  for (i6 = 0; i6 < 15; i6++) {
    /* 1 */
    Gen_array_window_mask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
      &outC->_1_Context_1[i6]);
  }
  for (i5 = 0; i5 < 15; i5++) {
    /* 1 */
    GenerateIndexForMask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
      &outC->Context_1[i5]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void WindowReqToMask_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_int i;
  static kcg_int i1;
  
  for (i1 = 0; i1 < 15; i1++) {
    /* 1 */
    Gen_array_window_mask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
      &outC->_1_Context_1[i1]);
  }
  for (i = 0; i < 15; i++) {
    /* 1 */
    GenerateIndexForMask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
      &outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask */
void WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::dmi_entry_request */ DMI_List_Entry_Request_T_DMI_Types_Pkg dmi_entry_request,
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_int i3;
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask */
  static kcg_int acc;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  static kcg_int noname;
  
  outC->_L1 = dmi_entry_request;
  outC->_L21 = 0;
  kcg_copy_Array_DMI_List_Entry_Request(
    &outC->_L27,
    (Array_DMI_List_Entry_Request *) &cDMI_List_Entry_Request_DMI_Control_Pkg);
  /* pow */ for (i3 = 0; i3 < 15; i3++) {
    outC->_L22[i3] = outC->_L1;
  }
  outC->_L20 = kcg_true;
  outC->_L19 = outC->_L21;
  if (outC->_L20) {
    for (i2 = 0; i2 < 15; i2++) {
      acc = outC->_L19;
      /* 1 */
      GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
        i2,
        acc,
        outC->_L27[i2],
        outC->_L22[i2],
        &outC->Context_1[i2]);
      outC->_L19 = outC->Context_1[i2].acc_out;
      outC->_L18 = i2 + 1;
      if (!outC->Context_1[i2].condition) {
        break;
      }
    }
  }
  else {
    outC->_L18 = 0;
  }
  noname = outC->_L19;
  outC->_L26 = 1;
  outC->_L25 = outC->_L18 - outC->_L26;
  /* pow */ for (i1 = 0; i1 < 15; i1++) {
    outC->_L24[i1] = outC->_L25;
  }
  for (i = 0; i < 15; i++) {
    /* 1 */
    Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
      i,
      outC->_L24[i],
      &outC->_1_Context_1[i]);
    outC->_L23[i] = outC->_1_Context_1[i].Output;
  }
  kcg_copy_array_bool_15(&outC->window_mask, &outC->_L23);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

