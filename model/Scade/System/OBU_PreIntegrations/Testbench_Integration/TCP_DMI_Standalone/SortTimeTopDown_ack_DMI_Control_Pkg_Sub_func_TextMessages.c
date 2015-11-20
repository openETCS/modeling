/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack */
void SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::acc */array_real_5 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::TimeQueue */array_real_5 *TimeQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::num */kcg_int num,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::numE */kcg_int numE,
  /* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack::outTimeArray */array_real_5 *outTimeArray)
{
  kcg_real tmp;
  
  if (index >= num) {
    kcg_copy_array_real_5(outTimeArray, acc);
  }
  else {
    kcg_copy_array_real_5(outTimeArray, acc);
    if ((0 <= index + (numE - num)) & (index + (numE - num) < 5)) {
      tmp = (*TimeQueue)[index + (numE - num)];
    }
    else {
      tmp = c_hh_DMI_Control_Pkg;
    }
    if ((0 <= index) & (index < 5)) {
      (*outTimeArray)[index] = tmp;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

