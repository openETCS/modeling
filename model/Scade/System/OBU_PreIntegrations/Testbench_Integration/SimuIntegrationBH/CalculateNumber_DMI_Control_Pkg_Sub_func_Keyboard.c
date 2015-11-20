/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.h"

#ifndef KCG_USER_DEFINED_INIT
void CalculateNumber_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L19 = 0;
  outC->_L18 = 0;
  outC->_L17 = 0;
  outC->_L16 = 0;
  outC->_L13 = 0;
  outC->_L12 = 0;
  outC->_L11 = kcg_true;
  outC->_L10 = 0;
  outC->_L8 = 0;
  outC->_L7 = kcg_true;
  outC->_L5 = 0;
  outC->_L4 = 0;
  outC->_L3 = 0;
  for (i = 0; i < 12; i++) {
    outC->_L2[i] = kcg_true;
  }
  outC->out_KeyNumber = 0;
  for (i1 = 0; i1 < 12; i1++) {
    /* 1 */
    CalculateNumber_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_1[i1]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalculateNumber_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 12; i++) {
    /* 1 */
    CalculateNumber_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber */
void CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::start */ kcg_bool start,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::in_arraykey */ array_bool_12 *in_arraykey,
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber */
  static kcg_int acc;
  static kcg_int i;
  static kcg_int noname;
  
  outC->_L3 = 0;
  kcg_copy_array_bool_12(&outC->_L2, in_arraykey);
  outC->_L7 = start;
  outC->_L5 = outC->_L3;
  if (outC->_L7) {
    for (i = 0; i < 12; i++) {
      acc = outC->_L5;
      /* 1 */
      CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
        acc,
        outC->_L2[i],
        &outC->Context_1[i]);
      outC->_L5 = outC->Context_1[i].out_acc;
      outC->_L4 = i + 1;
      if (!outC->Context_1[i].condition) {
        break;
      }
    }
  }
  else {
    outC->_L4 = 0;
  }
  outC->_L12 = 10;
  outC->_L11 = outC->_L4 < outC->_L12;
  outC->_L18 = ASCII_offset_Backsp_DMI_Control_Pkg;
  outC->_L19 = ASCII_offset_0_DMI_Control_Pkg;
  outC->_L16 = 0;
  switch (outC->_L4) {
    case 10 :
      outC->_L13 = outC->_L18;
      break;
    case 11 :
      outC->_L13 = outC->_L19;
      break;
    
    default :
      outC->_L13 = outC->_L16;
  }
  /* 1 */ if (outC->_L11) {
    outC->_L10 = outC->_L4;
  }
  else {
    outC->_L10 = outC->_L13;
  }
  outC->_L17 = ASCII_0_DMI_Control_Pkg;
  outC->_L8 = outC->_L10 + outC->_L17;
  outC->out_KeyNumber = outC->_L8;
  noname = outC->_L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

