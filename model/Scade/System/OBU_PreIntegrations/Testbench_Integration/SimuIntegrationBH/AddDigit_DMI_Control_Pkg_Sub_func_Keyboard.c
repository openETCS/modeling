/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"

#ifndef KCG_USER_DEFINED_INIT
void AddDigit_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L15 = 0;
  outC->_L14 = kcg_true;
  outC->_L13 = 0;
  for (i = 0; i < 9; i++) {
    outC->_L12[i] = 0;
  }
  outC->_L3 = 0;
  for (i1 = 0; i1 < 9; i1++) {
    outC->_L4[i1] = 0;
  }
  for (i2 = 0; i2 < 9; i2++) {
    outC->_L2[i2] = 0;
  }
  for (i3 = 0; i3 < 9; i3++) {
    outC->out_digit_display[i3] = 0;
  }
  for (i4 = 0; i4 < 9; i4++) {
    /* 1 */
    AddDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_1[i4]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AddDigit_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 9; i++) {
    /* 1 */
    AddDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit */
void AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::in_digit_display */ array_int_9 *in_digit_display,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::KeyNumber */ kcg_int KeyNumber,
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int i1;
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_array_int_9(&outC->_L2, in_digit_display);
  outC->_L3 = KeyNumber;
  /* pow */ for (i1 = 0; i1 < 9; i1++) {
    outC->_L4[i1] = outC->_L3;
  }
  outC->_L14 = kcg_true;
  outC->_L15 = ASCII_space_DMI_Control_Pkg;
  if (outC->_L14) {
    for (i = 0; i < 9; i++) {
      /* 1 */
      AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
        i,
        outC->_L4[i],
        outC->_L2[i],
        &outC->Context_1[i]);
      outC->_L12[i] = outC->Context_1[i].out_digit_display;
      outC->_L13 = i + 1;
      if (!outC->Context_1[i].condition) {
        break;
      }
    }
  }
  else {
    outC->_L13 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L13; i < 9; i++) {
    outC->_L12[i] = outC->_L15;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_array_int_9(&outC->out_digit_display, &outC->_L12);
  noname = outC->_L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

