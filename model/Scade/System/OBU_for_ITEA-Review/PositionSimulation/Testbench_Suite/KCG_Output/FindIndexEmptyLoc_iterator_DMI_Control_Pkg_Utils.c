/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator */
void FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::Acc */ kcg_bool Acc,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::in_digit_display */ kcg_int in_digit_display,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::condition */ kcg_bool *condition,
  /* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator::accout */ kcg_bool *accout)
{
  *condition = !(in_digit_display == ASCII_space_DMI_Control_Pkg);
  *accout = Acc | (*condition & (index == MAXTextLength_DMI_Control_Pkg - 1));
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

