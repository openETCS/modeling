/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void Find_Q_Text_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L13 = kcg_true;
  outC->_L14 = balise_read_error_DMI_Types_Pkg;
  outC->_L15 = kcg_true;
  outC->_L16 = balise_read_error_DMI_Types_Pkg;
  outC->_L17 = kcg_true;
  outC->_L18 = 0;
  outC->output = kcg_true;
  outC->accout = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void Find_Q_Text_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
}

/* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator */
void Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::acc_in */ kcg_bool acc_in,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::q_text_1 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_1,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Find_Q_Text_iterator::q_text_2 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_2,
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_int noname;
  static kcg_bool _1_noname;
  
  outC->_L18 = index;
  noname = outC->_L18;
  outC->_L16 = q_text_2;
  outC->_L14 = q_text_1;
  outC->_L15 = outC->_L16 == outC->_L14;
  outC->output = outC->_L15;
  outC->_L13 = acc_in;
  outC->_L17 = !outC->_L15;
  outC->accout = outC->_L17;
  _1_noname = outC->_L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Find_Q_Text_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

