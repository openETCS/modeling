/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator */
void AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::Index */ kcg_int Index,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::KeyNumber */ kcg_int KeyNumber,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::in_digit_display */ kcg_int in_digit_display,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::condition */ kcg_bool *condition,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::out_digit_display */ kcg_int *out_digit_display)
{
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator::_L3 */ kcg_bool _L3;
  
  _L3 = in_digit_display == ASCII_space_DMI_Control_Pkg;
  *condition = !_L3;
  if (_L3) {
    *out_digit_display = KeyNumber;
  }
  else {
    *out_digit_display = in_digit_display;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

