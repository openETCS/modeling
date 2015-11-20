/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator */
void MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::acc */array__31785 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::ImpmsgArray */array__31785 *ImpmsgArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::numAuxi */kcg_int numAuxi,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::auximsgArray */array__31785 *auximsgArray,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMSG_iterator::OutputArray */array__31785 *OutputArray)
{
  MsgStructure tmp1;
  MsgStructure tmp;
  
  if ((0 <= index) & (index < 10)) {
    kcg_copy_MsgStructure(&tmp1, &(*auximsgArray)[index]);
  }
  else {
    kcg_copy_MsgStructure(
      &tmp1,
      (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
  }
  if (!kcg_comp_MsgStructure(
      &tmp1,
      (struct__31768 *) &cMsgStructure_DMI_Control_Pkg)) {
    kcg_copy_array__31785(OutputArray, acc);
  }
  else {
    kcg_copy_array__31785(OutputArray, acc);
    if ((0 <= index - numAuxi) & (index - numAuxi < 10)) {
      kcg_copy_MsgStructure(&tmp, &(*ImpmsgArray)[index - numAuxi]);
    }
    else {
      kcg_copy_MsgStructure(
        &tmp,
        (MsgStructure *) &cMsgStructure_DMI_Control_Pkg);
    }
    if ((0 <= index) & (index < 10)) {
      kcg_copy_MsgStructure(&(*OutputArray)[index], &tmp);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMSG_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

