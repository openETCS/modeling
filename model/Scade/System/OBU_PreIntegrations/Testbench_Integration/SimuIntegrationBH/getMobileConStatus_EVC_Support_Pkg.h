/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _getMobileConStatus_EVC_Support_Pkg_H_
#define _getMobileConStatus_EVC_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileConnectionStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::getMobileConStatus::MobileConnectionStatus */ MobileConnectionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  mobileHWConnectionStatus_Type_MoRC_Pck /* EVC_Support_Pkg::getMobileConStatus::_L1 */ _L1;
  mobileConnectionStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::getMobileConStatus::_L2 */ _L2;
  mobileConnectionStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::getMobileConStatus::_L3 */ _L3;
  mobileConnectionStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::getMobileConStatus::_L5 */ _L5;
  mobileConnectionStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::getMobileConStatus::_L7 */ _L7;
  mobileConnectionStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::getMobileConStatus::_L9 */ _L9;
} outC_getMobileConStatus_EVC_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_Support_Pkg::getMobileConStatus */
extern void getMobileConStatus_EVC_Support_Pkg(
  /* EVC_Support_Pkg::getMobileConStatus::HW_ConnectionStatus */ mobileHWConnectionStatus_Type_MoRC_Pck HW_ConnectionStatus,
  outC_getMobileConStatus_EVC_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getMobileConStatus_reset_EVC_Support_Pkg(
  outC_getMobileConStatus_EVC_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getMobileConStatus_init_EVC_Support_Pkg(
  outC_getMobileConStatus_EVC_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _getMobileConStatus_EVC_Support_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** getMobileConStatus_EVC_Support_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

