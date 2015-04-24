/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _EvaluateTriggerAndEvents_ProvidePositionReport_Pkg_H_
#define _EvaluateTriggerAndEvents_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "EvaluateEvents_ProvidePositionReport_Pkg.h"
#include "EvaluateTrigger_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EvaluateTrigger_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  outC_EvaluateEvents_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents */
extern void EvaluateTriggerAndEvents_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::posRepPara */ PositionReportParameter_T_Common_Types_Pkg *posRepPara,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::rbcComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::minSafeRearEnd */ kcg_int minSafeRearEnd,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC);

extern void EvaluateTriggerAndEvents_reset_ProvidePositionReport_Pkg(
  outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC);
extern void EvaluateTriggerAndEvents_init_ProvidePositionReport_Pkg(
  outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC);

#endif /* _EvaluateTriggerAndEvents_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** EvaluateTriggerAndEvents_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

