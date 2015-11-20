/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Main_v2_MoRC_Pck.h"

#ifndef KCG_USER_DEFINED_INIT
void MoRC_Main_v2_init_MoRC_Pck(outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsgReceived_p = kcg_true;
  outC->m32_SystemVersionReceived_p = kcg_true;
  outC->p42_sessionManagementReceived_p = kcg_true;
  outC->init = kcg_true;
  outC->sessionStatus_l.valid = kcg_true;
  outC->sessionStatus_l.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->sessionStatus_l.nid_c = 0;
  outC->sessionStatus_l.nid_rbc = 0;
  outC->sessionStatus_l.nid_radio = 0;
  outC->registrationStatus_l.valid = kcg_true;
  outC->registrationStatus_l.mobileDeviceNo = 0;
  outC->registrationStatus_l.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->registrationStatus_l.status = mrs_unregistered_RCM_Types_Pkg;
  outC->registrationStatus_l.nid_mn = 0;
  outC->connectionStatus_l.valid = kcg_true;
  outC->connectionStatus_l.mobileDeviceNo = 0;
  outC->connectionStatus_l.status = mcs_disconnected_RCM_Types_Pkg;
  outC->connectionStatus_l.nid_radio = 0;
  outC->connectionStatus_l.settingUpConnectionHasFailed = kcg_true;
  outC->connectionStatus_l.connectionLost = kcg_true;
  outC->connectionStatus_l.isInRadioHole = kcg_true;
  outC->notReady = kcg_true;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = 0;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->mobileRegistrationCmd.valid = kcg_true;
  outC->mobileRegistrationCmd.mobileDeviceNo = 0;
  outC->mobileRegistrationCmd.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd.network_id = 0;
  outC->mobileConnectionCmd.valid = kcg_true;
  outC->mobileConnectionCmd.mobileDeviceNo = 0;
  outC->mobileConnectionCmd.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd.nid_radio = 0;
  outC->safeRadioIndication.valid = kcg_true;
  outC->safeRadioIndication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->status.registration.valid = kcg_true;
  outC->status.registration.mobileDeviceNo = 0;
  outC->status.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->status.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->status.registration.nid_mn = 0;
  outC->status.connection.valid = kcg_true;
  outC->status.connection.mobileDeviceNo = 0;
  outC->status.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->status.connection.nid_radio = 0;
  outC->status.connection.settingUpConnectionHasFailed = kcg_true;
  outC->status.connection.connectionLost = kcg_true;
  outC->status.connection.isInRadioHole = kcg_true;
  outC->status.session.valid = kcg_true;
  outC->status.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->status.session.nid_c = 0;
  outC->status.session.nid_rbc = 0;
  outC->status.session.nid_radio = 0;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->sendAPositionReport = kcg_true;
  outC->msgToTrackTriggers.m155_initiationOfACommunicationSession = kcg_true;
  outC->msgToTrackTriggers.m156_terminationOfACommunicationSession = kcg_true;
  outC->msgToTrackTriggers.m159_sessionEstablished = kcg_true;
  outC->msgToTrackTriggers.m154_noCompatibleVersionSupported = kcg_true;
  outC->msgToRBC.present = kcg_true;
  outC->msgToRBC.header.present = kcg_true;
  outC->msgToRBC.header.nid_message = 0;
  outC->msgToRBC.header.t_train = 0;
  outC->msgToRBC.header.nid_engine = 0;
  outC->msgToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->msgToRBC.header.xT_TRAIN = 0;
  outC->msgToRBC.header.xNID_EM = 0;
  outC->msgToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->msgToRBC.header.xNID_TEXTMESSAGE = 0;
  outC->msgToRBC.packets.p0.valid = kcg_true;
  outC->msgToRBC.packets.p0.packet0.NID_PACKET = 0;
  outC->msgToRBC.packets.p0.packet0.L_PACKET = 0;
  outC->msgToRBC.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->msgToRBC.packets.p0.packet0.NID_LRBG = 0;
  outC->msgToRBC.packets.p0.packet0.D_LRBG = 0;
  outC->msgToRBC.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->msgToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->msgToRBC.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->msgToRBC.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->msgToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->msgToRBC.packets.p0.packet0.L_TRAININT = 0;
  outC->msgToRBC.packets.p0.packet0.V_TRAIN = 0;
  outC->msgToRBC.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->msgToRBC.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->msgToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->msgToRBC.packets.p0.packet0.NID_NTC = 0;
  outC->msgToRBC.packets.p1.valid = kcg_true;
  outC->msgToRBC.packets.p1.packet1.NID_PACKET = 0;
  outC->msgToRBC.packets.p1.packet1.L_PACKET = 0;
  outC->msgToRBC.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->msgToRBC.packets.p1.packet1.NID_LRBG = 0;
  outC->msgToRBC.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->msgToRBC.packets.p1.packet1.D_LRBG = 0;
  outC->msgToRBC.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->msgToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->msgToRBC.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->msgToRBC.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->msgToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->msgToRBC.packets.p1.packet1.L_TRAININT = 0;
  outC->msgToRBC.packets.p1.packet1.V_TRAIN = 0;
  outC->msgToRBC.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->msgToRBC.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->msgToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->msgToRBC.packets.p1.packet1.NID_NTC = 0;
  outC->msgToRBC.packets.p3.valid = kcg_true;
  outC->msgToRBC.packets.p3.number = 0;
  for (i1 = 0; i1 < 1; i1++) {
    outC->msgToRBC.packets.p3.aNID_RADIO[i1].valid = kcg_true;
    for (i = 0; i < 15; i++) {
      outC->msgToRBC.packets.p3.aNID_RADIO[i1].telephoneNumber[i] = 0;
    }
  }
  outC->msgToRBC.packets.p4.valid = kcg_true;
  outC->msgToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->msgToRBC.packets.p5.valid = kcg_true;
  outC->msgToRBC.packets.p5.TrainRunningNumber = 0;
  outC->msgToRBC.packets.p9.valid = kcg_true;
  outC->msgToRBC.packets.p9.transitionInformation = 0;
  outC->msgToRBC.packets.p11.valid = kcg_true;
  outC->msgToRBC.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->msgToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->msgToRBC.packets.p11.l_train = 0;
  outC->msgToRBC.packets.p11.v_maxtrain = 0;
  outC->msgToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->msgToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->msgToRBC.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->msgToRBC.packets.p11.n_axle = 0;
  outC->msgToRBC.packets.p11.nIter_tractionIdentity = 0;
  for (i2 = 0; i2 < 4; i2++) {
    outC->msgToRBC.packets.p11.tractionIdentity[i2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->msgToRBC.packets.p11.tractionIdentity[i2].nid_ctraction = 0;
  }
  outC->msgToRBC.packets.p11.nIter_ntc = 0;
  for (i3 = 0; i3 < 5; i3++) {
    outC->msgToRBC.packets.p11.nid_ntc[i3] = 0;
  }
  /* 1 */
  safeRadioConnectionIndication_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->_4_Context_1);
  /* 1 */
  registeringToTheRadioNetwork_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  requestRadioConnectionSetupFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->_2_Context_1);
  /* 1 */ sessionSequencer_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */
  initiateTerminatingSession_v2_init_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoRC_Main_v2_reset_MoRC_Pck(outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  outC->init = kcg_true;
  /* 1 */
  safeRadioConnectionIndication_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_4_Context_1);
  /* 1 */
  registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_2_Context_1);
  /* 1 */ sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */
  initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::MoRC_Main_v2 */
void MoRC_Main_v2_MoRC_Pck(
  /* MoRC_Pck::MoRC_Main_v2::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* MoRC_Pck::MoRC_Main_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::MoRC_Main_v2::atPowerUpRadioNetworkID */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_Pck::MoRC_Main_v2::newRadioNetworkIDFromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_Pck::MoRC_Main_v2::mode */ M_MODE mode,
  /* MoRC_Pck::MoRC_Main_v2::level */ M_LEVEL level,
  /* MoRC_Pck::MoRC_Main_v2::mobileRegistrationContext */ mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* MoRC_Pck::MoRC_Main_v2::mobileConnectionContext */ mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext,
  /* MoRC_Pck::MoRC_Main_v2::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::MoRC_Main_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::MoRC_Main_v2::t_train */ T_TRAIN t_train,
  /* MoRC_Pck::MoRC_Main_v2::configData */ morc_configData_T_RCM_Session_Types_Pkg *configData,
  outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  /* MoRC_Pck::MoRC_Main_v2::msgToRBC */
  static msgToTrack_T_RCM_MsgTypes_Pkg _1_msgToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::then::_L11 */
  static NID_ENGINE _L11_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::then::_L12 */
  static morc_configData_T_RCM_Session_Types_Pkg _L12_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::then::_L10 */
  static kcg_int _L10_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::then::_L9 */
  static kcg_bool _L9_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::then::_L6 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L6_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::then::_L7 */
  static T_TRAIN _L7_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::then::_L8 */
  static NID_MESSAGE _L8_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::msgToRBC */
  static msgToTrack_T_RCM_MsgTypes_Pkg msgToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else */
  static kcg_bool _9_else_clock_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::msgToRBC */
  static msgToTrack_T_RCM_MsgTypes_Pkg _5_msgToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::then::_L19 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L19_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::then::_L17 */
  static morc_configData_T_RCM_Session_Types_Pkg _L17_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::then::_L18 */
  static NID_ENGINE _L18_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::then::_L16 */
  static kcg_int _L16_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::then::_L15 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L15_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::then::_L10 */
  static kcg_bool _L1013_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::then::_L11 */
  static T_TRAIN _L1114_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::then::_L12 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1215_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::then::_L1 */
  static NID_MESSAGE _L1_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::msgToRBC */
  static msgToTrack_T_RCM_MsgTypes_Pkg _4_msgToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::else */
  static kcg_bool else_clock_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::else::else::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L123_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::msgToRBC */
  static msgToTrack_T_RCM_MsgTypes_Pkg _6_msgToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::else::then::_L2 */
  static T_TRAIN _L222_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::else::then::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L121_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::else::then::_L5 */
  static kcg_bool _L520_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::else::then::_L6 */
  static NID_MESSAGE _L619_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::else::then::_L7 */
  static kcg_int _L718_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::else::then::_L9 */
  static morc_configData_T_RCM_Session_Types_Pkg _L917_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else::else::then::_L8 */
  static NID_ENGINE _L816_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::msgToRBC */
  static msgToTrack_T_RCM_MsgTypes_Pkg _7_msgToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::else */
  static kcg_bool _8_else_clock_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::msgToRBC */
  static msgToTrack_T_RCM_MsgTypes_Pkg _2_msgToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::then::_L4 */
  static NID_MESSAGE _L4_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::then::_L3 */
  static T_TRAIN _L3_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::then::_L2 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L2_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::then::_L5 */
  static kcg_bool _L5_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::then::_L6 */
  static kcg_int _L612_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::then::_L8 */
  static morc_configData_T_RCM_Session_Types_Pkg _L811_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC::else::then::_L7 */
  static NID_ENGINE _L710_ifMessageToRBC;
  /* MoRC_Pck::MoRC_Main_v2::msgToRBC */
  static msgToTrack_T_RCM_MsgTypes_Pkg _3_msgToRBC;
  /* MoRC_Pck::MoRC_Main_v2::sessionStatus_l */
  static sessionStatus_T_RCM_Session_Types_Pkg last_sessionStatus_l;
  /* MoRC_Pck::MoRC_Main_v2::registrationStatus_l */
  static mobileRegistrationContext_T_RCM_Types_Pkg last_registrationStatus_l;
  /* MoRC_Pck::MoRC_Main_v2::connectionStatus_l */
  static mobileConnectionContext_T_RCM_Types_Pkg last_connectionStatus_l;
  /* MoRC_Pck::MoRC_Main_v2::sNotReady */
  static kcg_bool sNotReady;
  /* MoRC_Pck::MoRC_Main_v2::ifMessageToRBC */
  static kcg_bool ifMessageToRBC_clock;
  /* MoRC_Pck::MoRC_Main_v2::p42_sessionManagement */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg p42_sessionManagement;
  /* MoRC_Pck::MoRC_Main_v2::m38_initiationOfACommunicationSessionMsg */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg m38_initiationOfACommunicationSessionMsg;
  /* MoRC_Pck::MoRC_Main_v2::m39_AckOfTerminationOfACommunicationSession */
  static m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg m39_AckOfTerminationOfACommunicationSession;
  /* MoRC_Pck::MoRC_Main_v2::m32_SystemVersion */
  static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg m32_SystemVersion;
  /* MoRC_Pck::MoRC_Main_v2::m154_noCompatibleVersionSupported */
  static kcg_bool m154_noCompatibleVersionSupported;
  /* MoRC_Pck::MoRC_Main_v2::m159_sessionEstablished */
  static kcg_bool m159_sessionEstablished;
  /* MoRC_Pck::MoRC_Main_v2::m156_terminationOfACommunicationSession */
  static kcg_bool m156_terminationOfACommunicationSession;
  /* MoRC_Pck::MoRC_Main_v2::m155_initiationOfACommunicationSession */
  static kcg_bool m155_initiationOfACommunicationSession;
  /* MoRC_Pck::MoRC_Main_v2::_L1 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L1;
  /* MoRC_Pck::MoRC_Main_v2::_L2 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L2;
  /* MoRC_Pck::MoRC_Main_v2::_L10 */
  static kcg_bool _L10;
  /* MoRC_Pck::MoRC_Main_v2::_L9 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L9;
  /* MoRC_Pck::MoRC_Main_v2::_L8 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L8;
  /* MoRC_Pck::MoRC_Main_v2::_L14 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L14;
  /* MoRC_Pck::MoRC_Main_v2::_L23 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L23;
  /* MoRC_Pck::MoRC_Main_v2::_L22 */
  static mobileRegistrationCmd_T_RCM_Types_Pkg _L22;
  /* MoRC_Pck::MoRC_Main_v2::_L21 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L21;
  /* MoRC_Pck::MoRC_Main_v2::_L20 */
  static kcg_bool _L20;
  /* MoRC_Pck::MoRC_Main_v2::_L19 */
  static kcg_bool _L19;
  /* MoRC_Pck::MoRC_Main_v2::_L26 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L26;
  /* MoRC_Pck::MoRC_Main_v2::_L27 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L27;
  /* MoRC_Pck::MoRC_Main_v2::_L28 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L28;
  /* MoRC_Pck::MoRC_Main_v2::_L30 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L30;
  /* MoRC_Pck::MoRC_Main_v2::_L31 */
  static kcg_bool _L31;
  /* MoRC_Pck::MoRC_Main_v2::_L33 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L33;
  /* MoRC_Pck::MoRC_Main_v2::_L34 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L34;
  /* MoRC_Pck::MoRC_Main_v2::_L36 */
  static M_MODE _L36;
  /* MoRC_Pck::MoRC_Main_v2::_L37 */
  static M_MODE _L37;
  /* MoRC_Pck::MoRC_Main_v2::_L39 */
  static M_LEVEL _L39;
  /* MoRC_Pck::MoRC_Main_v2::_L40 */
  static kcg_bool _L40;
  /* MoRC_Pck::MoRC_Main_v2::_L41 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L41;
  /* MoRC_Pck::MoRC_Main_v2::_L42 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L42;
  /* MoRC_Pck::MoRC_Main_v2::_L43 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L43;
  /* MoRC_Pck::MoRC_Main_v2::_L45 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L45;
  /* MoRC_Pck::MoRC_Main_v2::_L46 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L46;
  /* MoRC_Pck::MoRC_Main_v2::_L47 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L47;
  /* MoRC_Pck::MoRC_Main_v2::_L50 */
  static kcg_bool _L50;
  /* MoRC_Pck::MoRC_Main_v2::_L52 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L52;
  /* MoRC_Pck::MoRC_Main_v2::_L51 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L51;
  /* MoRC_Pck::MoRC_Main_v2::_L55 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L55;
  /* MoRC_Pck::MoRC_Main_v2::_L64 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L64;
  /* MoRC_Pck::MoRC_Main_v2::_L63 */
  static kcg_bool _L63;
  /* MoRC_Pck::MoRC_Main_v2::_L62 */
  static kcg_bool _L62;
  /* MoRC_Pck::MoRC_Main_v2::_L61 */
  static kcg_bool _L61;
  /* MoRC_Pck::MoRC_Main_v2::_L60 */
  static kcg_bool _L60;
  /* MoRC_Pck::MoRC_Main_v2::_L59 */
  static kcg_bool _L59;
  /* MoRC_Pck::MoRC_Main_v2::_L58 */
  static kcg_bool _L58;
  /* MoRC_Pck::MoRC_Main_v2::_L57 */
  static kcg_bool _L57;
  /* MoRC_Pck::MoRC_Main_v2::_L56 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L56;
  /* MoRC_Pck::MoRC_Main_v2::_L65 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L65;
  /* MoRC_Pck::MoRC_Main_v2::_L66 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L66;
  /* MoRC_Pck::MoRC_Main_v2::_L67 */
  static kcg_bool _L67;
  /* MoRC_Pck::MoRC_Main_v2::_L73 */
  static kcg_bool _L73;
  /* MoRC_Pck::MoRC_Main_v2::_L72 */
  static kcg_bool _L72;
  /* MoRC_Pck::MoRC_Main_v2::_L75 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L75;
  /* MoRC_Pck::MoRC_Main_v2::_L76 */
  static M_MODE _L76;
  /* MoRC_Pck::MoRC_Main_v2::_L77 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L77;
  /* MoRC_Pck::MoRC_Main_v2::_L78 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L78;
  /* MoRC_Pck::MoRC_Main_v2::_L79 */
  static kcg_bool _L79;
  /* MoRC_Pck::MoRC_Main_v2::_L82 */
  static kcg_bool _L82;
  /* MoRC_Pck::MoRC_Main_v2::_L83 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L83;
  /* MoRC_Pck::MoRC_Main_v2::_L84 */
  static safeRadioConnectionIndication_T_RCM_Session_Types_Pkg _L84;
  /* MoRC_Pck::MoRC_Main_v2::_L86 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L86;
  /* MoRC_Pck::MoRC_Main_v2::_L87 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L87;
  /* MoRC_Pck::MoRC_Main_v2::_L88 */
  static kcg_bool _L88;
  /* MoRC_Pck::MoRC_Main_v2::_L90 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L90;
  /* MoRC_Pck::MoRC_Main_v2::_L91 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L91;
  /* MoRC_Pck::MoRC_Main_v2::_L92 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L92;
  /* MoRC_Pck::MoRC_Main_v2::_L93 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L93;
  /* MoRC_Pck::MoRC_Main_v2::_L94 */
  static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg _L94;
  /* MoRC_Pck::MoRC_Main_v2::_L95 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L95;
  /* MoRC_Pck::MoRC_Main_v2::_L96 */
  static m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L96;
  /* MoRC_Pck::MoRC_Main_v2::_L99 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L99;
  /* MoRC_Pck::MoRC_Main_v2::_L100 */
  static kcg_bool _L100;
  /* MoRC_Pck::MoRC_Main_v2::_L101 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L101;
  /* MoRC_Pck::MoRC_Main_v2::_L102 */
  static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg _L102;
  /* MoRC_Pck::MoRC_Main_v2::_L103 */
  static m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L103;
  /* MoRC_Pck::MoRC_Main_v2::_L104 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L104;
  /* MoRC_Pck::MoRC_Main_v2::_L105 */
  static morc_configData_T_RCM_Session_Types_Pkg _L105;
  /* MoRC_Pck::MoRC_Main_v2::_L106 */
  static NID_RADIO _L106;
  /* MoRC_Pck::MoRC_Main_v2::_L107 */
  static morc_configData_T_RCM_Session_Types_Pkg _L107;
  /* MoRC_Pck::MoRC_Main_v2::_L108 */
  static kcg_int _L108;
  /* MoRC_Pck::MoRC_Main_v2::_L110 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L110;
  /* MoRC_Pck::MoRC_Main_v2::_L113 */
  static morc_configData_T_RCM_Session_Types_Pkg _L113;
  /* MoRC_Pck::MoRC_Main_v2::_L112 */
  static kcg_int _L112;
  /* MoRC_Pck::MoRC_Main_v2::_L111 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L111;
  /* MoRC_Pck::MoRC_Main_v2::_L116 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L116;
  /* MoRC_Pck::MoRC_Main_v2::_L115 */
  static morc_configData_T_RCM_Session_Types_Pkg _L115;
  /* MoRC_Pck::MoRC_Main_v2::_L114 */
  static kcg_int _L114;
  /* MoRC_Pck::MoRC_Main_v2::_L118 */
  static morc_configData_T_RCM_Session_Types_Pkg _L118;
  /* MoRC_Pck::MoRC_Main_v2::_L117 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L117;
  /* MoRC_Pck::MoRC_Main_v2::_L120 */
  static morc_configData_T_RCM_Session_Types_Pkg _L120;
  /* MoRC_Pck::MoRC_Main_v2::_L119 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L119;
  /* MoRC_Pck::MoRC_Main_v2::_L121 */
  static morcStatus_T_RCM_Session_Types_Pkg _L121;
  /* MoRC_Pck::MoRC_Main_v2::_L122 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L122;
  /* MoRC_Pck::MoRC_Main_v2::_L123 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L123;
  /* MoRC_Pck::MoRC_Main_v2::_L124 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L124;
  /* MoRC_Pck::MoRC_Main_v2::_L125 */
  static kcg_bool _L125;
  /* MoRC_Pck::MoRC_Main_v2::_L126 */
  static kcg_bool _L126;
  /* MoRC_Pck::MoRC_Main_v2::_L127 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L127;
  /* MoRC_Pck::MoRC_Main_v2::_L128 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L128;
  /* MoRC_Pck::MoRC_Main_v2::_L129 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L129;
  /* MoRC_Pck::MoRC_Main_v2::_L130 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L130;
  /* MoRC_Pck::MoRC_Main_v2::_L131 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L131;
  /* MoRC_Pck::MoRC_Main_v2::_L132 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L132;
  /* MoRC_Pck::MoRC_Main_v2::_L133 */
  static kcg_bool _L133;
  /* MoRC_Pck::MoRC_Main_v2::_L134 */
  static kcg_bool _L134;
  /* MoRC_Pck::MoRC_Main_v2::_L135 */
  static kcg_bool _L135;
  /* MoRC_Pck::MoRC_Main_v2::_L136 */
  static kcg_bool _L136;
  /* MoRC_Pck::MoRC_Main_v2::_L137 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg _L137;
  /* MoRC_Pck::MoRC_Main_v2::_L138 */
  static kcg_bool _L138;
  /* MoRC_Pck::MoRC_Main_v2::_L139 */
  static kcg_bool _L139;
  /* MoRC_Pck::MoRC_Main_v2::_L140 */
  static kcg_bool _L140;
  /* MoRC_Pck::MoRC_Main_v2::_L141 */
  static kcg_bool _L141;
  /* MoRC_Pck::MoRC_Main_v2::_L142 */
  static kcg_bool _L142;
  /* MoRC_Pck::MoRC_Main_v2::_L143 */
  static kcg_bool _L143;
  /* MoRC_Pck::MoRC_Main_v2::_L144 */
  static kcg_bool _L144;
  /* MoRC_Pck::MoRC_Main_v2::_L145 */
  static kcg_bool _L145;
  
  _L36 = mode;
  _L82 = kcg_false;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L33, eventsAndPhases);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L90, msg_in);
  /* 2 */ dec_p42_RCM_Utils_Pkg_decoders(&_L90, &_L99);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &p42_sessionManagement,
    &_L99);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L91,
    &p42_sessionManagement);
  /* 1 */ dec_m38_RCM_Utils_Pkg_decoders(&_L90, &_L95);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &m38_initiationOfACommunicationSessionMsg,
    &_L95);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &_L101,
    &m38_initiationOfACommunicationSessionMsg);
  /* last_init_ck_registrationStatus_l */ if (outC->init) {
    kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
      &last_registrationStatus_l,
      (mobileRegistrationContext_T_RCM_Types_Pkg *)
        &cNoMobileRegistrationContext_RCM_Types_Pkg);
  }
  else {
    kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
      &last_registrationStatus_l,
      &outC->registrationStatus_l);
  }
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L52,
    &last_registrationStatus_l);
  /* last_init_ck_connectionStatus_l */ if (outC->init) {
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
      &last_connectionStatus_l,
      (mobileConnectionContext_T_RCM_Types_Pkg *)
        &cNoConnectionContext_RCM_Types_Pkg);
  }
  else {
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
      &last_connectionStatus_l,
      &outC->connectionStatus_l);
  }
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L51,
    &last_connectionStatus_l);
  /* last_init_ck_sessionStatus_l */ if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &last_sessionStatus_l,
      (sessionStatus_T_RCM_Session_Types_Pkg *)
        &cNoSessionStatus_RCM_Session_Types_Pkg);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &last_sessionStatus_l,
      &outC->sessionStatus_l);
  }
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L27, &last_sessionStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &_L83,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cNoSessionStatus_RCM_Session_Types_Pkg);
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&_L105, configData);
  _L106 = _L105.nid_radio_shortNumberStoredOnboard;
  /* 1 */
  initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
    _L36,
    _L82,
    &_L33,
    &_L91,
    &_L101,
    &_L52,
    &_L51,
    &_L27,
    &_L83,
    _L106,
    &_L1);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L92,
    &p42_sessionManagement);
  /* 1 */ dec_m39_RCM_Utils_Pkg_decoders(&_L90, &_L96);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &m39_AckOfTerminationOfACommunicationSession,
    &_L96);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &_L103,
    &m39_AckOfTerminationOfACommunicationSession);
  _L100 = kcg_true;
  /* 1 */ dec_m32_RCM_Utils_Pkg_decoders(&_L90, _L100, &_L94);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &m32_SystemVersion,
    &_L94);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &_L102,
    &m32_SystemVersion);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L65,
    &last_connectionStatus_l);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L93,
    &p42_sessionManagement);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L75, eventsAndPhases);
  _L76 = mode;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L77, &last_sessionStatus_l);
  _L78 = currentTime;
  _L79 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&_L113, configData);
  _L111 = _L113.maxWaitingTimeUntilTerminationOrderReceived;
  _L112 = _L113.noOfRetriesUntilTerminationOrderIsReceived;
  /* 1 */
  initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
    &_L93,
    &_L75,
    _L76,
    &_L77,
    _L78,
    _L79,
    _L111,
    _L112,
    &outC->Context_1);
  _L72 = outC->Context_1.initiateTermination;
  _L73 = outC->Context_1.sendAPositionReport;
  _L66 = currentTime;
  _L67 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&_L107, configData);
  _L108 = _L107.noOfRetriesOfSendingTerminationMessage;
  _L110 = _L107.maxWaitingTimeForAckMessageReceived;
  /* 1 */
  sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
    &_L1,
    &_L92,
    &_L103,
    &_L102,
    &_L65,
    _L72,
    _L66,
    _L67,
    _L108,
    _L110,
    &outC->_1_Context_1);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L56,
    &outC->_1_Context_1.p42_SessionManagement_out);
  _L57 = outC->_1_Context_1.send_m155_initiationOfACommunicationSession;
  _L58 = outC->_1_Context_1.send_m156_TerminationOfCommunicationSession;
  _L59 = outC->_1_Context_1.send_m159_sessionEstablishedReport;
  _L60 = outC->_1_Context_1.send_m154_noCompatibleVersionSupported;
  _L61 = outC->_1_Context_1.requestSafeRadioConnectionSetup;
  _L62 = outC->_1_Context_1.infomDriverNoCompatibleVersionSupported;
  _L63 = outC->_1_Context_1.requestReleaseOfSafeRadioConnection;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &_L64,
    &outC->_1_Context_1.sessionStatus);
  _L125 = outC->_1_Context_1.notReady;
  sNotReady = _L125;
  _L37 = mode;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L34, eventsAndPhases);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&outC->sessionStatus_l, &_L64);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L28, &outC->sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L26,
    &last_registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L14,
    &last_connectionStatus_l);
  _L55 = currentTime;
  _L31 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&_L115, configData);
  _L116 = _L115.maxTimeToMaintainCommSession;
  _L114 = _L115.noOfTriesToEstablishASafeRadioConnection;
  /* 1 */
  requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
    _L37,
    &_L34,
    &_L56,
    &_L28,
    &_L26,
    &_L14,
    _L61,
    _L63,
    _L55,
    _L31,
    _L116,
    _L114,
    &outC->_2_Context_1);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &_L2,
    &outC->_2_Context_1.connectionCmd);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L43,
    mobileConnectionContext);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L41,
    &last_registrationStatus_l);
  /* 1 */
  connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg(
    &_L2,
    &_L43,
    &_L41,
    &_L8,
    &_L9,
    &_L10);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->connectionStatus_l,
    &_L9);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L46,
    atPowerUpRadioNetworkID);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L47,
    newRadioNetworkIDFromDriver);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L104, msg_in);
  _L39 = level;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L45, eventsAndPhases);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L30, &outC->sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L42,
    mobileRegistrationContext);
  _L40 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&_L118, configData);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L117,
    &_L118.radioNetworkID_Default);
  /* 1 */
  registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
    &_L46,
    &_L47,
    &_L104,
    _L39,
    &_L45,
    &_L30,
    &_L9,
    &_L42,
    _L40,
    &_L117,
    &outC->_3_Context_1);
  _L19 = outC->_3_Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L21,
    &outC->_3_Context_1.lastReceivedRadioNetworkID);
  _L20 = outC->_3_Context_1.rejectOrderToContactRBC_or_RIU;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &_L22,
    &outC->_3_Context_1.mobileRegistrationCmd);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L23,
    &outC->_3_Context_1.mobileRegistrationStatus);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->registrationStatus_l,
    &_L23);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd,
    &_L8);
  _L50 = _L10 | _L20;
  outC->rejectOrderToContactRBC_or_RIU = _L50;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd,
    &_L22);
  outC->memorizeTheLastRadioNetworkID = _L19;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->lastReceivedRadioNetworkID,
    &_L21);
  outC->infomDriverNoCompatibleVersionSupported = _L62;
  outC->sendAPositionReport = _L73;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L86, eventsAndPhases);
  _L87 = currentTime;
  _L88 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&_L120, configData);
  _L119 = _L120.connectionStatusTimerInterval;
  /* 1 */
  safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
    &_L8,
    &_L9,
    &_L86,
    _L87,
    _L88,
    _L119,
    &outC->_4_Context_1);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &_L84,
    &outC->_4_Context_1.indication);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->safeRadioIndication,
    &_L84);
  m155_initiationOfACommunicationSession = _L57;
  ifMessageToRBC_clock = m155_initiationOfACommunicationSession;
  m156_terminationOfACommunicationSession = _L58;
  /* ck_ifMessageToRBC */ if (ifMessageToRBC_clock) {
  }
  else {
    _9_else_clock_ifMessageToRBC = m156_terminationOfACommunicationSession;
  }
  m159_sessionEstablished = _L59;
  /* ck_ifMessageToRBC */ if (ifMessageToRBC_clock) {
  }
  else /* ck_anon_activ */ if (_9_else_clock_ifMessageToRBC) {
  }
  else {
    _8_else_clock_ifMessageToRBC = m159_sessionEstablished;
  }
  m154_noCompatibleVersionSupported = _L60;
  /* ck_ifMessageToRBC */ if (ifMessageToRBC_clock) {
    _L9_ifMessageToRBC = kcg_true;
    _L8_ifMessageToRBC = co155_Initiation_of_a_communication_session_Id_Pkg;
    _L7_ifMessageToRBC = t_train;
    _L10_ifMessageToRBC = 0;
    kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
      &_L12_ifMessageToRBC,
      configData);
    _L11_ifMessageToRBC = _L12_ifMessageToRBC.nid_engine;
    /* 4 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      _L9_ifMessageToRBC,
      _L8_ifMessageToRBC,
      _L7_ifMessageToRBC,
      _L10_ifMessageToRBC,
      _L11_ifMessageToRBC,
      &_L6_ifMessageToRBC);
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_1_msgToRBC, &_L6_ifMessageToRBC);
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&outC->msgToRBC, &_1_msgToRBC);
  }
  else {
    /* ck_anon_activ */ if (_9_else_clock_ifMessageToRBC) {
      _L5_ifMessageToRBC = kcg_true;
      _L4_ifMessageToRBC = co156_Termination_of_a_communication_session_Id_Pkg;
      _L3_ifMessageToRBC = t_train;
      _L612_ifMessageToRBC = 0;
      kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
        &_L811_ifMessageToRBC,
        configData);
      _L710_ifMessageToRBC = _L811_ifMessageToRBC.nid_engine;
      /* 3 */
      genMsgToRBC_MoRC_Pck_Coder_Pkg(
        _L5_ifMessageToRBC,
        _L4_ifMessageToRBC,
        _L3_ifMessageToRBC,
        _L612_ifMessageToRBC,
        _L710_ifMessageToRBC,
        &_L2_ifMessageToRBC);
      kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_3_msgToRBC, &_L2_ifMessageToRBC);
      kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&msgToRBC, &_3_msgToRBC);
    }
    else {
      /* ck_anon_activ */ if (_8_else_clock_ifMessageToRBC) {
        _L1013_ifMessageToRBC = kcg_true;
        _L1_ifMessageToRBC = co159_Session_established_Id_Pkg;
        _L1114_ifMessageToRBC = t_train;
        _L16_ifMessageToRBC = 0;
        kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
          &_L17_ifMessageToRBC,
          configData);
        _L18_ifMessageToRBC = _L17_ifMessageToRBC.nid_engine;
        /* 2 */
        genMsgToRBC_MoRC_Pck_Coder_Pkg(
          _L1013_ifMessageToRBC,
          _L1_ifMessageToRBC,
          _L1114_ifMessageToRBC,
          _L16_ifMessageToRBC,
          _L18_ifMessageToRBC,
          &_L1215_ifMessageToRBC);
        kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
          &_L19_ifMessageToRBC,
          &_L17_ifMessageToRBC.onboardPhoneNumbers);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &_L15_ifMessageToRBC,
          &_L1215_ifMessageToRBC);
        if (kcg_true) {
          kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
            &_L15_ifMessageToRBC.packets.p3,
            &_L19_ifMessageToRBC);
        }
        kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
          &_5_msgToRBC,
          &_L15_ifMessageToRBC);
        kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_2_msgToRBC, &_5_msgToRBC);
      }
      else {
        else_clock_ifMessageToRBC = m154_noCompatibleVersionSupported;
        /* ck_anon_activ */ if (else_clock_ifMessageToRBC) {
          _L520_ifMessageToRBC = kcg_true;
          _L619_ifMessageToRBC = co154_No_Compatible_Version_Support_Id_Pkg;
          _L222_ifMessageToRBC = t_train;
          _L718_ifMessageToRBC = 0;
          kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
            &_L917_ifMessageToRBC,
            configData);
          _L816_ifMessageToRBC = _L917_ifMessageToRBC.nid_engine;
          /* 1 */
          genMsgToRBC_MoRC_Pck_Coder_Pkg(
            _L520_ifMessageToRBC,
            _L619_ifMessageToRBC,
            _L222_ifMessageToRBC,
            _L718_ifMessageToRBC,
            _L816_ifMessageToRBC,
            &_L121_ifMessageToRBC);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_7_msgToRBC,
            &_L121_ifMessageToRBC);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_4_msgToRBC, &_7_msgToRBC);
        }
        else {
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L123_ifMessageToRBC,
            (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
              &cNoMessageToRBC_MoRC_Pck);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_6_msgToRBC,
            &_L123_ifMessageToRBC);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_4_msgToRBC, &_6_msgToRBC);
        }
        kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_2_msgToRBC, &_4_msgToRBC);
      }
      kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&msgToRBC, &_2_msgToRBC);
    }
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&outC->msgToRBC, &msgToRBC);
  }
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L124,
    &outC->registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L122,
    &outC->connectionStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &_L123,
    &outC->sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L121.registration,
    &_L124);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L121.connection, &_L122);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L121.session, &_L123);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->status, &_L121);
  _L126 = sNotReady;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L127,
    &last_connectionStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &_L128,
    &outC->connectionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L129,
    &last_registrationStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &_L130,
    &outC->sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L131,
    &outC->registrationStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L132, &last_sessionStatus_l);
  _L133 = !kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(&_L127, &_L128);
  _L134 = !kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(&_L129, &_L131);
  _L135 = !kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(&_L132, &_L130);
  _L136 = _L126 | _L133 | _L134 | _L135;
  outC->notReady = _L136;
  _L139 = m155_initiationOfACommunicationSession;
  _L140 = m156_terminationOfACommunicationSession;
  _L141 = m159_sessionEstablished;
  _L138 = m154_noCompatibleVersionSupported;
  _L137.m155_initiationOfACommunicationSession = _L139;
  _L137.m156_terminationOfACommunicationSession = _L140;
  _L137.m159_sessionEstablished = _L141;
  _L137.m154_noCompatibleVersionSupported = _L138;
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &outC->msgToTrackTriggers,
    &_L137);
  _L142 = _L99.valid;
  _L143 = _L94.valid;
  _L144 = _L95.valid;
  _L145 = _L96.valid;
  outC->m32_SystemVersionReceived_p = _L143;
  outC->m38_initiationOfACommunicationSessionMsgReceived_p = _L144;
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p = _L145;
  outC->p42_sessionManagementReceived_p = _L142;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MoRC_Main_v2_MoRC_Pck.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

