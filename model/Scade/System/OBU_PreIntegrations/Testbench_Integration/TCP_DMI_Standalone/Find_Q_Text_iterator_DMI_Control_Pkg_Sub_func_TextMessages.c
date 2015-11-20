/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator */
void Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::acc_in */kcg_bool acc_in,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::q_text_1 */DMI_Q_TEXT_DMI_Types_Pkg q_text_1,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::q_text_2 */DMI_Q_TEXT_DMI_Types_Pkg q_text_2,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::accout */kcg_bool *accout,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::output */kcg_bool *output)
{
  *output = q_text_2 == q_text_1;
  *accout = !*output;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

