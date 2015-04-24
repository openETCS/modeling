/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit */
void RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::in_digit_display */ array_int_9 *in_digit_display,
  /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::out_digit_display */ array_int_9 *out_digit_display)
{
  kcg_bool tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L16 */ kcg_int _L16;
  /* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit::_L10 */ kcg_int _L10;
  
  /* 1 */
  FindIndexEmptyLoc_DMI_Control_Pkg_Utils(in_digit_display, &_L10, &tmp);
  if (tmp) {
    i = 0;
  }
  else {
    i = 1;
  }
  _L16 = _L10 - i;
  for (i = 0; i < 9; i++) {
    /* 1 */
    ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
      i,
      (*in_digit_display)[i],
      _L16,
      &tmp,
      &(*out_digit_display)[i]);
    _L10 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L10; i < 9; i++) {
    (*out_digit_display)[i] = ASCII_space_DMI_Control_Pkg;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

