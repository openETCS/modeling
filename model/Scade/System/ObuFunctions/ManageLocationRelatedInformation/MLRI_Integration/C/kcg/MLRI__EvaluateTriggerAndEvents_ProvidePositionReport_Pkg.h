/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__EvaluateTriggerAndEvents_ProvidePositionReport_Pkg_H_
#define _MLRI__EvaluateTriggerAndEvents_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__EvaluateEvents_ProvidePositionReport_Pkg.h"
#include "MLRI__EvaluateTrigger_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trigger */ trigger;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_EvaluateEvents_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  MLRI__outC_EvaluateTrigger_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents */
extern void MLRI__EvaluateTriggerAndEvents_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::posRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *posRepPara,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::systemTime */MLRI__SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::rbcComm */MLRI__RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::minSafeRearEnd */kcg_int minSafeRearEnd,
  /* ProvidePositionReport_Pkg::EvaluateTriggerAndEvents::trackInfo */MLRI__LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  MLRI__outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC);

extern void MLRI__EvaluateTriggerAndEvents_reset_ProvidePositionReport_Pkg(
  MLRI__outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__EvaluateTriggerAndEvents_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__EvaluateTriggerAndEvents_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

