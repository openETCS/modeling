/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber */
kcg_int CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::start */ kcg_bool start,
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::in_arraykey */ array_bool_12 *in_arraykey)
{
  kcg_int tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L4 */ kcg_int _L4;
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::_L5 */ kcg_int _L5;
  /* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber::out_KeyNumber */ kcg_int out_KeyNumber;
  
  _L5 = 0;
  if (start) {
    for (i = 0; i < 12; i++) {
      tmp1 = _L5;
      /* 1 */
      CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
        tmp1,
        (*in_arraykey)[i],
        &tmp,
        &_L5);
      _L4 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L4 = 0;
  }
  if (_L4 < 10) {
    out_KeyNumber = _L4 + ASCII_0_DMI_Control_Pkg;
  }
  else {
    switch (_L4) {
      case 10 :
        out_KeyNumber = ASCII_offset_Backsp_DMI_Control_Pkg +
          ASCII_0_DMI_Control_Pkg;
        break;
      case 11 :
        out_KeyNumber = ASCII_offset_0_DMI_Control_Pkg +
          ASCII_0_DMI_Control_Pkg;
        break;
      
      default :
        out_KeyNumber = 0 + ASCII_0_DMI_Control_Pkg;
    }
  }
  return out_KeyNumber;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

