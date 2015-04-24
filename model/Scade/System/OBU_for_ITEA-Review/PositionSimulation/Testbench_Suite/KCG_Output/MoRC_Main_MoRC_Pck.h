/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _MoRC_Main_MoRC_Pck_H_
#define _MoRC_Main_MoRC_Pck_H_

#include "kcg_types.h"
#include "P42_Dec_MoRC_Pck_Coder_Pkg.h"
#include "genMsgToRBC_MoRC_Pck_Coder_Pkg.h"
#include "managementOfRadioCommunication_MoRC_Pck.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::MoRC_Main::ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession */ ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession;
  kcg_bool /* MoRC_Pck::MoRC_Main::sendAPositionReport */ sendAPositionReport;
  mobileHWCmd_Type_MoRC_Pck /* MoRC_Pck::MoRC_Main::cmdsToMobile */ cmdsToMobile;
  kcg_bool /* MoRC_Pck::MoRC_Main::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* MoRC_Pck::MoRC_Main::currentRadioNetworkID */ currentRadioNetworkID;
  kcg_bool /* MoRC_Pck::MoRC_Main::orderTheRegistrationOfItsConnectedMobiles */ orderTheRegistrationOfItsConnectedMobiles;
  kcg_bool /* MoRC_Pck::MoRC_Main::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  kcg_bool /* MoRC_Pck::MoRC_Main::InformTheDriverThatNoConnectionWasSetup */ InformTheDriverThatNoConnectionWasSetup;
  safeRadioConnectionStatusValid_Type_MoRC_Pck /* MoRC_Pck::MoRC_Main::safeRadioConnectionStatus_toDriver */ safeRadioConnectionStatus_toDriver;
  mobileSWStatus_Type_MoRC_Pck /* MoRC_Pck::MoRC_Main::mobileSWStatus */ mobileSWStatus;
  kcg_bool /* MoRC_Pck::MoRC_Main::requestTheSetupOfASafeRadioConnection */ requestTheSetupOfASafeRadioConnection;
  kcg_bool /* MoRC_Pck::MoRC_Main::requestReleaseOfSafeRadioConnectionWithTrackside */ requestReleaseOfSafeRadioConnectionWithTrackside;
  kcg_bool /* MoRC_Pck::MoRC_Main::sessionSuccessfullyEstablished */ sessionSuccessfullyEstablished;
  sessionStatus_Type_Radio_Types_Pkg /* MoRC_Pck::MoRC_Main::sessionStatus */ sessionStatus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MoRC_Pck::MoRC_Main::MessageToRBC */ MessageToRBC;
  kcg_bool /* MoRC_Pck::MoRC_Main::ready */ ready;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_managementOfRadioCommunication_MoRC_Pck /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MoRC_Main_MoRC_Pck;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::MoRC_Main */
extern void MoRC_Main_MoRC_Pck(
  /* MoRC_Pck::MoRC_Main::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::MoRC_Main::mode */ M_MODE mode,
  /* MoRC_Pck::MoRC_Main::level */ M_LEVEL level,
  /* MoRC_Pck::MoRC_Main::obuEventsAndPhases */ obuEventsAndPhases_T_MoRC_Pck *obuEventsAndPhases,
  /* MoRC_Pck::MoRC_Main::radioNetworkIDs */ radioNetWorkIDs_T_MoRC_Pck *radioNetworkIDs,
  /* MoRC_Pck::MoRC_Main::statusOfMobile */ mobileHWStatus_Type_MoRC_Pck *statusOfMobile,
  /* MoRC_Pck::MoRC_Main::inMessage */ radioManagementMessage_T_Common_Types_Pkg *inMessage,
  /* MoRC_Pck::MoRC_Main::t_train */ T_TRAIN t_train,
  /* MoRC_Pck::MoRC_Main::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  /* MoRC_Pck::MoRC_Main::nid_engine */ NID_ENGINE nid_engine,
  /* MoRC_Pck::MoRC_Main::onboardPhoneNumbers */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *onboardPhoneNumbers,
  outC_MoRC_Main_MoRC_Pck *outC);

extern void MoRC_Main_reset_MoRC_Pck(outC_MoRC_Main_MoRC_Pck *outC);
extern void MoRC_Main_init_MoRC_Pck(outC_MoRC_Main_MoRC_Pck *outC);

#endif /* _MoRC_Main_MoRC_Pck_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** MoRC_Main_MoRC_Pck.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

