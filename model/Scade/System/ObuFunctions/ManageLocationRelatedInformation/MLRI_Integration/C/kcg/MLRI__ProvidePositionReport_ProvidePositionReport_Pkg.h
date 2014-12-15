/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__ProvidePositionReport_ProvidePositionReport_Pkg_H_
#define _MLRI__ProvidePositionReport_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.h"
#include "MLRI__CalculateSafeTrainLength_ProvidePositionReport_Pkg.h"
#include "MLRI__CollectData_ProvidePositionReport_Pkg.h"
#include "MLRI__EvaluateTriggerAndEvents_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__PositionReport_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::ProvidePositionReport::posRep */ posRep;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_CalculateSafeTrainLength_ProvidePositionReport_Pkg /* 1 */ _2_Context_1;
  MLRI__outC_EvaluateTriggerAndEvents_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  MLRI__outC_CollectData_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_ProvidePositionReport_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::ProvidePositionReport */
extern void MLRI__ProvidePositionReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainProps */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trackInfo */MLRI__LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *posRepPara,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::systemTime */MLRI__SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::rcbComm */MLRI__RBC_Communication_T_ProvidePositionReport_Pkg *rcbComm,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::directionLRBG */MLRI__BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::prvDirTrain */MLRI__Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::BG_LinkingConsistencyError */kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::LinkedBG_MessageConsistencyError */kcg_bool LinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::UnlinkedBG_MessageConsistencyError */kcg_bool UnlinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioMessageConsistencyError */kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSequenceError */kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSafeRadioConnectionError */kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::SafetyCriticalFailure */kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleLinkingError */kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleRepositioningError */kcg_bool DoubleRepositioningError,
  MLRI__outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC);

extern void MLRI__ProvidePositionReport_reset_ProvidePositionReport_Pkg(
  MLRI__outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__ProvidePositionReport_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__ProvidePositionReport_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

