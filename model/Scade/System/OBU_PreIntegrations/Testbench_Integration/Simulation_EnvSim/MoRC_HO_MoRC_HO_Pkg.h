/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _MoRC_HO_MoRC_HO_Pkg_H_
#define _MoRC_HO_MoRC_HO_Pkg_H_

#include "kcg_types.h"
#include "processHandingOver_Handover_Pkg_handoverUtils_Pkg.h"
#include "mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.h"
#include "MoRC_Main_v2_MoRC_Pck.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  morcStatus_T_RCM_Session_Types_Pkg /* MoRC_HO_Pkg::MoRC_HO::radioStatus_1 */ radioStatus_1;
  morcStatus_T_RCM_Session_Types_Pkg /* MoRC_HO_Pkg::MoRC_HO::radioStatus_2 */ radioStatus_2;
  mobileConnectionCmd_T_RCM_Types_Pkg /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionCmd_1 */ mobileConnectionCmd_1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionCmd_2 */ mobileConnectionCmd_2;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationCmd_1 */ mobileRegistrationCmd_1;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationCmd_2 */ mobileRegistrationCmd_2;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* MoRC_HO_Pkg::MoRC_HO::safeRadioIndication */ safeRadioIndication;
  connection_ids_T_Handover_Pkg /* MoRC_HO_Pkg::MoRC_HO::supervisingRBC */ supervisingRBC;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::bufferInformationFromAcceptingRBC */ bufferInformationFromAcceptingRBC;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::trainPassesA_RBC_RBC_border_WithItsFrontEnd */ trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* MoRC_HO_Pkg::MoRC_HO::msgBus_2_RBC_1 */ msgBus_2_RBC_1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* MoRC_HO_Pkg::MoRC_HO::msgBus_2_RBC_2 */ msgBus_2_RBC_2;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::triggerPositionReport */ triggerPositionReport;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::triggerTrainData */ triggerTrainData;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::infomDriverNoCompatibleVersionSupported */ infomDriverNoCompatibleVersionSupported;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* MoRC_HO_Pkg::MoRC_HO::lastReceivedRadioNetworkID */ lastReceivedRadioNetworkID;
  kcg_bool /* MoRC_HO_Pkg::MoRC_HO::ready */ ready;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg /* 1 */ _2_Context_1;
  outC_MoRC_Main_v2_MoRC_Pck /* 1 */ _1_Context_1;
  outC_MoRC_Main_v2_MoRC_Pck /* 2 */ Context_2;
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MoRC_HO_MoRC_HO_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_HO_Pkg::MoRC_HO */
extern void MoRC_HO_MoRC_HO_Pkg(
  /* MoRC_HO_Pkg::MoRC_HO::mode */M_MODE mode,
  /* MoRC_HO_Pkg::MoRC_HO::level */M_LEVEL level,
  /* MoRC_HO_Pkg::MoRC_HO::eventsAndPhases */obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_HO_Pkg::MoRC_HO::atPowerUpRadioNetworkID */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_HO_Pkg::MoRC_HO::newRadioNetworkIDFromDriver */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_1 */mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_2 */mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_1 */mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_2 */mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::dataFromTrack_in */msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* MoRC_HO_Pkg::MoRC_HO::msgBusToRBC_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* MoRC_HO_Pkg::MoRC_HO::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MoRC_HO_Pkg::MoRC_HO::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* MoRC_HO_Pkg::MoRC_HO::t_train */T_TRAIN t_train,
  /* MoRC_HO_Pkg::MoRC_HO::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MoRC_HO_Pkg::MoRC_HO::currentTime */T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_HO_Pkg::MoRC_HO::reset */kcg_bool reset,
  /* MoRC_HO_Pkg::MoRC_HO::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* MoRC_HO_Pkg::MoRC_HO::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* MoRC_HO_Pkg::MoRC_HO::configData */morc_configData_T_RCM_Session_Types_Pkg *configData,
  /* MoRC_HO_Pkg::MoRC_HO::onboardPhoneNumbers_b */P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* MoRC_HO_Pkg::MoRC_HO::m_version */M_VERSION m_version,
  outC_MoRC_HO_MoRC_HO_Pkg *outC);

extern void MoRC_HO_reset_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC);

#endif /* _MoRC_HO_MoRC_HO_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_HO_MoRC_HO_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

