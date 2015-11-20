/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot */
void CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::DMI_text_message */DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_text_message,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::Output1 */kcg_bool *Output1,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::Output2 */kcg_bool *Output2,
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::Output3 */kcg_bool *Output3)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::CheckAckOrNot::_L16 */ kcg_bool _L16;
  
  *Output1 = (*DMI_text_message).valid & (((*DMI_text_message).q_textConfirm ==
        Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condit) |
      ((*DMI_text_message).q_textConfirm ==
        Q_TEXTCONFIRM_Confirmation_required) |
      ((*DMI_text_message).q_textConfirm ==
        Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_cond));
  _L16 = (*DMI_text_message).q_textConfirm ==
    Q_TEXTCONFIRM_No_confirmation_required;
  *Output2 = (*DMI_text_message).valid & _L16 &
    ((*DMI_text_message).q_textClass == Q_TEXTCLASS_Auxiliary_Information);
  *Output3 = (*DMI_text_message).valid & _L16 &
    ((*DMI_text_message).q_textClass == Q_TEXTCLASS_Important_Information);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckAckOrNot_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

