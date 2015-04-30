/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestEnvironmentSimulation.h"

void TestEnvironmentSimulation_init(outC_TestEnvironmentSimulation *outC)
{
  int i;
  
  outC->init = kcg_true;
  outC->GUI_TractionCutOff = kcg_true;
  outC->GUI_serviceBrake = kcg_true;
  outC->GUI_emergencyBrake = kcg_true;
  outC->EVC_apiConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->EVC_cabStatusOut = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->EVC_directionOut = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->EVC_mobileHWStatusOut.settingUpConnectionHasFailed = kcg_true;
  outC->EVC_mobileHWStatusOut.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->EVC_mobileHWStatusOut.valid = kcg_true;
  outC->EVC_level = M_LEVEL_Level_0;
  outC->EVC_mode = M_MODE_Full_Supervision;
  outC->EVC_MessageFromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->EVC_MessageFromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->EVC_MessageFromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->EVC_MessageFromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->EVC_MessageFromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->EVC_MessageFromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->EVC_MessageFromTIU.info.type_I_train_and_brake_inhibition.valid =
    kcg_true;
  outC->EVC_MessageFromTIU.info.train_data_info.axleNumber = 0;
  outC->EVC_MessageFromTIU.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  outC->EVC_MessageFromTIU.info.train_data_info.axleLoadCategory =
    M_AXLELOADCAT_A;
  outC->EVC_MessageFromTIU.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->EVC_MessageFromTIU.info.train_data_info.maxTrainSpeed = 0;
  outC->EVC_MessageFromTIU.info.train_data_info.brakePerctage = 0;
  outC->EVC_MessageFromTIU.info.train_data_info.trainLength = 0;
  outC->EVC_MessageFromTIU.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->EVC_MessageFromTIU.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->EVC_MessageFromTIU.info.train_data_info.valid = kcg_true;
  outC->EVC_MessageFromTIU.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.brake_pressure.pressure = 0;
  outC->EVC_MessageFromTIU.info.brake_pressure.valid = kcg_true;
  outC->EVC_MessageFromTIU.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.brake_status.valid = kcg_true;
  outC->EVC_MessageFromTIU.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->EVC_MessageFromTIU.info.train_status.valid = kcg_true;
  outC->EVC_MessageFromTIU.valid = kcg_true;
  outC->EVC_currentOdometrie.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->EVC_currentOdometrie.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->EVC_currentOdometrie.acceleration = 0;
  outC->EVC_currentOdometrie.speed.v_upper = 0;
  outC->EVC_currentOdometrie.speed.v_lower = 0;
  outC->EVC_currentOdometrie.speed.v_rawNominal = 0;
  outC->EVC_currentOdometrie.speed.v_safeNominal = 0;
  outC->EVC_currentOdometrie.odo.o_max = 0;
  outC->EVC_currentOdometrie.odo.o_min = 0;
  outC->EVC_currentOdometrie.odo.o_nominal = 0;
  outC->EVC_currentOdometrie.timestamp = 0;
  outC->EVC_currentOdometrie.valid = kcg_true;
  outC->EVC_currentVelocityInKmH = 0.0;
  outC->EVC_currentPositionInM = 0.0;
  outC->EVC_currentPositionInCm = 0;
  outC->EVC_currentTimestamp = 0;
  outC->EVC_obuPhasesAndEvents.errorConditionRequiringTerminationDetected =
    kcg_true;
  outC->EVC_obuPhasesAndEvents.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->EVC_obuPhasesAndEvents.OBU_hasToEstablishANewSession = kcg_true;
  outC->EVC_obuPhasesAndEvents.trainFrontReachesEndOfAnnouncedRadioHole =
    kcg_true;
  outC->EVC_obuPhasesAndEvents.trainFrontInsideInAnAnnouncedRadioHole =
    kcg_true;
  outC->EVC_obuPhasesAndEvents.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->EVC_obuPhasesAndEvents.trainExitedFromAnRBCArea = kcg_true;
  outC->EVC_obuPhasesAndEvents.trainPassesA_RBC_RBC_border_WithItsFrontEnd =
    kcg_true;
  outC->EVC_obuPhasesAndEvents.trainPassesALevelTransitionBorder = kcg_true;
  outC->EVC_obuPhasesAndEvents.isPartOfAnOngoingStartOfMissionProcedure =
    kcg_true;
  outC->EVC_obuPhasesAndEvents.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  outC->EVC_obuPhasesAndEvents.afterDriverEntryOfANewRadioNetworkID = kcg_true;
  outC->EVC_obuPhasesAndEvents.driverHasManuallyChangedLevel = kcg_true;
  outC->EVC_obuPhasesAndEvents.driverClosesTheDeskduringStartOfMission =
    kcg_true;
  outC->EVC_obuPhasesAndEvents.endOfMissionIsExecuted = kcg_true;
  outC->EVC_obuPhasesAndEvents.trainIsRejectedByRBC_duringStartOfMission =
    kcg_true;
  outC->EVC_obuPhasesAndEvents.startOfMissionProcedureCompleted = kcg_true;
  outC->EVC_obuPhasesAndEvents.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->EVC_obuPhasesAndEvents.atStartOfMission = kcg_true;
  outC->EVC_obuPhasesAndEvents.atPowerUp = kcg_true;
  outC->EVC_obuPhasesAndEvents.atPowerDown = kcg_true;
  for (i = 0; i < 500; i++) {
    outC->EVC_TrackSideMessage.packets.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->EVC_TrackSideMessage.packets.PacketHeaders[i].endAddress = 0;
    outC->EVC_TrackSideMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->EVC_TrackSideMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->EVC_TrackSideMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->EVC_TrackSideMessage.packets.PacketHeaders[i].nid_packet = 0;
  }
  outC->EVC_TrackSideMessage.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_MetaData.t_train_reference =
    kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.t_train_reference =
    0.0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.t_train = 0.0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->EVC_TrackSideMessage.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->EVC_TrackSideMessage.rtm_msg.apiConsistencyError = kcg_true;
  outC->EVC_TrackSideMessage.rtm_msg.present = kcg_true;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->EVC_TrackSideMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->EVC_TrackSideMessage.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->EVC_TrackSideMessage.btm_msg.api_header.nid_bg = 0;
  outC->EVC_TrackSideMessage.btm_msg.api_header.nid_c = 0;
  outC->EVC_TrackSideMessage.btm_msg.api_header.m_mcount = 0;
  outC->EVC_TrackSideMessage.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->EVC_TrackSideMessage.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->EVC_TrackSideMessage.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->EVC_TrackSideMessage.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->EVC_TrackSideMessage.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->EVC_TrackSideMessage.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->EVC_TrackSideMessage.btm_msg.api_bad_balise_received = kcg_true;
  outC->EVC_TrackSideMessage.btm_msg.checkResult = kcg_true;
  outC->EVC_TrackSideMessage.btm_msg.present = kcg_true;
  outC->EVC_TrackSideMessage.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->EVC_TrackSideMessage.systemTimeMsgReceived = 0;
  outC->EVC_TrackSideMessage.valid = kcg_true;
  tiuSimulation_init(&outC->Context_1);
  generateMessage_init_testScenarios_Pkg(&outC->_1_Context_1);
  positionGenerator_init(&outC->_2_Context_1);
}


void TestEnvironmentSimulation_reset(outC_TestEnvironmentSimulation *outC)
{
  outC->init = kcg_true;
  /* 1 */ positionGenerator_reset(&outC->_2_Context_1);
  /* 1 */ generateMessage_reset_testScenarios_Pkg(&outC->_1_Context_1);
  /* 1 */ tiuSimulation_reset(&outC->Context_1);
}

/* TestEnvironmentSimulation */
void TestEnvironmentSimulation(
  /* TestEnvironmentSimulation::GUI_reset */ kcg_bool _8_GUI_reset,
  /* TestEnvironmentSimulation::GUI_accelerationPercent */ kcg_real _7_GUI_accelerationPercent,
  /* TestEnvironmentSimulation::GUI_initialPosition */ kcg_real _6_GUI_initialPosition,
  /* TestEnvironmentSimulation::GUI_initialVelocity */ kcg_real GUI_initialVelocity,
  /* TestEnvironmentSimulation::GUI_mode */ kcg_int _5_GUI_mode,
  /* TestEnvironmentSimulation::GUI_level */ kcg_int _4_GUI_level,
  /* TestEnvironmentSimulation::GUI_mobileHWStatus */ kcg_int _3_GUI_mobileHWStatus,
  /* TestEnvironmentSimulation::GUI_openDesk */ kcg_bool _2_GUI_openDesk,
  /* TestEnvironmentSimulation::EVC_radioMessageToRBC */ API_EuroRadioOutput_T_API_RadioCommunication_Pkg *EVC_radioMessageToRBC,
  /* TestEnvironmentSimulation::EVC_MessageToTIU */ TIU_Output_msg_API_TIU_Pkg *EVC_MessageToTIU,
  /* TestEnvironmentSimulation::EVC_PROC_powerOff_to_MoRC */ kcg_bool EVC_PROC_powerOff_to_MoRC,
  /* TestEnvironmentSimulation::EVC_PROC_powerUp_to_MoRC */ kcg_bool EVC_PROC_powerUp_to_MoRC,
  /* TestEnvironmentSimulation::EVC_PROC_statusstartofmissionongoing_toMoRC */ kcg_bool EVC_PROC_statusstartofmissionongoing_toMoRC,
  outC_TestEnvironmentSimulation *outC)
{
  kcg_int tmp1;
  odometry_T_Obu_BasicTypes_Pkg tmp;
  /* TestEnvironmentSimulation::_L42 */ T_internal_Type_Obu_BasicTypes_Pkg _L42;
  /* TestEnvironmentSimulation::_L44 */ API_TrackSideInput_T_API_Msg_Pkg _L44;
  
  outC->EVC_obuPhasesAndEvents.atPowerDown = EVC_PROC_powerOff_to_MoRC;
  outC->EVC_obuPhasesAndEvents.atPowerUp = EVC_PROC_powerUp_to_MoRC;
  outC->EVC_obuPhasesAndEvents.atStartOfMission = kcg_false;
  outC->EVC_obuPhasesAndEvents.startOfMissionProcedureIsGoingOn =
    EVC_PROC_statusstartofmissionongoing_toMoRC;
  outC->EVC_obuPhasesAndEvents.startOfMissionProcedureCompleted = kcg_false;
  outC->EVC_obuPhasesAndEvents.trainIsRejectedByRBC_duringStartOfMission =
    kcg_false;
  outC->EVC_obuPhasesAndEvents.endOfMissionIsExecuted = kcg_false;
  outC->EVC_obuPhasesAndEvents.driverClosesTheDeskduringStartOfMission =
    kcg_false;
  outC->EVC_obuPhasesAndEvents.driverHasManuallyChangedLevel = kcg_false;
  outC->EVC_obuPhasesAndEvents.afterDriverEntryOfANewRadioNetworkID = kcg_false;
  outC->EVC_obuPhasesAndEvents.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_false;
  outC->EVC_obuPhasesAndEvents.isPartOfAnOngoingStartOfMissionProcedure =
    kcg_false;
  outC->EVC_obuPhasesAndEvents.trainPassesALevelTransitionBorder = kcg_false;
  outC->EVC_obuPhasesAndEvents.trainPassesA_RBC_RBC_border_WithItsFrontEnd =
    kcg_false;
  outC->EVC_obuPhasesAndEvents.trainExitedFromAnRBCArea = kcg_false;
  outC->EVC_obuPhasesAndEvents.modeChangeHasToBeReportedToRBC = kcg_false;
  outC->EVC_obuPhasesAndEvents.trainFrontInsideInAnAnnouncedRadioHole =
    kcg_false;
  outC->EVC_obuPhasesAndEvents.trainFrontReachesEndOfAnnouncedRadioHole =
    kcg_false;
  outC->EVC_obuPhasesAndEvents.OBU_hasToEstablishANewSession = kcg_false;
  outC->EVC_obuPhasesAndEvents.isInCommunicationSessionWithAnRIU = kcg_false;
  outC->EVC_obuPhasesAndEvents.errorConditionRequiringTerminationDetected =
    kcg_false;
  /* 1 */
  generateSettings(
    _5_GUI_mode,
    _4_GUI_level,
    _3_GUI_mobileHWStatus,
    0,
    _2_GUI_openDesk,
    &outC->EVC_mode,
    &outC->EVC_level,
    &outC->EVC_mobileHWStatusOut,
    &outC->EVC_directionOut,
    &outC->EVC_cabStatusOut,
    &outC->EVC_apiConnectionStatus);
  /* 1 */
  tiuSimulation(
    EVC_MessageToTIU,
    outC->EVC_cabStatusOut,
    outC->EVC_directionOut,
    (kcg_bool) (_7_GUI_accelerationPercent > 0.0),
    190,
    &outC->Context_1);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->EVC_MessageFromTIU,
    &outC->Context_1.output_To_EVC);
  outC->GUI_serviceBrake = outC->Context_1.serviceBrakeActivated_To_Environment;
  outC->GUI_emergencyBrake =
    outC->Context_1.emergencyBrakeActivated_To_Environment;
  outC->GUI_TractionCutOff = outC->Context_1.tractionCutOff_To_Environment;
  if (outC->init) {
    _L42 = 0;
    outC->init = kcg_false;
    tmp1 = 0;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &tmp,
      (odometry_T_Obu_BasicTypes_Pkg *) &cInitialOdometrieValue);
  }
  else {
    _L42 = outC->EVC_currentTimestamp;
    tmp1 = outC->EVC_currentPositionInCm;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&tmp, &outC->EVC_currentOdometrie);
  }
  /* 1 */ RBCSimulation(&(*EVC_radioMessageToRBC).firstOutput, _L42, &_L44);
  /* 1 */
  generateMessage_testScenarios_Pkg(tmp1, _L42, &tmp, &outC->_1_Context_1);
  if (_L44.valid) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->EVC_TrackSideMessage,
      &_L44);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->EVC_TrackSideMessage,
      &outC->_1_Context_1.TrackMessage);
  }
  /* 1 */
  positionGenerator(
    _8_GUI_reset,
    _7_GUI_accelerationPercent,
    outC->GUI_serviceBrake,
    outC->GUI_emergencyBrake,
    _6_GUI_initialPosition,
    GUI_initialVelocity,
    outC->GUI_TractionCutOff,
    &outC->_2_Context_1);
  outC->EVC_currentPositionInM = outC->_2_Context_1.position;
  outC->EVC_currentVelocityInKmH = outC->_2_Context_1.velocity;
  outC->EVC_currentTimestamp = outC->_2_Context_1.timestamp;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->EVC_currentOdometrie,
    &outC->_2_Context_1.odometry);
  outC->EVC_currentPositionInCm = (kcg_int)
      (100.0 * outC->EVC_currentPositionInM);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TestEnvironmentSimulation.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

