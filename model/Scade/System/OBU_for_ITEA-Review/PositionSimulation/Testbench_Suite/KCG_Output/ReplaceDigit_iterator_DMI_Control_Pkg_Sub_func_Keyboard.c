/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator */
void ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::in_digit_display */ kcg_int in_digit_display,
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::Calc_index */ kcg_int Calc_index,
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::condition */ kcg_bool *condition,
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::out_array */ kcg_int *out_array)
{
  /* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator::_L4 */ kcg_bool _L4;
  
  _L4 = index == Calc_index - 1;
  if (_L4) {
    *out_array = ASCII_space_DMI_Control_Pkg;
  }
  else {
    *out_array = in_digit_display;
  }
  *condition = !_L4;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

