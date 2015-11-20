/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
void initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::mode */M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::prevSessionTerminatedDueToLossOfSafeRadioConnection */kcg_bool prevSessionTerminatedDueToLossOfSafeRadioConnection,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::eventsAndPhases */obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::p42_SessionManagement */p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::m38_initiationOfACommunicationSessionMsg */m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m38_initiationOfACommunicationSessionMsg,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::registrationStatus */mobileRegistrationContext_T_RCM_Types_Pkg *registrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionStatus */sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::lastKnownRBC */sessionStatus_T_RCM_Session_Types_Pkg *lastKnownRBC,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio_shortNumberStoredOnboard */NID_RADIO nid_radio_shortNumberStoredOnboard,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionEstablishCmd */sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd)
{
  static kcg_bool tmp4;
  static kcg_int tmp3;
  static kcg_int tmp2;
  static kcg_int tmp1;
  static RBC_Id_T_Common_Types_Pkg tmp;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::initiateSessionFromOBU */
  static kcg_bool initiateSessionFromOBU;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::initiateSessionFromRBC */
  static kcg_bool initiateSessionFromRBC;
  
  (*sessionEstablishCmd).q_rbc = Q_RBC_Establish_communication_session;
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &(*sessionEstablishCmd).m38,
    m38_initiationOfACommunicationSessionMsg);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &(*sessionEstablishCmd).p42,
    p42_SessionManagement);
  IfBlock1_clock = (*registrationStatus).valid &
    ((*registrationStatus).status == mrs_registered_RCM_Types_Pkg);
  tmp4 = (*sessionStatus).phase != sp_terminated_RCM_Session_Types_Pkg;
  initiateSessionFromOBU =
    (((*eventsAndPhases).startOfMissionProcedureCompleted_in_level_2_or_3 |
        (*eventsAndPhases).atStartOfMission |
        (*eventsAndPhases).modeChangeHasToBeReportedToRBC |
        (*eventsAndPhases).driverHasManuallyChangedLevel_to_2_or_3 |
        (*eventsAndPhases).trainFrontReachesEndOfAnnouncedRadioHole |
        prevSessionTerminatedDueToLossOfSafeRadioConnection) &
      (((*sessionStatus).phase == sp_terminated_RCM_Session_Types_Pkg) &
        (*sessionStatus).valid) & IfBlock1_clock) |
    (((msrc_OBU_Common_Types_Pkg == (*p42_SessionManagement).msgSrc) |
        ((msrc_RadioInfillUnit_Common_Types_Pkg ==
            (*p42_SessionManagement).msgSrc) |
          (msrc_Eurobalise_Common_Types_Pkg ==
            (*p42_SessionManagement).msgSrc) |
          (msrc_Euroradio_Common_Types_Pkg ==
            (*p42_SessionManagement).msgSrc))) &
      (/* validate_q_sleepsession_v2 */
        validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
          p42_SessionManagement,
          mode) & (*p42_SessionManagement).valid &
        ((*p42_SessionManagement).q_rbc ==
          Q_RBC_Establish_communication_session) &
        !(((*p42_SessionManagement).nid_c == (*sessionStatus).nid_c) &
          ((*p42_SessionManagement).nid_RBC == (*sessionStatus).nid_rbc) &
          tmp4) & (*sessionStatus).valid) & IfBlock1_clock);
  (*sessionEstablishCmd).initiatedByOBU = initiateSessionFromOBU;
  IfBlock1_clock = initiateSessionFromOBU & (*p42_SessionManagement).valid;
  initiateSessionFromRBC = !(tmp4 & ((*sessionStatus).nid_c ==
        (*m38_initiationOfACommunicationSessionMsg).origin.nid_c) &
      ((*sessionStatus).nid_rbc ==
        (*m38_initiationOfACommunicationSessionMsg).origin.rbc_id)) &
    (*m38_initiationOfACommunicationSessionMsg).origin.valid &
    (*m38_initiationOfACommunicationSessionMsg).valid;
  (*sessionEstablishCmd).initiatedByRBC = initiateSessionFromRBC;
  if (IfBlock1_clock) {
    _L6_IfBlock1 = c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg ==
      (*p42_SessionManagement).nid_RBC;
    tmp3 = (*p42_SessionManagement).nid_c;
    if (_L6_IfBlock1) {
      tmp4 = (*lastKnownRBC).valid;
      tmp2 = (*lastKnownRBC).nid_rbc;
    }
    else {
      tmp4 = kcg_true;
      tmp2 = (*p42_SessionManagement).nid_RBC;
    }
    if (cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg ==
      (*p42_SessionManagement).nid_radio) {
      tmp1 = nid_radio_shortNumberStoredOnboard;
    }
    else {
      tmp1 = (*p42_SessionManagement).nid_radio;
    }
    kcg_copy_RBC_Id_T_Common_Types_Pkg(&tmp, &(*p42_SessionManagement).origin);
  }
  else if (initiateSessionFromOBU) {
    tmp4 = (*lastKnownRBC).valid;
    tmp3 = (*lastKnownRBC).nid_c;
    tmp2 = (*lastKnownRBC).nid_rbc;
    tmp1 = (*lastKnownRBC).nid_radio;
    kcg_copy_RBC_Id_T_Common_Types_Pkg(
      &tmp,
      (RBC_Id_T_Common_Types_Pkg *) &cNoOrigin_MoRC_Pck_Subfunc_Pkg);
  }
  else {
    else_clock_IfBlock1 = initiateSessionFromRBC &
      (*m38_initiationOfACommunicationSessionMsg).valid;
    if (else_clock_IfBlock1) {
      tmp4 = (*m38_initiationOfACommunicationSessionMsg).origin.valid;
      tmp3 = (*m38_initiationOfACommunicationSessionMsg).origin.nid_c;
      tmp2 = (*m38_initiationOfACommunicationSessionMsg).origin.rbc_id;
      tmp1 = (*connectionStatus).nid_radio;
      kcg_copy_RBC_Id_T_Common_Types_Pkg(
        &tmp,
        &(*m38_initiationOfACommunicationSessionMsg).origin);
    }
    else {
      tmp4 = kcg_false;
      tmp3 = 0;
      tmp2 = 0;
      tmp1 = 0;
      kcg_copy_RBC_Id_T_Common_Types_Pkg(
        &tmp,
        (RBC_Id_T_Common_Types_Pkg *) &cNoOrigin_MoRC_Pck_Subfunc_Pkg);
    }
  }
  (*sessionEstablishCmd).valid = tmp4 & (initiateSessionFromRBC |
      initiateSessionFromOBU);
  (*sessionEstablishCmd).nid_c = tmp3;
  (*sessionEstablishCmd).nid_rbc = tmp2;
  (*sessionEstablishCmd).nid_radio = tmp1;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&(*sessionEstablishCmd).origin, &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** initiateSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

