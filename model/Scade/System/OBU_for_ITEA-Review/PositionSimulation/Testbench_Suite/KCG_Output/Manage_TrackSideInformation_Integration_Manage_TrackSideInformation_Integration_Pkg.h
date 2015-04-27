/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg_H_
#define _Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg_H_

#include "kcg_types.h"
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"
#include "getParameterPositionReport_packagesSupport_Pkg.h"
#include "getRadioManagement_packagesSupport_Pkg.h"
#include "CheckEuroRadioMessage.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"
#include "InformationFilter_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outputMessage */ outputMessage;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ApplyServiceBrake */ ApplyServiceBrake;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::BadBaliseMessageToDMI */ BadBaliseMessageToDMI;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::errorLinkedBG */ errorLinkedBG;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::errorUnlinkedBG */ errorUnlinkedBG;
  PositionReportParameter_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outPositionParams */ outPositionParams;
  radioManagementMessage_T_Common_Types_Pkg /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::outRadioManagement */ outRadioManagement;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::radioSequenceError */ radioSequenceError;
  kcg_bool /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::radioMessageConsistencyError */ radioMessageConsistencyError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InformationFilter_InformationFilter_Pkg /* 3 */ Context_3;
  outC_CheckEuroRadioMessage /* 2 */ Context_2;
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration */
extern void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::fullChecks */ kcg_bool fullChecks,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::API_trackSide_Message */ API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::ActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::reset */ kcg_bool reset,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::modeAndLevel */ ModeAndLevelStatus_T_BG_Types_Pkg *modeAndLevel,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::tNvContact */ T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::connectionStatus */ sessionStatus_Type_Radio_Types_Pkg connectionStatus,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inSupervisingRbcId */ kcg_int inSupervisingRbcId,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::inAnnouncedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC);

extern void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC);
extern void Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC);

#endif /* _Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

