/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void CheckMsgInsertOrDelete_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int i;
  
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.system_clock = 0;
  outC->_L2.textMessage_ID = 0;
  outC->_L2.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L2.l_text = 0;
  for (i = 0; i < 255; i++) {
    outC->_L2.x_text[i] = ' ';
  }
  outC->_L2.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L2.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->insertImp = kcg_true;
  outC->insertAuxi = kcg_true;
  outC->insert = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void CheckMsgInsertOrDelete_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete */
void CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::msg */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete::isImportant */ kcg_bool isImportant,
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L2, msg);
  outC->_L3 = outC->_L2.valid;
  outC->insert = outC->_L3;
  outC->_L5 = isImportant;
  outC->_L6 = !outC->_L5;
  outC->_L4 = outC->_L3 & outC->_L6;
  outC->insertAuxi = outC->_L4;
  outC->_L7 = outC->_L3 & outC->_L5;
  outC->insertImp = outC->_L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

