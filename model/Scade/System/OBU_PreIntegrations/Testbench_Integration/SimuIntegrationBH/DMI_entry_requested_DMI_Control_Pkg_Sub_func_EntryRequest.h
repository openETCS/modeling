/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest_H_
#define _DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest_H_

#include "kcg_types.h"
#include "WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::trainRN */ trainRN;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::driverID */ driverID;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::mainmenu */ mainmenu;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::hideMainmenu */ hideMainmenu;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::LevelMenu */ LevelMenu;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest /* 4 */ Context_4;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L1 */ _L1;
  array_bool_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L3 */ _L3;
  array_bool_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L7 */ _L7;
  array_bool_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L8 */ _L8;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L21 */ _L21;
  array_bool_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L22 */ _L22;
  array_bool_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L23 */ _L23;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L24 */ _L24;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L25 */ _L25;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L40 */ _L40;
  array_bool_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L38 */ _L38;
  array_bool_15 /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L41 */ _L41;
  kcg_bool /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::_L42 */ _L42;
} outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested */
extern void DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest(
  /* DMI_Control_Pkg::Sub_func::EntryRequest::DMI_entry_requested::DMI_entry_request */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_entry_request,
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DMI_entry_requested_reset_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DMI_entry_requested_init_DMI_Control_Pkg_Sub_func_EntryRequest(
  outC_DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

