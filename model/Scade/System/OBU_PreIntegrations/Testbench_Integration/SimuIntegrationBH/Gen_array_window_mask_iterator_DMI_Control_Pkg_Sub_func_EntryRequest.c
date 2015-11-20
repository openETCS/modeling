/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

#ifndef KCG_USER_DEFINED_INIT
void Gen_array_window_mask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Gen_array_window_mask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator */
void Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator::position */ kcg_int position,
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  outC->_L1 = index;
  outC->_L2 = position;
  outC->_L3 = outC->_L1 == outC->_L2;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_false;
  /* 1 */ if (outC->_L3) {
    outC->_L4 = outC->_L5;
  }
  else {
    outC->_L4 = outC->_L6;
  }
  outC->Output = outC->_L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

