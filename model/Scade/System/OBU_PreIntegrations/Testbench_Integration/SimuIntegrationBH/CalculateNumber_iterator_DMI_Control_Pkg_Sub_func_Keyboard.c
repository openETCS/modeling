/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

#ifndef KCG_USER_DEFINED_INIT
void CalculateNumber_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L7 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = 0;
  outC->out_acc = 0;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalculateNumber_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator */
void CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::acc */ kcg_int acc,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::in_arraykey */ kcg_bool in_arraykey,
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L2 = acc;
  outC->_L3 = in_arraykey;
  outC->out_acc = outC->_L2;
  outC->_L7 = !outC->_L3;
  outC->condition = outC->_L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

