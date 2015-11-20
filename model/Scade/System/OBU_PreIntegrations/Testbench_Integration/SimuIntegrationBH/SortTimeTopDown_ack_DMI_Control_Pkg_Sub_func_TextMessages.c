/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void SortTimeTopDown_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L71 = 0;
  outC->_L70 = 0;
  outC->_L69 = 0;
  outC->_L68 = 0;
  outC->_L64 = 0;
  outC->_L65 = 0;
  outC->_L62 = kcg_true;
  outC->_L58 = 0;
  for (i = 0; i < 5; i++) {
    outC->_L14[i] = 0.0;
  }
  outC->_L18 = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->_L19[i1] = 0.0;
  }
  for (i2 = 0; i2 < 5; i2++) {
    outC->_L21[i2] = 0.0;
  }
  for (i3 = 0; i3 < 5; i3++) {
    outC->_L22[i3] = 0.0;
  }
  outC->_L25 = 0.0;
  outC->_L28 = 0.0;
  for (i4 = 0; i4 < 5; i4++) {
    outC->_L32[i4] = 0.0;
  }
  for (i5 = 0; i5 < 5; i5++) {
    outC->outTimeArray[i5] = 0.0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void SortTimeTopDown_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack */
void SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::acc */ array_real_5 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::TimeQueue */ array_real_5 *TimeQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::num */ kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::numE */ kcg_int numE,
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_array_real_5(&outC->_L22, acc);
  kcg_copy_array_real_5(&outC->_L32, TimeQueue);
  outC->_L28 = c_hh_DMI_Control_Pkg;
  outC->_L70 = index;
  outC->_L68 = numE;
  outC->_L65 = num;
  outC->_L64 = outC->_L68 - outC->_L65;
  outC->_L69 = outC->_L70 + outC->_L64;
  if ((0 <= outC->_L69) & (outC->_L69 < 5)) {
    outC->_L25 = outC->_L32[outC->_L69];
  }
  else {
    outC->_L25 = outC->_L28;
  }
  outC->_L71 = index;
  kcg_copy_array_real_5(&outC->_L14, &outC->_L22);
  if ((0 <= outC->_L71) & (outC->_L71 < 5)) {
    outC->_L14[outC->_L71] = outC->_L25;
  }
  outC->_L18 = index;
  outC->_L58 = num;
  outC->_L62 = outC->_L18 >= outC->_L58;
  kcg_copy_array_real_5(&outC->_L21, acc);
  /* 1 */ if (outC->_L62) {
    kcg_copy_array_real_5(&outC->_L19, &outC->_L21);
  }
  else {
    kcg_copy_array_real_5(&outC->_L19, &outC->_L14);
  }
  kcg_copy_array_real_5(&outC->outTimeArray, &outC->_L19);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

