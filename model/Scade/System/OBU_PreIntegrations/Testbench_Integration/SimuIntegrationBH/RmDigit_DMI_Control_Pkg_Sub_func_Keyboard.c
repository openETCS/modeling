/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"

#ifndef KCG_USER_DEFINED_INIT
void RmDigit_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L10 = 0;
  for (i = 0; i < 9; i++) {
    outC->_L9[i] = 0;
  }
  outC->_L21 = 0;
  outC->_L20 = 0;
  outC->_L19 = 0;
  outC->_L18 = kcg_true;
  outC->_L17 = 0;
  outC->_L16 = 0;
  outC->_L15 = kcg_true;
  for (i1 = 0; i1 < 9; i1++) {
    outC->_L13[i1] = 0;
  }
  for (i2 = 0; i2 < 9; i2++) {
    outC->_L12[i2] = 0;
  }
  for (i3 = 0; i3 < 9; i3++) {
    outC->_L11[i3] = 0;
  }
  outC->_L7 = 0;
  for (i4 = 0; i4 < 9; i4++) {
    outC->out_digit_display[i4] = 0;
  }
  for (i5 = 0; i5 < 9; i5++) {
    /* 1 */
    ReplaceDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->_1_Context_1[i5]);
  }
  /* 1 */ FindIndexEmptyLoc_init_DMI_Control_Pkg_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RmDigit_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 9; i++) {
    /* 1 */
    ReplaceDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->_1_Context_1[i]);
  }
  /* 1 */ FindIndexEmptyLoc_reset_DMI_Control_Pkg_Utils(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit */
void RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::in_digit_display */ array_int_9 *in_digit_display,
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int i1;
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_array_int_9(&outC->_L13, in_digit_display);
  /* 1 */
  FindIndexEmptyLoc_DMI_Control_Pkg_Utils(&outC->_L13, &outC->Context_1);
  outC->_L7 = outC->Context_1.index;
  outC->_L18 = outC->Context_1.DigitFull;
  outC->_L17 = 0;
  outC->_L20 = 1;
  /* 1 */ if (outC->_L18) {
    outC->_L19 = outC->_L17;
  }
  else {
    outC->_L19 = outC->_L20;
  }
  outC->_L16 = outC->_L7 - outC->_L19;
  /* pow */ for (i1 = 0; i1 < 9; i1++) {
    outC->_L11[i1] = outC->_L16;
  }
  kcg_copy_array_int_9(&outC->_L12, in_digit_display);
  outC->_L15 = kcg_true;
  outC->_L21 = ASCII_space_DMI_Control_Pkg;
  if (outC->_L15) {
    for (i = 0; i < 9; i++) {
      /* 1 */
      ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
        i,
        outC->_L12[i],
        outC->_L11[i],
        &outC->_1_Context_1[i]);
      outC->_L9[i] = outC->_1_Context_1[i].out_array;
      outC->_L10 = i + 1;
      if (!outC->_1_Context_1[i].condition) {
        break;
      }
    }
  }
  else {
    outC->_L10 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L10; i < 9; i++) {
    outC->_L9[i] = outC->_L21;
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L10;
  kcg_copy_array_int_9(&outC->out_digit_display, &outC->_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

