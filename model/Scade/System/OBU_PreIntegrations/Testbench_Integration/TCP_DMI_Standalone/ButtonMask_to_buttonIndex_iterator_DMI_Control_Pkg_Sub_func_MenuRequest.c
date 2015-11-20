/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest.h"

/* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator */
kcg_int ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest(
  /* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator::valuein */kcg_bool valuein)
{
  /* DMI_Control_Pkg::Sub_func::MenuRequest::ButtonMask_to_buttonIndex_iterator::valueout */ kcg_int valueout;
  
  if (valuein) {
    valueout = 1;
  }
  else {
    valueout = 2;
  }
  return valueout;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ButtonMask_to_buttonIndex_iterator_DMI_Control_Pkg_Sub_func_MenuRequest.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

