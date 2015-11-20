/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_HO_MoRC_HO_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void MoRC_HO_init_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->p45_networkRegistrationReceived_p = kcg_true;
  outC->p45_networkRegistration_p.valid = kcg_true;
  outC->p45_networkRegistration_p.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p45_networkRegistration_p.q_dir = Q_DIR_Reverse;
  outC->p45_networkRegistration_p.nid_mn = 0;
  outC->p45_networkRegistration_p.origin.valid = kcg_true;
  outC->p45_networkRegistration_p.origin.nid_c = 0;
  outC->p45_networkRegistration_p.origin.rbc_id = 0;
  outC->p45_networkRegistration_p.origin.device_id = 0;
  outC->m39_AckOfTerminationOfACommunicationSession_p.valid = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSession_p.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.valid = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.nid_c = 0;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.rbc_id = 0;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.device_id = 0;
  outC->m39_AckOfTerminationOfACommunicationSession_p.lrbg = 0;
  outC->m38_initiationOfACommunicationSessionMsg_p.valid = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsg_p.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.valid = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.nid_c = 0;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.rbc_id = 0;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.device_id = 0;
  outC->m32_SystemVersion_p.valid = kcg_true;
  outC->m32_SystemVersion_p.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->m32_SystemVersion_p.versionSupported = kcg_true;
  outC->m32_SystemVersion_p.origin.valid = kcg_true;
  outC->m32_SystemVersion_p.origin.nid_c = 0;
  outC->m32_SystemVersion_p.origin.rbc_id = 0;
  outC->m32_SystemVersion_p.origin.device_id = 0;
  outC->m32_SystemVersion_p.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionManagement_p.valid = kcg_true;
  outC->p42_sessionManagement_p.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionManagement_p.q_dir = Q_DIR_Reverse;
  outC->p42_sessionManagement_p.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_sessionManagement_p.nid_c = 0;
  outC->p42_sessionManagement_p.nid_RBC = 0;
  outC->p42_sessionManagement_p.nid_radio = 0;
  outC->p42_sessionManagement_p.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_sessionManagement_p.origin.valid = kcg_true;
  outC->p42_sessionManagement_p.origin.nid_c = 0;
  outC->p42_sessionManagement_p.origin.rbc_id = 0;
  outC->p42_sessionManagement_p.origin.device_id = 0;
  outC->m32_SystemVersionReceived_p = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsgReceived_p = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p = kcg_true;
  outC->p42_sessionManagementReceived_p = kcg_true;
  outC->eventsAndPhases_p.atPowerUp = kcg_true;
  outC->eventsAndPhases_p.atPowerDown = kcg_true;
  outC->eventsAndPhases_p.atStartOfMission = kcg_true;
  outC->eventsAndPhases_p.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->eventsAndPhases_p.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->eventsAndPhases_p.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->eventsAndPhases_p.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->eventsAndPhases_p.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->eventsAndPhases_p.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->eventsAndPhases_p.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->eventsAndPhases_p.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  outC->eventsAndPhases_p.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->eventsAndPhases_p.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->eventsAndPhases_p.endOfMissionIsExecuted = kcg_true;
  outC->eventsAndPhases_p.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  outC->eventsAndPhases_p.errorConditionRequiringTerminationDetected = kcg_true;
  outC->eventsAndPhases_p.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->eventsAndPhases_p.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->eventsAndPhases_p.trainExitedFromAnRBCArea = kcg_true;
  outC->eventsAndPhases_p.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->eventsAndPhases_p.level_1_isLeft = kcg_true;
  outC->mobileConnectionContext_1_p.valid = kcg_true;
  outC->mobileConnectionContext_1_p.mobileDeviceNo = 0;
  outC->mobileConnectionContext_1_p.status = mcs_disconnected_RCM_Types_Pkg;
  outC->mobileConnectionContext_1_p.nid_radio = 0;
  outC->mobileConnectionContext_1_p.settingUpConnectionHasFailed = kcg_true;
  outC->mobileConnectionContext_1_p.connectionLost = kcg_true;
  outC->mobileConnectionContext_1_p.isInRadioHole = kcg_true;
  outC->mobileRegistrationContext_1_p.valid = kcg_true;
  outC->mobileRegistrationContext_1_p.mobileDeviceNo = 0;
  outC->mobileRegistrationContext_1_p.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->mobileRegistrationContext_1_p.status = mrs_unregistered_RCM_Types_Pkg;
  outC->mobileRegistrationContext_1_p.nid_mn = 0;
  outC->level_p = M_LEVEL_Level_0;
  outC->mode_p = M_MODE_Full_Supervision;
  outC->init = kcg_true;
  outC->morcStatus_2.registration.valid = kcg_true;
  outC->morcStatus_2.registration.mobileDeviceNo = 0;
  outC->morcStatus_2.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->morcStatus_2.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->morcStatus_2.registration.nid_mn = 0;
  outC->morcStatus_2.connection.valid = kcg_true;
  outC->morcStatus_2.connection.mobileDeviceNo = 0;
  outC->morcStatus_2.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->morcStatus_2.connection.nid_radio = 0;
  outC->morcStatus_2.connection.settingUpConnectionHasFailed = kcg_true;
  outC->morcStatus_2.connection.connectionLost = kcg_true;
  outC->morcStatus_2.connection.isInRadioHole = kcg_true;
  outC->morcStatus_2.session.valid = kcg_true;
  outC->morcStatus_2.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->morcStatus_2.session.nid_c = 0;
  outC->morcStatus_2.session.nid_rbc = 0;
  outC->morcStatus_2.session.nid_radio = 0;
  outC->morcStatus_1.registration.valid = kcg_true;
  outC->morcStatus_1.registration.mobileDeviceNo = 0;
  outC->morcStatus_1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->morcStatus_1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->morcStatus_1.registration.nid_mn = 0;
  outC->morcStatus_1.connection.valid = kcg_true;
  outC->morcStatus_1.connection.mobileDeviceNo = 0;
  outC->morcStatus_1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->morcStatus_1.connection.nid_radio = 0;
  outC->morcStatus_1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->morcStatus_1.connection.connectionLost = kcg_true;
  outC->morcStatus_1.connection.isInRadioHole = kcg_true;
  outC->morcStatus_1.session.valid = kcg_true;
  outC->morcStatus_1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->morcStatus_1.session.nid_c = 0;
  outC->morcStatus_1.session.nid_rbc = 0;
  outC->morcStatus_1.session.nid_radio = 0;
  outC->ready = kcg_true;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = 0;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->triggerTrainData = kcg_true;
  outC->triggerPositionReport = kcg_true;
  for (i1 = 0; i1 < 5; i1++) {
    outC->msgBus_2_RBC_2[i1].Message.valid = kcg_true;
    outC->msgBus_2_RBC_2[i1].Message.nid_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.l_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.t_train = 0;
    outC->msgBus_2_RBC_2[i1].Message.nid_engine = 0;
    outC->msgBus_2_RBC_2[i1].Message.field1 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field2 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->msgBus_2_RBC_2[i1].OptionalPackets[i] = 0;
    }
  }
  for (i3 = 0; i3 < 5; i3++) {
    outC->msgBus_2_RBC_1[i3].Message.valid = kcg_true;
    outC->msgBus_2_RBC_1[i3].Message.nid_message = 0;
    outC->msgBus_2_RBC_1[i3].Message.l_message = 0;
    outC->msgBus_2_RBC_1[i3].Message.t_train = 0;
    outC->msgBus_2_RBC_1[i3].Message.nid_engine = 0;
    outC->msgBus_2_RBC_1[i3].Message.field1 = 0;
    outC->msgBus_2_RBC_1[i3].Message.field2 = 0;
    outC->msgBus_2_RBC_1[i3].Message.field3 = 0;
    for (i2 = 0; i2 < 50; i2++) {
      outC->msgBus_2_RBC_1[i3].OptionalPackets[i2] = 0;
    }
  }
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = kcg_true;
  outC->bufferInformationFromAcceptingRBC = kcg_true;
  outC->supervisingRBC.valid = kcg_true;
  outC->supervisingRBC.mobileDeviceNo = 0;
  outC->supervisingRBC.nid_c = 0;
  outC->supervisingRBC.nid_RBC = 0;
  outC->supervisingRBC.nid_radio = 0;
  outC->supervisingRBC.nid_mn = 0;
  outC->safeRadioIndication.valid = kcg_true;
  outC->safeRadioIndication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->mobileRegistrationCmd_2.valid = kcg_true;
  outC->mobileRegistrationCmd_2.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd_2.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd_2.network_id = 0;
  outC->mobileRegistrationCmd_1.valid = kcg_true;
  outC->mobileRegistrationCmd_1.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd_1.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd_1.network_id = 0;
  outC->mobileConnectionCmd_2.valid = kcg_true;
  outC->mobileConnectionCmd_2.mobileDeviceNo = 0;
  outC->mobileConnectionCmd_2.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd_2.nid_radio = 0;
  outC->mobileConnectionCmd_1.valid = kcg_true;
  outC->mobileConnectionCmd_1.mobileDeviceNo = 0;
  outC->mobileConnectionCmd_1.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd_1.nid_radio = 0;
  outC->radioStatus_2.registration.valid = kcg_true;
  outC->radioStatus_2.registration.mobileDeviceNo = 0;
  outC->radioStatus_2.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->radioStatus_2.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->radioStatus_2.registration.nid_mn = 0;
  outC->radioStatus_2.connection.valid = kcg_true;
  outC->radioStatus_2.connection.mobileDeviceNo = 0;
  outC->radioStatus_2.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->radioStatus_2.connection.nid_radio = 0;
  outC->radioStatus_2.connection.settingUpConnectionHasFailed = kcg_true;
  outC->radioStatus_2.connection.connectionLost = kcg_true;
  outC->radioStatus_2.connection.isInRadioHole = kcg_true;
  outC->radioStatus_2.session.valid = kcg_true;
  outC->radioStatus_2.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->radioStatus_2.session.nid_c = 0;
  outC->radioStatus_2.session.nid_rbc = 0;
  outC->radioStatus_2.session.nid_radio = 0;
  outC->radioStatus_1.registration.valid = kcg_true;
  outC->radioStatus_1.registration.mobileDeviceNo = 0;
  outC->radioStatus_1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->radioStatus_1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->radioStatus_1.registration.nid_mn = 0;
  outC->radioStatus_1.connection.valid = kcg_true;
  outC->radioStatus_1.connection.mobileDeviceNo = 0;
  outC->radioStatus_1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->radioStatus_1.connection.nid_radio = 0;
  outC->radioStatus_1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->radioStatus_1.connection.connectionLost = kcg_true;
  outC->radioStatus_1.connection.isInRadioHole = kcg_true;
  outC->radioStatus_1.session.valid = kcg_true;
  outC->radioStatus_1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->radioStatus_1.session.nid_c = 0;
  outC->radioStatus_1.session.nid_rbc = 0;
  outC->radioStatus_1.session.nid_radio = 0;
  /* 1 */
  mobileBusRouter_out_init_Handover_Pkg_handoverUtils_Pkg(&outC->_2_Context_1);
  /* 2 */ MoRC_Main_v2_init_MoRC_Pck(&outC->Context_2);
  /* 1 */ MoRC_Main_v2_init_MoRC_Pck(&outC->_1_Context_1);
  /* 1 */
  processHandingOver_init_Handover_Pkg_handoverUtils_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoRC_HO_reset_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(&outC->_2_Context_1);
  /* 2 */ MoRC_Main_v2_reset_MoRC_Pck(&outC->Context_2);
  /* 1 */ MoRC_Main_v2_reset_MoRC_Pck(&outC->_1_Context_1);
  /* 1 */
  processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_HO_Pkg::MoRC_HO */
void MoRC_HO_MoRC_HO_Pkg(
  /* MoRC_HO_Pkg::MoRC_HO::mode */ M_MODE mode,
  /* MoRC_HO_Pkg::MoRC_HO::level */ M_LEVEL level,
  /* MoRC_HO_Pkg::MoRC_HO::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_HO_Pkg::MoRC_HO::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_HO_Pkg::MoRC_HO::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_1 */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileRegistrationContext_2 */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_1 */ mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_1,
  /* MoRC_HO_Pkg::MoRC_HO::mobileConnectionContext_2 */ mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_2,
  /* MoRC_HO_Pkg::MoRC_HO::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* MoRC_HO_Pkg::MoRC_HO::msgBusToRBC_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* MoRC_HO_Pkg::MoRC_HO::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* MoRC_HO_Pkg::MoRC_HO::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* MoRC_HO_Pkg::MoRC_HO::t_train */ T_TRAIN t_train,
  /* MoRC_HO_Pkg::MoRC_HO::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* MoRC_HO_Pkg::MoRC_HO::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_HO_Pkg::MoRC_HO::reset */ kcg_bool reset,
  /* MoRC_HO_Pkg::MoRC_HO::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* MoRC_HO_Pkg::MoRC_HO::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* MoRC_HO_Pkg::MoRC_HO::configData */ morc_configData_T_RCM_Session_Types_Pkg *configData,
  /* MoRC_HO_Pkg::MoRC_HO::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* MoRC_HO_Pkg::MoRC_HO::m_version */ M_VERSION m_version,
  outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  static safeRadioConnectionIndication_T_RCM_Session_Types_Pkg noname;
  static kcg_bool _1_noname;
  static msgToTrack_T_RCM_MsgTypes_Pkg _2_noname;
  static msgToTrack_T_RCM_MsgTypes_Pkg _3_noname;
  /* MoRC_HO_Pkg::MoRC_HO::morcStatus_2 */
  static morcStatus_T_RCM_Session_Types_Pkg last_morcStatus_2;
  /* MoRC_HO_Pkg::MoRC_HO::morcStatus_1 */
  static morcStatus_T_RCM_Session_Types_Pkg last_morcStatus_1;
  /* MoRC_HO_Pkg::MoRC_HO::sNotReady */
  static kcg_bool sNotReady;
  /* MoRC_HO_Pkg::MoRC_HO::sendPositionReport_2_handingOverRBC */
  static kcg_bool sendPositionReport_2_handingOverRBC;
  /* MoRC_HO_Pkg::MoRC_HO::sendPositionReport_2_acceptingRBC */
  static kcg_bool sendPositionReport_2_acceptingRBC;
  /* MoRC_HO_Pkg::MoRC_HO::sendTrainData_2_acceptingRBC */
  static kcg_bool sendTrainData_2_acceptingRBC;
  /* MoRC_HO_Pkg::MoRC_HO::useInformationFromAcceptingRBC */
  static kcg_bool useInformationFromAcceptingRBC;
  /* MoRC_HO_Pkg::MoRC_HO::handingOverRBC_is_RBC_1 */
  static kcg_bool handingOverRBC_is_RBC_1;
  /* MoRC_HO_Pkg::MoRC_HO::sendPositionReportToRBC_1 */
  static kcg_bool sendPositionReportToRBC_1;
  /* MoRC_HO_Pkg::MoRC_HO::sendPositionReportToRBC_2 */
  static kcg_bool sendPositionReportToRBC_2;
  /* MoRC_HO_Pkg::MoRC_HO::morcMsgTriggersToRBC_1 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg morcMsgTriggersToRBC_1;
  /* MoRC_HO_Pkg::MoRC_HO::morcMsgTriggersToRBC_2 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg morcMsgTriggersToRBC_2;
  /* MoRC_HO_Pkg::MoRC_HO::_L10 */
  static kcg_bool _L10;
  /* MoRC_HO_Pkg::MoRC_HO::_L9 */
  static mobileRegistrationCmd_T_RCM_Types_Pkg _L9;
  /* MoRC_HO_Pkg::MoRC_HO::_L8 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L8;
  /* MoRC_HO_Pkg::MoRC_HO::_L7 */
  static safeRadioConnectionIndication_T_RCM_Session_Types_Pkg _L7;
  /* MoRC_HO_Pkg::MoRC_HO::_L6 */
  static morcStatus_T_RCM_Session_Types_Pkg _L6;
  /* MoRC_HO_Pkg::MoRC_HO::_L5 */
  static kcg_bool _L5;
  /* MoRC_HO_Pkg::MoRC_HO::_L4 */
  static kcg_bool _L4;
  /* MoRC_HO_Pkg::MoRC_HO::_L3 */
  static kcg_bool _L3;
  /* MoRC_HO_Pkg::MoRC_HO::_L2 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg _L2;
  /* MoRC_HO_Pkg::MoRC_HO::_L1 */
  static msgToTrack_T_RCM_MsgTypes_Pkg _L1;
  /* MoRC_HO_Pkg::MoRC_HO::_L20 */
  static kcg_bool _L20;
  /* MoRC_HO_Pkg::MoRC_HO::_L19 */
  static mobileRegistrationCmd_T_RCM_Types_Pkg _L19;
  /* MoRC_HO_Pkg::MoRC_HO::_L18 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L18;
  /* MoRC_HO_Pkg::MoRC_HO::_L17 */
  static safeRadioConnectionIndication_T_RCM_Session_Types_Pkg _L17;
  /* MoRC_HO_Pkg::MoRC_HO::_L16 */
  static morcStatus_T_RCM_Session_Types_Pkg _L16;
  /* MoRC_HO_Pkg::MoRC_HO::_L15 */
  static kcg_bool _L15;
  /* MoRC_HO_Pkg::MoRC_HO::_L14 */
  static kcg_bool _L14;
  /* MoRC_HO_Pkg::MoRC_HO::_L13 */
  static kcg_bool _L13;
  /* MoRC_HO_Pkg::MoRC_HO::_L12 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg _L12;
  /* MoRC_HO_Pkg::MoRC_HO::_L11 */
  static msgToTrack_T_RCM_MsgTypes_Pkg _L11;
  /* MoRC_HO_Pkg::MoRC_HO::_L30 */
  static kcg_bool _L30;
  /* MoRC_HO_Pkg::MoRC_HO::_L29 */
  static kcg_bool _L29;
  /* MoRC_HO_Pkg::MoRC_HO::_L28 */
  static kcg_bool _L28;
  /* MoRC_HO_Pkg::MoRC_HO::_L27 */
  static connection_ids_T_Handover_Pkg _L27;
  /* MoRC_HO_Pkg::MoRC_HO::_L26 */
  static kcg_bool _L26;
  /* MoRC_HO_Pkg::MoRC_HO::_L25 */
  static kcg_bool _L25;
  /* MoRC_HO_Pkg::MoRC_HO::_L24 */
  static kcg_bool _L24;
  /* MoRC_HO_Pkg::MoRC_HO::_L23 */
  static kcg_bool _L23;
  /* MoRC_HO_Pkg::MoRC_HO::_L22 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L22;
  /* MoRC_HO_Pkg::MoRC_HO::_L21 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L21;
  /* MoRC_HO_Pkg::MoRC_HO::_L35 */
  static M_MODE _L35;
  /* MoRC_HO_Pkg::MoRC_HO::_L36 */
  static M_LEVEL _L36;
  /* MoRC_HO_Pkg::MoRC_HO::_L37 */
  static M_MODE _L37;
  /* MoRC_HO_Pkg::MoRC_HO::_L38 */
  static M_LEVEL _L38;
  /* MoRC_HO_Pkg::MoRC_HO::_L39 */
  static M_MODE _L39;
  /* MoRC_HO_Pkg::MoRC_HO::_L40 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L40;
  /* MoRC_HO_Pkg::MoRC_HO::_L41 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L41;
  /* MoRC_HO_Pkg::MoRC_HO::_L42 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L42;
  /* MoRC_HO_Pkg::MoRC_HO::_L43 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L43;
  /* MoRC_HO_Pkg::MoRC_HO::_L44 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L44;
  /* MoRC_HO_Pkg::MoRC_HO::_L45 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L45;
  /* MoRC_HO_Pkg::MoRC_HO::_L46 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L46;
  /* MoRC_HO_Pkg::MoRC_HO::_L47 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L47;
  /* MoRC_HO_Pkg::MoRC_HO::_L48 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L48;
  /* MoRC_HO_Pkg::MoRC_HO::_L49 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L49;
  /* MoRC_HO_Pkg::MoRC_HO::_L50 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L50;
  /* MoRC_HO_Pkg::MoRC_HO::_L51 */
  static kcg_bool _L51;
  /* MoRC_HO_Pkg::MoRC_HO::_L52 */
  static T_TRAIN _L52;
  /* MoRC_HO_Pkg::MoRC_HO::_L53 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L53;
  /* MoRC_HO_Pkg::MoRC_HO::_L54 */
  static kcg_bool _L54;
  /* MoRC_HO_Pkg::MoRC_HO::_L55 */
  static T_TRAIN _L55;
  /* MoRC_HO_Pkg::MoRC_HO::_L58 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L58;
  /* MoRC_HO_Pkg::MoRC_HO::_L59 */
  static trainPosition_T_TrainPosition_Types_Pck _L59;
  /* MoRC_HO_Pkg::MoRC_HO::_L60 */
  static positionedBGs_T_TrainPosition_Types_Pck _L60;
  /* MoRC_HO_Pkg::MoRC_HO::_L61 */
  static morcStatus_T_RCM_Session_Types_Pkg _L61;
  /* MoRC_HO_Pkg::MoRC_HO::_L62 */
  static morcStatus_T_RCM_Session_Types_Pkg _L62;
  /* MoRC_HO_Pkg::MoRC_HO::_L63 */
  static abilityToHandleCommunicationSessions_Handover_Pkg _L63;
  /* MoRC_HO_Pkg::MoRC_HO::_L64 */
  static trainProperties_T_TrainPosition_Types_Pck _L64;
  /* MoRC_HO_Pkg::MoRC_HO::_L65 */
  static morc_configData_T_RCM_Session_Types_Pkg _L65;
  /* MoRC_HO_Pkg::MoRC_HO::_L66 */
  static morc_configData_T_RCM_Session_Types_Pkg _L66;
  /* MoRC_HO_Pkg::MoRC_HO::_L68 */
  static kcg_bool _L68;
  /* MoRC_HO_Pkg::MoRC_HO::_L69 */
  static kcg_bool _L69;
  /* MoRC_HO_Pkg::MoRC_HO::_L70 */
  static kcg_bool _L70;
  /* MoRC_HO_Pkg::MoRC_HO::_L71 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L71;
  /* MoRC_HO_Pkg::MoRC_HO::_L72 */
  static kcg_bool _L72;
  /* MoRC_HO_Pkg::MoRC_HO::_L81 */
  static kcg_bool _L81;
  /* MoRC_HO_Pkg::MoRC_HO::_L82 */
  static kcg_bool _L82;
  /* MoRC_HO_Pkg::MoRC_HO::_L84 */
  static kcg_bool _L84;
  /* MoRC_HO_Pkg::MoRC_HO::_L85 */
  static kcg_bool _L85;
  /* MoRC_HO_Pkg::MoRC_HO::_L86 */
  static kcg_bool _L86;
  /* MoRC_HO_Pkg::MoRC_HO::_L94 */
  static kcg_bool _L94;
  /* MoRC_HO_Pkg::MoRC_HO::_L95 */
  static kcg_bool _L95;
  /* MoRC_HO_Pkg::MoRC_HO::_L96 */
  static kcg_bool _L96;
  /* MoRC_HO_Pkg::MoRC_HO::_L97 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L97;
  /* MoRC_HO_Pkg::MoRC_HO::_L98 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L98;
  /* MoRC_HO_Pkg::MoRC_HO::_L99 */
  static kcg_bool _L99;
  /* MoRC_HO_Pkg::MoRC_HO::_L100 */
  static kcg_bool _L100;
  /* MoRC_HO_Pkg::MoRC_HO::_L113 */
  static kcg_bool _L113;
  /* MoRC_HO_Pkg::MoRC_HO::_L112 */
  static kcg_bool _L112;
  /* MoRC_HO_Pkg::MoRC_HO::_L110 */
  static kcg_bool _L110;
  /* MoRC_HO_Pkg::MoRC_HO::_L109 */
  static kcg_bool _L109;
  /* MoRC_HO_Pkg::MoRC_HO::_L107 */
  static kcg_bool _L107;
  /* MoRC_HO_Pkg::MoRC_HO::_L106 */
  static abilityToHandleCommunicationSessions_Handover_Pkg _L106;
  /* MoRC_HO_Pkg::MoRC_HO::_L105 */
  static kcg_bool _L105;
  /* MoRC_HO_Pkg::MoRC_HO::_L102 */
  static kcg_bool _L102;
  /* MoRC_HO_Pkg::MoRC_HO::_L115 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L115;
  /* MoRC_HO_Pkg::MoRC_HO::_L114 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L114;
  /* MoRC_HO_Pkg::MoRC_HO::_L116 */
  static T_TRAIN _L116;
  /* MoRC_HO_Pkg::MoRC_HO::_L117 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg _L117;
  /* MoRC_HO_Pkg::MoRC_HO::_L118 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg _L118;
  /* MoRC_HO_Pkg::MoRC_HO::_L119 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L119;
  /* MoRC_HO_Pkg::MoRC_HO::_L120 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L120;
  /* MoRC_HO_Pkg::MoRC_HO::_L136 */
  static morc_configData_T_RCM_Session_Types_Pkg _L136;
  /* MoRC_HO_Pkg::MoRC_HO::_L159 */
  static NID_ENGINE _L159;
  /* MoRC_HO_Pkg::MoRC_HO::_L160 */
  static P003_TM_TrainToTrack _L160;
  /* MoRC_HO_Pkg::MoRC_HO::_L161 */
  static M_VERSION _L161;
  /* MoRC_HO_Pkg::MoRC_HO::_L177 */
  static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg _L177;
  /* MoRC_HO_Pkg::MoRC_HO::_L176 */
  static kcg_bool _L176;
  /* MoRC_HO_Pkg::MoRC_HO::_L175 */
  static kcg_bool _L175;
  /* MoRC_HO_Pkg::MoRC_HO::_L174 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L174;
  /* MoRC_HO_Pkg::MoRC_HO::_L173 */
  static m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L173;
  /* MoRC_HO_Pkg::MoRC_HO::_L172 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L172;
  /* MoRC_HO_Pkg::MoRC_HO::_L171 */
  static kcg_bool _L171;
  /* MoRC_HO_Pkg::MoRC_HO::_L170 */
  static kcg_bool _L170;
  /* MoRC_HO_Pkg::MoRC_HO::_L169 */
  static kcg_bool _L169;
  /* MoRC_HO_Pkg::MoRC_HO::_L178 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L178;
  /* MoRC_HO_Pkg::MoRC_HO::_L183 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L183;
  /* MoRC_HO_Pkg::MoRC_HO::_L182 */
  static M_MODE _L182;
  /* MoRC_HO_Pkg::MoRC_HO::_L181 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L181;
  /* MoRC_HO_Pkg::MoRC_HO::_L180 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L180;
  /* MoRC_HO_Pkg::MoRC_HO::_L179 */
  static M_LEVEL _L179;
  /* MoRC_HO_Pkg::MoRC_HO::_L184 */
  static p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg _L184;
  /* MoRC_HO_Pkg::MoRC_HO::_L185 */
  static kcg_bool _L185;
  
  _L39 = mode;
  /* last_init_ck_morcStatus_1 */ if (outC->init) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &last_morcStatus_1,
      (morcStatus_T_RCM_Session_Types_Pkg *)
        &cNoMoRCStatus_RCM_Session_Types_Pkg);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &last_morcStatus_1,
      &outC->morcStatus_1);
  }
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L61, &last_morcStatus_1);
  /* last_init_ck_morcStatus_2 */ if (outC->init) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &last_morcStatus_2,
      (morcStatus_T_RCM_Session_Types_Pkg *)
        &cNoMoRCStatus_RCM_Session_Types_Pkg);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &last_morcStatus_2,
      &outC->morcStatus_2);
  }
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L62, &last_morcStatus_2);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L58, dataFromTrack_in);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L59, trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L60, BGs);
  _L63 = sessionManagementAbility;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L64, trainProperties);
  /* 1 */
  processHandingOver_Handover_Pkg_handoverUtils_Pkg(
    _L39,
    &_L61,
    &_L62,
    &_L58,
    &_L59,
    &_L60,
    _L63,
    &_L64,
    &outC->Context_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L21,
    &outC->Context_1.sessionCmds_2_MoRC_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L22,
    &outC->Context_1.sessionCmds_2_MoRC_2);
  _L23 = outC->Context_1.sendPositionReport_2_handingOverRBC;
  _L24 = outC->Context_1.sendPositionReport_2_acceptingRBC;
  _L25 = outC->Context_1.sendTrainData_2_acceptingRBC;
  _L26 = outC->Context_1.bufferInformationFromAcceptingRBC;
  kcg_copy_connection_ids_T_Handover_Pkg(
    &_L27,
    &outC->Context_1.supervisingRBC);
  _L28 = outC->Context_1.useInformationFromAcceptingRBC;
  _L29 = outC->Context_1.handingOverMobile_is_mobile_1;
  _L30 = outC->Context_1.trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  _L94 = outC->Context_1.notReady;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L40, eventsAndPhases);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L41,
    atPowerUpRadioNetworkID);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L42,
    newRadioNetworkIDFromDriver);
  _L35 = mode;
  _L36 = level;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L46,
    mobileRegistrationContext_1);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L47,
    mobileConnectionContext_1);
  _L53 = currentTime;
  _L54 = reset;
  _L55 = t_train;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&_L65, configData);
  /* 1 */
  MoRC_Main_v2_MoRC_Pck(
    &_L21,
    &_L40,
    &_L41,
    &_L42,
    _L35,
    _L36,
    &_L46,
    &_L47,
    _L53,
    _L54,
    _L55,
    &_L65,
    &outC->_1_Context_1);
  kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_L1, &outC->_1_Context_1.msgToRBC);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &_L2,
    &outC->_1_Context_1.msgToTrackTriggers);
  _L3 = outC->_1_Context_1.sendAPositionReport;
  _L4 = outC->_1_Context_1.rejectOrderToContactRBC_or_RIU;
  _L5 = outC->_1_Context_1.infomDriverNoCompatibleVersionSupported;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L6, &outC->_1_Context_1.status);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &_L7,
    &outC->_1_Context_1.safeRadioIndication);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &_L8,
    &outC->_1_Context_1.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &_L9,
    &outC->_1_Context_1.mobileRegistrationCmd);
  _L10 = outC->_1_Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L97,
    &outC->_1_Context_1.lastReceivedRadioNetworkID);
  _L99 = outC->_1_Context_1.notReady;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L43, eventsAndPhases);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L44,
    atPowerUpRadioNetworkID);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L45,
    newRadioNetworkIDFromDriver);
  _L37 = mode;
  _L38 = level;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L48,
    mobileRegistrationContext_2);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L49,
    mobileConnectionContext_2);
  _L50 = currentTime;
  _L51 = reset;
  _L52 = t_train;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&_L66, configData);
  /* 2 */
  MoRC_Main_v2_MoRC_Pck(
    &_L22,
    &_L43,
    &_L44,
    &_L45,
    _L37,
    _L38,
    &_L48,
    &_L49,
    _L50,
    _L51,
    _L52,
    &_L66,
    &outC->Context_2);
  kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_L11, &outC->Context_2.msgToRBC);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &_L12,
    &outC->Context_2.msgToTrackTriggers);
  _L13 = outC->Context_2.sendAPositionReport;
  _L14 = outC->Context_2.rejectOrderToContactRBC_or_RIU;
  _L15 = outC->Context_2.infomDriverNoCompatibleVersionSupported;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L16, &outC->Context_2.status);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &_L17,
    &outC->Context_2.safeRadioIndication);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &_L18,
    &outC->Context_2.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &_L19,
    &outC->Context_2.mobileRegistrationCmd);
  _L20 = outC->Context_2.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L98,
    &outC->Context_2.lastReceivedRadioNetworkID);
  _L100 = outC->Context_2.notReady;
  sNotReady = _L94 | _L99 | _L100;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->radioStatus_1, &_L6);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->radioStatus_2, &_L16);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd_1,
    &_L8);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd_1,
    &_L9);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd_2,
    &_L18);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd_2,
    &_L19);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->safeRadioIndication,
    &_L7);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &noname,
    &_L17);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->morcStatus_1, &_L6);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->morcStatus_2, &_L16);
  kcg_copy_connection_ids_T_Handover_Pkg(&outC->supervisingRBC, &_L27);
  outC->bufferInformationFromAcceptingRBC = _L26;
  handingOverRBC_is_RBC_1 = _L29;
  useInformationFromAcceptingRBC = _L28;
  sendPositionReport_2_acceptingRBC = _L24;
  sendPositionReport_2_handingOverRBC = _L23;
  sendTrainData_2_acceptingRBC = _L25;
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = _L30;
  _L68 = _L4 | _L4;
  outC->rejectOrderToContactRBC_or_RIU = _L68;
  _L69 = _L5 | _L15;
  outC->infomDriverNoCompatibleVersionSupported = _L69;
  _L72 = _L10 | _L20;
  outC->memorizeTheLastRadioNetworkID = _L72;
  _L70 = _L97.valid;
  /* 1 */ if (_L70) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L71, &_L97);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L71, &_L98);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->lastReceivedRadioNetworkID,
    &_L71);
  _L81 = sendPositionReport_2_acceptingRBC;
  _L82 = sendPositionReport_2_handingOverRBC;
  sendPositionReportToRBC_1 = _L3;
  sendPositionReportToRBC_2 = _L13;
  _L84 = sendPositionReportToRBC_1;
  _L85 = sendPositionReportToRBC_2;
  _L86 = _L81 | _L82 | _L84 | _L85;
  outC->triggerPositionReport = _L86;
  outC->triggerTrainData = _L25;
  _1_noname = _L14;
  _L95 = sNotReady;
  _L96 = !_L95;
  outC->ready = _L96;
  _L102 = sendPositionReport_2_acceptingRBC;
  _L105 = handingOverRBC_is_RBC_1;
  _L106 = sessionManagementAbility;
  _L107 = useInformationFromAcceptingRBC;
  _L109 = sendPositionReportToRBC_1;
  _L110 = sendPositionReport_2_handingOverRBC;
  _L112 = sendPositionReportToRBC_2;
  _L113 = sendTrainData_2_acceptingRBC;
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(&morcMsgTriggersToRBC_1, &_L2);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &_L117,
    &morcMsgTriggersToRBC_1);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &morcMsgTriggersToRBC_2,
    &_L12);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &_L118,
    &morcMsgTriggersToRBC_2);
  _L116 = t_train;
  _L120 = t_train_global;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L119, msgBusToRBC_in);
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&_L136, configData);
  _L159 = _L136.nid_engine;
  kcg_copy_P003_TM_TrainToTrack(&_L160, onboardPhoneNumbers_b);
  _L161 = m_version;
  /* 1 */
  mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &_L117,
    &_L118,
    _L107,
    _L105,
    _L102,
    _L110,
    _L109,
    _L112,
    _L113,
    _L116,
    _L120,
    &_L119,
    _L106,
    _L159,
    &_L160,
    _L161,
    &outC->_2_Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L114,
    &outC->_2_Context_1.msgBus_2_RBC_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L115,
    &outC->_2_Context_1.msgBus_2_RBC_2);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->msgBus_2_RBC_1,
    &_L114);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->msgBus_2_RBC_2,
    &_L115);
  kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_2_noname, &_L1);
  kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_3_noname, &_L11);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L178, dataFromTrack_in);
  /* 1 */ dec_p42_RCM_Utils_Pkg_decoders(&_L178, &_L172);
  _L169 = _L172.valid;
  /* 1 */ dec_m38_RCM_Utils_Pkg_decoders(&_L178, &_L174);
  _L170 = _L174.valid;
  _L171 = kcg_true;
  /* 1 */ dec_m39_RCM_Utils_Pkg_decoders(&_L178, &_L173);
  /* 1 */ dec_m32_RCM_Utils_Pkg_decoders(&_L178, _L171, &_L177);
  _L175 = _L177.valid;
  outC->m32_SystemVersionReceived_p = _L175;
  _L176 = _L173.valid;
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p = _L176;
  outC->m38_initiationOfACommunicationSessionMsgReceived_p = _L170;
  outC->p42_sessionManagementReceived_p = _L169;
  _L179 = level;
  outC->level_p = _L179;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L180,
    mobileConnectionContext_1);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->mobileConnectionContext_1_p,
    &_L180);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L181,
    mobileRegistrationContext_1);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L183, eventsAndPhases);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->eventsAndPhases_p,
    &_L183);
  _L182 = mode;
  outC->mode_p = _L182;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->mobileRegistrationContext_1_p,
    &_L181);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->p42_sessionManagement_p,
    &_L172);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &outC->m32_SystemVersion_p,
    &_L177);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->m38_initiationOfACommunicationSessionMsg_p,
    &_L174);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->m39_AckOfTerminationOfACommunicationSession_p,
    &_L173);
  /* 1 */ dec_p45_RCM_Utils_Pkg_decoders(&_L178, &_L184);
  _L185 = _L184.valid;
  kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg(
    &outC->p45_networkRegistration_p,
    &_L184);
  outC->p45_networkRegistrationReceived_p = _L185;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoRC_HO_MoRC_HO_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

