/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _handOverSequencer_Handover_Pkg_handoverUtils_Pkg_H_
#define _handOverSequencer_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "Read_P045_TM.h"
#include "Read_P042_TM.h"
#include "checkSessionCmd_Handover_Pkg_handoverUtils_Pkg.h"
#include "p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_acceptingRBC */ p42_sessionCmd_for_acceptingRBC;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_sessionCmd_for_handingOverRBC */ p42_sessionCmd_for_handingOverRBC;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_handingOverRBC */ p45_radioNetworkRegistrationOrder_for_handingOverRBC;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_for_acceptingRBC */ p45_radioNetworkRegistrationOrder_for_acceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_handingOverRBC */ sendPositionReport_2_handingOverRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendPositionReport_2_acceptingRBC */ sendPositionReport_2_acceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sendTrainData_2_acceptingRBC */ sendTrainData_2_acceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::useInformationFromAcceptingRBC */ useInformationFromAcceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::bufferInformationFromAcceptingRBC */ bufferInformationFromAcceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverInprogress */ handoverInprogress;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::handoverFinished */ handoverFinished;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::notReady */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init4;
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  struct_172526 /* linear::Memory::_L8 */ _L8_1;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::establishSessionWithAcceptingRBCOrdered */ establishSessionWithAcceptingRBCOrdered_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */ handOver_with_2_Sessions_SM_reset_nxt_IfBlock1;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */ handOver_with_2_Sessions_SM_reset_act_IfBlock1;
  SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */ handOver_with_2_Sessions_SM_state_nxt_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc */ _5_p45_radioNetworkRegistrationOrder_2_handingOverRBC_loc_IfBlock1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::p131_transitionOrder_loc */ p131_transitionOrder_loc_IfBlock1;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */ handOver_with_1_Session_SM_reset_nxt_IfBlock1;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */ handOver_with_1_Session_SM_reset_act_IfBlock1;
  SSM_ST_handOver_with_1_Session_SM_IfBlock1 /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */ handOver_with_1_Session_SM_state_nxt_IfBlock1;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 4 */ Context_4;
  outC_RisingEdge_digital /* 9 */ Context_9;
  outC_RisingEdge_digital /* 28 */ Context_28;
  outC_RisingEdge_digital /* 26 */ Context_26;
  outC_RisingEdge_digital /* 8 */ Context_8;
  outC_RisingEdge_digital /* 5 */ Context_5;
  /* ----------------- no clocks of observable data ------------------ */
} outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer */
extern void handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p45_radioNetworkRegistrationOrder_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_in,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p131_transitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::p42_terminateCmd_from_handingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromAcceptingRBC */ morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::morcStatusFromHandingOverRBC */ morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::maxSafeFrontEndPassesHandOverLocation */ kcg_bool maxSafeFrontEndPassesHandOverLocation,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::minSafeReadEndPassesHandOverLocation */ kcg_bool minSafeReadEndPassesHandOverLocation,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::mode */ M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void handOverSequencer_init_Handover_Pkg_handoverUtils_Pkg(
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _handOverSequencer_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** handOverSequencer_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

