/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

#ifndef KCG_USER_DEFINED_INIT
void ReplaceDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L10 = 0;
  outC->_L9 = 0;
  outC->_L8 = 0;
  outC->_L6 = 0;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = 0;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->out_array = 0;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ReplaceDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator */
void ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::in_digit_display */ kcg_int in_digit_display,
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::Calc_index */ kcg_int Calc_index,
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L2 = index;
  outC->_L3 = Calc_index;
  outC->_L9 = 1;
  outC->_L8 = outC->_L3 - outC->_L9;
  outC->_L4 = outC->_L2 == outC->_L8;
  outC->_L5 = !outC->_L4;
  outC->condition = outC->_L5;
  outC->_L10 = ASCII_space_DMI_Control_Pkg;
  outC->_L1 = in_digit_display;
  /* 1 */ if (outC->_L4) {
    outC->_L6 = outC->_L10;
  }
  else {
    outC->_L6 = outC->_L1;
  }
  outC->out_array = outC->_L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

