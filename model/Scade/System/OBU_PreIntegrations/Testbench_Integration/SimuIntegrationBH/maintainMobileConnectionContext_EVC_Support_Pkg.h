/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _maintainMobileConnectionContext_EVC_Support_Pkg_H_
#define _maintainMobileConnectionContext_EVC_Support_Pkg_H_

#include "kcg_types.h"
#include "getMobileConStatus_EVC_Support_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileConnectionContext_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileConnectionContext::MobileConnectionContext */ MobileConnectionContext;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getMobileConStatus_EVC_Support_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  mobileConnectionContext_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileConnectionContext::ConnectionContext */ ConnectionContext;
  mobileHWStatus_Type_MoRC_Pck /* EVC_Support_Pkg::maintainMobileConnectionContext::_L1 */ _L1;
  kcg_int /* EVC_Support_Pkg::maintainMobileConnectionContext::_L3 */ _L3;
  kcg_bool /* EVC_Support_Pkg::maintainMobileConnectionContext::_L4 */ _L4;
  kcg_int /* EVC_Support_Pkg::maintainMobileConnectionContext::_L5 */ _L5;
  kcg_int /* EVC_Support_Pkg::maintainMobileConnectionContext::_L6 */ _L6;
  kcg_bool /* EVC_Support_Pkg::maintainMobileConnectionContext::_L12 */ _L12;
  kcg_bool /* EVC_Support_Pkg::maintainMobileConnectionContext::_L13 */ _L13;
  mobileConnectionContext_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileConnectionContext::_L21 */ _L21;
  mobileConnectionStatus_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileConnectionContext::_L24 */ _L24;
  mobileHWConnectionStatus_Type_MoRC_Pck /* EVC_Support_Pkg::maintainMobileConnectionContext::_L25 */ _L25;
  kcg_bool /* EVC_Support_Pkg::maintainMobileConnectionContext::_L26 */ _L26;
  kcg_bool /* EVC_Support_Pkg::maintainMobileConnectionContext::_L27 */ _L27;
  kcg_bool /* EVC_Support_Pkg::maintainMobileConnectionContext::_L28 */ _L28;
  NID_RADIO /* EVC_Support_Pkg::maintainMobileConnectionContext::_L30 */ _L30;
  mobileConnectionContext_T_RCM_Types_Pkg /* EVC_Support_Pkg::maintainMobileConnectionContext::_L31 */ _L31;
} outC_maintainMobileConnectionContext_EVC_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_Support_Pkg::maintainMobileConnectionContext */
extern void maintainMobileConnectionContext_EVC_Support_Pkg(
  /* EVC_Support_Pkg::maintainMobileConnectionContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::Radio_ID */ NID_RADIO Radio_ID,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::inRadioHole */ kcg_bool inRadioHole,
  outC_maintainMobileConnectionContext_EVC_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void maintainMobileConnectionContext_reset_EVC_Support_Pkg(
  outC_maintainMobileConnectionContext_EVC_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void maintainMobileConnectionContext_init_EVC_Support_Pkg(
  outC_maintainMobileConnectionContext_EVC_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _maintainMobileConnectionContext_EVC_Support_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** maintainMobileConnectionContext_EVC_Support_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

