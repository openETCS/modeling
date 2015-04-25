/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit */
void AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::in_digit_display */ array_int_9 *in_digit_display,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::KeyNumber */ kcg_int KeyNumber,
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::out_digit_display */ array_int_9 *out_digit_display)
{
  kcg_bool tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit::_L13 */ kcg_int _L13;
  
  for (i = 0; i < 9; i++) {
    /* 1 */
    AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
      i,
      KeyNumber,
      (*in_digit_display)[i],
      &tmp,
      &(*out_digit_display)[i]);
    _L13 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L13; i < 9; i++) {
    (*out_digit_display)[i] = ASCII_space_DMI_Control_Pkg;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

