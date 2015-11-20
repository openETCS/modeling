/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteTime_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal */
void deleteTime_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal::acc */array_real_10 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal::Position */kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal::time_array */array_real_10 *time_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_normal::time */array_real_10 *time)
{
  kcg_real tmp;
  
  if (index < Position) {
    kcg_copy_array_real_10(time, acc);
  }
  else {
    kcg_copy_array_real_10(time, acc);
    if ((0 <= index + 1) & (index + 1 < 10)) {
      tmp = (*time_array)[index + 1];
    }
    else {
      tmp = - 1.0;
    }
    if ((0 <= index) & (index < 10)) {
      (*time)[index] = tmp;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** deleteTime_iterator_normal_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

