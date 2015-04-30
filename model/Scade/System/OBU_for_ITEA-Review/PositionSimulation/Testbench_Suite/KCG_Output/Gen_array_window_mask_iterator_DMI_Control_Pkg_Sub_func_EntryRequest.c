/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator */
kcg_bool Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator::position */ kcg_int position)
{
  /* DMI_Control_Pkg::Sub_func::EntryRequest::Gen_array_window_mask_iterator::Output */ kcg_bool Output;
  
  if (index == position) {
    Output = kcg_true;
  }
  else {
    Output = kcg_false;
  }
  return Output;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

