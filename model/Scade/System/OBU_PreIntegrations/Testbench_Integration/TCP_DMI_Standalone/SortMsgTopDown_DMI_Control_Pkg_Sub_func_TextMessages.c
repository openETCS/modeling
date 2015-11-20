/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown */
void SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown::acc */array__31785 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown::Queue */array__31785 *Queue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown::numE */kcg_int numE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortMsgTopDown::outArray */array__31785 *outArray)
{
  MsgStructure tmp1;
  MsgStructure tmp;
  
  if ((0 <= index) & (index < 10)) {
    kcg_copy_MsgStructure(&tmp1, &(*acc)[index]);
  }
  else {
    kcg_copy_MsgStructure(
      &tmp1,
      (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  }
  if (!kcg_comp_MsgStructure(
      &tmp1,
      (struct__31768 *) &cMsgStructure_DMI_Control_Pkg)) {
    kcg_copy_array__31785(outArray, acc);
  }
  else {
    kcg_copy_array__31785(outArray, acc);
    if ((0 <= cDIM_MSGQueueMax_DMI_Control_Pkg - numE + index) &
      (cDIM_MSGQueueMax_DMI_Control_Pkg - numE + index < 10)) {
      kcg_copy_MsgStructure(
        &tmp,
        &(*Queue)[cDIM_MSGQueueMax_DMI_Control_Pkg - numE + index]);
    }
    else {
      kcg_copy_MsgStructure(
        &tmp,
        (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
    }
    if ((0 <= index) & (index < 10)) {
      kcg_copy_MsgStructure(&(*outArray)[index], &tmp);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SortMsgTopDown_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

