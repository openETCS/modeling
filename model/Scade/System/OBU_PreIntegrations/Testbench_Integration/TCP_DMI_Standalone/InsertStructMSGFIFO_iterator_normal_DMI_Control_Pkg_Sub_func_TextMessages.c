/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal */
void InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::acc */array__31785 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::Position */kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::newMsg */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *newMsg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::isFull */kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::OutputArray */array__31785 *OutputArray)
{
  MsgStructure tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertStructMSGFIFO_iterator_normal::_L4 */ kcg_bool _L4;
  
  _L4 = index == Position;
  if (_L4 & !isFull) {
    kcg_copy_array__31785(OutputArray, acc);
    if ((0 <= index) & (index < 10)) {
      (*OutputArray)[index].present = kcg_true;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &(*OutputArray)[index].dmi_msg,
        newMsg);
    }
  }
  else if ((index < Position) & isFull) {
    kcg_copy_array__31785(OutputArray, acc);
    if ((0 <= index + 1) & (index + 1 < 10)) {
      kcg_copy_MsgStructure(&tmp, &(*acc)[index + 1]);
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
  else if (isFull & _L4) {
    kcg_copy_array__31785(OutputArray, acc);
    if ((0 <= index) & (index < 10)) {
      (*OutputArray)[index].present = kcg_true;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &(*OutputArray)[index].dmi_msg,
        newMsg);
    }
  }
  else {
    kcg_copy_array__31785(OutputArray, acc);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InsertStructMSGFIFO_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

