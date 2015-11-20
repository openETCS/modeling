/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText */
void CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::msg */MsgStructure *msg,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::MsgIsPlainText */kcg_bool *MsgIsPlainText,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::MsgIsFixText */kcg_bool *MsgIsFixText)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgIsFixText::_L7 */ kcg_bool _L7;
  
  _L7 = (*msg).dmi_msg.l_text == 0;
  *MsgIsFixText = (*msg).dmi_msg.valid & (*msg).present & _L7;
  *MsgIsPlainText = (*msg).dmi_msg.valid & (*msg).present & !_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckMsgIsFixText_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

