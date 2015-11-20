/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexEmptyLoc_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void FindIndexEmptyLoc_init_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L15 = 0;
  outC->_L4 = kcg_true;
  for (i = 0; i < 9; i++) {
    outC->_L7[i] = 0;
  }
  outC->DigitFull = kcg_true;
  outC->index = 0;
  for (i1 = 0; i1 < 9; i1++) {
    /* 1 */
    FindIndexEmptyLoc_iterator_init_DMI_Control_Pkg_Utils(&outC->Context_1[i1]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FindIndexEmptyLoc_reset_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 9; i++) {
    /* 1 */
    FindIndexEmptyLoc_iterator_reset_DMI_Control_Pkg_Utils(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc */
void FindIndexEmptyLoc_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc::in_digit_display */ array_int_9 *in_digit_display,
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC)
{
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc */
  static kcg_bool acc;
  static kcg_int i;
  
  outC->_L18 = kcg_false;
  kcg_copy_array_int_9(&outC->_L7, in_digit_display);
  outC->_L4 = kcg_true;
  outC->_L17 = outC->_L18;
  if (outC->_L4) {
    for (i = 0; i < 9; i++) {
      acc = outC->_L17;
      /* 1 */
      FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils(
        i,
        acc,
        outC->_L7[i],
        &outC->Context_1[i]);
      outC->_L17 = outC->Context_1[i].accout;
      outC->_L15 = i + 1;
      if (!outC->Context_1[i].condition) {
        break;
      }
    }
  }
  else {
    outC->_L15 = 0;
  }
  outC->index = outC->_L15;
  outC->DigitFull = outC->_L17;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FindIndexEmptyLoc_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

