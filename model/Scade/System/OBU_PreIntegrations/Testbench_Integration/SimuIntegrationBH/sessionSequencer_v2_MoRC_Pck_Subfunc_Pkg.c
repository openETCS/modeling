/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sessionSequencer_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_sessionEstablishCmd.valid = kcg_true;
  outC->rem_sessionEstablishCmd.initiatedByOBU = kcg_true;
  outC->rem_sessionEstablishCmd.initiatedByRBC = kcg_true;
  outC->rem_sessionEstablishCmd.q_rbc = Q_RBC_Terminate_communication_session;
  outC->rem_sessionEstablishCmd.nid_c = 0;
  outC->rem_sessionEstablishCmd.nid_rbc = 0;
  outC->rem_sessionEstablishCmd.nid_radio = 0;
  outC->rem_sessionEstablishCmd.origin.valid = kcg_true;
  outC->rem_sessionEstablishCmd.origin.nid_c = 0;
  outC->rem_sessionEstablishCmd.origin.rbc_id = 0;
  outC->rem_sessionEstablishCmd.origin.device_id = 0;
  outC->rem_sessionEstablishCmd.m38.valid = kcg_true;
  outC->rem_sessionEstablishCmd.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->rem_sessionEstablishCmd.m38.origin.valid = kcg_true;
  outC->rem_sessionEstablishCmd.m38.origin.nid_c = 0;
  outC->rem_sessionEstablishCmd.m38.origin.rbc_id = 0;
  outC->rem_sessionEstablishCmd.m38.origin.device_id = 0;
  outC->rem_sessionEstablishCmd.p42.valid = kcg_true;
  outC->rem_sessionEstablishCmd.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->rem_sessionEstablishCmd.p42.q_dir = Q_DIR_Reverse;
  outC->rem_sessionEstablishCmd.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->rem_sessionEstablishCmd.p42.nid_c = 0;
  outC->rem_sessionEstablishCmd.p42.nid_RBC = 0;
  outC->rem_sessionEstablishCmd.p42.nid_radio = 0;
  outC->rem_sessionEstablishCmd.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->rem_sessionEstablishCmd.p42.origin.valid = kcg_true;
  outC->rem_sessionEstablishCmd.p42.origin.nid_c = 0;
  outC->rem_sessionEstablishCmd.p42.origin.rbc_id = 0;
  outC->rem_sessionEstablishCmd.p42.origin.device_id = 0;
  outC->initializeSession = kcg_true;
  outC->sessionStatus_l.valid = kcg_true;
  outC->sessionStatus_l.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus_l.nid_c = 0;
  outC->sessionStatus_l.nid_rbc = 0;
  outC->sessionStatus_l.nid_radio = 0;
  outC->Session_SM_reset_nxt = kcg_true;
  outC->Session_SM_reset_act = kcg_true;
  outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
  outC->notReady = kcg_true;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
  outC->requestReleaseOfSafeRadioConnection = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->requestSafeRadioConnectionSetup = kcg_true;
  outC->send_m154_noCompatibleVersionSupported = kcg_true;
  outC->send_m159_sessionEstablishedReport = kcg_true;
  outC->send_m156_TerminationOfCommunicationSession = kcg_true;
  outC->send_m155_initiationOfACommunicationSession = kcg_true;
  outC->p42_SessionManagement_out.valid = kcg_true;
  outC->p42_SessionManagement_out.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_SessionManagement_out.q_dir = Q_DIR_Reverse;
  outC->p42_SessionManagement_out.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_SessionManagement_out.nid_c = 0;
  outC->p42_SessionManagement_out.nid_RBC = 0;
  outC->p42_SessionManagement_out.nid_radio = 0;
  outC->p42_SessionManagement_out.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_SessionManagement_out.origin.valid = kcg_true;
  outC->p42_SessionManagement_out.origin.nid_c = 0;
  outC->p42_SessionManagement_out.origin.rbc_id = 0;
  outC->p42_SessionManagement_out.origin.device_id = 0;
  /* 1 */ maintainingSession_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->_2_Context_1);
  /* 1 */ terminateSession_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */ establishSession_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_2_Context_1);
  /* 1 */ terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */ establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
void sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionEstablishCmd */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_in */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement_in,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m39_AckOfTerminationOfACommunicationSession */ m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m32_SystemVersion */ m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initiateTermination */ kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::noOfRetriesOfSendingTerminationMessage */ kcg_int noOfRetriesOfSendingTerminationMessage,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::maxWaitingTimeForAckMessageReceived */ T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_TR_Session_SM _51_Session_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static kcg_bool _50_Session_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_ST_Session_SM _49_Session_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminated */
  static kcg_bool _48_terminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::established */
  static kcg_bool _47_established;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminateSession */
  static kcg_bool _46_terminateSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initializeSession */
  static kcg_bool _45_initializeSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus_l */
  static sessionStatus_T_RCM_Session_Types_Pkg _44_sessionStatus_l;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus */
  static sessionStatus_T_RCM_Session_Types_Pkg _43_sessionStatus;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestReleaseOfSafeRadioConnection */
  static kcg_bool _42_requestReleaseOfSafeRadioConnection;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::infomDriverNoCompatibleVersionSupported */
  static kcg_bool _41_infomDriverNoCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestSafeRadioConnectionSetup */
  static kcg_bool _40_requestSafeRadioConnectionSetup;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m154_noCompatibleVersionSupported */
  static kcg_bool _39_send_m154_noCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m159_sessionEstablishedReport */
  static kcg_bool _38_send_m159_sessionEstablishedReport;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m156_TerminationOfCommunicationSession */
  static kcg_bool _37_send_m156_TerminationOfCommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m155_initiationOfACommunicationSession */
  static kcg_bool _36_send_m155_initiationOfACommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_out */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _35_p42_SessionManagement_out;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated */
  static kcg_bool br_1_guard_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L35 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L35_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L34 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L34_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L32 */
  static NID_RADIO _L32_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L31 */
  static NID_RBC _L31_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L30 */
  static NID_C _L30_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L29 */
  static kcg_bool _L29_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L8 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L8_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L7 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L7_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L6 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L6_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L5 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L5_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated::_L3 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L3_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::sessionTerminated */
  static kcg_bool br_1_clock_Session_SM_sessionTerminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_TR_Session_SM _34_Session_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static kcg_bool _33_Session_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_ST_Session_SM _32_Session_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminated */
  static kcg_bool _31_terminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::established */
  static kcg_bool _30_established;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminateSession */
  static kcg_bool _29_terminateSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initializeSession */
  static kcg_bool _28_initializeSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus_l */
  static sessionStatus_T_RCM_Session_Types_Pkg _27_sessionStatus_l;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus */
  static sessionStatus_T_RCM_Session_Types_Pkg _26_sessionStatus;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestReleaseOfSafeRadioConnection */
  static kcg_bool _25_requestReleaseOfSafeRadioConnection;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::infomDriverNoCompatibleVersionSupported */
  static kcg_bool _24_infomDriverNoCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestSafeRadioConnectionSetup */
  static kcg_bool _23_requestSafeRadioConnectionSetup;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m154_noCompatibleVersionSupported */
  static kcg_bool _22_send_m154_noCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m159_sessionEstablishedReport */
  static kcg_bool _21_send_m159_sessionEstablishedReport;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m156_TerminationOfCommunicationSession */
  static kcg_bool _20_send_m156_TerminationOfCommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m155_initiationOfACommunicationSession */
  static kcg_bool _19_send_m155_initiationOfACommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_out */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _18_p42_SessionManagement_out;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession */
  static kcg_bool br_2_guard_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession */
  static kcg_bool br_1_guard_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L18 */
  static kcg_bool _L18_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L17 */
  static kcg_bool _L17_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L16 */
  static kcg_bool _L16_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L15 */
  static kcg_bool _L15_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L14 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L14_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L13 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L13_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L12 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L12_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L11 */
  static kcg_bool _L11_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L10 */
  static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg _L10_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L9 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L9_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L1 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L1_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L2 */
  static kcg_bool _L2_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L3 */
  static kcg_bool _L3_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L4 */
  static kcg_bool _L4_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L5 */
  static kcg_bool _L5_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L6 */
  static kcg_bool _L6_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L7 */
  static kcg_bool _L7_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L8 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L8_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession */
  static kcg_bool br_1_clock_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession */
  static kcg_bool br_2_clock_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_TR_Session_SM _17_Session_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static kcg_bool _16_Session_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_ST_Session_SM _15_Session_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminated */
  static kcg_bool _14_terminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::established */
  static kcg_bool _13_established;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminateSession */
  static kcg_bool _12_terminateSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initializeSession */
  static kcg_bool _11_initializeSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus_l */
  static sessionStatus_T_RCM_Session_Types_Pkg _10_sessionStatus_l;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus */
  static sessionStatus_T_RCM_Session_Types_Pkg _9_sessionStatus;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestReleaseOfSafeRadioConnection */
  static kcg_bool _8_requestReleaseOfSafeRadioConnection;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::infomDriverNoCompatibleVersionSupported */
  static kcg_bool _7_infomDriverNoCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestSafeRadioConnectionSetup */
  static kcg_bool _6_requestSafeRadioConnectionSetup;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m154_noCompatibleVersionSupported */
  static kcg_bool _5_send_m154_noCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m159_sessionEstablishedReport */
  static kcg_bool _4_send_m159_sessionEstablishedReport;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m156_TerminationOfCommunicationSession */
  static kcg_bool _3_send_m156_TerminationOfCommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m155_initiationOfACommunicationSession */
  static kcg_bool _2_send_m155_initiationOfACommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_out */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _1_p42_SessionManagement_out;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::maintainingSession */
  static kcg_bool br_1_guard_Session_SM_maintainingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::maintainingSession::_L3 */
  static kcg_bool _L3_Session_SM_maintainingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::maintainingSession::_L2 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L2_Session_SM_maintainingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::maintainingSession::_L1 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L1_Session_SM_maintainingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::maintainingSession */
  static kcg_bool br_1_clock_Session_SM_maintainingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_TR_Session_SM Session_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static kcg_bool Session_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_ST_Session_SM Session_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminated */
  static kcg_bool terminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::established */
  static kcg_bool established;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminateSession */
  static kcg_bool terminateSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initializeSession */
  static kcg_bool initializeSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus_l */
  static sessionStatus_T_RCM_Session_Types_Pkg sessionStatus_l;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus */
  static sessionStatus_T_RCM_Session_Types_Pkg sessionStatus;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestReleaseOfSafeRadioConnection */
  static kcg_bool requestReleaseOfSafeRadioConnection;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::infomDriverNoCompatibleVersionSupported */
  static kcg_bool infomDriverNoCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::requestSafeRadioConnectionSetup */
  static kcg_bool requestSafeRadioConnectionSetup;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m154_noCompatibleVersionSupported */
  static kcg_bool send_m154_noCompatibleVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m159_sessionEstablishedReport */
  static kcg_bool send_m159_sessionEstablishedReport;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m156_TerminationOfCommunicationSession */
  static kcg_bool send_m156_TerminationOfCommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::send_m155_initiationOfACommunicationSession */
  static kcg_bool send_m155_initiationOfACommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_out */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg p42_SessionManagement_out;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession */
  static kcg_bool br_1_guard_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L12 */
  static kcg_bool _L12_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L11 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L11_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L10 */
  static kcg_int _L10_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L9 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L9_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L8 */
  static m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L8_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L7 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L7_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L6 */
  static kcg_bool _L6_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L5 */
  static kcg_bool _L5_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L1 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L1_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L2 */
  static kcg_bool _L2_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L3 */
  static kcg_bool _L3_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession::_L4 */
  static kcg_bool _L4_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::terminatingSession */
  static kcg_bool br_1_clock_Session_SM_terminatingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initializeSession */
  static kcg_bool last_initializeSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus_l */
  static sessionStatus_T_RCM_Session_Types_Pkg last_sessionStatus_l;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sNotReady */
  static kcg_bool sNotReady;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionEstablishCmd */
  static sessionCmd_T_RCM_Session_Types_Pkg last_sessionEstablishCmd;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_ST_Session_SM Session_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_ST_Session_SM Session_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static kcg_bool Session_SM_reset_sel;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static kcg_bool Session_SM_reset_prv;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_TR_Session_SM Session_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_TR_Session_SM _52_Session_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminateSession */
  static kcg_bool _55_terminateSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::established */
  static kcg_bool _54_established;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::terminated */
  static kcg_bool _53_terminated;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::_L1 */
  static kcg_bool _L1;
  
  /* init_Session_SM */ if (outC->init) {
    Session_SM_state_sel = SSM_st_sessionTerminated_Session_SM;
  }
  else {
    Session_SM_state_sel = outC->Session_SM_state_nxt;
  }
  Session_SM_state_act = Session_SM_state_sel;
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_sessionTerminated_Session_SM :
      kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
        &_L7_Session_SM_sessionTerminated,
        sessionEstablishCmd);
      _L29_Session_SM_sessionTerminated =
        _L7_Session_SM_sessionTerminated.valid;
      _45_initializeSession = _L29_Session_SM_sessionTerminated;
      br_1_guard_Session_SM_sessionTerminated = _45_initializeSession;
      br_1_clock_Session_SM_sessionTerminated =
        br_1_guard_Session_SM_sessionTerminated;
      break;
    
  }
  /* last_init_ck_sessionEstablishCmd */ if (outC->init) {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &last_sessionEstablishCmd,
      (sessionCmd_T_RCM_Session_Types_Pkg *)
        &cNoSessionCmd_RCM_Session_Types_Pkg);
  }
  else {
    kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
      &last_sessionEstablishCmd,
      &outC->rem_sessionEstablishCmd);
  }
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_establishingSession_Session_SM :
      kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
        &_L9_Session_SM_establishingSession,
        &last_sessionEstablishCmd);
      kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
        &_L10_Session_SM_establishingSession,
        m32_SystemVersion);
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &_L12_Session_SM_establishingSession,
        connectionStatus);
      _L11_Session_SM_establishingSession = reset;
      break;
    
  }
  /* init_Session_SM */ if (outC->init) {
    Session_SM_reset_sel = kcg_false;
  }
  else {
    Session_SM_reset_sel = outC->Session_SM_reset_nxt;
  }
  /* sel_Session_SM */ switch (Session_SM_state_sel) {
    case SSM_st_establishingSession_Session_SM :
      if (Session_SM_reset_sel) {
        /* 1 */
        establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
      }
      break;
    
  }
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_establishingSession_Session_SM :
      /* 1 */
      establishSession_v2_MoRC_Pck_Subfunc_Pkg(
        &_L9_Session_SM_establishingSession,
        &_L10_Session_SM_establishingSession,
        &_L12_Session_SM_establishingSession,
        _L11_Session_SM_establishingSession,
        &outC->Context_1);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_L1_Session_SM_establishingSession,
        &outC->Context_1.p42_establishSessionCmd);
      _L2_Session_SM_establishingSession =
        outC->Context_1.send_m155_initiationOfACommunicationSession;
      _L3_Session_SM_establishingSession =
        outC->Context_1.send_m159_sessionEstablishedReport;
      _L4_Session_SM_establishingSession =
        outC->Context_1.send_m154_noCompatibleVersionSupported;
      _L5_Session_SM_establishingSession =
        outC->Context_1.requestSafeRadioConnectionSetup;
      _L6_Session_SM_establishingSession =
        outC->Context_1.terminateCommunicationSession;
      _L7_Session_SM_establishingSession =
        outC->Context_1.infomDriverNoCompatibleVersionSupported;
      _L16_Session_SM_establishingSession = outC->Context_1.established;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L8_Session_SM_establishingSession,
        &outC->Context_1.sessionStatus);
      _L18_Session_SM_establishingSession = initiateTermination;
      _L17_Session_SM_establishingSession = _L6_Session_SM_establishingSession |
        _L18_Session_SM_establishingSession;
      _29_terminateSession = _L17_Session_SM_establishingSession;
      br_1_guard_Session_SM_establishingSession = _29_terminateSession;
      br_1_clock_Session_SM_establishingSession =
        br_1_guard_Session_SM_establishingSession;
      _30_established = _L16_Session_SM_establishingSession;
      br_2_guard_Session_SM_establishingSession = _30_established;
      /* cb_anon_sm */ if (br_1_clock_Session_SM_establishingSession) {
      }
      else {
        br_2_clock_Session_SM_establishingSession =
          br_2_guard_Session_SM_establishingSession;
      }
      break;
    case SSM_st_maintainingSession_Session_SM :
      _L3_Session_SM_maintainingSession = initiateTermination;
      _12_terminateSession = _L3_Session_SM_maintainingSession;
      br_1_guard_Session_SM_maintainingSession = _12_terminateSession;
      br_1_clock_Session_SM_maintainingSession =
        br_1_guard_Session_SM_maintainingSession;
      break;
    case SSM_st_terminatingSession_Session_SM :
      _L6_Session_SM_terminatingSession = kcg_true;
      kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
        &_L8_Session_SM_terminatingSession,
        m39_AckOfTerminationOfACommunicationSession);
      _L7_Session_SM_terminatingSession = currentTime;
      break;
    
  }
  /* last_init_ck_sessionStatus_l */ if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &last_sessionStatus_l,
      (sessionStatus_T_RCM_Session_Types_Pkg *)
        &cInitialSessionStatus_RCM_Session_Types_Pkg);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &last_sessionStatus_l,
      &outC->sessionStatus_l);
  }
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_terminatingSession_Session_SM :
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L9_Session_SM_terminatingSession,
        &last_sessionStatus_l);
      _L5_Session_SM_terminatingSession = reset;
      _L10_Session_SM_terminatingSession =
        noOfRetriesOfSendingTerminationMessage;
      _L11_Session_SM_terminatingSession = maxWaitingTimeForAckMessageReceived;
      break;
    
  }
  /* sel_Session_SM */ switch (Session_SM_state_sel) {
    case SSM_st_terminatingSession_Session_SM :
      if (Session_SM_reset_sel) {
        /* 1 */
        terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
      }
      break;
    
  }
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_sessionTerminated_Session_SM :
      /* cb_anon_sm */ if (br_1_clock_Session_SM_sessionTerminated) {
        sNotReady = kcg_true;
      }
      else {
        sNotReady = kcg_false;
      }
      break;
    case SSM_st_establishingSession_Session_SM :
      /* cb_anon_sm */ if (br_1_clock_Session_SM_establishingSession) {
        sNotReady = kcg_true;
      }
      else /* cb_anon_sm */ if (br_2_clock_Session_SM_establishingSession) {
        sNotReady = kcg_true;
      }
      else {
        sNotReady = kcg_false;
      }
      break;
    case SSM_st_maintainingSession_Session_SM :
      /* cb_anon_sm */ if (br_1_clock_Session_SM_maintainingSession) {
        sNotReady = kcg_true;
      }
      else {
        sNotReady = kcg_false;
      }
      break;
    case SSM_st_terminatingSession_Session_SM :
      /* 1 */
      terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
        _L6_Session_SM_terminatingSession,
        &_L8_Session_SM_terminatingSession,
        _L7_Session_SM_terminatingSession,
        &_L9_Session_SM_terminatingSession,
        _L5_Session_SM_terminatingSession,
        _L10_Session_SM_terminatingSession,
        _L11_Session_SM_terminatingSession,
        &outC->_1_Context_1);
      _L2_Session_SM_terminatingSession =
        outC->_1_Context_1.send_m156_TerminationOfCommunicationSession;
      _L3_Session_SM_terminatingSession =
        outC->_1_Context_1.requestReleaseOfSafeRadioConnection;
      _L4_Session_SM_terminatingSession = outC->_1_Context_1.terminated;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L1_Session_SM_terminatingSession,
        &outC->_1_Context_1.sessionStatus);
      _L12_Session_SM_terminatingSession = outC->_1_Context_1.notReady;
      terminated = _L4_Session_SM_terminatingSession;
      br_1_guard_Session_SM_terminatingSession = terminated;
      br_1_clock_Session_SM_terminatingSession =
        br_1_guard_Session_SM_terminatingSession;
      /* cb_anon_sm */ if (br_1_clock_Session_SM_terminatingSession) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      sNotReady = _L12_Session_SM_terminatingSession | tmp;
      break;
    
  }
  /* init_Session_SM */ if (outC->init) {
    Session_SM_reset_prv = kcg_false;
  }
  else {
    Session_SM_reset_prv = outC->Session_SM_reset_act;
  }
  outC->Session_SM_reset_act = kcg_false;
  Session_SM_fired_strong = SSM_TR_no_trans_Session_SM;
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_sessionTerminated_Session_SM :
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_35_p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        &_35_p42_SessionManagement_out);
      _36_send_m155_initiationOfACommunicationSession = kcg_false;
      outC->send_m155_initiationOfACommunicationSession =
        _36_send_m155_initiationOfACommunicationSession;
      _37_send_m156_TerminationOfCommunicationSession = kcg_false;
      outC->send_m156_TerminationOfCommunicationSession =
        _37_send_m156_TerminationOfCommunicationSession;
      _38_send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m159_sessionEstablishedReport =
        _38_send_m159_sessionEstablishedReport;
      _39_send_m154_noCompatibleVersionSupported = kcg_false;
      outC->send_m154_noCompatibleVersionSupported =
        _39_send_m154_noCompatibleVersionSupported;
      _40_requestSafeRadioConnectionSetup = kcg_false;
      outC->requestSafeRadioConnectionSetup =
        _40_requestSafeRadioConnectionSetup;
      _41_infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported =
        _41_infomDriverNoCompatibleVersionSupported;
      _42_requestReleaseOfSafeRadioConnection = kcg_false;
      outC->requestReleaseOfSafeRadioConnection =
        _42_requestReleaseOfSafeRadioConnection;
      break;
    case SSM_st_establishingSession_Session_SM :
      _L15_Session_SM_establishingSession =
        _L1_Session_SM_establishingSession.valid;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_L13_Session_SM_establishingSession,
        p42_SessionManagement_in);
      /* 2 */ if (_L15_Session_SM_establishingSession) {
        kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
          &_L14_Session_SM_establishingSession,
          &_L1_Session_SM_establishingSession);
      }
      else {
        kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
          &_L14_Session_SM_establishingSession,
          &_L13_Session_SM_establishingSession);
      }
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_18_p42_SessionManagement_out,
        &_L14_Session_SM_establishingSession);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        &_18_p42_SessionManagement_out);
      _19_send_m155_initiationOfACommunicationSession =
        _L2_Session_SM_establishingSession;
      outC->send_m155_initiationOfACommunicationSession =
        _19_send_m155_initiationOfACommunicationSession;
      _20_send_m156_TerminationOfCommunicationSession = kcg_false;
      outC->send_m156_TerminationOfCommunicationSession =
        _20_send_m156_TerminationOfCommunicationSession;
      _21_send_m159_sessionEstablishedReport =
        _L3_Session_SM_establishingSession;
      outC->send_m159_sessionEstablishedReport =
        _21_send_m159_sessionEstablishedReport;
      _22_send_m154_noCompatibleVersionSupported =
        _L4_Session_SM_establishingSession;
      outC->send_m154_noCompatibleVersionSupported =
        _22_send_m154_noCompatibleVersionSupported;
      _23_requestSafeRadioConnectionSetup = _L5_Session_SM_establishingSession;
      outC->requestSafeRadioConnectionSetup =
        _23_requestSafeRadioConnectionSetup;
      _24_infomDriverNoCompatibleVersionSupported =
        _L7_Session_SM_establishingSession;
      outC->infomDriverNoCompatibleVersionSupported =
        _24_infomDriverNoCompatibleVersionSupported;
      _25_requestReleaseOfSafeRadioConnection = kcg_false;
      outC->requestReleaseOfSafeRadioConnection =
        _25_requestReleaseOfSafeRadioConnection;
      break;
    case SSM_st_maintainingSession_Session_SM :
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_1_p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        &_1_p42_SessionManagement_out);
      _2_send_m155_initiationOfACommunicationSession = kcg_false;
      outC->send_m155_initiationOfACommunicationSession =
        _2_send_m155_initiationOfACommunicationSession;
      _3_send_m156_TerminationOfCommunicationSession = kcg_false;
      outC->send_m156_TerminationOfCommunicationSession =
        _3_send_m156_TerminationOfCommunicationSession;
      _4_send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m159_sessionEstablishedReport =
        _4_send_m159_sessionEstablishedReport;
      _5_send_m154_noCompatibleVersionSupported = kcg_false;
      outC->send_m154_noCompatibleVersionSupported =
        _5_send_m154_noCompatibleVersionSupported;
      _6_requestSafeRadioConnectionSetup = kcg_false;
      outC->requestSafeRadioConnectionSetup =
        _6_requestSafeRadioConnectionSetup;
      _7_infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported =
        _7_infomDriverNoCompatibleVersionSupported;
      _8_requestReleaseOfSafeRadioConnection = kcg_false;
      outC->requestReleaseOfSafeRadioConnection =
        _8_requestReleaseOfSafeRadioConnection;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L2_Session_SM_maintainingSession,
        &last_sessionStatus_l);
      break;
    case SSM_st_terminatingSession_Session_SM :
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        &p42_SessionManagement_out);
      send_m155_initiationOfACommunicationSession = kcg_false;
      outC->send_m155_initiationOfACommunicationSession =
        send_m155_initiationOfACommunicationSession;
      send_m156_TerminationOfCommunicationSession =
        _L2_Session_SM_terminatingSession;
      outC->send_m156_TerminationOfCommunicationSession =
        send_m156_TerminationOfCommunicationSession;
      send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m159_sessionEstablishedReport =
        send_m159_sessionEstablishedReport;
      send_m154_noCompatibleVersionSupported = kcg_false;
      outC->send_m154_noCompatibleVersionSupported =
        send_m154_noCompatibleVersionSupported;
      requestSafeRadioConnectionSetup = kcg_false;
      outC->requestSafeRadioConnectionSetup = requestSafeRadioConnectionSetup;
      infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported =
        infomDriverNoCompatibleVersionSupported;
      requestReleaseOfSafeRadioConnection = _L3_Session_SM_terminatingSession;
      outC->requestReleaseOfSafeRadioConnection =
        requestReleaseOfSafeRadioConnection;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &sessionStatus,
        &_L1_Session_SM_terminatingSession);
      break;
    
  }
  /* sel_Session_SM */ switch (Session_SM_state_sel) {
    case SSM_st_maintainingSession_Session_SM :
      if (Session_SM_reset_sel) {
        /* 1 */
        maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_2_Context_1);
      }
      break;
    
  }
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_sessionTerminated_Session_SM :
      _L34_Session_SM_sessionTerminated = sp_terminated_RCM_Session_Types_Pkg;
      _L30_Session_SM_sessionTerminated =
        _L7_Session_SM_sessionTerminated.nid_c;
      _L31_Session_SM_sessionTerminated =
        _L7_Session_SM_sessionTerminated.nid_rbc;
      _L32_Session_SM_sessionTerminated =
        _L7_Session_SM_sessionTerminated.nid_radio;
      _L8_Session_SM_sessionTerminated.valid =
        _L29_Session_SM_sessionTerminated;
      _L8_Session_SM_sessionTerminated.phase =
        _L34_Session_SM_sessionTerminated;
      _L8_Session_SM_sessionTerminated.nid_c =
        _L30_Session_SM_sessionTerminated;
      _L8_Session_SM_sessionTerminated.nid_rbc =
        _L31_Session_SM_sessionTerminated;
      _L8_Session_SM_sessionTerminated.nid_radio =
        _L32_Session_SM_sessionTerminated;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L3_Session_SM_sessionTerminated,
        &last_sessionStatus_l);
      _L6_Session_SM_sessionTerminated = sp_terminated_RCM_Session_Types_Pkg;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L5_Session_SM_sessionTerminated,
        &_L3_Session_SM_sessionTerminated);
      if (kcg_true) {
        _L5_Session_SM_sessionTerminated.phase =
          _L6_Session_SM_sessionTerminated;
      }
      /* 1 */ if (_L29_Session_SM_sessionTerminated) {
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L35_Session_SM_sessionTerminated,
          &_L8_Session_SM_sessionTerminated);
      }
      else {
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &_L35_Session_SM_sessionTerminated,
          &_L5_Session_SM_sessionTerminated);
      }
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_43_sessionStatus,
        &_L35_Session_SM_sessionTerminated);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_43_sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_44_sessionStatus_l,
        &_L35_Session_SM_sessionTerminated);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &_44_sessionStatus_l);
      break;
    case SSM_st_establishingSession_Session_SM :
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_26_sessionStatus,
        &_L8_Session_SM_establishingSession);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_26_sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_27_sessionStatus_l,
        &last_sessionStatus_l);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &_27_sessionStatus_l);
      break;
    case SSM_st_maintainingSession_Session_SM :
      /* 1 */
      maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
        &_L2_Session_SM_maintainingSession,
        &outC->_2_Context_1);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L1_Session_SM_maintainingSession,
        &outC->_2_Context_1.sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_9_sessionStatus,
        &_L1_Session_SM_maintainingSession);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &_9_sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_10_sessionStatus_l,
        &_L1_Session_SM_maintainingSession);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &_10_sessionStatus_l);
      break;
    case SSM_st_terminatingSession_Session_SM :
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &sessionStatus_l,
        &_L1_Session_SM_terminatingSession);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &sessionStatus_l);
      break;
    
  }
  last_initializeSession = outC->initializeSession;
  /* act_Session_SM */ switch (Session_SM_state_act) {
    case SSM_st_sessionTerminated_Session_SM :
      outC->initializeSession = _45_initializeSession;
      _46_terminateSession = kcg_false;
      _55_terminateSession = _46_terminateSession;
      _47_established = kcg_false;
      _54_established = _47_established;
      _48_terminated = kcg_false;
      _53_terminated = _48_terminated;
      if (br_1_guard_Session_SM_sessionTerminated) {
        _49_Session_SM_state_nxt = SSM_st_establishingSession_Session_SM;
      }
      else {
        _49_Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
      }
      outC->Session_SM_state_nxt = _49_Session_SM_state_nxt;
      _50_Session_SM_reset_nxt = br_1_guard_Session_SM_sessionTerminated;
      outC->Session_SM_reset_nxt = _50_Session_SM_reset_nxt;
      if (br_1_guard_Session_SM_sessionTerminated) {
        _51_Session_SM_fired = SSM_TR_sessionTerminated_1_Session_SM;
      }
      else {
        _51_Session_SM_fired = SSM_TR_no_trans_Session_SM;
      }
      _52_Session_SM_fired = _51_Session_SM_fired;
      break;
    case SSM_st_establishingSession_Session_SM :
      _28_initializeSession = last_initializeSession;
      outC->initializeSession = _28_initializeSession;
      _55_terminateSession = _29_terminateSession;
      _54_established = _30_established;
      _31_terminated = kcg_false;
      _53_terminated = _31_terminated;
      if (br_1_guard_Session_SM_establishingSession) {
        _32_Session_SM_state_nxt = SSM_st_terminatingSession_Session_SM;
      }
      else if (br_2_guard_Session_SM_establishingSession) {
        _32_Session_SM_state_nxt = SSM_st_maintainingSession_Session_SM;
      }
      else {
        _32_Session_SM_state_nxt = SSM_st_establishingSession_Session_SM;
      }
      outC->Session_SM_state_nxt = _32_Session_SM_state_nxt;
      if (br_1_guard_Session_SM_establishingSession) {
        _33_Session_SM_reset_nxt = kcg_true;
      }
      else {
        _33_Session_SM_reset_nxt = br_2_guard_Session_SM_establishingSession;
      }
      outC->Session_SM_reset_nxt = _33_Session_SM_reset_nxt;
      if (br_1_guard_Session_SM_establishingSession) {
        _34_Session_SM_fired = SSM_TR_establishingSession_1_Session_SM;
      }
      else if (br_2_guard_Session_SM_establishingSession) {
        _34_Session_SM_fired = SSM_TR_establishingSession_2_Session_SM;
      }
      else {
        _34_Session_SM_fired = SSM_TR_no_trans_Session_SM;
      }
      _52_Session_SM_fired = _34_Session_SM_fired;
      break;
    case SSM_st_maintainingSession_Session_SM :
      _11_initializeSession = last_initializeSession;
      outC->initializeSession = _11_initializeSession;
      _55_terminateSession = _12_terminateSession;
      _13_established = kcg_false;
      _54_established = _13_established;
      _14_terminated = kcg_false;
      _53_terminated = _14_terminated;
      if (br_1_guard_Session_SM_maintainingSession) {
        _15_Session_SM_state_nxt = SSM_st_terminatingSession_Session_SM;
      }
      else {
        _15_Session_SM_state_nxt = SSM_st_maintainingSession_Session_SM;
      }
      outC->Session_SM_state_nxt = _15_Session_SM_state_nxt;
      _16_Session_SM_reset_nxt = br_1_guard_Session_SM_maintainingSession;
      outC->Session_SM_reset_nxt = _16_Session_SM_reset_nxt;
      if (br_1_guard_Session_SM_maintainingSession) {
        _17_Session_SM_fired = SSM_TR_maintainingSession_1_Session_SM;
      }
      else {
        _17_Session_SM_fired = SSM_TR_no_trans_Session_SM;
      }
      _52_Session_SM_fired = _17_Session_SM_fired;
      break;
    case SSM_st_terminatingSession_Session_SM :
      initializeSession = last_initializeSession;
      outC->initializeSession = initializeSession;
      terminateSession = kcg_false;
      _55_terminateSession = terminateSession;
      established = kcg_false;
      _54_established = established;
      _53_terminated = terminated;
      if (br_1_guard_Session_SM_terminatingSession) {
        Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
      }
      else {
        Session_SM_state_nxt = SSM_st_terminatingSession_Session_SM;
      }
      outC->Session_SM_state_nxt = Session_SM_state_nxt;
      Session_SM_reset_nxt = br_1_guard_Session_SM_terminatingSession;
      outC->Session_SM_reset_nxt = Session_SM_reset_nxt;
      if (br_1_guard_Session_SM_terminatingSession) {
        Session_SM_fired = SSM_TR_terminatingSession_1_Session_SM;
      }
      else {
        Session_SM_fired = SSM_TR_no_trans_Session_SM;
      }
      _52_Session_SM_fired = Session_SM_fired;
      break;
    
  }
  _L1 = sNotReady;
  outC->notReady = _L1;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->rem_sessionEstablishCmd,
    sessionEstablishCmd);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

