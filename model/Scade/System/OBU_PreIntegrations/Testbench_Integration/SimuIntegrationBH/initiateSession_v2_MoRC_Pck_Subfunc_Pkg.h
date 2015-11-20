/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _initiateSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _initiateSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
extern void initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::prevSessionTerminatedDueToLossOfSafeRadioConnection */ kcg_bool prevSessionTerminatedDueToLossOfSafeRadioConnection,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::m38_initiationOfACommunicationSessionMsg */ m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m38_initiationOfACommunicationSessionMsg,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::registrationStatus */ mobileRegistrationContext_T_RCM_Types_Pkg *registrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::lastKnownRBC */ sessionStatus_T_RCM_Session_Types_Pkg *lastKnownRBC,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio_shortNumberStoredOnboard */ NID_RADIO nid_radio_shortNumberStoredOnboard,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionEstablishCmd */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd);

#endif /* _initiateSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** initiateSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

