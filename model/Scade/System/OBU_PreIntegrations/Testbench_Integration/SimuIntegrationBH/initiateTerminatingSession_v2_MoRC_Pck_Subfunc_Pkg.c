/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void initiateTerminatingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->TrainExitedFromRBCArea_SM_reset_nxt = kcg_true;
  outC->TrainExitedFromRBCArea_SM_reset_act = kcg_true;
  outC->TrainExitedFromRBCArea_SM_state_nxt =
    SSM_st_Idle_TrainExitedFromRBCArea_SM;
  outC->sendAPositionReport = kcg_true;
  outC->initiateTermination = kcg_true;
  /* 1 */ waitAndRepeatTimer_init_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2 */
void initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::maxWaitingTimeUntilTerminationOrderReceived */ T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeUntilTerminationOrderReceived,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::noOfRetriesUntilTerminationOrderIsReceived */ kcg_int noOfRetriesUntilTerminationOrderIsReceived,
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM _4_TrainExitedFromRBCArea_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool _3_TrainExitedFromRBCArea_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM _2_TrainExitedFromRBCArea_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::definedNumberOfRepetitionsHasBeenReached */
  static kcg_bool _1_definedNumberOfRepetitionsHasBeenReached;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::definedNumberOfRepetitionsHasBeenReached */
  static kcg_bool definedNumberOfRepetitionsHasBeenReached;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession::_L30 */
  static kcg_int _L30_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession::_L29 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L29_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession::_L28 */
  static kcg_bool _L28_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession::_L27 */
  static time_Type_MoRC_Pck _L27_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession::_L25 */
  static kcg_bool _L25_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession::_L26 */
  static kcg_bool _L26_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */
  static kcg_bool WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */
  static kcg_bool br_2_clock_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */
  static kcg_bool br_2_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM _5_TrainExitedFromRBCArea_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool _6_TrainExitedFromRBCArea_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM _7_TrainExitedFromRBCArea_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM _8_TrainExitedFromRBCArea_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool _9_TrainExitedFromRBCArea_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM _10_TrainExitedFromRBCArea_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM _13_TrainExitedFromRBCArea_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool _12_TrainExitedFromRBCArea_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM _11_TrainExitedFromRBCArea_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::Idle */
  static kcg_bool br_2_guard_TrainExitedFromRBCArea_SM_Idle;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::Idle */
  static kcg_bool br_1_guard_TrainExitedFromRBCArea_SM_Idle;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */
  static kcg_bool br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  static kcg_bool noname;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sSendAPositionReport */
  static kcg_bool sSendAPositionReport;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sTerminateTheCommunicationSession */
  static kcg_bool sTerminateTheCommunicationSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM _16_TrainExitedFromRBCArea_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_sel;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_prv;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM _15_TrainExitedFromRBCArea_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_TR_TrainExitedFromRBCArea_SM _14_TrainExitedFromRBCArea_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::orderToTerminateTheSessionIsReceived */
  static kcg_bool orderToTerminateTheSessionIsReceived;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::noReplyReceivedAfterLastRepetition */
  static kcg_bool noReplyReceivedAfterLastRepetition;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::definedNumberOfRepetitionsHasBeenReached */
  static kcg_bool _17_definedNumberOfRepetitionsHasBeenReached;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::trainExitedFromAnRBCArea_l */
  static kcg_bool trainExitedFromAnRBCArea_l;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L16 */
  static kcg_bool _L16;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L34 */
  static kcg_bool _L34;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L35 */
  static kcg_bool _L35;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L36 */
  static kcg_bool _L36;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L40 */
  static kcg_bool _L40;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L41 */
  static kcg_bool _L41;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L42 */
  static kcg_bool _L42;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L49 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L49;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L50 */
  static kcg_bool _L50;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L51 */
  static kcg_bool _L51;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L52 */
  static kcg_bool _L52;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L53 */
  static kcg_bool _L53;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L54 */
  static kcg_bool _L54;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L55 */
  static kcg_bool _L55;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L56 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L56;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L57 */
  static kcg_bool _L57;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L81 */
  static kcg_bool _L81;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L80 */
  static Q_RBC _L80;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L79 */
  static Q_RBC _L79;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L78 */
  static kcg_bool _L78;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L77 */
  static kcg_bool _L77;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L76 */
  static Q_RBC _L76;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L75 */
  static NID_RADIO _L75;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L74 */
  static M_MODE _L74;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L73 */
  static kcg_bool _L73;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L72 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L72;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L71 */
  static NID_RBC _L71;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L70 */
  static NID_C _L70;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L82 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L82;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L83 */
  static kcg_bool _L83;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L84 */
  static NID_C _L84;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L85 */
  static NID_RADIO _L85;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L86 */
  static NID_RBC _L86;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L87 */
  static kcg_bool _L87;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L88 */
  static kcg_bool _L88;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L89 */
  static kcg_bool _L89;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L90 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L90;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L91 */
  static kcg_bool _L91;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L92 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L92;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L93 */
  static kcg_bool _L93;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L94 */
  static kcg_bool _L94;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L95 */
  static kcg_bool _L95;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L96 */
  static kcg_bool _L96;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L97 */
  static kcg_bool _L97;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L98 */
  static kcg_bool _L98;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L99 */
  static kcg_bool _L99;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::_L100 */
  static kcg_bool _L100;
  
  /* init_TrainExitedFromRBCArea_SM */ if (outC->init) {
    TrainExitedFromRBCArea_SM_state_sel = SSM_st_Idle_TrainExitedFromRBCArea_SM;
  }
  else {
    TrainExitedFromRBCArea_SM_state_sel =
      outC->TrainExitedFromRBCArea_SM_state_nxt;
  }
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L72,
    p42_SessionManagement);
  _L73 = _L72.valid;
  _L74 = mode;
  _L77 = /* 2 */ validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(&_L72, _L74);
  _L96 = _L73 & _L77;
  _L80 = _L72.q_rbc;
  _L76 = Q_RBC_Terminate_communication_session;
  _L78 = _L80 == _L76;
  _L79 = Q_RBC_Establish_communication_session;
  _L81 = _L80 == _L79;
  _L70 = _L72.nid_c;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L82, sessionStatus);
  _L84 = _L82.nid_c;
  _L87 = _L70 == _L84;
  _L71 = _L72.nid_RBC;
  _L86 = _L82.nid_rbc;
  _L88 = _L71 == _L86;
  _L75 = _L72.nid_radio;
  _L85 = _L82.nid_radio;
  _L89 = _L75 == _L85;
  _L83 = _L82.valid;
  _L90 = _L82.phase;
  _L92 = sp_terminated_RCM_Session_Types_Pkg;
  _L91 = _L90 != _L92;
  _L93 = _L87 & _L88 & _L89 & _L83 & _L91;
  _L94 = !_L93;
  _L95 = _L81 & _L94;
  _L97 = _L78 | _L95;
  _L98 = _L96 & _L97;
  orderToTerminateTheSessionIsReceived = _L98;
  /* sel_TrainExitedFromRBCArea_SM */ switch (TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      br_1_guard_TrainExitedFromRBCArea_SM_Idle = reset;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        orderToTerminateTheSessionIsReceived | reset;
      if (br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession) {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      break;
    
  }
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L56, eventsAndPhases);
  _L57 = _L56.trainExitedFromAnRBCArea;
  trainExitedFromAnRBCArea_l = _L57;
  /* sel_TrainExitedFromRBCArea_SM */ switch (TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      br_2_guard_TrainExitedFromRBCArea_SM_Idle = trainExitedFromAnRBCArea_l;
      if (br_1_guard_TrainExitedFromRBCArea_SM_Idle) {
        _11_TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else if (br_2_guard_TrainExitedFromRBCArea_SM_Idle) {
        _11_TrainExitedFromRBCArea_SM_state_act =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      else {
        _11_TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      _16_TrainExitedFromRBCArea_SM_state_act =
        _11_TrainExitedFromRBCArea_SM_state_act;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      _16_TrainExitedFromRBCArea_SM_state_act =
        TrainExitedFromRBCArea_SM_state_act;
      break;
    
  }
  /* act_TrainExitedFromRBCArea_SM */ switch (_16_TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      _L27_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        currentTime;
      _L28_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        kcg_false;
      _L29_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        maxWaitingTimeUntilTerminationOrderReceived;
      _L30_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        noOfRetriesUntilTerminationOrderIsReceived;
      break;
    
  }
  /* init_TrainExitedFromRBCArea_SM */ if (outC->init) {
    TrainExitedFromRBCArea_SM_reset_prv = kcg_false;
  }
  else {
    TrainExitedFromRBCArea_SM_reset_prv =
      outC->TrainExitedFromRBCArea_SM_reset_act;
  }
  /* sel_TrainExitedFromRBCArea_SM */ switch (TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      if (br_1_guard_TrainExitedFromRBCArea_SM_Idle) {
        _12_TrainExitedFromRBCArea_SM_reset_act = kcg_true;
      }
      else {
        _12_TrainExitedFromRBCArea_SM_reset_act =
          br_2_guard_TrainExitedFromRBCArea_SM_Idle;
      }
      outC->TrainExitedFromRBCArea_SM_reset_act =
        _12_TrainExitedFromRBCArea_SM_reset_act;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      TrainExitedFromRBCArea_SM_reset_act =
        br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
      outC->TrainExitedFromRBCArea_SM_reset_act =
        TrainExitedFromRBCArea_SM_reset_act;
      break;
    
  }
  /* act_TrainExitedFromRBCArea_SM */ switch (_16_TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      sSendAPositionReport = kcg_false;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      if (outC->TrainExitedFromRBCArea_SM_reset_act) {
        /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer_MoRC_Pck_Utils(
        _L27_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession,
        _L28_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession,
        _L28_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession,
        _L29_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession,
        _L30_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession,
        &outC->Context_1);
      _L25_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        outC->Context_1.triggerAction;
      _L26_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        outC->Context_1.elapsed;
      sSendAPositionReport =
        _L25_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
      break;
    
  }
  /* sel_TrainExitedFromRBCArea_SM */ switch (TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      if (br_1_guard_TrainExitedFromRBCArea_SM_Idle) {
        _13_TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_Idle_1_TrainExitedFromRBCArea_SM;
      }
      else if (br_2_guard_TrainExitedFromRBCArea_SM_Idle) {
        _13_TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_Idle_2_TrainExitedFromRBCArea_SM;
      }
      else {
        _13_TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      }
      _15_TrainExitedFromRBCArea_SM_fired_strong =
        _13_TrainExitedFromRBCArea_SM_fired_strong;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      if (br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession) {
        TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_fired_strong =
          SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      }
      _15_TrainExitedFromRBCArea_SM_fired_strong =
        TrainExitedFromRBCArea_SM_fired_strong;
      break;
    
  }
  /* act_TrainExitedFromRBCArea_SM */ switch (_16_TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      _1_definedNumberOfRepetitionsHasBeenReached = kcg_false;
      _17_definedNumberOfRepetitionsHasBeenReached =
        _1_definedNumberOfRepetitionsHasBeenReached;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM =
        _15_TrainExitedFromRBCArea_SM_fired_strong !=
        SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      definedNumberOfRepetitionsHasBeenReached =
        _L26_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
      _17_definedNumberOfRepetitionsHasBeenReached =
        definedNumberOfRepetitionsHasBeenReached;
      break;
    
  }
  _L35 = _17_definedNumberOfRepetitionsHasBeenReached;
  noReplyReceivedAfterLastRepetition = _L35;
  /* act_TrainExitedFromRBCArea_SM */ switch (_16_TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      sTerminateTheCommunicationSession = kcg_false;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      /* strong_fired_WaitForOrderToTerminateTheSession */ if (WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        sTerminateTheCommunicationSession = kcg_false;
      }
      else {
        br_2_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
          noReplyReceivedAfterLastRepetition;
        br_2_clock_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
          br_2_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
        /* cb_anon_sm */ if (br_2_clock_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession) {
          sTerminateTheCommunicationSession = kcg_true;
        }
        else {
          sTerminateTheCommunicationSession = kcg_false;
        }
      }
      break;
    
  }
  _L99 = orderToTerminateTheSessionIsReceived;
  _L36 = sTerminateTheCommunicationSession;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L49, eventsAndPhases);
  _L50 = _L49.errorConditionRequiringTerminationDetected;
  _L51 = _L49.trainIsRejectedByRBC_duringStartOfMission;
  _L52 = _L49.driverClosesTheDeskduringStartOfMission;
  _L55 = _L49.level_1_isLeft;
  _L53 = _L49.isInCommunicationSessionWithAnRIU;
  _L40 = _L55 & _L53;
  _L54 = _L49.endOfMissionIsExecuted;
  _L41 = _L53 & _L54;
  _L42 = _L40 | _L41;
  _L16 = _L99 | _L36 | _L50 | _L51 | _L52 | _L42;
  outC->initiateTermination = _L16;
  /* init_TrainExitedFromRBCArea_SM */ if (outC->init) {
    TrainExitedFromRBCArea_SM_reset_sel = kcg_false;
  }
  else {
    TrainExitedFromRBCArea_SM_reset_sel =
      outC->TrainExitedFromRBCArea_SM_reset_nxt;
  }
  /* act_TrainExitedFromRBCArea_SM */ switch (_16_TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      _2_TrainExitedFromRBCArea_SM_state_nxt =
        SSM_st_Idle_TrainExitedFromRBCArea_SM;
      outC->TrainExitedFromRBCArea_SM_state_nxt =
        _2_TrainExitedFromRBCArea_SM_state_nxt;
      _3_TrainExitedFromRBCArea_SM_reset_nxt = kcg_false;
      outC->TrainExitedFromRBCArea_SM_reset_nxt =
        _3_TrainExitedFromRBCArea_SM_reset_nxt;
      _4_TrainExitedFromRBCArea_SM_fired =
        _15_TrainExitedFromRBCArea_SM_fired_strong;
      _14_TrainExitedFromRBCArea_SM_fired = _4_TrainExitedFromRBCArea_SM_fired;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      /* strong_fired_WaitForOrderToTerminateTheSession */ if (WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        _8_TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        TrainExitedFromRBCArea_SM_state_nxt =
          _8_TrainExitedFromRBCArea_SM_state_nxt;
      }
      else {
        if (br_2_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession) {
          _5_TrainExitedFromRBCArea_SM_state_nxt =
            SSM_st_Idle_TrainExitedFromRBCArea_SM;
        }
        else {
          _5_TrainExitedFromRBCArea_SM_state_nxt =
            SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        }
        TrainExitedFromRBCArea_SM_state_nxt =
          _5_TrainExitedFromRBCArea_SM_state_nxt;
      }
      outC->TrainExitedFromRBCArea_SM_state_nxt =
        TrainExitedFromRBCArea_SM_state_nxt;
      /* strong_fired_WaitForOrderToTerminateTheSession */ if (WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        _9_TrainExitedFromRBCArea_SM_reset_nxt = kcg_false;
        TrainExitedFromRBCArea_SM_reset_nxt =
          _9_TrainExitedFromRBCArea_SM_reset_nxt;
      }
      else {
        _6_TrainExitedFromRBCArea_SM_reset_nxt =
          br_2_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
        TrainExitedFromRBCArea_SM_reset_nxt =
          _6_TrainExitedFromRBCArea_SM_reset_nxt;
      }
      outC->TrainExitedFromRBCArea_SM_reset_nxt =
        TrainExitedFromRBCArea_SM_reset_nxt;
      /* strong_fired_WaitForOrderToTerminateTheSession */ if (WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        _10_TrainExitedFromRBCArea_SM_fired =
          _15_TrainExitedFromRBCArea_SM_fired_strong;
        TrainExitedFromRBCArea_SM_fired = _10_TrainExitedFromRBCArea_SM_fired;
      }
      else {
        if (br_2_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession) {
          _7_TrainExitedFromRBCArea_SM_fired =
            SSM_TR_WaitForOrderToTerminateTheSession_2_TrainExitedFromRBCArea_SM;
        }
        else {
          _7_TrainExitedFromRBCArea_SM_fired =
            SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
        }
        TrainExitedFromRBCArea_SM_fired = _7_TrainExitedFromRBCArea_SM_fired;
      }
      _14_TrainExitedFromRBCArea_SM_fired = TrainExitedFromRBCArea_SM_fired;
      break;
    
  }
  _L34 = sSendAPositionReport;
  outC->sendAPositionReport = _L34;
  _L100 = kcg_true;
  noname = _L100;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

