/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void requestRadioConnectionSetupFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->repeat_SM_reset_nxt = kcg_true;
  outC->repeat_SM_reset_act = kcg_true;
  outC->repeat_SM_state_nxt = SSM_st_rep_inactive_repeat_SM;
  outC->_L8_1.valid = kcg_true;
  outC->_L8_1.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L8_1.q_dir = Q_DIR_Reverse;
  outC->_L8_1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L8_1.nid_c = 0;
  outC->_L8_1.nid_RBC = 0;
  outC->_L8_1.nid_radio = 0;
  outC->_L8_1.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L8_1.origin.valid = kcg_true;
  outC->_L8_1.origin.nid_c = 0;
  outC->_L8_1.origin.rbc_id = 0;
  outC->_L8_1.origin.device_id = 0;
  outC->connectionCmd.valid = kcg_true;
  outC->connectionCmd.mobileDeviceNo = 0;
  outC->connectionCmd.action = mca_nop_RCM_Types_Pkg;
  outC->connectionCmd.nid_radio = 0;
  /* 1 */ countDownTimer_init_MoRC_Pck_Utils(&outC->_1_Context_1);
  /* 2 */ RisingEdge_init_digital(&outC->Context_2);
  /* 1 */ RisingEdge_init_digital(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->_1_Context_1);
  /* 2 */ RisingEdge_reset_digital(&outC->Context_2);
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2 */
void requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
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
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* linear::Memory::Out */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg Out_1;
  /* linear::Memory::InitVal */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg InitVal_1;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_1;
  /* linear::Memory::Reset */
  static kcg_bool Reset_1;
  /* linear::Memory::M_Input */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg M_Input_1;
  /* linear::Memory::_L9 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L9_1;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_1;
  /* linear::Memory::_L2 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L2_1;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_1;
  /* linear::Memory::_L5 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L5_1;
  /* linear::Memory::_L6 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L6_1;
  /* linear::Memory::_L7 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L7_1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */
  static mobileConnectionCmd_T_RCM_Types_Pkg _1_connectionCmd;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::then::_L14 */
  static kcg_bool _L14_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::then::_L5 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L5_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::then::_L7 */
  static NID_RADIO _L7_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::then::_L11 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L11_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::then::_L12 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L12_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */
  static mobileConnectionCmd_T_RCM_Types_Pkg connectionCmd;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else */
  static kcg_bool _22_else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */
  static mobileConnectionCmd_T_RCM_Types_Pkg _5_connectionCmd;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::then::_L22 */
  static kcg_bool _L22_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::then::_L14 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L1430_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::then::_L15 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L15_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::then::_L16 */
  static kcg_int _L16_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::then::_L19 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L19_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::then::_L21 */
  static NID_RADIO _L21_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */
  static mobileConnectionCmd_T_RCM_Types_Pkg _4_connectionCmd;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::else::_L23 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L23_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::else::_L22 */
  static NID_RADIO _L2239_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::else::_L21 */
  static kcg_int _L2138_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::else::_L16 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L1637_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::else::_L15 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L1536_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::else::_L24 */
  static kcg_bool _L24_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */
  static mobileConnectionCmd_T_RCM_Types_Pkg _6_connectionCmd;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::then::_L10 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L1035_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::then::_L8 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L834_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::then::_L7 */
  static NID_RADIO _L733_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::then::_L6 */
  static kcg_int _L6_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::then::_L5 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L532_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else::else::then::_L11 */
  static kcg_bool _L1131_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */
  static mobileConnectionCmd_T_RCM_Types_Pkg _7_connectionCmd;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::else */
  static kcg_bool _21_else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */
  static mobileConnectionCmd_T_RCM_Types_Pkg _2_connectionCmd;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L8 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L8_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L5 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L529_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L2 */
  static NID_RADIO _L2_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L1 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L1_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L4 */
  static NID_RADIO _L428_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L9 */
  static NID_RADIO _L9_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L11 */
  static kcg_bool _L1127_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1::else::then::_L12 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L1226_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionCmd */
  static mobileConnectionCmd_T_RCM_Types_Pkg _3_connectionCmd;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_TR_repeat_SM _13_repeat_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static kcg_bool _12_repeat_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM _11_repeat_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_TR_repeat_SM _10_repeat_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static kcg_bool _9_repeat_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM _8_repeat_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_TR_repeat_SM repeat_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static kcg_bool repeat_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM repeat_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_TR_repeat_SM _19_repeat_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static kcg_bool _18_repeat_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM _17_repeat_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_inactive */
  static kcg_bool br_2_guard_repeat_SM_rep_inactive;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_inactive */
  static kcg_bool br_1_guard_repeat_SM_rep_inactive;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_inactive */
  static kcg_bool br_1_clock_repeat_SM_rep_inactive;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_inactive */
  static kcg_bool br_2_clock_repeat_SM_rep_inactive;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_TR_repeat_SM _16_repeat_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static kcg_bool _15_repeat_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM _14_repeat_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */
  static kcg_bool br_2_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */
  static kcg_bool br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */
  static kcg_bool br_1_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilSuccessfulOrADefinedNumberOfTimes */
  static kcg_bool br_2_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_TR_repeat_SM repeat_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static kcg_bool repeat_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM repeat_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilStopConditionMet */
  static kcg_bool br_2_guard_repeat_SM_rep_repeatUntilStopConditionMet;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilStopConditionMet */
  static kcg_bool br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilStopConditionMet */
  static kcg_bool br_1_clock_repeat_SM_rep_repeatUntilStopConditionMet;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM::rep_repeatUntilStopConditionMet */
  static kcg_bool br_2_clock_repeat_SM_rep_repeatUntilStopConditionMet;
  static kcg_int noname;
  static kcg_bool _20_noname;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::sRepeat */
  static kcg_bool sRepeat;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM repeat_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_ST_repeat_SM _25_repeat_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static kcg_bool repeat_SM_reset_sel;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static kcg_bool repeat_SM_reset_prv;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_TR_repeat_SM _24_repeat_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
  static SSM_TR_repeat_SM _23_repeat_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeatUntilSuccessfulOrADefinedNumberOfTimes */
  static kcg_bool repeatUntilSuccessfulOrADefinedNumberOfTimes;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeatUntilStopConditionMet */
  static kcg_bool repeatUntilStopConditionMet;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeatStopCondition */
  static kcg_bool repeatStopCondition;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::orderToTerminateSessionReceivedFromTrack */
  static kcg_bool orderToTerminateSessionReceivedFromTrack;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::orderToEstablishSessionWithDifferentRBCReceivedFromTrack */
  static kcg_bool orderToEstablishSessionWithDifferentRBCReceivedFromTrack;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::triggerRepeat */
  static kcg_bool triggerRepeat;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::successfullyConnected */
  static kcg_bool successfullyConnected;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::orderToEstablishSessionReceivedFromOBU */
  static kcg_bool orderToEstablishSessionReceivedFromOBU;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::considerSessionAsTerminated */
  static kcg_bool considerSessionAsTerminated;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectedAgain */
  static kcg_bool connectedAgain;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::connectionLost */
  static kcg_bool connectionLost;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::p42_sessionManagement_mem */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg p42_sessionManagement_mem;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L197 */
  static kcg_bool _L197;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L198 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L198;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L199 */
  static kcg_bool _L199;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L200 */
  static kcg_bool _L200;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L201 */
  static kcg_bool _L201;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L202 */
  static kcg_bool _L202;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L203 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L203;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L204 */
  static kcg_bool _L204;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L205 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L205;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L206 */
  static kcg_bool _L206;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L207 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L207;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L208 */
  static kcg_bool _L208;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L209 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L209;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L210 */
  static kcg_bool _L210;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L211 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L211;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L212 */
  static kcg_bool _L212;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L213 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L213;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L214 */
  static kcg_bool _L214;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L215 */
  static kcg_bool _L215;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L216 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L216;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L217 */
  static kcg_bool _L217;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L348 */
  static Q_RBC _L348;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L347 */
  static kcg_bool _L347;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L346 */
  static NID_RBC _L346;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L345 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L345;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L344 */
  static kcg_bool _L344;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L343 */
  static kcg_bool _L343;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L342 */
  static kcg_bool _L342;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L341 */
  static kcg_bool _L341;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L340 */
  static Q_RBC _L340;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L339 */
  static kcg_bool _L339;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L338 */
  static MsgSource_T_Common_Types_Pkg _L338;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L337 */
  static Q_RBC _L337;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L336 */
  static kcg_bool _L336;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L335 */
  static kcg_bool _L335;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L334 */
  static kcg_bool _L334;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L333 */
  static kcg_bool _L333;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L332 */
  static MsgSource_T_Common_Types_Pkg _L332;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L331 */
  static NID_C _L331;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L330 */
  static kcg_bool _L330;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L329 */
  static NID_RBC _L329;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L328 */
  static kcg_bool _L328;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L327 */
  static MsgSource_T_Common_Types_Pkg _L327;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L326 */
  static NID_C _L326;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L325 */
  static kcg_bool _L325;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L324 */
  static MsgSource_T_Common_Types_Pkg _L324;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L323 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L323;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L322 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L322;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L321 */
  static kcg_bool _L321;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L320 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L320;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L319 */
  static kcg_bool _L319;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L318 */
  static kcg_bool _L318;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L317 */
  static kcg_bool _L317;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L316 */
  static M_MODE _L316;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L349 */
  static kcg_bool _L349;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L350 */
  static kcg_bool _L350;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L351 */
  static kcg_bool _L351;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L352 */
  static kcg_bool _L352;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L353 */
  static kcg_bool _L353;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L354 */
  static kcg_bool _L354;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L355 */
  static kcg_bool _L355;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L361 */
  static kcg_bool _L361;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L368 */
  static MsgSource_T_Common_Types_Pkg _L368;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L369 */
  static kcg_bool _L369;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L370 */
  static kcg_bool _L370;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L371 */
  static kcg_bool _L371;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L372 */
  static kcg_bool _L372;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L373 */
  static kcg_bool _L373;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L397 */
  static kcg_bool _L397;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L395 */
  static kcg_bool _L395;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L396 */
  static kcg_bool _L396;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L394 */
  static kcg_bool _L394;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L393 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L393;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L392 */
  static kcg_bool _L392;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L391 */
  static kcg_bool _L391;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L390 */
  static kcg_bool _L390;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L389 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L389;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L388 */
  static kcg_bool _L388;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L387 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L387;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L385 */
  static kcg_bool _L385;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L384 */
  static kcg_bool _L384;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L381 */
  static kcg_int _L381;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L380 */
  static kcg_bool _L380;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L399 */
  static kcg_bool _L399;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L400 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L400;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L401 */
  static kcg_bool _L401;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L402 */
  static kcg_bool _L402;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L403 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L403;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L404 */
  static kcg_bool _L404;
  /* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::_L405 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L405;
  
  /* init_repeat_SM */ if (outC->init) {
    repeat_SM_state_sel = SSM_st_rep_inactive_repeat_SM;
  }
  else {
    repeat_SM_state_sel = outC->repeat_SM_state_nxt;
  }
  _L197 = connect;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L198, eventsPhases);
  _L199 = _L198.isPartOfAnOngoingStartOfMissionProcedure;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L203,
    registrationStatus);
  _L204 = _L203.valid;
  _L205 = _L203.status;
  _L207 = mrs_registered_RCM_Types_Pkg;
  _L206 = _L205 == _L207;
  _L208 = _L204 & _L206;
  _L200 = _L197 & _L199 & _L208;
  repeatUntilSuccessfulOrADefinedNumberOfTimes = _L200;
  /* sel_repeat_SM */ switch (repeat_SM_state_sel) {
    case SSM_st_rep_inactive_repeat_SM :
      br_1_guard_repeat_SM_rep_inactive =
        repeatUntilSuccessfulOrADefinedNumberOfTimes;
      br_1_clock_repeat_SM_rep_inactive = br_1_guard_repeat_SM_rep_inactive;
      break;
    
  }
  _L202 = !_L199;
  _L201 = _L197 & _L202 & _L208;
  repeatUntilStopConditionMet = _L201;
  /* sel_repeat_SM */ switch (repeat_SM_state_sel) {
    case SSM_st_rep_inactive_repeat_SM :
      br_2_guard_repeat_SM_rep_inactive = repeatUntilStopConditionMet;
      /* cb_anon_sm */ if (br_1_clock_repeat_SM_rep_inactive) {
      }
      else {
        br_2_clock_repeat_SM_rep_inactive = br_2_guard_repeat_SM_rep_inactive;
      }
      break;
    
  }
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L209, connectionStatus);
  _L210 = _L209.valid;
  _L211 = _L209.status;
  _L213 = mcs_connected_RCM_Types_Pkg;
  _L212 = _L211 == _L213;
  _L214 = _L210 & _L212;
  successfullyConnected = _L214;
  /* sel_repeat_SM */ switch (repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes =
        successfullyConnected | reset;
      br_1_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes =
        br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes;
      break;
    
  }
  _L354 = _L209.settingUpConnectionHasFailed;
  _L355 = _L354 & _L210;
  /* 1 */ RisingEdge_digital(_L355, &outC->Context_1);
  _L361 = outC->Context_1.RE_Output;
  triggerRepeat = _L361;
  /* sel_repeat_SM */ switch (repeat_SM_state_sel) {
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      br_2_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes =
        triggerRepeat;
      /* cb_anon_sm */ if (br_1_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
      }
      else {
        br_2_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes =
          br_2_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes;
      }
      break;
    
  }
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L216, eventsPhases);
  _L217 = _L216.endOfMissionIsExecuted;
  _L351 = _L216.trainFrontPassesALevelTransitionBorder;
  _L352 = _L216.trainFrontPassesA_RBC_RBC_border;
  _L353 = _L216.trainFrontPassesStartOfAnnouncedRadioHole;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L345,
    p42_sessionManagement);
  _L347 = _L345.valid;
  _L340 = _L345.q_rbc;
  _L348 = Q_RBC_Terminate_communication_session;
  _L343 = _L340 == _L348;
  _L316 = mode;
  _L334 = /* 2 */
    validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(&_L345, _L316);
  _L338 = _L345.msgSrc;
  _L324 = msrc_Euroradio_Common_Types_Pkg;
  _L341 = _L338 == _L324;
  _L327 = msrc_Eurobalise_Common_Types_Pkg;
  _L319 = _L338 == _L327;
  _L332 = msrc_RadioInfillUnit_Common_Types_Pkg;
  _L328 = _L338 == _L332;
  _L368 = msrc_OBU_Common_Types_Pkg;
  _L369 = _L338 == _L368;
  _L318 = _L341 | _L319 | _L328 | _L369;
  _L317 = _L347 & _L343 & _L334 & _L318;
  orderToTerminateSessionReceivedFromTrack = _L317;
  _L349 = orderToTerminateSessionReceivedFromTrack;
  _L337 = Q_RBC_Establish_communication_session;
  _L321 = _L340 == _L337;
  _L326 = _L345.nid_c;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L323, sessionStatus);
  _L331 = _L323.nid_c;
  _L333 = _L326 == _L331;
  _L346 = _L323.nid_rbc;
  _L329 = _L345.nid_RBC;
  _L330 = _L346 == _L329;
  _L335 = _L333 & _L330;
  _L339 = !_L335;
  _L344 = _L323.valid;
  _L322 = _L323.phase;
  _L320 = sp_terminated_RCM_Session_Types_Pkg;
  _L342 = _L322 != _L320;
  _L336 = _L339 & _L344 & _L342;
  _L325 = _L347 & _L321 & _L334 & _L318 & _L336;
  orderToEstablishSessionWithDifferentRBCReceivedFromTrack = _L325;
  _L350 = orderToEstablishSessionWithDifferentRBCReceivedFromTrack;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L389, connectionStatus);
  _L397 = _L389.valid;
  _L391 = _L389.connectionLost;
  _L394 = _L397 & _L391;
  connectionLost = _L394;
  _L384 = connectionLost;
  /* 2 */ RisingEdge_digital(_L384, &outC->Context_2);
  _L380 = outC->Context_2.RE_Output;
  _L390 = !_L391;
  _L392 = _L397 & _L390;
  connectedAgain = _L392;
  _L388 = connectedAgain;
  _L387 = currentTime;
  _L385 = kcg_false;
  _L393 = maxTimeToMaintainCommSession;
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    _L380,
    _L388,
    _L387,
    _L385,
    _L393,
    &outC->_1_Context_1);
  _L395 = outC->_1_Context_1.expired;
  _L396 = outC->_1_Context_1.started;
  considerSessionAsTerminated = _L395;
  _L399 = considerSessionAsTerminated;
  _L215 = _L214 | _L217 | _L351 | _L352 | _L353 | _L349 | _L350 | _L399;
  repeatStopCondition = _L215;
  /* sel_repeat_SM */ switch (repeat_SM_state_sel) {
    case SSM_st_rep_inactive_repeat_SM :
      /* cb_anon_sm */ if (br_1_clock_repeat_SM_rep_inactive) {
        sRepeat = kcg_true;
      }
      else /* cb_anon_sm */ if (br_2_clock_repeat_SM_rep_inactive) {
        sRepeat = kcg_true;
      }
      else {
        sRepeat = kcg_false;
      }
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      /* cb_anon_sm */ if (br_1_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
        sRepeat = kcg_false;
      }
      else /* cb_anon_sm */ if (br_2_clock_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
        sRepeat = kcg_true;
      }
      else {
        sRepeat = kcg_false;
      }
      break;
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet =
        repeatStopCondition | reset;
      br_1_clock_repeat_SM_rep_repeatUntilStopConditionMet =
        br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet;
      br_2_guard_repeat_SM_rep_repeatUntilStopConditionMet = triggerRepeat;
      /* cb_anon_sm */ if (br_1_clock_repeat_SM_rep_repeatUntilStopConditionMet) {
        sRepeat = kcg_false;
      }
      else {
        br_2_clock_repeat_SM_rep_repeatUntilStopConditionMet =
          br_2_guard_repeat_SM_rep_repeatUntilStopConditionMet;
        /* cb_anon_sm */ if (br_2_clock_repeat_SM_rep_repeatUntilStopConditionMet) {
          sRepeat = kcg_true;
        }
        else {
          sRepeat = kcg_false;
        }
      }
      break;
    
  }
  /* init_repeat_SM */ if (outC->init) {
    repeat_SM_reset_sel = kcg_false;
  }
  else {
    repeat_SM_reset_sel = outC->repeat_SM_reset_nxt;
  }
  /* init_repeat_SM */ if (outC->init) {
    repeat_SM_reset_prv = kcg_false;
  }
  else {
    repeat_SM_reset_prv = outC->repeat_SM_reset_act;
  }
  /* sel_repeat_SM */ switch (repeat_SM_state_sel) {
    case SSM_st_rep_inactive_repeat_SM :
      if (br_1_guard_repeat_SM_rep_inactive) {
        _17_repeat_SM_state_act =
          SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      else if (br_2_guard_repeat_SM_rep_inactive) {
        _17_repeat_SM_state_act =
          SSM_st_rep_repeatUntilStopConditionMet_repeat_SM;
      }
      else {
        _17_repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
      }
      _25_repeat_SM_state_act = _17_repeat_SM_state_act;
      if (br_1_guard_repeat_SM_rep_inactive) {
        _18_repeat_SM_reset_act = kcg_true;
      }
      else {
        _18_repeat_SM_reset_act = br_2_guard_repeat_SM_rep_inactive;
      }
      outC->repeat_SM_reset_act = _18_repeat_SM_reset_act;
      if (br_1_guard_repeat_SM_rep_inactive) {
        _19_repeat_SM_fired_strong = SSM_TR_rep_inactive_1_repeat_SM;
      }
      else if (br_2_guard_repeat_SM_rep_inactive) {
        _19_repeat_SM_fired_strong = SSM_TR_rep_inactive_2_repeat_SM;
      }
      else {
        _19_repeat_SM_fired_strong = SSM_TR_no_trans_repeat_SM;
      }
      _24_repeat_SM_fired_strong = _19_repeat_SM_fired_strong;
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      if (br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
        _14_repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
      }
      else {
        _14_repeat_SM_state_act =
          SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      }
      _25_repeat_SM_state_act = _14_repeat_SM_state_act;
      if (br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
        _15_repeat_SM_reset_act = kcg_true;
      }
      else {
        _15_repeat_SM_reset_act =
          br_2_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes;
      }
      outC->repeat_SM_reset_act = _15_repeat_SM_reset_act;
      if (br_1_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
        _16_repeat_SM_fired_strong =
          SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_repeat_SM;
      }
      else if (br_2_guard_repeat_SM_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes) {
        _16_repeat_SM_fired_strong =
          SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_repeat_SM;
      }
      else {
        _16_repeat_SM_fired_strong = SSM_TR_no_trans_repeat_SM;
      }
      _24_repeat_SM_fired_strong = _16_repeat_SM_fired_strong;
      break;
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      if (br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet) {
        repeat_SM_state_act = SSM_st_rep_inactive_repeat_SM;
      }
      else {
        repeat_SM_state_act = SSM_st_rep_repeatUntilStopConditionMet_repeat_SM;
      }
      _25_repeat_SM_state_act = repeat_SM_state_act;
      if (br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet) {
        repeat_SM_reset_act = kcg_true;
      }
      else {
        repeat_SM_reset_act =
          br_2_guard_repeat_SM_rep_repeatUntilStopConditionMet;
      }
      outC->repeat_SM_reset_act = repeat_SM_reset_act;
      if (br_1_guard_repeat_SM_rep_repeatUntilStopConditionMet) {
        repeat_SM_fired_strong =
          SSM_TR_rep_repeatUntilStopConditionMet_1_repeat_SM;
      }
      else if (br_2_guard_repeat_SM_rep_repeatUntilStopConditionMet) {
        repeat_SM_fired_strong =
          SSM_TR_rep_repeatUntilStopConditionMet_2_repeat_SM;
      }
      else {
        repeat_SM_fired_strong = SSM_TR_no_trans_repeat_SM;
      }
      _24_repeat_SM_fired_strong = repeat_SM_fired_strong;
      break;
    
  }
  /* act_repeat_SM */ switch (_25_repeat_SM_state_act) {
    case SSM_st_rep_inactive_repeat_SM :
      _11_repeat_SM_state_nxt = SSM_st_rep_inactive_repeat_SM;
      outC->repeat_SM_state_nxt = _11_repeat_SM_state_nxt;
      _12_repeat_SM_reset_nxt = kcg_false;
      outC->repeat_SM_reset_nxt = _12_repeat_SM_reset_nxt;
      _13_repeat_SM_fired = _24_repeat_SM_fired_strong;
      _23_repeat_SM_fired = _13_repeat_SM_fired;
      break;
    case SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM :
      _8_repeat_SM_state_nxt =
        SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
      outC->repeat_SM_state_nxt = _8_repeat_SM_state_nxt;
      _9_repeat_SM_reset_nxt = kcg_false;
      outC->repeat_SM_reset_nxt = _9_repeat_SM_reset_nxt;
      _10_repeat_SM_fired = _24_repeat_SM_fired_strong;
      _23_repeat_SM_fired = _10_repeat_SM_fired;
      break;
    case SSM_st_rep_repeatUntilStopConditionMet_repeat_SM :
      repeat_SM_state_nxt = SSM_st_rep_repeatUntilStopConditionMet_repeat_SM;
      outC->repeat_SM_state_nxt = repeat_SM_state_nxt;
      repeat_SM_reset_nxt = kcg_false;
      outC->repeat_SM_reset_nxt = repeat_SM_reset_nxt;
      repeat_SM_fired = _24_repeat_SM_fired_strong;
      _23_repeat_SM_fired = repeat_SM_fired;
      break;
    
  }
  _L372 = _L322 == _L320;
  _L400 = sp_establishing_RCM_Session_Types_Pkg;
  _L401 = _L322 == _L400;
  _L402 = _L372 | _L401;
  _L373 = _L402 & _L344;
  _L371 = _L373 | _L336;
  _L370 = _L347 & _L321 & _L334 & _L318 & _L371;
  orderToEstablishSessionReceivedFromOBU = _L370;
  _L381 = noOfRetriesToEstablishASafeRadioConnection;
  noname = _L381;
  _20_noname = _L396;
  IfBlock1_clock = disconnect;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _22_else_clock_IfBlock1 = sRepeat;
    /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
      _L1127_IfBlock1 = kcg_true;
      kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
        &_L529_IfBlock1,
        connectionStatus);
      _L3_IfBlock1 = _L529_IfBlock1.mobileDeviceNo;
      _L1_IfBlock1 = mca_connect_RCM_Types_Pkg;
      _L10_IfBlock1 = orderToEstablishSessionReceivedFromOBU;
    }
    else {
      _21_else_clock_IfBlock1 =
        (*eventsPhases).trainFrontPassesStartOfAnnouncedRadioHole;
      /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
        _L22_IfBlock1 = kcg_true;
        kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
          &_L15_IfBlock1,
          connectionStatus);
        _L16_IfBlock1 = _L15_IfBlock1.mobileDeviceNo;
        _L1430_IfBlock1 = mca_expectRadioHole_RCM_Types_Pkg;
        _L21_IfBlock1 = _L15_IfBlock1.nid_radio;
        _L19_IfBlock1.valid = _L22_IfBlock1;
        _L19_IfBlock1.mobileDeviceNo = _L16_IfBlock1;
        _L19_IfBlock1.action = _L1430_IfBlock1;
        _L19_IfBlock1.nid_radio = _L21_IfBlock1;
        kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
          &_5_connectionCmd,
          &_L19_IfBlock1);
        kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
          &_2_connectionCmd,
          &_5_connectionCmd);
      }
      else {
        else_clock_IfBlock1 =
          (*eventsPhases).trainFrontReachesEndOfAnnouncedRadioHole;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L1131_IfBlock1 = kcg_true;
          kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
            &_L1035_IfBlock1,
            connectionStatus);
          _L6_IfBlock1 = _L1035_IfBlock1.mobileDeviceNo;
          _L532_IfBlock1 = mca_unexpectRadioHole_RCM_Types_Pkg;
          _L733_IfBlock1 = _L1035_IfBlock1.nid_radio;
          _L834_IfBlock1.valid = _L1131_IfBlock1;
          _L834_IfBlock1.mobileDeviceNo = _L6_IfBlock1;
          _L834_IfBlock1.action = _L532_IfBlock1;
          _L834_IfBlock1.nid_radio = _L733_IfBlock1;
          kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
            &_7_connectionCmd,
            &_L834_IfBlock1);
          kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
            &_4_connectionCmd,
            &_7_connectionCmd);
        }
        else {
          _L24_IfBlock1 = kcg_false;
          kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
            &_L1637_IfBlock1,
            connectionStatus);
          _L2138_IfBlock1 = _L1637_IfBlock1.mobileDeviceNo;
          _L1536_IfBlock1 = mca_nop_RCM_Types_Pkg;
          _L2239_IfBlock1 = _L1637_IfBlock1.nid_radio;
          _L23_IfBlock1.valid = _L24_IfBlock1;
          _L23_IfBlock1.mobileDeviceNo = _L2138_IfBlock1;
          _L23_IfBlock1.action = _L1536_IfBlock1;
          _L23_IfBlock1.nid_radio = _L2239_IfBlock1;
          kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
            &_6_connectionCmd,
            &_L23_IfBlock1);
          kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
            &_4_connectionCmd,
            &_6_connectionCmd);
        }
        kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
          &_2_connectionCmd,
          &_4_connectionCmd);
      }
    }
  }
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L405,
    (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
      &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&InitVal_1, &_L405);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L9_1, &InitVal_1);
  /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L5_1, &_L9_1);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L5_1, &outC->_L8_1);
  }
  _L404 = reset;
  Reset_1 = _L404;
  _L1_1 = Reset_1;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L2_1, &InitVal_1);
  MemCond_1 = _L347;
  _L3_1 = MemCond_1;
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&M_Input_1, &_L345);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L6_1, &M_Input_1);
  /* 4 */ if (_L3_1) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L7_1, &_L6_1);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L7_1, &_L5_1);
  }
  /* 1 */ if (_L1_1) {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&outC->_L8_1, &_L2_1);
  }
  else {
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&outC->_L8_1, &_L7_1);
  }
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&Out_1, &outC->_L8_1);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L403, &Out_1);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &p42_sessionManagement_mem,
    &_L403);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L14_IfBlock1 = kcg_true;
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
      &_L5_IfBlock1,
      connectionStatus);
    _L4_IfBlock1 = _L5_IfBlock1.mobileDeviceNo;
    _L11_IfBlock1 = mca_disconnect_RCM_Types_Pkg;
    _L7_IfBlock1 = _L5_IfBlock1.nid_radio;
    _L12_IfBlock1.valid = _L14_IfBlock1;
    _L12_IfBlock1.mobileDeviceNo = _L4_IfBlock1;
    _L12_IfBlock1.action = _L11_IfBlock1;
    _L12_IfBlock1.nid_radio = _L7_IfBlock1;
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &_1_connectionCmd,
      &_L12_IfBlock1);
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &outC->connectionCmd,
      &_1_connectionCmd);
  }
  else {
    /* ck_anon_activ */ if (_22_else_clock_IfBlock1) {
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &_L1226_IfBlock1,
        &p42_sessionManagement_mem);
      _L9_IfBlock1 = _L1226_IfBlock1.nid_radio;
      _L2_IfBlock1 = _L529_IfBlock1.nid_radio;
      /* 5 */ if (_L10_IfBlock1) {
        _L428_IfBlock1 = _L9_IfBlock1;
      }
      else {
        _L428_IfBlock1 = _L2_IfBlock1;
      }
      _L8_IfBlock1.valid = _L1127_IfBlock1;
      _L8_IfBlock1.mobileDeviceNo = _L3_IfBlock1;
      _L8_IfBlock1.action = _L1_IfBlock1;
      _L8_IfBlock1.nid_radio = _L428_IfBlock1;
      kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
        &_3_connectionCmd,
        &_L8_IfBlock1);
      kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
        &connectionCmd,
        &_3_connectionCmd);
    }
    else {
      kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
        &connectionCmd,
        &_2_connectionCmd);
    }
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &outC->connectionCmd,
      &connectionCmd);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

