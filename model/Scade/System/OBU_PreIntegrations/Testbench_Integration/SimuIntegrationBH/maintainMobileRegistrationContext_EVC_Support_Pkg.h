/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _maintainMobileRegistrationContext_EVC_Support_Pkg_H_
#define _maintainMobileRegistrationContext_EVC_Support_Pkg_H_

#include "kcg_types.h"
#include "getMobileRegStatus_EVC_Support_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileRegistrationContext_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileRegistrationContext::MobileRegistrationContext */ MobileRegistrationContext;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getMobileRegStatus_EVC_Support_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  mobileRegistrationContext_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileRegistrationContext::RegistrationContext */ RegistrationContext;
  mobileHWStatus_Type_MoRC_Pck /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L1 */ _L1;
  mobileRegistrationContext_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L2 */ _L2;
  kcg_int /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L3 */ _L3;
  kcg_bool /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L4 */ _L4;
  kcg_int /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L5 */ _L5;
  kcg_int /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L6 */ _L6;
  kcg_bool /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L12 */ _L12;
  kcg_bool /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L13 */ _L13;
  mobileHealthStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L14 */ _L14;
  mobileHealthStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L15 */ _L15;
  mobileHealthStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L16 */ _L16;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L17 */ _L17;
  mobileHWConnectionStatus_Type_MoRC_Pck /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L18 */ _L18;
  NID_MN /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L19 */ _L19;
  mobileRegistrationContext_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileRegistrationContext::_L20 */ _L20;
} outC_maintainMobileRegistrationContext_EVC_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_Support_Pkg::maintainMobileRegistrationContext */
extern void maintainMobileRegistrationContext_EVC_Support_Pkg(
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_Support_Pkg::maintainMobileRegistrationContext::Registered_MN */ NID_MN Registered_MN,
  outC_maintainMobileRegistrationContext_EVC_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void maintainMobileRegistrationContext_reset_EVC_Support_Pkg(
  outC_maintainMobileRegistrationContext_EVC_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void maintainMobileRegistrationContext_init_EVC_Support_Pkg(
  outC_maintainMobileRegistrationContext_EVC_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _maintainMobileRegistrationContext_EVC_Support_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** maintainMobileRegistrationContext_EVC_Support_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

