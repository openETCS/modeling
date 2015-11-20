/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void Find_Q_Text_iterator_init_DMI_Control_Pkg_Utils(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L2 = kcg_true;
  outC->_L7 = balise_read_error_DMI_Types_Pkg;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L3 = balise_read_error_DMI_Types_Pkg;
  outC->_L1 = 0;
  outC->accout = kcg_true;
  outC->condout = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void Find_Q_Text_iterator_reset_DMI_Control_Pkg_Utils(
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Utils *outC)
{
}

/* DMI_Control_Pkg::Utils::Find_Q_Text_iterator */
void Find_Q_Text_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::acc_in */ kcg_bool acc_in,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::q_text_1 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_1,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::q_text_2 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_2,
  outC_Find_Q_Text_iterator_DMI_Control_Pkg_Utils *outC)
{
  static kcg_int noname;
  
  outC->_L1 = index;
  outC->_L3 = q_text_1;
  outC->_L7 = q_text_2;
  outC->_L5 = outC->_L7 == outC->_L3;
  outC->_L6 = !outC->_L5;
  outC->condout = outC->_L6;
  noname = outC->_L1;
  outC->_L2 = acc_in;
  outC->accout = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Find_Q_Text_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

