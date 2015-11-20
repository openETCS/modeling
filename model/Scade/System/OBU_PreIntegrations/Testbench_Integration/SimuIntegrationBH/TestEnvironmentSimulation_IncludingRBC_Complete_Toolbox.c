/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox.h"

#ifndef KCG_USER_DEFINED_INIT
void TestEnvironmentSimulation_IncludingRBC_Complete_init_Toolbox(
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox *outC)
{
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->RBC_triggerID = 0;
  outC->nid_track_train_msg_radio = 0;
  outC->nid_bg = 0;
  outC->nid_train_track_msg = 0;
  outC->init = kcg_true;
  outC->_L202.Header.radioDevice = 0;
  outC->_L202.Header.receivedSystemTime = 0;
  outC->_L202.Header.nid_message = 0;
  outC->_L202.Header.t_train = 0;
  outC->_L202.Header.m_ack = 0;
  outC->_L202.Header.nid_lrbg = 0;
  outC->_L202.Header.t_train_reference = 0;
  outC->_L202.Header.nid_em = 0;
  outC->_L202.Header.q_scale = 0;
  outC->_L202.Header.d_sr = 0;
  outC->_L202.Header.t_sh_rqst = 0;
  outC->_L202.Header.d_ref = 0;
  outC->_L202.Header.q_dir = 0;
  outC->_L202.Header.d_emergencystop = 0;
  outC->_L202.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->_L202.Messages.PacketHeaders[i].nid_packet = 0;
    outC->_L202.Messages.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L202.Messages.PacketHeaders[i].valid = kcg_true;
    outC->_L202.Messages.PacketHeaders[i].startAddress = 0;
    outC->_L202.Messages.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L202.Messages.PacketData[i1] = 0;
  }
  outC->_L185.Message.valid = kcg_true;
  outC->_L185.Message.nid_message = 0;
  outC->_L185.Message.l_message = 0;
  outC->_L185.Message.t_train = 0;
  outC->_L185.Message.nid_engine = 0;
  outC->_L185.Message.field1 = 0;
  outC->_L185.Message.field2 = 0;
  outC->_L185.Message.field3 = 0;
  for (i2 = 0; i2 < 50; i2++) {
    outC->_L185.OptionalPackets[i2] = 0;
  }
  outC->_L148 = 0.0;
  outC->API_currentTimestamp = 0;
  outC->API_currentOdometrie.valid = kcg_true;
  outC->API_currentOdometrie.timestamp = 0;
  outC->API_currentOdometrie.odo.o_nominal = 0;
  outC->API_currentOdometrie.odo.o_min = 0;
  outC->API_currentOdometrie.odo.o_max = 0;
  outC->API_currentOdometrie.speed.v_safeNominal = 0;
  outC->API_currentOdometrie.speed.v_rawNominal = 0;
  outC->API_currentOdometrie.speed.v_lower = 0;
  outC->API_currentOdometrie.speed.v_upper = 0;
  outC->API_currentOdometrie.acceleration = 0;
  outC->API_currentOdometrie.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->API_currentOdometrie.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->API_currentPositionInCm = 0;
  outC->GUI_AFBActive = kcg_true;
  outC->EVC_cycleEVC = kcg_true;
  outC->GUI_currentVelocityInKmH = 0.0;
  outC->GUI_currentPositionInM = 0.0;
  outC->GUI_currentPositionInCm = 0;
  outC->GUI_TractionCutOff = kcg_true;
  outC->GUI_serviceBrake = kcg_true;
  outC->GUI_emergencyBrake = kcg_true;
  outC->EVC_mobileHWStatus.valid = kcg_true;
  outC->EVC_mobileHWStatus.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->EVC_mobileHWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->EVC_mobileHWStatus.connectionLost = kcg_true;
  outC->EVC_fromTIU.valid = kcg_true;
  outC->EVC_fromTIU.info.train_status.valid = kcg_true;
  outC->EVC_fromTIU.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.valid = kcg_true;
  outC->EVC_fromTIU.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.brake_pressure.valid = kcg_true;
  outC->EVC_fromTIU.info.brake_pressure.pressure = 0;
  outC->EVC_fromTIU.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.train_data_info.valid = kcg_true;
  outC->EVC_fromTIU.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->EVC_fromTIU.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->EVC_fromTIU.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->EVC_fromTIU.info.train_data_info.trainLength = 0;
  outC->EVC_fromTIU.info.train_data_info.brakePerctage = 0;
  outC->EVC_fromTIU.info.train_data_info.maxTrainSpeed = 0;
  outC->EVC_fromTIU.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->EVC_fromTIU.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->EVC_fromTIU.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->EVC_fromTIU.info.train_data_info.axleNumber = 0;
  outC->EVC_fromTIU.info.train_data_info.numberNationalSystems = 0;
  for (i3 = 0; i3 < 5; i3++) {
    outC->EVC_fromTIU.info.train_data_info.nationSystems[i3] = 0;
  }
  outC->EVC_fromTIU.info.train_data_info.numberTractionSystems = 0;
  for (i4 = 0; i4 < 4; i4++) {
    outC->EVC_fromTIU.info.train_data_info.tractionSystem[i4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->EVC_fromTIU.info.train_data_info.tractionSystem[i4].nid_ctraction = 0;
  }
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->EVC_fromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->EVC_fromTrack.valid = kcg_true;
  outC->EVC_fromTrack.systemTimeMsgReceived = 0;
  outC->EVC_fromTrack.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->EVC_fromTrack.btm_msg.present = kcg_true;
  outC->EVC_fromTrack.btm_msg.checkResult = kcg_true;
  outC->EVC_fromTrack.btm_msg.api_bad_balise_received = kcg_true;
  outC->EVC_fromTrack.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->EVC_fromTrack.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->EVC_fromTrack.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->EVC_fromTrack.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->EVC_fromTrack.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->EVC_fromTrack.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->EVC_fromTrack.btm_msg.api_header.m_mcount = 0;
  outC->EVC_fromTrack.btm_msg.api_header.nid_c = 0;
  outC->EVC_fromTrack.btm_msg.api_header.nid_bg = 0;
  outC->EVC_fromTrack.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->EVC_fromTrack.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->EVC_fromTrack.rtm_msg.present = kcg_true;
  outC->EVC_fromTrack.rtm_msg.apiConsistencyError = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->EVC_fromTrack.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->EVC_fromTrack.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->EVC_fromTrack.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->EVC_fromTrack.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->EVC_fromTrack.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->EVC_fromTrack.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i5 = 0; i5 < 30; i5++) {
    outC->EVC_fromTrack.packets.PacketHeaders[i5].nid_packet = 0;
    outC->EVC_fromTrack.packets.PacketHeaders[i5].q_dir = Q_DIR_Reverse;
    outC->EVC_fromTrack.packets.PacketHeaders[i5].valid = kcg_true;
    outC->EVC_fromTrack.packets.PacketHeaders[i5].startAddress = 0;
    outC->EVC_fromTrack.packets.PacketHeaders[i5].endAddress = 0;
  }
  for (i6 = 0; i6 < 500; i6++) {
    outC->EVC_fromTrack.packets.PacketData[i6] = 0;
  }
  outC->EVC_SystemTime = 0;
  outC->EVC_Odometry.valid = kcg_true;
  outC->EVC_Odometry.timestamp = 0;
  outC->EVC_Odometry.odo.o_nominal = 0;
  outC->EVC_Odometry.odo.o_min = 0;
  outC->EVC_Odometry.odo.o_max = 0;
  outC->EVC_Odometry.speed.v_safeNominal = 0;
  outC->EVC_Odometry.speed.v_rawNominal = 0;
  outC->EVC_Odometry.speed.v_lower = 0;
  outC->EVC_Odometry.speed.v_upper = 0;
  outC->EVC_Odometry.acceleration = 0;
  outC->EVC_Odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->EVC_Odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->EVC_reset = kcg_true;
  /* 2 */ ProbeTracksideInput_init_EnvSim(&outC->Context_2);
  /* 1 */ PHYSICS_MovementSimulation_init_Toolbox_Physics(&outC->_6_Context_1);
  /* 1 */ AFB_init_Toolbox_Physics(&outC->_5_Context_1);
  /* 1 */ TIU_init_Toolbox_TrainModules(&outC->_4_Context_1);
  /* 1 */ EVC_InputBuffer_init_Toolbox_Functions(&outC->_3_Context_1);
  /* 1 */ RTM_init_Toolbox_TrainModules(&outC->_2_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper_init_RBC_Scenario_Pkg(
    &outC->_1_Context_1);
  /* 1 */ RBC_New_init_RBC_Model_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TestEnvironmentSimulation_IncludingRBC_Complete_reset_Toolbox(
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox *outC)
{
  outC->init = kcg_true;
  /* 2 */ ProbeTracksideInput_reset_EnvSim(&outC->Context_2);
  /* 1 */ PHYSICS_MovementSimulation_reset_Toolbox_Physics(&outC->_6_Context_1);
  /* 1 */ AFB_reset_Toolbox_Physics(&outC->_5_Context_1);
  /* 1 */ TIU_reset_Toolbox_TrainModules(&outC->_4_Context_1);
  /* 1 */ EVC_InputBuffer_reset_Toolbox_Functions(&outC->_3_Context_1);
  /* 1 */ RTM_reset_Toolbox_TrainModules(&outC->_2_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper_reset_RBC_Scenario_Pkg(
    &outC->_1_Context_1);
  /* 1 */ RBC_New_reset_RBC_Model_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete */
void TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox(
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_reset */ kcg_bool _17_GUI_reset,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_targetSpeed */ kcg_real _16_GUI_targetSpeed,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_traction */ kcg_real _15_GUI_traction,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_brake */ kcg_real _14_GUI_brake,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_initialPosition */ kcg_real _13_GUI_initialPosition,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_initialVelocity */ kcg_real _12_GUI_initialVelocity,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_level */ kcg_int _11_GUI_level,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_mode */ kcg_int _10_GUI_mode,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_mobileHWStatus */ kcg_int _9_GUI_mobileHWStatus,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_openDesk */ kcg_bool _8_GUI_openDesk,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_RTM_Management */ RadioManagement_T_API_RadioCommunication_Pkg *EVC_RTM_Management,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_MessageToTIU */ TIU_Output_msg_API_TIU_Pkg *EVC_MessageToTIU,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::deltaSimulationTime */ kcg_int deltaSimulationTime,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::activateBrakeBuildupTime */ kcg_bool activateBrakeBuildupTime,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::activateAirResistance */ kcg_bool activateAirResistance,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_radioMessageToRBC_nextGen */ M_TrainTrack_Message_T_TM_radio_messages *EVC_radioMessageToRBC_nextGen,
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox *outC)
{
  static M_MODE noname;
  static M_LEVEL _1_noname;
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _2_noname;
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _3_noname;
  static mobileHWStatus_Type_MoRC_Pck _4_noname;
  static kcg_bool _5_noname;
  static kcg_bool _6_noname;
  static CompressedPackets_T_Common_Types_Pkg _7_noname;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_currentTimestamp */
  static T_internal_Type_Obu_BasicTypes_Pkg last_API_currentTimestamp;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_currentOdometrie */
  static odometry_T_Obu_BasicTypes_Pkg last_API_currentOdometrie;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_currentPositionInCm */
  static L_internal_Type_Obu_BasicTypes_Pkg last_API_currentPositionInCm;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::SDM_serviceBrakeActivated */
  static kcg_bool SDM_serviceBrakeActivated;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::SDM_emergencyBrakeActivated */
  static kcg_bool SDM_emergencyBrakeActivated;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_tmpDirection */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg API_tmpDirection;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_tmpCabStatus */
  static M_cab_signal_status_T_TIU_Types_Pkg API_tmpCabStatus;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::TIU_tractionCutOff */
  static kcg_bool TIU_tractionCutOff;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::positionInM */
  static kcg_real positionInM;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::compressedBaliseMessages */
  static CompressedBaliseMessage_TM compressedBaliseMessages;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::compressedRadioMessage */
  static CompressedRadioMessage_TM compressedRadioMessage;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L42 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L42;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L43 */
  static odometry_T_Obu_BasicTypes_Pkg _L43;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L46 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L46;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L53 */
  static M_MODE _L53;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L54 */
  static M_LEVEL _L54;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L55 */
  static mobileHWStatus_Type_MoRC_Pck _L55;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L56 */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _L56;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L57 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L57;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L58 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L58;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L52 */
  static kcg_bool _L52;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L51 */
  static kcg_int _L51;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L50 */
  static kcg_int _L50;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L49 */
  static kcg_int _L49;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L48 */
  static kcg_int _L48;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L66 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L66;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L65 */
  static kcg_bool _L65;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L61 */
  static TIU_Input_msg_API_TIU_Pkg _L61;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L62 */
  static kcg_bool _L62;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L63 */
  static kcg_bool _L63;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L60 */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _L60;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L59 */
  static kcg_int _L59;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L69 */
  static kcg_real _L69;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L70 */
  static TIU_Output_msg_API_TIU_Pkg _L70;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L73 */
  static kcg_bool _L73;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L75 */
  static kcg_bool _L75;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L105 */
  static API_TrackSideInput_T_API_Msg_Pkg _L105;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L96 */
  static API_TrackSideInput_T_API_Msg_Pkg _L96;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L111 */
  static API_TrackSideInput_T_API_Msg_Pkg _L111;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L117 */
  static Radio_TrackTrain_Header_T_TM _L117;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L118 */
  static CompressedPackets_T_Common_Types_Pkg _L118;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L130 */
  static NID_BG _L130;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L131 */
  static mobileHWStatus_Type_MoRC_Pck _L131;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L138 */
  static SessionManagement_T _L138;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L139 */
  static CompressedRadioMessage_TM _L139;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L140 */
  static Clock_T _L140;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L137 */
  static kcg_int _L137;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L141 */
  static DynamicConfig_T _L141;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L142 */
  static CompressedRadioMessage_TM _L142;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L143 */
  static kcg_bool _L143;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L164 */
  static kcg_bool _L164;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L163 */
  static kcg_bool _L163;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L162 */
  static kcg_real _L162;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L161 */
  static kcg_int _L161;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L160 */
  static kcg_bool _L160;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L159 */
  static kcg_int _L159;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L158 */
  static kcg_bool _L158;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L157 */
  static kcg_real _L157;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L156 */
  static kcg_real _L156;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L155 */
  static kcg_real _L155;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L154 */
  static kcg_bool _L154;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L152 */
  static kcg_bool _L152;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L147 */
  static kcg_real _L147;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L149 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L149;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L150 */
  static odometry_T_Obu_BasicTypes_Pkg _L150;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L151 */
  static kcg_bool _L151;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L165 */
  static kcg_real _L165;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L166 */
  static NID_MESSAGE _L166;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L145 */
  static kcg_real _L145;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L144 */
  static kcg_real _L144;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L110 */
  static kcg_real _L110;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L41 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L41;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L168 */
  static kcg_bool _L168;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L167 */
  static kcg_real _L167;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L169 */
  static kcg_real _L169;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L170 */
  static kcg_real _L170;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L171 */
  static kcg_real _L171;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L172 */
  static kcg_real _L172;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L173 */
  static kcg_real _L173;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L181 */
  static kcg_bool _L181;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L182 */
  static kcg_int _L182;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L183 */
  static NID_MESSAGE _L183;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L184 */
  static kcg_int _L184;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L189 */
  static RadioManagement_T_API_RadioCommunication_Pkg _L189;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L174 */
  static kcg_int _L174;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L178 */
  static kcg_int _L178;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L177 */
  static kcg_bool _L177;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L175 */
  static kcg_int _L175;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L129 */
  static M_TrainTrack_MessageHd_T_TM_radio_messages _L129;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L190 */
  static kcg_bool _L190;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L192 */
  static kcg_int _L192;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L193 */
  static kcg_bool _L193;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L195 */
  static M_TrainTrack_Message_T_TM_radio_messages _L195;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L196 */
  static kcg_real _L196;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L198 */
  static CompressedBaliseMessage_TM _L198;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L199 */
  static CompressedRadioMessage_TM _L199;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L200 */
  static M_TrainTrack_Message_T_TM_radio_messages _L200;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L203 */
  static kcg_bool _L203;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L205 */
  static M_TrainTrack_Message_T_TM_radio_messages _L205;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L208 */
  static M_TrainTrack_Message_T_TM_radio_messages _L208;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L136 */
  static CompressedPackets_T_Common_Types_Pkg _L136;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L135 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L135;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L134 */
  static CompressedBaliseMessage_TM _L134;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L133 */
  static TelegramHeader_T_BG_Types_Pkg _L133;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L132 */
  static CompressedPackets_T_Common_Types_Pkg _L132;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L215 */
  static TrackType_US_Integration_November _L215;
  
  /* last_init_ck_API_currentTimestamp */ if (outC->init) {
    last_API_currentTimestamp = 0;
  }
  else {
    last_API_currentTimestamp = outC->API_currentTimestamp;
  }
  _L42 = last_API_currentTimestamp;
  /* last_init_ck_API_currentOdometrie */ if (outC->init) {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &last_API_currentOdometrie,
      (odometry_T_Obu_BasicTypes_Pkg *) &cInitialOdometrieValue_Toolbox);
  }
  else {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &last_API_currentOdometrie,
      &outC->API_currentOdometrie);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L43, &last_API_currentOdometrie);
  /* fby_1_init_1 */ if (outC->init) {
    kcg_copy_CompressedRadioMessage_TM(
      &_L142,
      (CompressedRadioMessage_TM *) &RADIO_TRACK_TRAIN_MESSAGE_DEFAULT);
  }
  else {
    kcg_copy_CompressedRadioMessage_TM(&_L142, &outC->_L202);
  }
  /* last_init_ck_API_currentPositionInCm */ if (outC->init) {
    last_API_currentPositionInCm = 0;
  }
  else {
    last_API_currentPositionInCm = outC->API_currentPositionInCm;
  }
  _L41 = last_API_currentPositionInCm;
  _L110 = (kcg_real) _L41;
  _L145 = 100.0;
  _L144 = _L110 / _L145;
  kcg_copy_DynamicConfig_T(
    &_L141,
    (DynamicConfig_T *) &DYNAMIC_CONFIG_UTRECHT_AMSTERDAM);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L208,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &cEmptyRadioMessageToRBC_Message_nextGen_Toolbox);
  /* fby_1_init_3 */ if (outC->init) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L205, &_L208);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L205, &outC->_L185);
  }
  /* 1 */ RBC_New_RBC_Model_Pkg(&_L141, &_L205, &_L142, &outC->Context_1);
  kcg_copy_SessionManagement_T(&_L138, &outC->Context_1.outSessionManagement);
  kcg_copy_CompressedRadioMessage_TM(
    &_L139,
    &outC->Context_1.outRadioTrackTrainMessage);
  kcg_copy_Clock_T(&_L140, &outC->Context_1.outClock);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg(
    &_L138,
    &_L140,
    &outC->_1_Context_1);
  _L137 = outC->_1_Context_1.outTriggerId;
  _L215 = US_01_to_12_US_Integration_November;
  /* 2 */
  Amsterdam_Utrecht_US_Integration_November(
    _L144,
    _L137,
    _L215,
    &_L132,
    &_L133,
    &_L134,
    &_L135,
    &_L136,
    &outC->_L202);
  /* 1 */ BTM_Toolbox_TrainModules(_L42, &_L43, &_L132, &_L133, &_L105);
  _L46 = last_API_currentTimestamp;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L118, &_L139.Messages);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L117, &_L139.Header);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &_L189,
    EVC_RTM_Management);
  /* 1 */
  RTM_Toolbox_TrainModules(_L46, &_L118, &_L117, &_L189, &outC->_2_Context_1);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &_L96,
    &outC->_2_Context_1.TrackMessage);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &_L131,
    &outC->_2_Context_1.mobileHWStatus);
  /* 1 */ EVC_InputBuffer_Toolbox_Functions(&_L105, &_L96, &outC->_3_Context_1);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &_L111,
    &outC->_3_Context_1.TrackMessageToEVC);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->EVC_fromTrack, &_L111);
  _L48 = _11_GUI_level;
  _L49 = _10_GUI_mode;
  _L50 = 0;
  _L51 = _9_GUI_mobileHWStatus;
  _L52 = _8_GUI_openDesk;
  /* 1 */
  GUI_Settings_Toolbox_Functions(
    _L49,
    _L48,
    _L51,
    _L50,
    _L52,
    &_L53,
    &_L54,
    &_L55,
    &_L56,
    &_L57,
    &_L58);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&_L70, EVC_MessageToTIU);
  API_tmpCabStatus = _L57;
  _L66 = API_tmpCabStatus;
  API_tmpDirection = _L56;
  _L60 = API_tmpDirection;
  _L173 = _15_GUI_traction;
  _L69 = 0.0;
  _L65 = _L173 > _L69;
  _L59 = 190;
  /* 1 */
  TIU_Toolbox_TrainModules(&_L70, _L66, _L60, _L65, _L59, &outC->_4_Context_1);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&_L61, &outC->_4_Context_1.output_To_EVC);
  _L62 = outC->_4_Context_1.serviceBrakeActivated_To_Environment;
  _L63 = outC->_4_Context_1.emergencyBrakeActivated_To_Environment;
  _L73 = outC->_4_Context_1.tractionCutOff_To_Environment;
  outC->GUI_emergencyBrake = _L63;
  outC->GUI_serviceBrake = _L62;
  SDM_serviceBrakeActivated = _L62;
  SDM_emergencyBrakeActivated = _L63;
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->EVC_fromTIU, &_L61);
  TIU_tractionCutOff = _L73;
  outC->GUI_TractionCutOff = _L73;
  _L75 = _17_GUI_reset;
  outC->EVC_reset = _L75;
  noname = _L53;
  _1_noname = _L54;
  _2_noname = _L58;
  _L130 = _L133.nid_bg;
  outC->nid_bg = _L130;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_3_noname, &_L135);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->EVC_mobileHWStatus, &_L131);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&_4_noname, &_L55);
  _L143 = kcg_true;
  outC->EVC_cycleEVC = _L143;
  /* fby_1_init_2 */ if (outC->init) {
    _L172 = _12_GUI_initialVelocity;
  }
  else {
    _L172 = outC->_L148;
  }
  _L160 = _17_GUI_reset;
  _L169 = _16_GUI_targetSpeed;
  _L170 = _15_GUI_traction;
  _L171 = _14_GUI_brake;
  /* 1 */ AFB_Toolbox_Physics(_L169, _L170, _L171, _L172, &outC->_5_Context_1);
  _L167 = outC->_5_Context_1.calculatedAcceleration;
  _L168 = outC->_5_Context_1.afbActive;
  _L164 = TIU_tractionCutOff;
  _L152 = SDM_serviceBrakeActivated;
  _L158 = SDM_emergencyBrakeActivated;
  _L156 = _13_GUI_initialPosition;
  _L157 = _12_GUI_initialVelocity;
  _L161 = deltaSimulationTime;
  _L154 = activateBrakeBuildupTime;
  _L163 = activateAirResistance;
  _L165 = cMaximumAcceleration_Toolbox;
  /* 1 */
  PHYSICS_MovementSimulation_Toolbox_Physics(
    _L160,
    _L167,
    _L164,
    _L152,
    _L158,
    _L156,
    _L157,
    _L161,
    _L154,
    _L163,
    _L165,
    &outC->_6_Context_1);
  _L147 = outC->_6_Context_1.position;
  outC->_L148 = outC->_6_Context_1.velocity;
  _L149 = outC->_6_Context_1.timestamp;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L150, &outC->_6_Context_1.odometry);
  _L151 = outC->_6_Context_1.resetOut;
  outC->API_currentTimestamp = _L149;
  _L162 = 100.0;
  _L155 = _L162 * _L147;
  _L159 = (kcg_int) _L155;
  outC->GUI_currentPositionInCm = _L159;
  _5_noname = _L151;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->EVC_Odometry, &_L150);
  outC->EVC_SystemTime = _L149;
  outC->GUI_currentVelocityInKmH = outC->_L148;
  outC->API_currentPositionInCm = _L159;
  outC->GUI_currentPositionInM = _L147;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->API_currentOdometrie, &_L150);
  _L166 = _L96.rtm_msg.Radio_Common_Header.nid_message;
  outC->RBC_triggerID = _L137;
  outC->GUI_AFBActive = _L168;
  _L182 = 24;
  _L181 = _L166 != _L182;
  _L184 = 0;
  /* 2 */ if (_L181) {
    _L183 = _L166;
  }
  else {
    _L183 = _L184;
  }
  outC->nid_track_train_msg_radio = _L183;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L185,
    EVC_radioMessageToRBC_nextGen);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L195,
    EVC_radioMessageToRBC_nextGen);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&_L129, &_L195.Message);
  _L190 = _L129.valid;
  _L192 = _L129.nid_message;
  _L178 = 136;
  _L177 = _L192 != _L178;
  _L193 = _L190 & _L177;
  _L175 = 0;
  /* 1 */ if (_L193) {
    _L174 = _L192;
  }
  else {
    _L174 = _L175;
  }
  outC->nid_train_track_msg = _L174;
  positionInM = _L144;
  _L196 = positionInM;
  kcg_copy_CompressedBaliseMessage_TM(&compressedBaliseMessages, &_L134);
  kcg_copy_CompressedBaliseMessage_TM(&_L198, &compressedBaliseMessages);
  kcg_copy_CompressedRadioMessage_TM(&compressedRadioMessage, &_L139);
  kcg_copy_CompressedRadioMessage_TM(&_L199, &compressedRadioMessage);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L200,
    EVC_radioMessageToRBC_nextGen);
  /* 2 */
  ProbeTracksideInput_EnvSim(_L196, &_L198, &_L199, &_L200, &outC->Context_2);
  _L203 = outC->Context_2.dummyOut;
  _6_noname = _L203;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_7_noname, &_L136);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

