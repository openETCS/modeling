/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EvaluateTriggerAndEvents_ProvidePositionReport_Pkg.h"

void EvaluateTriggerAndEvents_init_ProvidePositionReport_Pkg(
  outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC)
{
  outC->trigger = kcg_true;
  EvaluateEvents_init_ProvidePositionReport_Pkg(&outC->Context_1);
  EvaluateTrigger_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
}


void EvaluateTriggerAndEvents_reset_ProvidePositionReport_Pkg(
  outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ EvaluateTrigger_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ EvaluateEvents_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}

/* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents */
void EvaluateTriggerAndEvents_ProvidePositionReport_Pkg(
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
  outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC)
{
  /* 1 */
  EvaluateEvents_ProvidePositionReport_Pkg(
    trackInfo,
    trainPos,
    posBGs,
    rbcComm,
    train2trackStatus,
    odometry,
    modeLevelStatus,
    &outC->Context_1);
  /* 1 */
  EvaluateTrigger_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    posRepPara,
    systemTime,
    minSafeRearEnd,
    &outC->_1_Context_1);
  outC->trigger = outC->Context_1.result | outC->_1_Context_1.result;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** EvaluateTriggerAndEvents_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

