/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "RisingEdge_digital.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileConnectionCmd_T_RCM_Types_Pkg /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */ connectionCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_repeat_SM /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */ repeat_SM_state_nxt;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::p42_sessionManagement_mem */ p42_sessionManagement_mem;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 1 */ _1_Context_1;
  outC_RisingEdge_digital /* 2 */ Context_2;
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2 */
extern void requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::mode */M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::eventsPhases */obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsPhases,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::p42_sessionManagement */p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_sessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::sessionStatus */sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::registrationStatus */mobileRegistrationContext_T_RCM_Types_Pkg *registrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connect */kcg_bool connect,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::disconnect */kcg_bool disconnect,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::currentTime */T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::reset */kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::maxTimeToMaintainCommSession */T_internal_Type_Obu_BasicTypes_Pkg maxTimeToMaintainCommSession,
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::noOfRetriesToEstablishASafeRadioConnection */kcg_int noOfRetriesToEstablishASafeRadioConnection,
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

