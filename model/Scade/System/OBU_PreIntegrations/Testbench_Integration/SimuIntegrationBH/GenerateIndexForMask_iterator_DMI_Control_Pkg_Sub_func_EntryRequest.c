/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

#ifndef KCG_USER_DEFINED_INIT
void GenerateIndexForMask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L3 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->acc_out = 0;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GenerateIndexForMask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator */
void GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::index_in */ kcg_int index_in,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::acc_in */ kcg_int acc_in,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::inputA */ DMI_List_Entry_Request_T_DMI_Types_Pkg inputA,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::inputB */ DMI_List_Entry_Request_T_DMI_Types_Pkg inputB,
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC)
{
  static kcg_int noname;
  
  outC->_L1 = index_in;
  outC->_L2 = acc_in;
  outC->_L3 = inputA;
  outC->_L4 = inputB;
  outC->_L5 = outC->_L3 == outC->_L4;
  outC->_L6 = !outC->_L5;
  outC->condition = outC->_L6;
  outC->acc_out = outC->_L2;
  noname = outC->_L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

