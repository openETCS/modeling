/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest.h"

#ifndef KCG_USER_DEFINED_INIT
void ButtonMask_to_buttonIndex_iterator_init_DMI_Control_Pkg_Sub_func_MenuRequest(
  outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest *outC)
{
  outC->_L5 = 0;
  outC->_L4 = 0;
  outC->_L3 = 0;
  outC->_L2 = kcg_true;
  outC->valueout = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ButtonMask_to_buttonIndex_iterator_reset_DMI_Control_Pkg_Sub_func_MenuRequest(
  outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator */
void ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest(
  /* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator::valuein */ kcg_bool valuein,
  outC_ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest *outC)
{
  outC->_L2 = valuein;
  outC->_L3 = 1;
  outC->_L5 = 2;
  /* 1 */ if (outC->_L2) {
    outC->_L4 = outC->_L3;
  }
  else {
    outC->_L4 = outC->_L5;
  }
  outC->valueout = outC->_L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

