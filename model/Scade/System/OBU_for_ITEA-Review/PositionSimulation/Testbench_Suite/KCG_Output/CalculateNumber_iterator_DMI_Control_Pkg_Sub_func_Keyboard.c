/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator */
void CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::acc */ kcg_int acc,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::in_arraykey */ kcg_bool in_arraykey,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::condition */ kcg_bool *condition,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator::out_acc */ kcg_int *out_acc)
{
  *out_acc = acc;
  *condition = !in_arraykey;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

