/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

#ifndef KCG_USER_DEFINED_INIT
void AddDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L9 = 0;
  outC->_L8 = 0;
  outC->_L7 = kcg_true;
  outC->_L5 = 0;
  outC->_L6 = 0;
  outC->_L1 = 0;
  outC->_L3 = kcg_true;
  outC->_L2 = 0;
  outC->out_digit_display = 0;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AddDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator */
void AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::Index */ kcg_int Index,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::KeyNumber */ kcg_int KeyNumber,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::in_digit_display */ kcg_int in_digit_display,
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int noname;
  
  outC->_L1 = in_digit_display;
  outC->_L9 = ASCII_space_DMI_Control_Pkg;
  outC->_L3 = outC->_L1 == outC->_L9;
  outC->_L2 = KeyNumber;
  outC->_L6 = in_digit_display;
  /* 1 */ if (outC->_L3) {
    outC->_L5 = outC->_L2;
  }
  else {
    outC->_L5 = outC->_L6;
  }
  outC->out_digit_display = outC->_L5;
  outC->_L7 = !outC->_L3;
  outC->condition = outC->_L7;
  outC->_L8 = Index;
  noname = outC->_L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

