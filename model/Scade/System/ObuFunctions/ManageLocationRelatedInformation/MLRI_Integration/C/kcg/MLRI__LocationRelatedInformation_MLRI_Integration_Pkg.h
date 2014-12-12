/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__LocationRelatedInformation_MLRI_Integration_Pkg_H_
#define _MLRI__LocationRelatedInformation_MLRI_Integration_Pkg_H_

#include "kcg_types.h"
#include "MLRI__ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg.h"
#include "MLRI__ManageTrainPosition_TrainPosition_Integration_Pkg.h"

/* ========================  input structure  ====================== */
typedef struct {
  MLRI__odometry_T_Obu_BasicTypes_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::currentOdometry */ currentOdometry;
  kcg_bool /* MLRI_Integration_Pkg::LocationRelatedInformation::reset */ reset;
  MLRI__SystemTime_T_ProvidePositionReport_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::systemTime */ systemTime;
  MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::posRepPara */ posRepPara;
  MLRI__trainProperties_T_TrainPosition_Types_Pck /* MLRI_Integration_Pkg::LocationRelatedInformation::trainProps */ trainProps;
  MLRI__RBC_Communication_T_ProvidePositionReport_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::rcbComm */ rcbComm;
  MLRI__API_Telegram_T_API_Msg_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::API_balise */ API_balise;
  MLRI__TrainToTrackStatus_T_BG_Types_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::Train2TrackStatus */ Train2TrackStatus;
  MLRI__trainData_T_TIU_Types_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::Train_Data */ Train_Data;
  MLRI__BG_Orientation_T_ProvidePositionReport_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::directionLRBG */ directionLRBG;
  MLRI__Q_DIRTRAIN /* MLRI_Integration_Pkg::LocationRelatedInformation::prvDirTrain */ prvDirTrain;
  MLRI__positionedBG_T_TrainPosition_Types_Pck /* MLRI_Integration_Pkg::LocationRelatedInformation::LRBG */ LRBG;
  MLRI__LocationBasedEvents_T_ProvidePositionReport_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::locationbasedEvents */ locationbasedEvents;
} MLRI__inC_LocationRelatedInformation_MLRI_Integration_Pkg;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__trainPosition_T_TrainPosition_Types_Pck /* MLRI_Integration_Pkg::LocationRelatedInformation::trainPosition */ trainPosition;
  MLRI__positionErrors_T_TrainPosition_Types_Pck /* MLRI_Integration_Pkg::LocationRelatedInformation::trainPosErrors */ trainPosErrors;
  MLRI__positionedBGs_T_TrainPosition_Types_Pck /* MLRI_Integration_Pkg::LocationRelatedInformation::BGs */ BGs;
  kcg_bool /* MLRI_Integration_Pkg::LocationRelatedInformation::ApplyServiceBrake */ ApplyServiceBrake;
  kcg_bool /* MLRI_Integration_Pkg::LocationRelatedInformation::BadBaliseMessageToDMI1 */ BadBaliseMessageToDMI1;
  MLRI__PositionReport_T_ProvidePositionReport_Pkg /* MLRI_Integration_Pkg::LocationRelatedInformation::posRep */ posRep;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_ManageBaliseInfomation_ManageBaliseInfomation_Integration_Pkg /* 6 */ Context_6;
  MLRI__outC_ManageTrainPosition_TrainPosition_Integration_Pkg /* 4 */ Context_4;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_LocationRelatedInformation_MLRI_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MLRI_Integration_Pkg::LocationRelatedInformation */
extern void MLRI__LocationRelatedInformation_MLRI_Integration_Pkg(
  MLRI__inC_LocationRelatedInformation_MLRI_Integration_Pkg *inC,
  MLRI__outC_LocationRelatedInformation_MLRI_Integration_Pkg *outC);

extern void MLRI__LocationRelatedInformation_reset_MLRI_Integration_Pkg(
  MLRI__outC_LocationRelatedInformation_MLRI_Integration_Pkg *outC);

#endif /* _MLRI__LocationRelatedInformation_MLRI_Integration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__LocationRelatedInformation_MLRI_Integration_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

