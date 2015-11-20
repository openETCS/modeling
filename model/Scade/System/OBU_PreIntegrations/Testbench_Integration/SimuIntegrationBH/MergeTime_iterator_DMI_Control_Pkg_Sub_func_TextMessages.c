/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void MergeTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L42 = 0;
  outC->_L41 = 0;
  for (i = 0; i < 10; i++) {
    outC->_L40[i] = 0.0;
  }
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L38[i1] = 0.0;
  }
  outC->_L36 = 0.0;
  outC->_L35 = kcg_true;
  outC->_L34 = 0.0;
  outC->_L33 = 0;
  outC->_L32 = 0.0;
  outC->_L29 = 0.0;
  outC->_L25 = 0;
  for (i2 = 0; i2 < 10; i2++) {
    outC->_L24[i2] = 0.0;
  }
  outC->_L21 = 0;
  outC->_L11 = 0.0;
  for (i3 = 0; i3 < 10; i3++) {
    outC->_L12[i3] = 0.0;
  }
  for (i4 = 0; i4 < 10; i4++) {
    outC->_L15[i4] = 0.0;
  }
  for (i5 = 0; i5 < 10; i5++) {
    outC->_L5[i5] = 0.0;
  }
  for (i6 = 0; i6 < 10; i6++) {
    outC->OutputTimeArray[i6] = 0.0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void MergeTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator */
void MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::acc */ array_real_10 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::ImpArray */ array_real_10 *ImpArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::numAuxi */ kcg_int numAuxi,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator::AuxiArray */ array_real_10 *AuxiArray,
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_array_real_10(&outC->_L40, AuxiArray);
  outC->_L34 = - 1.0;
  outC->_L33 = index;
  if ((0 <= outC->_L33) & (outC->_L33 < 10)) {
    outC->_L32 = outC->_L40[outC->_L33];
  }
  else {
    outC->_L32 = outC->_L34;
  }
  outC->_L36 = - 1.0;
  outC->_L35 = outC->_L32 != outC->_L36;
  kcg_copy_array_real_10(&outC->_L38, acc);
  kcg_copy_array_real_10(&outC->_L12, acc);
  kcg_copy_array_real_10(&outC->_L24, ImpArray);
  outC->_L29 = c_hh_DMI_Control_Pkg;
  outC->_L41 = index;
  outC->_L25 = numAuxi;
  outC->_L42 = outC->_L41 - outC->_L25;
  if ((0 <= outC->_L42) & (outC->_L42 < 10)) {
    outC->_L11 = outC->_L24[outC->_L42];
  }
  else {
    outC->_L11 = outC->_L29;
  }
  outC->_L21 = index;
  kcg_copy_array_real_10(&outC->_L15, &outC->_L12);
  if ((0 <= outC->_L21) & (outC->_L21 < 10)) {
    outC->_L15[outC->_L21] = outC->_L11;
  }
  /* 1 */ if (outC->_L35) {
    kcg_copy_array_real_10(&outC->_L5, &outC->_L38);
  }
  else {
    kcg_copy_array_real_10(&outC->_L5, &outC->_L15);
  }
  kcg_copy_array_real_10(&outC->OutputTimeArray, &outC->_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

