/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator */
void GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::index_in */kcg_int index_in,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::acc_in */kcg_int acc_in,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::inputA */DMI_List_Entry_Request_T_DMI_Types_Pkg inputA,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::inputB */DMI_List_Entry_Request_T_DMI_Types_Pkg inputB,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::condition */kcg_bool *condition,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::acc_out */kcg_int *acc_out)
{
  *acc_out = acc_in;
  *condition = !(inputA == inputB);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

