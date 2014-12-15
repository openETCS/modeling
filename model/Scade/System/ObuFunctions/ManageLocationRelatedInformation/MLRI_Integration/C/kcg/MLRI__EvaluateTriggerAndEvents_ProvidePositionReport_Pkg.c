/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__EvaluateTriggerAndEvents_ProvidePositionReport_Pkg.h"

void MLRI__EvaluateTriggerAndEvents_reset_ProvidePositionReport_Pkg(
  MLRI__outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC)
{
  /* 1 */
  MLRI__EvaluateTrigger_reset_ProvidePositionReport_Pkg(&outC->Context_1);
  /* 1 */
  MLRI__EvaluateEvents_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
}

/* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents */
void MLRI__EvaluateTriggerAndEvents_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::posRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *posRepPara,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::systemTime */MLRI__SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::rbcComm */MLRI__RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::minSafeRearEnd */kcg_int minSafeRearEnd,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trackInfo */MLRI__LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  MLRI__outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC)
{
  /* 1 */
  MLRI__EvaluateEvents_ProvidePositionReport_Pkg(
    trackInfo,
    trainPos,
    posBGs,
    rbcComm,
    train2trackStatus,
    trainPosInfo,
    &outC->_1_Context_1);
  /* 1 */
  MLRI__EvaluateTrigger_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    posRepPara,
    systemTime,
    minSafeRearEnd,
    &outC->Context_1);
  outC->trigger = outC->_1_Context_1.result | outC->Context_1.result;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__EvaluateTriggerAndEvents_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

