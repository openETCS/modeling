/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg.h"

void MLRI__ManageBaliseInfomation_reset_ManageBaliseInfomation_Integration_Pkg(
  MLRI__outC_ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg *outC)
{
  /* 1 */ MLRI__BuildBGMessage_reset_BuildBGMessage_Pkg(&outC->Context_1);
}

/* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation */
void MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg(
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::API_balise */MLRI__API_Telegram_T_API_Msg_Pkg *API_balise,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::ActualOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::reset */kcg_bool reset,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::Train_Data */MLRI__trainData_T_TIU_Types_Pkg *Train_Data,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::storedBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::trainPosition */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::trainStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *trainStatus,
  MLRI__outC_ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg *outC)
{
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::_L38 */ MLRI__centerOfBalisePosition_T_BG_Types_Pkg _L38;
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::_L37 */ MLRI__Telegram_T_BG_Types_Pkg _L37;
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::_L36 */ kcg_bool _L36;
  /* ManageBaliseInfomation_Integration_Pkg::ManageBaliseInfomation::_L64 */ MLRI__passedBG_T_BG_Types_Pkg _L64;
  
  /* 3 */
  MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg(
    API_balise,
    &_L36,
    &_L37,
    &_L38);
  /* 1 */
  MLRI__BuildBGMessage_BuildBGMessage_Pkg(
    reset,
    _L36,
    &_L37,
    &_L38,
    ActualOdometry,
    &outC->Context_1);
  /* 5 */
  MLRI__CheckBGConsistency_CheckBGConsistency_Pkg(
    &outC->Context_1.outBGMessage,
    storedBGs,
    trainPosition,
    trainStatus,
    &_L64,
    &outC->ApplyServiceBrake,
    &outC->BadBaliseMessageToDMI,
    &outC->errorLinkedBG,
    &outC->errorUnlinkedBG);
  /* 3 */
  MLRI__SelectUsableInfo_SelectUsableInfo_Pkg(
    trainStatus,
    &_L64,
    Train_Data,
    &outC->BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

