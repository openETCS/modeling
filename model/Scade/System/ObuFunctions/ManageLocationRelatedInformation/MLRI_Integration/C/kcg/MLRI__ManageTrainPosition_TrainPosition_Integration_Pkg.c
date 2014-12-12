/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg.h"

void MLRI__ManageTrainPosition_reset_TrainPosition_Integration_Pkg(
  MLRI__outC_ManageTrainPosition_TrainPosition_Integration_Pkg *outC)
{
  outC->init = kcg_true;
  /* 5 */
  MLRI__ProvidePositionReport_reset_ProvidePositionReport_Pkg(&outC->Context_5);
  /* 1 */
  MLRI__calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
    &outC->Context_1);
}

/* TrainPosition_Integration_Pkg::ManageTrainPosition */
void MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg(
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
  MLRI__outC_ManageTrainPosition_TrainPosition_Integration_Pkg *outC)
{
  MLRI__passedBG_T_BG_Types_Pkg tmp1;
  MLRI__trainPosition_T_TrainPosition_Types_Pck tmp;
  
  if (outC->init) {
    MLRI__kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp,
      (MLRI__trainPosition_T_TrainPosition_Types_Pck *)
        &MLRI__cTrainPosition_0_CalculateTrainPosition_Pkg);
  }
  else {
    MLRI__kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp,
      &outC->rem_trainPosition);
  }
  /* 1 */
  MLRI__validateDataDirection_ValidateDataDirection_Pkg(
    passedBG,
    LRBG,
    &tmp,
    &tmp1);
  /* 1 */
  MLRI__calculateTrainPosition_CalculateTrainPosition_Pkg(
    currentOdometry,
    &tmp1,
    reset,
    trainProps,
    &outC->Context_1);
  MLRI__kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &outC->Context_1.trainPosition);
  MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->BGs,
    &outC->Context_1.BGs);
  MLRI__kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->trainPosErrors,
    &outC->Context_1.errors);
  /* 5 */
  MLRI__ProvidePositionReport_ProvidePositionReport_Pkg(
    &outC->BGs,
    &outC->trainPosition,
    (MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *)
      &MLRI__cNoTrainPosInfo_TrainPosition_Integration_Pkg,
    trainProps,
    locationbasedEvents,
    posRepPara,
    systemTime,
    rcbComm,
    train2trackStatus,
    directionLRBG,
    prvDirTrain,
    outC->trainPosErrors.BG_LinkingConsistencyError,
    LinkedBG_MessageConsistencyError,
    UnlinkedBG_MessageConsistencyError,
    RadioMessageConsistencyError,
    RadioSequenceError,
    RadioSafeRadioConnectionError,
    SafetyCriticalFailure,
    outC->trainPosErrors.DoubleLinkingError,
    outC->trainPosErrors.DoubleRepositioningError,
    &outC->Context_5);
  MLRI__kcg_copy_PositionReport_T_ProvidePositionReport_Pkg(
    &outC->posRep,
    &outC->Context_5.posRep);
  MLRI__kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->rem_trainPosition,
    &outC->trainPosition);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

