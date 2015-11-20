/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.h"

void NormalMsgManager_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
    &outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager */
void NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::Queue */array__31785 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::hh_array */array_real_10 *hh_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::mm_array */array_real_10 *mm_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::numE */kcg_int numE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollUp */kcg_bool scrollUp,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::scrollDown */kcg_bool scrollDown,
  outC_NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  array__31785 tmp3;
  array__31785 tmp2;
  kcg_int tmp1;
  kcg_bool tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L21 */ array__31785 _L21;
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMsgManager::_L217 */ array_int_10 _L217;
  
  outC->isImportantMsg = kcg_true;
  outC->IndexFixedMsg[0] = 0;
  outC->IndexFixedMsg[1] = 0;
  outC->IndexFixedMsg[2] = 0;
  outC->IndexFixedMsg[3] = 0;
  outC->IndexFixedMsg[4] = 0;
  kcg_copy_array_real_5(&outC->Array_mm, (array_real_5 *) &(*mm_array)[0]);
  kcg_copy_array_real_5(&outC->Array_hh, (array_real_5 *) &(*hh_array)[0]);
  for (tmp1 = 0; tmp1 < 10; tmp1++) {
    kcg_copy_MsgStructure(&_L21[tmp1], &(*Queue)[9 - tmp1]);
  }
  kcg_copy_array__31785(
    &tmp3,
    (array__31785 *) &cMsgStructQueueMax_DMI_Control_Pkg);
  for (tmp1 = 0; tmp1 < 10; tmp1++) {
    kcg_copy_array__31785(&tmp2, &tmp3);
    /* 1 */
    SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages(
      tmp1,
      &tmp2,
      &_L21,
      numE,
      &tmp3);
  }
  if (outC->init) {
    tmp1 = 0;
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp1 = outC->scrollLevel;
    tmp = outC->rem_isMoreThanFive;
  }
  /* 1 */
  ShowMsg_Plain_DMI_Control_Pkg_Sub_func_TextMessages(
    &tmp3,
    tmp1,
    &outC->ArrayPlainText,
    &outC->rem_isMoreThanFive,
    &_L217);
  /* 1 */
  ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
    scrollUp,
    scrollDown,
    tmp,
    numE,
    &outC->Context_1);
  outC->ScrollUpEnableIndex_toDisplay = outC->Context_1.scrollUpTypeIndex;
  outC->scrollLevel = outC->Context_1.scrollLevel;
  outC->ScrollDownEnableIndex_toDisplay = outC->Context_1.scrollDownTypeIndex;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalMsgManager_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

