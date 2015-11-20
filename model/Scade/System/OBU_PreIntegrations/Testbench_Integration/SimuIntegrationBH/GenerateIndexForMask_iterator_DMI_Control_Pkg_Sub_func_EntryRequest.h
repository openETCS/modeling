/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest_H_
#define _GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::condition */ condition;
  kcg_int /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::acc_out */ acc_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::_L2 */ _L2;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::_L3 */ _L3;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::_L6 */ _L6;
} outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator */
extern void GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::index_in */ kcg_int index_in,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::acc_in */ kcg_int acc_in,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::inputA */ DMI_List_Entry_Request_T_DMI_Types_Pkg inputA,
  /* DMI_Control_Pkg::Sub_func::EntryRequest::GenerateIndexForMask_iterator::inputB */ DMI_List_Entry_Request_T_DMI_Types_Pkg inputB,
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GenerateIndexForMask_iterator_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GenerateIndexForMask_iterator_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

