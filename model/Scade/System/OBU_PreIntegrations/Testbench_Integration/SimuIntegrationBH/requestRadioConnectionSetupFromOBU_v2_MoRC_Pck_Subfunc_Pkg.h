/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "RisingEdge_digital.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileConnectionCmd_T_RCM_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */ connectionCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* linear::Memory::_L8 */ _L8_1;
  SSM_ST_repeat_SM /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */ repeat_SM_state_nxt;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */ repeat_SM_reset_act;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */ repeat_SM_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ _1_Context_1;
  outC_RisingEdge_digital /* 2 */ Context_2;
  outC_RisingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2 */
extern void requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::eventsPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsPhases,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::p42_sessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_sessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::sessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::registrationStatus */ mobileRegistrationContext_T_RCM_Types_Pkg *registrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connect */ kcg_bool connect,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::disconnect */ kcg_bool disconnect,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::maxTimeToMaintainCommSession */ T_internal_Type_Obu_BasicTypes_Pkg maxTimeToMaintainCommSession,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::noOfRetriesToEstablishASafeRadioConnection */ kcg_int noOfRetriesToEstablishASafeRadioConnection,
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void requestRadioConnectionSetupFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

