/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void DeleteMSGFIFO_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L35.present = kcg_true;
  outC->_L35.dmi_msg.valid = kcg_true;
  outC->_L35.dmi_msg.system_clock = 0;
  outC->_L35.dmi_msg.textMessage_ID = 0;
  outC->_L35.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L35.dmi_msg.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->_L35.dmi_msg.x_text[i] = ' ';
  }
  outC->_L35.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L35.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L30.present = kcg_true;
  outC->_L30.dmi_msg.valid = kcg_true;
  outC->_L30.dmi_msg.system_clock = 0;
  outC->_L30.dmi_msg.textMessage_ID = 0;
  outC->_L30.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L30.dmi_msg.l_text = 0;
  for (i1 = 0; i1 < 255; i1++) {
    outC->_L30.dmi_msg.x_text[i1] = ' ';
  }
  outC->_L30.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L30.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L19.present = kcg_true;
  outC->_L19.dmi_msg.valid = kcg_true;
  outC->_L19.dmi_msg.system_clock = 0;
  outC->_L19.dmi_msg.textMessage_ID = 0;
  outC->_L19.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L19.dmi_msg.l_text = 0;
  for (i2 = 0; i2 < 255; i2++) {
    outC->_L19.dmi_msg.x_text[i2] = ' ';
  }
  outC->_L19.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L19.dmi_msg.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L17 = 0;
  outC->_L16 = kcg_true;
  outC->_L15 = 0;
  outC->QueueElemOut.present = kcg_true;
  outC->QueueElemOut.dmi_msg.valid = kcg_true;
  outC->QueueElemOut.dmi_msg.system_clock = 0;
  outC->QueueElemOut.dmi_msg.textMessage_ID = 0;
  outC->QueueElemOut.dmi_msg.q_text = balise_read_error_DMI_Types_Pkg;
  outC->QueueElemOut.dmi_msg.l_text = 0;
  for (i3 = 0; i3 < 255; i3++) {
    outC->QueueElemOut.dmi_msg.x_text[i3] = ' ';
  }
  outC->QueueElemOut.dmi_msg.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->QueueElemOut.dmi_msg.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
}
#endif /* KCG_USER_DEFINED_INIT */


void DeleteMSGFIFO_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator */
void DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::QueueElemIn */ MsgStructure *QueueElemIn,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::QueueElemShifted */ MsgStructure *QueueElemShifted,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::Pos */ kcg_int Pos,
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L15 = index;
  outC->_L17 = Pos;
  outC->_L16 = outC->_L15 < outC->_L17;
  kcg_copy_MsgStructure(&outC->_L19, QueueElemIn);
  kcg_copy_MsgStructure(&outC->_L35, QueueElemShifted);
  /* 1 */ if (outC->_L16) {
    kcg_copy_MsgStructure(&outC->_L30, &outC->_L19);
  }
  else {
    kcg_copy_MsgStructure(&outC->_L30, &outC->_L35);
  }
  kcg_copy_MsgStructure(&outC->QueueElemOut, &outC->_L30);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

