/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Length_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::Length */
kcg_int Length_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::Length::array_mm_local */array_real_5 *array_mm_local)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::Length::_L4 */ kcg_real _L4;
  /* DMI_Control_Pkg::Sub_func::TextMessages::Length::length */ kcg_int length;
  
  _L4 = - 1.0;
  if (((*array_mm_local)[0] != _L4) & ((*array_mm_local)[1] == _L4) &
    ((*array_mm_local)[2] == _L4) & ((*array_mm_local)[3] == _L4) &
    ((*array_mm_local)[4] == _L4)) {
    length = 1;
  }
  else if (((*array_mm_local)[0] != _L4) & ((*array_mm_local)[1] != _L4) &
    ((*array_mm_local)[2] == _L4) & ((*array_mm_local)[3] == _L4) &
    ((*array_mm_local)[4] == _L4)) {
    length = 2;
  }
  else if (((*array_mm_local)[0] != _L4) & ((*array_mm_local)[1] != _L4) &
    ((*array_mm_local)[2] != _L4) & ((*array_mm_local)[3] == _L4) &
    ((*array_mm_local)[4] == _L4)) {
    length = 3;
  }
  else if (((*array_mm_local)[0] != _L4) & ((*array_mm_local)[1] != _L4) &
    ((*array_mm_local)[2] != _L4) & ((*array_mm_local)[3] != _L4) &
    ((*array_mm_local)[4] == _L4)) {
    length = 4;
  }
  else if (((*array_mm_local)[0] != _L4) & ((*array_mm_local)[1] != _L4) &
    ((*array_mm_local)[2] != _L4) & ((*array_mm_local)[3] != _L4) &
    ((*array_mm_local)[4] != _L4)) {
    length = 5;
  }
  else {
    length = 0;
  }
  return length;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Length_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

