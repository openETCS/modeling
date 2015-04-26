/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator */
void GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::index_in */ kcg_int index_in,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::acc_in */ kcg_int acc_in,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::inputA */ DMI_List_Entry_Request_T_DMI_Types_Pkg inputA,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::inputB */ DMI_List_Entry_Request_T_DMI_Types_Pkg inputB,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::condition */ kcg_bool *condition,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::acc_out */ kcg_int *acc_out)
{
  *acc_out = acc_in;
  *condition = !(inputA == inputB);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

