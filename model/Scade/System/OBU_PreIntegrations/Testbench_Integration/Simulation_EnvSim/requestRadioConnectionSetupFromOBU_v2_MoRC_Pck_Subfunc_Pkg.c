/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"

void requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
  /* 2 */ RisingEdge_reset_digital(&outC->Context_2);
  /* 1 */ RisingEdge_reset_digital(&outC->_1_Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2 */
void requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
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
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_inactive */
  static kcg_bool br_1_guard_repeat_SM_rep_inactive;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_inactive */
  static kcg_bool br_2_clock_repeat_SM_rep_inactive;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */
  static kcg_bool br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */
  static kcg_bool br_2_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilStopConditionMet */
  static kcg_bool br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilStopConditionMet */
  static kcg_bool br_2_clock_repeat_SM_rep_repeatUntilStopConditionMet;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM repeat_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM repeat_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeatUntilStopConditionMet */
  static kcg_bool repeatUntilStopConditionMet;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L336 */
  static kcg_bool _L336;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L334 */
  static kcg_bool _L334;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L321 */
  static kcg_bool _L321;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L318 */
  static kcg_bool _L318;
  
  if (outC->init) {
    repeat_SM_state_sel = SSM_st_rep_inactive_repeat_SM;
  }
  else {
    repeat_SM_state_sel = outC->repeat_SM_state_nxt;
  }
  br_2_clock_repeat_SM_rep_inactive = (*registrationStatus).valid &
    ((*registrationStatus).status == mrs_registered_RCM_Types_Pkg);
  repeatUntilStopConditionMet = connect &
    !(*eventsPhases).isPartOfAnOngoingStartOfMissionProcedure &
    br_2_clock_repeat_SM_rep_inactive;
  else_clock_IfBlock1 = (*connectionStatus).valid &
    ((*connectionStatus).status == mcs_connected_RCM_Types_Pkg);
  /* 1 */
  RisingEdge_digital(
    (kcg_bool)
      ((*connectionStatus).settingUpConnectionHasFailed &
        (*connectionStatus).valid),
    &outC->_1_Context_1);
  _L334 = /* 2 */
    validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
      p42_sessionManagement,
      mode);
  _L318 = ((*p42_sessionManagement).msgSrc == msrc_Euroradio_Common_Types_Pkg) |
    ((*p42_sessionManagement).msgSrc == msrc_Eurobalise_Common_Types_Pkg) |
    ((*p42_sessionManagement).msgSrc == msrc_RadioInfillUnit_Common_Types_Pkg) |
    ((*p42_sessionManagement).msgSrc == msrc_OBU_Common_Types_Pkg);
  _L321 = (*p42_sessionManagement).q_rbc ==
    Q_RBC_Establish_communication_session;
  _L336 = !(((*p42_sessionManagement).nid_c == (*sessionStatus).nid_c) &
      ((*sessionStatus).nid_rbc == (*p42_sessionManagement).nid_RBC)) &
    (*sessionStatus).valid & ((*sessionStatus).phase !=
      sp_terminated_RCM_Session_Types_Pkg);
  /* 2 */
  RisingEdge_digital(
    (kcg_bool) ((*connectionStatus).valid & (*connectionStatus).connectionLost),
    &outC->Context_2);
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    outC->Context_2.RE_Output,
    (kcg_bool)
      ((*connectionStatus).valid & !(*connectionStatus).connectionLost),
    currentTime,
    kcg_false,
    maxTimeToMaintainCommSession,
    &outC->Context_1);
  if (reset) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionManagement_mem,
      (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
        &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
  }
  else if ((*p42_sessionManagement).valid) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionManagement_mem,
      p42_sessionManagement);
  }
  else if (outC->init) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionManagement_mem,
      (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
        &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
  }
  outC->init = kcg_false;
  switch (repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet =
        else_clock_IfBlock1 | (*eventsPhases).endOfMissionIsExecuted |
        (*eventsPhases).trainFrontPassesALevelTransitionBorder |
        (*eventsPhases).trainFrontPassesA_RBC_RBC_border |
        (*eventsPhases).trainFrontPassesStartOfAnnouncedRadioHole |
        ((*p42_sessionManagement).valid & ((*p42_sessionManagement).q_rbc ==
            Q_RBC_Terminate_communication_session) & _L334 & _L318) |
        ((*p42_sessionManagement).valid & _L321 & _L334 & _L318 & _L336) |
        outC->Context_1.expired | reset;
      if (br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet) {
        repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
      }
      else {
        br_2_clock_repeat_SM_rep_repeatUntilStopConditionMet =
          outC->_1_Context_1.RE_Output;
        repeat_SM_state_act = SSM_st_rep_repeatUntilStopConditionMet_repeat_SM;
      }
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes =
        else_clock_IfBlock1 | reset;
      if (br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
        repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
      }
      else {
        br_2_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes =
          outC->_1_Context_1.RE_Output;
        repeat_SM_state_act =
          SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      break;
    case SSM_st_rep_inactive_repeat_SM :
      br_1_guard_repeat_SM_rep_inactive = connect &
        (*eventsPhases).isPartOfAnOngoingStartOfMissionProcedure &
        br_2_clock_repeat_SM_rep_inactive;
      if (br_1_guard_repeat_SM_rep_inactive) {
        repeat_SM_state_act =
          SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      else {
        br_2_clock_repeat_SM_rep_inactive = repeatUntilStopConditionMet;
        if (repeatUntilStopConditionMet) {
          repeat_SM_state_act =
            SSM_st_rep_repeatUntilStopConditionMet_repeat_SM;
        }
        else {
          repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
        }
      }
      break;
    
  }
  if (disconnect) {
    outC->connectionCmd.valid = kcg_true;
    outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
    outC->connectionCmd.action = mca_disconnect_RCM_Types_Pkg;
    outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
  }
  else {
    switch (repeat_SM_state_sel) {
      case SSM_st_rep_inactive_repeat_SM :
        if (br_1_guard_repeat_SM_rep_inactive) {
          else_clock_IfBlock1 = kcg_true;
        }
        else if (br_2_clock_repeat_SM_rep_inactive) {
          else_clock_IfBlock1 = kcg_true;
        }
        else {
          else_clock_IfBlock1 = kcg_false;
        }
        break;
      case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
        if (br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
          else_clock_IfBlock1 = kcg_false;
        }
        else if (br_2_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
          else_clock_IfBlock1 = kcg_true;
        }
        else {
          else_clock_IfBlock1 = kcg_false;
        }
        break;
      case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
        if (br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet) {
          else_clock_IfBlock1 = kcg_false;
        }
        else if (br_2_clock_repeat_SM_rep_repeatUntilStopConditionMet) {
          else_clock_IfBlock1 = kcg_true;
        }
        else {
          else_clock_IfBlock1 = kcg_false;
        }
        break;
      
    }
    if (else_clock_IfBlock1) {
      outC->connectionCmd.valid = kcg_true;
      outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
      outC->connectionCmd.action = mca_connect_RCM_Types_Pkg;
      if ((*p42_sessionManagement).valid & _L321 & _L334 & _L318 &
        (((((*sessionStatus).phase == sp_terminated_RCM_Session_Types_Pkg) |
              ((*sessionStatus).phase ==
                sp_establishing_RCM_Session_Types_Pkg)) &
            (*sessionStatus).valid) | _L336)) {
        outC->connectionCmd.nid_radio =
          outC->p42_sessionManagement_mem.nid_radio;
      }
      else {
        outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
      }
    }
    else if ((*eventsPhases).trainFrontPassesStartOfAnnouncedRadioHole) {
      outC->connectionCmd.valid = kcg_true;
      outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
      outC->connectionCmd.action = mca_expectRadioHole_RCM_Types_Pkg;
      outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
    }
    else if ((*eventsPhases).trainFrontReachesEndOfAnnouncedRadioHole) {
      outC->connectionCmd.valid = kcg_true;
      outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
      outC->connectionCmd.action = mca_unexpectRadioHole_RCM_Types_Pkg;
      outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
    }
    else {
      outC->connectionCmd.valid = kcg_false;
      outC->connectionCmd.mobileDeviceNo = (*connectionStatus).mobileDeviceNo;
      outC->connectionCmd.action = mca_nop_RCM_Types_Pkg;
      outC->connectionCmd.nid_radio = (*connectionStatus).nid_radio;
    }
  }
  switch (repeat_SM_state_act) {
    case SSM_st_rep_inactive_repeat_SM :
      outC->repeat_SM_state_nxt = SSM_st_rep_inactive_repeat_SM;
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      outC->repeat_SM_state_nxt =
        SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      break;
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      outC->repeat_SM_state_nxt =
        SSM_st_rep_repeatUntilStopConditionMet_repeat_SM;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

