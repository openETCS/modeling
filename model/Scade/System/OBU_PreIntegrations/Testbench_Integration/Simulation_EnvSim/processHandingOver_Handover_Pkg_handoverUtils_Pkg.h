/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _processHandingOver_Handover_Pkg_handoverUtils_Pkg_H_
#define _processHandingOver_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"
#include "processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg.h"
#include "mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.h"
#include "radioStatusRouter_Handover_Pkg_handoverUtils_Pkg.h"
#include "fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.h"
#include "splitInputData_Handover_Pkg_handoverUtils_Pkg.h"
#include "determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg.h"
#include "indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "EitherEdge_digital.h"
#include "locReachedOrPassed_BasicLocationFunctions_Pkg.h"
#include "handOverSequencer_Handover_Pkg_handoverUtils_Pkg.h"
#include "changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sessionCmds_2_MoRC_1 */ sessionCmds_2_MoRC_1;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sessionCmds_2_MoRC_2 */ sessionCmds_2_MoRC_2;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sendPositionReport_2_handingOverRBC */ sendPositionReport_2_handingOverRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sendPositionReport_2_acceptingRBC */ sendPositionReport_2_acceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sendTrainData_2_acceptingRBC */ sendTrainData_2_acceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::bufferInformationFromAcceptingRBC */ bufferInformationFromAcceptingRBC;
  connection_ids_T_Handover_Pkg /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::supervisingRBC */ supervisingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::useInformationFromAcceptingRBC */ useInformationFromAcceptingRBC;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::handingOverMobile_is_mobile_1 */ handingOverMobile_is_mobile_1;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainPassesA_RBC_RBC_border_WithItsFrontEnd */ trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::notReady */ notReady;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::handoverInprogress */ handoverInprogress;
  kcg_bool /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::handoverFinished */ handoverFinished;
  p131_q_rbcTransitionOrder_T_Handover_Pkg /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L200 */ _L200;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg /* 3 */ Context_3;
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg /* 1 */ _3_Context_1;
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg /* 2 */ _2_Context_2;
  outC_handOverSequencer_Handover_Pkg_handoverUtils_Pkg /* 1 */ _1_Context_1;
  outC_EitherEdge_digital /* 1 */ Context_1;
  outC_EitherEdge_digital /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::processHandingOver */
extern void processHandingOver_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::mode */M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_1 */morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_2 */morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::dataFromTrack_in */msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC);

extern void processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC);

#endif /* _processHandingOver_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** processHandingOver_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

