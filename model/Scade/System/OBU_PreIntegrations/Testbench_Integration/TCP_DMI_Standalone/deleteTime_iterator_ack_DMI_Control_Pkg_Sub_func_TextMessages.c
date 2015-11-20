/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack */
void deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack::acc */array_real_5 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack::Position */kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack::time_array */array_real_5 *time_array,
  /* DMI_Control_Pkg::Sub_func::TextMessages::deleteTime_iterator_ack::time */array_real_5 *time)
{
  kcg_real tmp;
  
  if (index < Position) {
    kcg_copy_array_real_5(time, acc);
  }
  else {
    kcg_copy_array_real_5(time, acc);
    if ((0 <= index + 1) & (index + 1 < 5)) {
      tmp = (*time_array)[index + 1];
    }
    else {
      tmp = - 1.0;
    }
    if ((0 <= index) & (index < 5)) {
      (*time)[index] = tmp;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** deleteTime_iterator_ack_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

