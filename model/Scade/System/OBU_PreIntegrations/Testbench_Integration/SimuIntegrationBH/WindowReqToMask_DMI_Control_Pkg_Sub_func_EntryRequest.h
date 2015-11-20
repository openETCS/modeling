/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest_H_
#define _WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest_H_

#include "kcg_types.h"
#include "GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"
#include "Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_bool_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::window_mask */ window_mask;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Gen_array_window_mask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest /* 1 */ _1_Context_1[15];
  outC_GenerateIndexForMask_iterator_DMI_Control_Pkg_Sub_func_EntryRequest /* 1 */ Context_1[15];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L18 */ _L18;
  kcg_int /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L19 */ _L19;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L20 */ _L20;
  kcg_int /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L21 */ _L21;
  Array_DMI_List_Entry_Request /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L22 */ _L22;
  array_bool_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L23 */ _L23;
  array_int_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L24 */ _L24;
  kcg_int /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L25 */ _L25;
  kcg_int /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L26 */ _L26;
  Array_DMI_List_Entry_Request /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::_L27 */ _L27;
} outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask */
extern void WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::WindowReqToMask::dmi_entry_request */ DMI_List_Entry_Request_T_DMI_Types_Pkg dmi_entry_request,
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void WindowReqToMask_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void WindowReqToMask_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

