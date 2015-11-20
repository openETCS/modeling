/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void FindIndexEmptyLoc_iterator_init_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L30 = 0;
  outC->_L29 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L22 = 0;
  outC->_L21 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L19 = 0;
  outC->_L3 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L1 = 0;
  outC->accout = kcg_true;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FindIndexEmptyLoc_iterator_reset_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator */
void FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::Acc */ kcg_bool Acc,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::in_digit_display */ kcg_int in_digit_display,
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L1 = in_digit_display;
  outC->_L30 = ASCII_space_DMI_Control_Pkg;
  outC->_L3 = outC->_L1 == outC->_L30;
  outC->_L7 = !outC->_L3;
  outC->condition = outC->_L7;
  outC->_L19 = index;
  outC->_L17 = Acc;
  outC->_L22 = MAXTextLength_DMI_Control_Pkg - 1;
  outC->_L21 = outC->_L19 == outC->_L22;
  outC->_L29 = outC->_L7 & outC->_L21;
  outC->_L25 = outC->_L17 | outC->_L29;
  outC->accout = outC->_L25;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

