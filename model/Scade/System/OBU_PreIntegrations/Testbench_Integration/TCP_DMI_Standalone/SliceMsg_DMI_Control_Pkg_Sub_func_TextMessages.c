/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg */
void SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg::Input */MsgStructure *Input,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SliceMsg::Output1 */array_char_30_5 *Output1)
{
  if (((*Input).dmi_msg.l_text <= 30) & ((*Input).dmi_msg.l_text > 0)) {
    kcg_copy_array_char_30(
      &(*Output1)[0],
      (array_char_30 *) &(*Input).dmi_msg.x_text[0]);
    kcg_copy_array_char_30(
      &(*Output1)[1],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[2],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[3],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  }
  else if (((*Input).dmi_msg.l_text <= 60) & ((*Input).dmi_msg.l_text > 30)) {
    kcg_copy_array_char_30(
      &(*Output1)[0],
      (array_char_30 *) &(*Input).dmi_msg.x_text[0]);
    kcg_copy_array_char_30(
      &(*Output1)[1],
      (array_char_30 *) &(*Input).dmi_msg.x_text[30]);
    kcg_copy_array_char_30(
      &(*Output1)[2],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[3],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  }
  else if (((*Input).dmi_msg.l_text <= 90) & ((*Input).dmi_msg.l_text > 60)) {
    kcg_copy_array_char_30(
      &(*Output1)[0],
      (array_char_30 *) &(*Input).dmi_msg.x_text[0]);
    kcg_copy_array_char_30(
      &(*Output1)[1],
      (array_char_30 *) &(*Input).dmi_msg.x_text[30]);
    kcg_copy_array_char_30(
      &(*Output1)[2],
      (array_char_30 *) &(*Input).dmi_msg.x_text[60]);
    kcg_copy_array_char_30(
      &(*Output1)[3],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  }
  else if (((*Input).dmi_msg.l_text <= 120) & ((*Input).dmi_msg.l_text > 90)) {
    kcg_copy_array_char_30(
      &(*Output1)[0],
      (array_char_30 *) &(*Input).dmi_msg.x_text[0]);
    kcg_copy_array_char_30(
      &(*Output1)[1],
      (array_char_30 *) &(*Input).dmi_msg.x_text[30]);
    kcg_copy_array_char_30(
      &(*Output1)[2],
      (array_char_30 *) &(*Input).dmi_msg.x_text[60]);
    kcg_copy_array_char_30(
      &(*Output1)[3],
      (array_char_30 *) &(*Input).dmi_msg.x_text[90]);
    kcg_copy_array_char_30(
      &(*Output1)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  }
  else if (kcg_comp_MsgStructure(
      Input,
      (struct__31768 *) &cMsgStructure_fix_DMI_Control_Pkg)) {
    kcg_copy_array_char_30_5(
      Output1,
      (array_char_30_5 *) &cPlainText_fix_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_char_30(
      &(*Output1)[0],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[1],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[2],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[3],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    kcg_copy_array_char_30(
      &(*Output1)[4],
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SliceMsg_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

