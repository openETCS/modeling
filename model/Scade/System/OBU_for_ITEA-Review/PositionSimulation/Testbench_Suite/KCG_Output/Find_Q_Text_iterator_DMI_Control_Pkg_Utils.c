/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::Find_Q_Text_iterator */
void Find_Q_Text_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::acc_in */ kcg_bool acc_in,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::q_text_1 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_1,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::q_text_2 */ DMI_Q_TEXT_DMI_Types_Pkg q_text_2,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::condout */ kcg_bool *condout,
  /* DMI_Control_Pkg::Utils::Find_Q_Text_iterator::accout */ kcg_bool *accout)
{
  *accout = acc_in;
  *condout = !(q_text_2 == q_text_1);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Find_Q_Text_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

