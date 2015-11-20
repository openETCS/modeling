/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminateSession_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void terminateSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_idle_SM1;
  outC->_L4_1.valid = kcg_true;
  outC->_L4_1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L4_1.nid_c = 0;
  outC->_L4_1.nid_rbc = 0;
  outC->_L4_1.nid_radio = 0;
  outC->notReady = kcg_true;
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus.nid_c = 0;
  outC->sessionStatus.nid_rbc = 0;
  outC->sessionStatus.nid_radio = 0;
  outC->terminated = kcg_true;
  outC->requestReleaseOfSafeRadioConnection = kcg_true;
  outC->send_m156_TerminationOfCommunicationSession = kcg_true;
  /* 1 */ waitAndRepeatTimer_init_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
void terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::initiateTermination */ kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::m39_AckOfTerminationOfACommunicationSession */ m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::prevSessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::noOfRetriesOfSendingTerminationMessage */ kcg_int noOfRetriesOfSendingTerminationMessage,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::maxWaitingTimeForAckMessageReceived */ T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
  static kcg_bool tmp1;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
  static kcg_bool tmp;
  /* linear::MemoryBasic::Memorized */
  static sessionStatus_T_RCM_Session_Types_Pkg Memorized_1;
  /* linear::MemoryBasic::Write */
  static kcg_bool Write_1;
  /* linear::MemoryBasic::Init */
  static sessionStatus_T_RCM_Session_Types_Pkg Init_1;
  /* linear::MemoryBasic::BM_Input */
  static sessionStatus_T_RCM_Session_Types_Pkg BM_Input_1;
  /* linear::MemoryBasic::_L7 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L7_1;
  /* linear::MemoryBasic::_L6 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L6_1;
  /* linear::MemoryBasic::_L5 */
  static kcg_bool _L5_1;
  /* linear::MemoryBasic::_L2 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L2_1;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 _11_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool _10_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 _9_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::definedNumberOfRepetitionsHasBeenReached */
  static kcg_bool _8_definedNumberOfRepetitionsHasBeenReached;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::terminated */
  static kcg_bool _7_terminated;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 _6_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool _5_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 _4_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::definedNumberOfRepetitionsHasBeenReached */
  static kcg_bool _3_definedNumberOfRepetitionsHasBeenReached;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::terminated */
  static kcg_bool _2_terminated;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived::_L1 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L1_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived::_L2 */
  static time_Type_MoRC_Pck _L2_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived::_L3 */
  static kcg_int _L3_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived::_L4 */
  static kcg_bool _L4_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived::_L6 */
  static kcg_bool _L6_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived::_L5 */
  static kcg_bool _L5_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived */
  static kcg_bool waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived */
  static kcg_bool br_2_clock_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived */
  static kcg_bool br_2_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 _12_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool _13_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 _14_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 _15_SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool _16_SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 _17_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 SM1_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::definedNumberOfRepetitionsHasBeenReached */
  static kcg_bool definedNumberOfRepetitionsHasBeenReached;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::terminated */
  static kcg_bool terminated;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::terminated::_L2 */
  static kcg_bool _L2_SM1_terminated;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 _23_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool _22_SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 _21_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::idle */
  static kcg_bool br_1_guard_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::idle */
  static kcg_bool br_1_clock_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 _20_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool _19_SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 _18_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived */
  static kcg_bool br_1_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool SM1_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::terminated */
  static kcg_bool br_1_guard_SM1_terminated;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::sNotReady */
  static kcg_bool sNotReady;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::sRequestReleaseOfSafeRadioConnection */
  static kcg_bool sRequestReleaseOfSafeRadioConnection;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::sSendTerminationOfCommunicationMessage */
  static kcg_bool sSendTerminationOfCommunicationMessage;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _23_SSM_ST_SM1 _26_SM1_state_act;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool SM1_reset_sel;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static kcg_bool SM1_reset_prv;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 _25_SM1_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _25_SSM_TR_SM1 _24_SM1_fired;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::ackTerminationOfACommunicationSessionReceived */
  static kcg_bool ackTerminationOfACommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::definedNumberOfRepetitionsHasBeenReached */
  static kcg_bool _27_definedNumberOfRepetitionsHasBeenReached;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L96 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L96;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L95 */
  static NID_C _L95;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L94 */
  static kcg_bool _L94;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L93 */
  static NID_RBC _L93;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L92 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L92;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L91 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L91;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L90 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L90;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L89 */
  static NID_RADIO _L89;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L88 */
  static kcg_bool _L88;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L97 */
  static m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L97;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L98 */
  static kcg_bool _L98;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L99 */
  static kcg_bool _L99;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L100 */
  static kcg_bool _L100;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::_L101 */
  static kcg_bool _L101;
  
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_idle_SM1 :
      br_1_guard_SM1_idle = initiateTermination;
      if (br_1_guard_SM1_idle) {
        _21_SM1_state_act =
          SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      }
      else {
        _21_SM1_state_act = SSM_st_idle_SM1;
      }
      _26_SM1_state_act = _21_SM1_state_act;
      if (br_1_guard_SM1_idle) {
        _23_SM1_fired_strong = SSM_TR_idle_1_SM1;
      }
      else {
        _23_SM1_fired_strong = _24_SSM_TR_no_trans_SM1;
      }
      _25_SM1_fired_strong = _23_SM1_fired_strong;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      br_1_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived =
        reset;
      if (br_1_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived) {
        _18_SM1_state_act = SSM_st_idle_SM1;
      }
      else {
        _18_SM1_state_act =
          SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      }
      _26_SM1_state_act = _18_SM1_state_act;
      if (br_1_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived) {
        _20_SM1_fired_strong =
          SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_1_SM1;
      }
      else {
        _20_SM1_fired_strong = _24_SSM_TR_no_trans_SM1;
      }
      _25_SM1_fired_strong = _20_SM1_fired_strong;
      break;
    case SSM_st_terminated_SM1 :
      br_1_guard_SM1_terminated = reset;
      if (br_1_guard_SM1_terminated) {
        SM1_state_act = SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_terminated_SM1;
      }
      _26_SM1_state_act = SM1_state_act;
      if (br_1_guard_SM1_terminated) {
        SM1_fired_strong = SSM_TR_terminated_1_SM1;
      }
      else {
        SM1_fired_strong = _24_SSM_TR_no_trans_SM1;
      }
      _25_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_26_SM1_state_act) {
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1 =
        _25_SM1_fired_strong != _24_SSM_TR_no_trans_SM1;
      break;
    
  }
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &_L97,
    m39_AckOfTerminationOfACommunicationSession);
  _L98 = _L97.valid;
  ackTerminationOfACommunicationSessionReceived = _L98;
  /* act_SM1 */ switch (_26_SM1_state_act) {
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      _L2_SM1_waitForAckTerminationOfCommunicationSessionReceived = currentTime;
      _L4_SM1_waitForAckTerminationOfCommunicationSessionReceived = kcg_false;
      _L1_SM1_waitForAckTerminationOfCommunicationSessionReceived =
        maxWaitingTimeForAckMessageReceived;
      _L3_SM1_waitForAckTerminationOfCommunicationSessionReceived =
        noOfRetriesOfSendingTerminationMessage;
      break;
    
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_idle_SM1 :
      _22_SM1_reset_act = br_1_guard_SM1_idle;
      outC->SM1_reset_act = _22_SM1_reset_act;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      _19_SM1_reset_act =
        br_1_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived;
      outC->SM1_reset_act = _19_SM1_reset_act;
      break;
    case SSM_st_terminated_SM1 :
      SM1_reset_act = br_1_guard_SM1_terminated;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  /* act_SM1 */ switch (_26_SM1_state_act) {
    case SSM_st_idle_SM1 :
      sNotReady = kcg_false;
      sRequestReleaseOfSafeRadioConnection = kcg_false;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      if (outC->SM1_reset_act) {
        /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer_MoRC_Pck_Utils(
        _L2_SM1_waitForAckTerminationOfCommunicationSessionReceived,
        _L4_SM1_waitForAckTerminationOfCommunicationSessionReceived,
        _L4_SM1_waitForAckTerminationOfCommunicationSessionReceived,
        _L1_SM1_waitForAckTerminationOfCommunicationSessionReceived,
        _L3_SM1_waitForAckTerminationOfCommunicationSessionReceived,
        &outC->Context_1);
      _L5_SM1_waitForAckTerminationOfCommunicationSessionReceived =
        outC->Context_1.triggerAction;
      _L6_SM1_waitForAckTerminationOfCommunicationSessionReceived =
        outC->Context_1.elapsed;
      _3_definedNumberOfRepetitionsHasBeenReached =
        _L6_SM1_waitForAckTerminationOfCommunicationSessionReceived;
      /* strong_fired_waitForAckTerminationOfCommunicationSessionReceived */ if (waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1) {
        sNotReady = kcg_false;
        sRequestReleaseOfSafeRadioConnection = kcg_false;
      }
      else {
        br_2_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived =
          ackTerminationOfACommunicationSessionReceived |
          _3_definedNumberOfRepetitionsHasBeenReached;
        br_2_clock_SM1_waitForAckTerminationOfCommunicationSessionReceived =
          br_2_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived;
        /* cb_anon_sm */ if (br_2_clock_SM1_waitForAckTerminationOfCommunicationSessionReceived) {
          sNotReady = kcg_true;
          sRequestReleaseOfSafeRadioConnection = kcg_true;
        }
        else {
          sNotReady = kcg_false;
          sRequestReleaseOfSafeRadioConnection = kcg_false;
        }
      }
      break;
    case SSM_st_terminated_SM1 :
      sNotReady = kcg_false;
      sRequestReleaseOfSafeRadioConnection = kcg_false;
      break;
    
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_idle_SM1 :
      br_1_clock_SM1_idle = br_1_guard_SM1_idle;
      /* cb_anon_sm */ if (br_1_clock_SM1_idle) {
        tmp1 = kcg_true;
      }
      else {
        tmp1 = kcg_false;
      }
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      tmp1 = kcg_false;
      break;
    case SSM_st_terminated_SM1 :
      tmp1 = kcg_false;
      break;
    
  }
  /* act_SM1 */ switch (_26_SM1_state_act) {
    case SSM_st_idle_SM1 :
      tmp = kcg_false;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      tmp = _L5_SM1_waitForAckTerminationOfCommunicationSessionReceived;
      break;
    case SSM_st_terminated_SM1 :
      tmp = kcg_false;
      break;
    
  }
  sSendTerminationOfCommunicationMessage = tmp1 | tmp;
  /* init_SM1 */ if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* act_SM1 */ switch (_26_SM1_state_act) {
    case SSM_st_idle_SM1 :
      _7_terminated = kcg_false;
      outC->terminated = _7_terminated;
      _8_definedNumberOfRepetitionsHasBeenReached = kcg_false;
      _27_definedNumberOfRepetitionsHasBeenReached =
        _8_definedNumberOfRepetitionsHasBeenReached;
      _9_SM1_state_nxt = SSM_st_idle_SM1;
      outC->SM1_state_nxt = _9_SM1_state_nxt;
      _10_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _10_SM1_reset_nxt;
      _11_SM1_fired = _25_SM1_fired_strong;
      _24_SM1_fired = _11_SM1_fired;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      _2_terminated = kcg_false;
      outC->terminated = _2_terminated;
      _27_definedNumberOfRepetitionsHasBeenReached =
        _3_definedNumberOfRepetitionsHasBeenReached;
      /* strong_fired_waitForAckTerminationOfCommunicationSessionReceived */ if (waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1) {
        _15_SM1_state_nxt =
          SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
        _4_SM1_state_nxt = _15_SM1_state_nxt;
      }
      else {
        if (br_2_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived) {
          _12_SM1_state_nxt = SSM_st_terminated_SM1;
        }
        else {
          _12_SM1_state_nxt =
            SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
        }
        _4_SM1_state_nxt = _12_SM1_state_nxt;
      }
      outC->SM1_state_nxt = _4_SM1_state_nxt;
      /* strong_fired_waitForAckTerminationOfCommunicationSessionReceived */ if (waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1) {
        _16_SM1_reset_nxt = kcg_false;
        _5_SM1_reset_nxt = _16_SM1_reset_nxt;
      }
      else {
        _13_SM1_reset_nxt =
          br_2_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived;
        _5_SM1_reset_nxt = _13_SM1_reset_nxt;
      }
      outC->SM1_reset_nxt = _5_SM1_reset_nxt;
      /* strong_fired_waitForAckTerminationOfCommunicationSessionReceived */ if (waitForAckTerminationOfCommunicationSessionReceived_weakb_clock_SM1) {
        _17_SM1_fired = _25_SM1_fired_strong;
        _6_SM1_fired = _17_SM1_fired;
      }
      else {
        if (br_2_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived) {
          _14_SM1_fired =
            SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_2_SM1;
        }
        else {
          _14_SM1_fired = _24_SSM_TR_no_trans_SM1;
        }
        _6_SM1_fired = _14_SM1_fired;
      }
      _24_SM1_fired = _6_SM1_fired;
      break;
    case SSM_st_terminated_SM1 :
      _L2_SM1_terminated = kcg_true;
      terminated = _L2_SM1_terminated;
      outC->terminated = terminated;
      definedNumberOfRepetitionsHasBeenReached = kcg_false;
      _27_definedNumberOfRepetitionsHasBeenReached =
        definedNumberOfRepetitionsHasBeenReached;
      SM1_state_nxt = SSM_st_terminated_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _25_SM1_fired_strong;
      _24_SM1_fired = SM1_fired;
      break;
    
  }
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L90, prevSessionStatus);
  _L88 = _L90.valid;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&Init_1, &_L90);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L7_1, &Init_1);
  /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L6_1, &_L7_1);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L6_1, &outC->_L4_1);
  }
  Write_1 = _L88;
  _L5_1 = Write_1;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&BM_Input_1, &_L90);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L2_1, &BM_Input_1);
  /* 1 */ if (_L5_1) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L4_1, &_L2_1);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->_L4_1, &_L6_1);
  }
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&Memorized_1, &outC->_L4_1);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L92, &Memorized_1);
  _L89 = _L92.nid_radio;
  _L94 = kcg_true;
  _L96 = sp_terminating_RCM_Session_Types_Pkg;
  _L95 = _L92.nid_c;
  _L93 = _L92.nid_rbc;
  _L91.valid = _L94;
  _L91.phase = _L96;
  _L91.nid_c = _L95;
  _L91.nid_rbc = _L93;
  _L91.nid_radio = _L89;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->sessionStatus, &_L91);
  _L99 = sSendTerminationOfCommunicationMessage;
  _L100 = sRequestReleaseOfSafeRadioConnection;
  outC->send_m156_TerminationOfCommunicationSession = _L99;
  outC->requestReleaseOfSafeRadioConnection = _L100;
  _L101 = sNotReady;
  outC->notReady = _L101;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** terminateSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

