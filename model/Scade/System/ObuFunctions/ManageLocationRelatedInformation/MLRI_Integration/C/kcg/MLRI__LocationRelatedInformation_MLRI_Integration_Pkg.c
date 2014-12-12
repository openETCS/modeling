/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__LocationRelatedInformation_MLRI_Integration_Pkg.h"

void MLRI__LocationRelatedInformation_reset_MLRI_Integration_Pkg(
  MLRI__outC_LocationRelatedInformation_MLRI_Integration_Pkg *outC)
{
  outC->init = kcg_true;
  /* 4 */
  MLRI__ManageTrainPosition_reset_TrainPosition_Integration_Pkg(
    &outC->Context_4);
  /* 6 */
  MLRI__ManageBaliseInfomation_reset_ManageBaliseInfomation_Integration_Pkg(
    &outC->Context_6);
}

/* MLRI_Integration_Pkg::LocationRelatedInformation */
void MLRI__LocationRelatedInformation_MLRI_Integration_Pkg(
  MLRI__inC_LocationRelatedInformation_MLRI_Integration_Pkg *inC,
  MLRI__outC_LocationRelatedInformation_MLRI_Integration_Pkg *outC)
{
  MLRI__positionedBGs_T_TrainPosition_Types_Pck tmp1;
  MLRI__trainPosition_T_TrainPosition_Types_Pck tmp;
  
  if (outC->init) {
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &tmp1,
      (MLRI__positionedBGs_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBGs_CalculateTrainPosition_Pkg);
    MLRI__kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp,
      (MLRI__trainPosition_T_TrainPosition_Types_Pck *)
        &MLRI__cTrainPosition_0_CalculateTrainPosition_Pkg);
  }
  else {
    MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp1, &outC->BGs);
    MLRI__kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp,
      &outC->trainPosition);
  }
  /* 6 */
  MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg(
    &inC->API_balise,
    &inC->currentOdometry,
    inC->reset,
    &inC->Train_Data,
    &tmp1,
    &tmp,
    &inC->Train2TrackStatus,
    &outC->Context_6);
  outC->ApplyServiceBrake = outC->Context_6.ApplyServiceBrake;
  outC->BadBaliseMessageToDMI1 = outC->Context_6.BadBaliseMessageToDMI;
  /* 4 */
  MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg(
    &inC->currentOdometry,
    &outC->Context_6.BG_Message,
    &inC->LRBG,
    inC->systemTime,
    &inC->posRepPara,
    &inC->locationbasedEvents,
    &inC->trainProps,
    &inC->rcbComm,
    &inC->Train2TrackStatus,
    inC->directionLRBG,
    inC->prvDirTrain,
    kcg_false,
    outC->Context_6.errorLinkedBG,
    outC->Context_6.errorUnlinkedBG,
    kcg_false,
    kcg_false,
    kcg_false,
    kcg_false,
    kcg_false,
    kcg_false,
    inC->reset,
    &outC->Context_4);
  MLRI__kcg_copy_PositionReport_T_ProvidePositionReport_Pkg(
    &outC->posRep,
    &outC->Context_4.posRep);
  MLRI__kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &outC->Context_4.trainPosition);
  MLRI__kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->trainPosErrors,
    &outC->Context_4.trainPosErrors);
  MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->BGs,
    &outC->Context_4.BGs);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__LocationRelatedInformation_MLRI_Integration_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

