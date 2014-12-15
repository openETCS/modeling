/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg_H_
#define _MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg_H_

#include "kcg_types.h"
#include "MLRI__validateDataDirection_ValidateDataDirection_Pkg.h"
#include "MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg.h"
#include "MLRI__ProvidePositionReport_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__PositionReport_T_ProvidePositionReport_Pkg /* TrainPosition_Integration_Pkg::ManageTrainPosition::posRep */ posRep;
  MLRI__trainPosition_T_TrainPosition_Types_Pck /* TrainPosition_Integration_Pkg::ManageTrainPosition::trainPosition */ trainPosition;
  MLRI__positionErrors_T_TrainPosition_Types_Pck /* TrainPosition_Integration_Pkg::ManageTrainPosition::trainPosErrors */ trainPosErrors;
  MLRI__positionedBGs_T_TrainPosition_Types_Pck /* TrainPosition_Integration_Pkg::ManageTrainPosition::BGs */ BGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MLRI__trainPosition_T_TrainPosition_Types_Pck /* TrainPosition_Integration_Pkg::ManageTrainPosition::trainPosition */ rem_trainPosition;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_calculateTrainPosition_CalculateTrainPosition_Pkg /* 1 */ Context_1;
  MLRI__outC_ProvidePositionReport_ProvidePositionReport_Pkg /* 5 */ Context_5;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_ManageTrainPosition_TrainPosition_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TrainPosition_Integration_Pkg::ManageTrainPosition */
extern void MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg(
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::LRBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::systemTime */MLRI__SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::posRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *posRepPara,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::locationbasedEvents */MLRI__LocationBasedEvents_T_ProvidePositionReport_Pkg *locationbasedEvents,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::trainProps */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::rcbComm */MLRI__RBC_Communication_T_ProvidePositionReport_Pkg *rcbComm,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::directionLRBG */MLRI__BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::prvDirTrain */MLRI__Q_DIRTRAIN prvDirTrain,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::BG_LinkingConsistencyError */kcg_bool BG_LinkingConsistencyError,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::LinkedBG_MessageConsistencyError */kcg_bool LinkedBG_MessageConsistencyError,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::UnlinkedBG_MessageConsistencyError */kcg_bool UnlinkedBG_MessageConsistencyError,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::RadioMessageConsistencyError */kcg_bool RadioMessageConsistencyError,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::RadioSequenceError */kcg_bool RadioSequenceError,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::RadioSafeRadioConnectionError */kcg_bool RadioSafeRadioConnectionError,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::SafetyCriticalFailure */kcg_bool SafetyCriticalFailure,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::DoubleLinkingError */kcg_bool DoubleLinkingError,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::DoubleRepositioningError */kcg_bool DoubleRepositioningError,
  /* TrainPosition_Integration_Pkg::ManageTrainPosition::reset */kcg_bool reset,
  MLRI__outC_ManageTrainPosition_TrainPosition_Integration_Pkg *outC);

extern void MLRI__ManageTrainPosition_reset_TrainPosition_Integration_Pkg(
  MLRI__outC_ManageTrainPosition_TrainPosition_Integration_Pkg *outC);

#endif /* _MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

