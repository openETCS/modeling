/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_HO_MoRC_HO_Pkg.h"

void MoRC_HO_reset_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(&outC->Context_1);
  /* 2 */ MoRC_Main_v2_reset_MoRC_Pck(&outC->Context_2);
  /* 1 */ MoRC_Main_v2_reset_MoRC_Pck(&outC->_1_Context_1);
  /* 1 */
  processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(&outC->_2_Context_1);
}

/* MoRC_HO_Pkg::MoRC_HO */
void MoRC_HO_MoRC_HO_Pkg(
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
  outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  static morcStatus_T_RCM_Session_Types_Pkg tmp1;
  static morcStatus_T_RCM_Session_Types_Pkg tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &tmp1,
      (morcStatus_T_RCM_Session_Types_Pkg *)
        &cNoMoRCStatus_RCM_Session_Types_Pkg);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &tmp,
      (morcStatus_T_RCM_Session_Types_Pkg *)
        &cNoMoRCStatus_RCM_Session_Types_Pkg);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&tmp1, &outC->radioStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&tmp, &outC->radioStatus_2);
  }
  /* 1 */
  processHandingOver_Handover_Pkg_handoverUtils_Pkg(
    mode,
    &tmp1,
    &tmp,
    dataFromTrack_in,
    trainPosition,
    BGs,
    sessionManagementAbility,
    trainProperties,
    &outC->_2_Context_1);
  outC->triggerTrainData = outC->_2_Context_1.sendTrainData_2_acceptingRBC;
  outC->bufferInformationFromAcceptingRBC =
    outC->_2_Context_1.bufferInformationFromAcceptingRBC;
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->supervisingRBC,
    &outC->_2_Context_1.supervisingRBC);
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd =
    outC->_2_Context_1.trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  /* 1 */
  MoRC_Main_v2_MoRC_Pck(
    &outC->_2_Context_1.sessionCmds_2_MoRC_1,
    eventsAndPhases,
    atPowerUpRadioNetworkID,
    newRadioNetworkIDFromDriver,
    mode,
    level,
    mobileRegistrationContext_1,
    mobileConnectionContext_1,
    currentTime,
    reset,
    t_train,
    configData,
    &outC->_1_Context_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->radioStatus_1,
    &outC->_1_Context_1.status);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->safeRadioIndication,
    &outC->_1_Context_1.safeRadioIndication);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd_1,
    &outC->_1_Context_1.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd_1,
    &outC->_1_Context_1.mobileRegistrationCmd);
  /* 2 */
  MoRC_Main_v2_MoRC_Pck(
    &outC->_2_Context_1.sessionCmds_2_MoRC_2,
    eventsAndPhases,
    atPowerUpRadioNetworkID,
    newRadioNetworkIDFromDriver,
    mode,
    level,
    mobileRegistrationContext_2,
    mobileConnectionContext_2,
    currentTime,
    reset,
    t_train,
    configData,
    &outC->Context_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->radioStatus_2,
    &outC->Context_2.status);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd_2,
    &outC->Context_2.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd_2,
    &outC->Context_2.mobileRegistrationCmd);
  /* 1 */
  mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &outC->_1_Context_1.msgToTrackTriggers,
    &outC->Context_2.msgToTrackTriggers,
    outC->_2_Context_1.useInformationFromAcceptingRBC,
    outC->_2_Context_1.handingOverMobile_is_mobile_1,
    outC->_2_Context_1.sendPositionReport_2_acceptingRBC,
    outC->_2_Context_1.sendPositionReport_2_handingOverRBC,
    outC->_1_Context_1.sendAPositionReport,
    outC->Context_2.sendAPositionReport,
    outC->triggerTrainData,
    t_train,
    t_train_global,
    msgBusToRBC_in,
    sessionManagementAbility,
    (*configData).nid_engine,
    onboardPhoneNumbers_b,
    m_version,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->msgBus_2_RBC_1,
    &outC->Context_1.msgBus_2_RBC_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->msgBus_2_RBC_2,
    &outC->Context_1.msgBus_2_RBC_2);
  outC->ready = !(outC->_2_Context_1.notReady | outC->_1_Context_1.notReady |
      outC->Context_2.notReady);
  outC->triggerPositionReport =
    outC->_2_Context_1.sendPositionReport_2_acceptingRBC |
    outC->_2_Context_1.sendPositionReport_2_handingOverRBC |
    outC->_1_Context_1.sendAPositionReport |
    outC->Context_2.sendAPositionReport;
  outC->memorizeTheLastRadioNetworkID =
    outC->_1_Context_1.memorizeTheLastRadioNetworkID |
    outC->Context_2.memorizeTheLastRadioNetworkID;
  if (outC->_1_Context_1.lastReceivedRadioNetworkID.valid) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->lastReceivedRadioNetworkID,
      &outC->_1_Context_1.lastReceivedRadioNetworkID);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->lastReceivedRadioNetworkID,
      &outC->Context_2.lastReceivedRadioNetworkID);
  }
  outC->infomDriverNoCompatibleVersionSupported =
    outC->_1_Context_1.infomDriverNoCompatibleVersionSupported |
    outC->Context_2.infomDriverNoCompatibleVersionSupported;
  outC->rejectOrderToContactRBC_or_RIU =
    outC->_1_Context_1.rejectOrderToContactRBC_or_RIU |
    outC->_1_Context_1.rejectOrderToContactRBC_or_RIU;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_HO_MoRC_HO_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

