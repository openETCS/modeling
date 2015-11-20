/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void ArrayOfASCII_to_Integer_init_DMI_Control_Pkg_Utils(
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L10 = 0;
  outC->_L9 = 0;
  outC->_L8 = kcg_true;
  for (i = 0; i < 9; i++) {
    outC->_L7[i] = 0;
  }
  outC->_L6 = kcg_true;
  outC->_L5 = 0;
  outC->_L4 = 0;
  outC->_L3 = 0;
  outC->_L2 = 0;
  for (i1 = 0; i1 < 9; i1++) {
    outC->_L1[i1] = 0;
  }
  outC->Output1 = 0;
  for (i2 = 0; i2 < 9; i2++) {
    /* 1 */
    ASCII_to_INTEGER_iterator_init_DMI_Control_Pkg_Utils(
      &outC->_1_Context_1[i2]);
  }
  /* 1 */ FindIndexEmptyLoc_init_DMI_Control_Pkg_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ArrayOfASCII_to_Integer_reset_DMI_Control_Pkg_Utils(
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 9; i++) {
    /* 1 */
    ASCII_to_INTEGER_iterator_reset_DMI_Control_Pkg_Utils(
      &outC->_1_Context_1[i]);
  }
  /* 1 */ FindIndexEmptyLoc_reset_DMI_Control_Pkg_Utils(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer */
void ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::TrainRunningNumber */ array_int_9 *TrainRunningNumber,
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int i1;
  /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer */
  static kcg_int acc;
  static kcg_int i;
  static kcg_int noname;
  
  kcg_copy_array_int_9(&outC->_L1, TrainRunningNumber);
  outC->_L4 = 0;
  /* 1 */ FindIndexEmptyLoc_DMI_Control_Pkg_Utils(&outC->_L1, &outC->Context_1);
  outC->_L5 = outC->Context_1.index;
  outC->_L6 = outC->Context_1.DigitFull;
  outC->_L10 = MAXTextLength_DMI_Control_Pkg + 1;
  /* 1 */ if (outC->_L6) {
    outC->_L9 = outC->_L10;
  }
  else {
    outC->_L9 = outC->_L5;
  }
  /* pow */ for (i1 = 0; i1 < 9; i1++) {
    outC->_L7[i1] = outC->_L9;
  }
  outC->_L8 = kcg_true;
  outC->_L3 = outC->_L4;
  if (outC->_L8) {
    for (i = 0; i < 9; i++) {
      acc = outC->_L3;
      /* 1 */
      ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils(
        i,
        acc,
        outC->_L1[i],
        outC->_L7[i],
        &outC->_1_Context_1[i]);
      outC->_L3 = outC->_1_Context_1[i].outInt;
      outC->_L2 = i + 1;
      if (!outC->_1_Context_1[i].condition) {
        break;
      }
    }
  }
  else {
    outC->_L2 = 0;
  }
  outC->Output1 = outC->_L3;
  noname = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

