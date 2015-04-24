/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Main_MoRC_Pck.h"

void MoRC_Main_init_MoRC_Pck(outC_MoRC_Main_MoRC_Pck *outC)
{
  int i1;
  int i;
  
  outC->ready = kcg_true;
  for (i = 0; i < 3; i++) {
    outC->MessageToRBC.packets.p11.nid_ntc[i] = 0;
  }
  outC->MessageToRBC.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 3; i++) {
    outC->MessageToRBC.packets.p11.tractionIdentity[i].nid_ctraction = 0;
    outC->MessageToRBC.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  }
  outC->MessageToRBC.packets.p11.nIter_tractionIdentity = 0;
  outC->MessageToRBC.packets.p11.n_axle = 0;
  outC->MessageToRBC.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->MessageToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->MessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->MessageToRBC.packets.p11.v_maxtrain = 0;
  outC->MessageToRBC.packets.p11.l_train = 0;
  outC->MessageToRBC.packets.p11.NC_TRAIN =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->MessageToRBC.packets.p11.NC_CDTRAIN = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->MessageToRBC.packets.p11.valid = kcg_true;
  outC->MessageToRBC.packets.p5.TrainRunningNumber = 0;
  outC->MessageToRBC.packets.p5.valid = kcg_true;
  outC->MessageToRBC.packets.p4.M_ERROR =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->MessageToRBC.packets.p4.valid = kcg_true;
  for (i = 0; i < 1; i++) {
    for (i1 = 0; i1 < 15; i1++) {
      outC->MessageToRBC.packets.p3.aNID_RADIO[i].telephoneNumber[i1] = 0;
    }
    outC->MessageToRBC.packets.p3.aNID_RADIO[i].valid = kcg_true;
  }
  outC->MessageToRBC.packets.p3.number = 0;
  outC->MessageToRBC.packets.p3.valid = kcg_true;
  outC->MessageToRBC.packets.p1.packet1.NID_NTC = 0;
  outC->MessageToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->MessageToRBC.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->MessageToRBC.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->MessageToRBC.packets.p1.packet1.V_TRAIN = 0;
  outC->MessageToRBC.packets.p1.packet1.L_TRAININT = 0;
  outC->MessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->MessageToRBC.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->MessageToRBC.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->MessageToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->MessageToRBC.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->MessageToRBC.packets.p1.packet1.D_LRBG = 0;
  outC->MessageToRBC.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->MessageToRBC.packets.p1.packet1.NID_LRBG = 0;
  outC->MessageToRBC.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->MessageToRBC.packets.p1.packet1.L_PACKET = 0;
  outC->MessageToRBC.packets.p1.packet1.NID_PACKET = 0;
  outC->MessageToRBC.packets.p1.valid = kcg_true;
  outC->MessageToRBC.packets.p0.packet0.NID_NTC = 0;
  outC->MessageToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->MessageToRBC.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->MessageToRBC.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->MessageToRBC.packets.p0.packet0.V_TRAIN = 0;
  outC->MessageToRBC.packets.p0.packet0.L_TRAININT = 0;
  outC->MessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->MessageToRBC.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->MessageToRBC.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->MessageToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->MessageToRBC.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->MessageToRBC.packets.p0.packet0.D_LRBG = 0;
  outC->MessageToRBC.packets.p0.packet0.NID_LRBG = 0;
  outC->MessageToRBC.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->MessageToRBC.packets.p0.packet0.L_PACKET = 0;
  outC->MessageToRBC.packets.p0.packet0.NID_PACKET = 0;
  outC->MessageToRBC.packets.p0.valid = kcg_true;
  outC->MessageToRBC.header.xT_TRAIN = 0.0;
  outC->MessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->MessageToRBC.header.nid_engine = 0;
  outC->MessageToRBC.header.t_train = 0.0;
  outC->MessageToRBC.header.nid_message = 0;
  outC->MessageToRBC.header.present = kcg_true;
  outC->MessageToRBC.present = kcg_true;
  outC->sessionStatus = morc_st_inactive_Radio_Types_Pkg;
  outC->sessionSuccessfullyEstablished = kcg_true;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
  outC->requestTheSetupOfASafeRadioConnection = kcg_true;
  outC->mobileSWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->mobileSWStatus.registeredRadioNetworkID = 0;
  outC->mobileSWStatus.connectionStatus = mswc_unregistered_MoRC_Pck;
  outC->mobileSWStatus.mobileHW_available = kcg_true;
  outC->mobileSWStatus.valid = kcg_true;
  outC->safeRadioConnectionStatus_toDriver.status = srcs_NoConnection_MoRC_Pck;
  outC->safeRadioConnectionStatus_toDriver.valid = kcg_true;
  outC->InformTheDriverThatNoConnectionWasSetup = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->orderTheRegistrationOfItsConnectedMobiles = kcg_true;
  outC->currentRadioNetworkID.nid_mn = 0;
  outC->currentRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->currentRadioNetworkID.valid = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->cmdsToMobile.radioNetworkID = 0;
  outC->cmdsToMobile.action = mhwa_nop_MoRC_Pck;
  outC->cmdsToMobile.valid = kcg_true;
  outC->sendAPositionReport = kcg_true;
  outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
    kcg_true;
  managementOfRadioCommunication_init_MoRC_Pck(&outC->Context_1);
}


void MoRC_Main_reset_MoRC_Pck(outC_MoRC_Main_MoRC_Pck *outC)
{
  /* 1 */ managementOfRadioCommunication_reset_MoRC_Pck(&outC->Context_1);
}

/* MoRC_Pck::MoRC_Main */
void MoRC_Main_MoRC_Pck(
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
  outC_MoRC_Main_MoRC_Pck *outC)
{
  p42_order_T_MoRC_Pck_Coder_Pkg tmp;
  P42_SessionManagement_T_Packet_Types_Pkg tmp4;
  p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg tmp3;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg tmp2;
  p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg tmp1;
  /* MoRC_Pck::MoRC_Main::m38_initiationOfACommunicationSession */ kcg_bool m38_initiationOfACommunicationSession;
  /* MoRC_Pck::MoRC_Main::m32_RBC_or_RIU_System_Version */ m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg m32_RBC_or_RIU_System_Version;
  /* MoRC_Pck::MoRC_Main::_L15 */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg _L15;
  /* MoRC_Pck::MoRC_Main::_L70 */ kcg_bool _L70;
  /* MoRC_Pck::MoRC_Main::_L166 */ kcg_bool _L166;
  
  m32_RBC_or_RIU_System_Version.version =
    (*inMessage).Radio_Common_Header.m_version;
  m32_RBC_or_RIU_System_Version.systemVersionFromTracksideSupported = kcg_true;
  _L166 = (*inMessage).valid & (((*inMessage).messageSource ==
        msrc_Euroradio_Common_Types_Pkg) | ((*inMessage).messageSource ==
        msrc_RadioInfillUnit_Common_Types_Pkg));
  m32_RBC_or_RIU_System_Version.valid = _L166 &
    ((*inMessage).Radio_Common_Header.nid_message ==
      cNID_MESSAGE_RBC_RIU_SystemVersion_MoRC_Pck);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&tmp4, &(*inMessage).p42);
  tmp4.valid = (*inMessage).valid & (*inMessage).p42.valid;
  tmp.source = (*inMessage).messageSource;
  tmp.establishOrderDoesNotRequestToContactAnAcceptingRBC = kcg_false;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&tmp.p42, &tmp4);
  /* 1 */
  P42_Dec_MoRC_Pck_Coder_Pkg(&tmp, (kcg_bool) (mode == M_MODE_Sleeping), &_L15);
  _L70 = msrc_OBU_Common_Types_Pkg == _L15.source;
  m38_initiationOfACommunicationSession = _L166 &
    ((*inMessage).Radio_Common_Header.nid_message ==
      cm38_Initiation_of_a_Communication_Session_Id_Pkg);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &tmp2,
    &(*inMessage).p45);
  tmp2.valid = (*inMessage).valid & (*inMessage).p45.valid;
  if (_L70) {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &tmp3,
      (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
        &cInvalidOrder_MoRC_Pck_Coder_Pkg);
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(&tmp1, &_L15);
  }
  else {
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(&tmp3, &_L15);
    kcg_copy_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
      &tmp1,
      (p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *)
        &cInvalidOrder_MoRC_Pck_Coder_Pkg);
  }
  /* 1 */
  managementOfRadioCommunication_MoRC_Pck(
    currentTime,
    (kcg_bool)
      (_L166 & ((*inMessage).Radio_Common_Header.nid_message ==
          cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg)),
    &tmp3,
    (kcg_bool)
      (m38_initiationOfACommunicationSession | (_L15.establish & (_L15.source ==
            msrc_Euroradio_Common_Types_Pkg))),
    (kcg_bool)
      (_L15.establish & (_L15.source == msrc_RadioInfillUnit_Common_Types_Pkg)),
    (kcg_bool)
      ((!m32_RBC_or_RIU_System_Version.systemVersionFromTracksideSupported &
          m32_RBC_or_RIU_System_Version.valid) |
        (*obuEventsAndPhases).errorConditionRequiringTerminationDetected),
    (*obuEventsAndPhases).trainIsRejectedByRBC_duringStartOfMission,
    (*obuEventsAndPhases).driverClosesTheDeskduringStartOfMission,
    (*obuEventsAndPhases).trainExitedFromAnRBCArea,
    (*obuEventsAndPhases).endOfMissionIsExecuted,
    (*obuEventsAndPhases).isInCommunicationSessionWithAnRIU,
    (*obuEventsAndPhases).atPowerUp,
    (*obuEventsAndPhases).atPowerDown,
    level,
    &(*radioNetworkIDs).memorizedID,
    &(*radioNetworkIDs).ID_fromDriver,
    &tmp2,
    (*obuEventsAndPhases).afterDriverEntryOfANewRadioNetworkID,
    (*obuEventsAndPhases).triggerDecisionThatNoRadioNetworkIDAvailable,
    statusOfMobile,
    (*obuEventsAndPhases).isPartOfAnOngoingStartOfMissionProcedure,
    (*obuEventsAndPhases).trainPassesALevelTransitionBorder,
    &tmp1,
    _L15.establishOrderDoesNotRequestToContactAnAcceptingRBC,
    (*obuEventsAndPhases).trainPassesA_RBC_RBC_border_WithItsFrontEnd,
    m32_RBC_or_RIU_System_Version.systemVersionFromTracksideSupported,
    m32_RBC_or_RIU_System_Version.valid,
    mode,
    (*obuEventsAndPhases).atStartOfMission,
    (*obuEventsAndPhases).modeChangeHasToBeReportedToRBC,
    (*obuEventsAndPhases).driverHasManuallyChangedLevel,
    (*obuEventsAndPhases).trainFrontReachesEndOfAnnouncedRadioHole,
    (*obuEventsAndPhases).startOfMissionProcedureCompleted,
    (*obuEventsAndPhases).trainFrontInsideInAnAnnouncedRadioHole,
    (*obuEventsAndPhases).OBU_hasToEstablishANewSession,
    (*obuEventsAndPhases).startOfMissionProcedureIsGoingOn,
    m38_initiationOfACommunicationSession,
    &(*radioNetworkIDs).defaultID,
    connectionStatusTimerInterval,
    &outC->Context_1);
  outC->sendAPositionReport = outC->Context_1.sendAPositionReport;
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &outC->cmdsToMobile,
    &outC->Context_1.mobileHWCmd);
  outC->memorizeTheLastRadioNetworkID =
    outC->Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->currentRadioNetworkID,
    &outC->Context_1.currentRadioNetworkID);
  outC->orderTheRegistrationOfItsConnectedMobiles =
    outC->Context_1.orderTheRegistrationOfItsConnectedMobiles;
  outC->rejectOrderToContactRBC_or_RIU =
    outC->Context_1.rejectOrderToContactRBC_or_RIU;
  outC->InformTheDriverThatNoConnectionWasSetup =
    outC->Context_1.InformTheDriverThatNoConnectionWasSetup;
  outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
    outC->Context_1.ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession;
  kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck(
    &outC->safeRadioConnectionStatus_toDriver,
    &outC->Context_1.safeRadioConnectionStatus_toDriver);
  outC->sessionSuccessfullyEstablished =
    outC->Context_1.sessionSuccessfullyEstablished;
  kcg_copy_mobileSWStatus_Type_MoRC_Pck(
    &outC->mobileSWStatus,
    &outC->Context_1.mobileSWStatus);
  outC->requestTheSetupOfASafeRadioConnection =
    outC->Context_1.requestTheSetupOfASafeRadioConnection;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside =
    outC->Context_1.requestReleaseOfSafeRadioConnectionWithTrackside;
  outC->sessionStatus = outC->Context_1.sessionStatus;
  outC->ready = outC->Context_1.ready;
  if (outC->Context_1.sendTheMessageInitiationOfCommunicationSessionToTrackside) {
    /* 6 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co155_Initiation_of_a_communication_session_Id_Pkg,
      t_train,
      nid_engine,
      &outC->MessageToRBC);
  }
  else if (outC->Context_1.sendATerminationOfCommunicationMessage) {
    /* 8 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co156_Termination_of_a_communication_session_Id_Pkg,
      t_train,
      nid_engine,
      &outC->MessageToRBC);
  }
  else if (outC->Context_1.sendASessionEstablishedReportToTrackside) {
    /* 11 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co159_Session_established_Id_Pkg,
      t_train,
      nid_engine,
      &outC->MessageToRBC);
    kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &outC->MessageToRBC.packets.p3,
      onboardPhoneNumbers);
  }
  else if (outC->Context_1.sendMessage_NoCompatibleVersionSupported) {
    /* 13 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co154_No_Compatible_Version_Support_Id_Pkg,
      t_train,
      nid_engine,
      &outC->MessageToRBC);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->MessageToRBC,
      (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cNoMessageToRBC_MoRC_Pck);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** MoRC_Main_MoRC_Pck.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

