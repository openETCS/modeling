/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void MergeTime_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i = 0; i < 10; i++) {
    outC->_L8[i] = 0;
  }
  for (i1 = 0; i1 < 10; i1++) {
    outC->_L9[i1] = 0.0;
  }
  for (i3 = 0; i3 < 10; i3++) {
    for (i2 = 0; i2 < 10; i2++) {
      outC->_L10[i3][i2] = 0.0;
    }
  }
  outC->_L11 = 0;
  for (i4 = 0; i4 < 10; i4++) {
    outC->_L12[i4] = 0.0;
  }
  for (i5 = 0; i5 < 10; i5++) {
    outC->_L13[i5] = 0.0;
  }
  for (i7 = 0; i7 < 10; i7++) {
    for (i6 = 0; i6 < 10; i6++) {
      outC->_L14[i7][i6] = 0.0;
    }
  }
  for (i8 = 0; i8 < 10; i8++) {
    outC->OutQueue[i8] = 0.0;
  }
  for (i9 = 0; i9 < 10; i9++) {
    /* 1 */
    MergeTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i9]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void MergeTime_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 10; i++) {
    /* 1 */
    MergeTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
      &outC->Context_1[i]);
  }
}

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime */
void MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::num */ kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::AuxTimeiArray */ array_real_10 *AuxTimeiArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime::impTimeArray */ array_real_10 *impTimeArray,
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime */
  static array_real_10 acc;
  static kcg_int i;
  
  outC->_L11 = num;
  /* pow */ for (i3 = 0; i3 < 10; i3++) {
    outC->_L8[i3] = outC->_L11;
  }
  kcg_copy_array_real_10(&outC->_L12, AuxTimeiArray);
  kcg_copy_array_real_10(&outC->_L13, impTimeArray);
  /* pow */ for (i2 = 0; i2 < 10; i2++) {
    kcg_copy_array_real_10(&outC->_L10[i2], &outC->_L13);
  }
  /* pow */ for (i1 = 0; i1 < 10; i1++) {
    kcg_copy_array_real_10(&outC->_L14[i1], &outC->_L12);
  }
  kcg_copy_array_real_10(&outC->_L9, &outC->_L12);
  /* 1 */ for (i = 0; i < 10; i++) {
    kcg_copy_array_real_10(&acc, &outC->_L9);
    /* 1 */
    MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
      i,
      &acc,
      &outC->_L10[i],
      outC->_L8[i],
      &outC->_L14[i],
      &outC->Context_1[i]);
    kcg_copy_array_real_10(&outC->_L9, &outC->Context_1[i].OutputTimeArray);
  }
  kcg_copy_array_real_10(&outC->OutQueue, &outC->_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

