/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _brl_BRL_Pkg_H_
#define _brl_BRL_Pkg_H_

#include "kcg_types.h"
#include "Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"
#include "MoRC_Main_MoRC_Pck.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* BRL_Pkg::brl::applyServiceBrake */ applyServiceBrake;
  kcg_bool /* BRL_Pkg::brl::badBaliseMessageToDMI */ badBaliseMessageToDMI;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* BRL_Pkg::brl::positionReport */ positionReport;
  ReceivedMessage_T_Common_Types_Pkg /* BRL_Pkg::brl::outputMessage */ outputMessage;
  positionedBGs_T_TrainPosition_Types_Pck /* BRL_Pkg::brl::BGs */ BGs;
  kcg_bool /* BRL_Pkg::brl::ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession */ ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession;
  mobileHWCmd_Type_MoRC_Pck /* BRL_Pkg::brl::cmdsToMobile */ cmdsToMobile;
  mobileSWStatus_Type_MoRC_Pck /* BRL_Pkg::brl::mobileSWStatus */ mobileSWStatus;
  kcg_bool /* BRL_Pkg::brl::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* BRL_Pkg::brl::currentRadioNetworkID */ currentRadioNetworkID;
  kcg_bool /* BRL_Pkg::brl::orderTheRegistrationOfItsConnectedMobiles */ orderTheRegistrationOfItsConnectedMobiles;
  kcg_bool /* BRL_Pkg::brl::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  kcg_bool /* BRL_Pkg::brl::InformTheDriverThatNoConnectionWasSetup */ InformTheDriverThatNoConnectionWasSetup;
  safeRadioConnectionStatusValid_Type_MoRC_Pck /* BRL_Pkg::brl::safeRadioConnectionStatus_toDriver */ safeRadioConnectionStatus_toDriver;
  kcg_bool /* BRL_Pkg::brl::sessionSuccessfullyEstablished */ sessionSuccessfullyEstablished;
  kcg_bool /* BRL_Pkg::brl::requestTheSetupOfASafeRadioConnection */ requestTheSetupOfASafeRadioConnection;
  kcg_bool /* BRL_Pkg::brl::requestReleaseOfSafeRadioConnectionWithTrackside */ requestReleaseOfSafeRadioConnectionWithTrackside;
  sessionStatus_Type_Radio_Types_Pkg /* BRL_Pkg::brl::sessionStatus */ sessionStatus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* BRL_Pkg::brl::MessageToRBC */ MessageToRBC;
  kcg_bool /* BRL_Pkg::brl::ready */ ready;
  trainPosition_T_TrainPosition_Types_Pck /* BRL_Pkg::brl::debugTrainPosition */ debugTrainPosition;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* BRL_Pkg::brl::lastRadioMsgTimestamp */ lastRadioMsgTimestamp;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ProvidePositionReport_ProvidePositionReport_Pkg /* 1 */ _3_Context_1;
  outC_MoRC_Main_MoRC_Pck /* 1 */ _2_Context_1;
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg /* 1 */ _1_Context_1;
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_brl_BRL_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BRL_Pkg::brl */
extern void brl_BRL_Pkg(
  /* BRL_Pkg::brl::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* BRL_Pkg::brl::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* BRL_Pkg::brl::mode */ M_MODE mode,
  /* BRL_Pkg::brl::level */ M_LEVEL level,
  /* BRL_Pkg::brl::leveltr */ M_LEVELTR leveltr,
  /* BRL_Pkg::brl::API_trackSide_Message */ API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* BRL_Pkg::brl::radioCmdFromProcedures */ radioManagementMessage_T_Common_Types_Pkg *radioCmdFromProcedures,
  /* BRL_Pkg::brl::reset */ kcg_bool reset,
  /* BRL_Pkg::brl::nationalValues */ P3_NationalValues_T_Packet_Types_Pkg *nationalValues,
  /* BRL_Pkg::brl::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* BRL_Pkg::brl::nid_ntc */ NID_NTC nid_ntc,
  /* BRL_Pkg::brl::q_length */ Q_LENGTH q_length,
  /* BRL_Pkg::brl::locationBasedEvents */ LocationBasedEvents_T_ProvidePositionReport_Pkg *locationBasedEvents,
  /* BRL_Pkg::brl::obuEventsAndPhases */ obuEventsAndPhases_T_MoRC_Pck *obuEventsAndPhases,
  /* BRL_Pkg::brl::radioNetworkIDs */ radioNetWorkIDs_T_MoRC_Pck *radioNetworkIDs,
  /* BRL_Pkg::brl::statusOfMobile */ mobileHWStatus_Type_MoRC_Pck *statusOfMobile,
  /* BRL_Pkg::brl::t_train */ T_TRAIN t_train,
  /* BRL_Pkg::brl::connectionStatusTimerInterval */ T_internal_Type_Obu_BasicTypes_Pkg connectionStatusTimerInterval,
  /* BRL_Pkg::brl::nid_engine */ NID_ENGINE nid_engine,
  /* BRL_Pkg::brl::onboardPhoneNumbers */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *onboardPhoneNumbers,
  /* BRL_Pkg::brl::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_brl_BRL_Pkg *outC);

extern void brl_reset_BRL_Pkg(outC_brl_BRL_Pkg *outC);
extern void brl_init_BRL_Pkg(outC_brl_BRL_Pkg *outC);

#endif /* _brl_BRL_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** brl_BRL_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

