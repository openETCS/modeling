/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC.h"

void EVC_reset(outC_EVC *outC)
{
  outC->init = kcg_true;
  outC->init13 = kcg_true;
  /* 1 */ ProbeEVC_reset_EnvSim(&outC->Context_1);
  /* 1 */ collectRadioOutput_reset_radioOutput_Pkg(&outC->_1_Context_1);
  /* 3 */ checkGeneralMessage_reset_trainData_pkg(&outC->Context_3);
  /* 2 */ manageDMI_Output_reset_manage_DMI_Output_Pkg(&outC->Context_2);
  /* 2 */ Master_Procedure_reset_ManageProcedure_Pkg(&outC->_2_Context_2);
  /* 1 */ MoRC_HO_reset_MoRC_HO_Pkg(&outC->_3_Context_1);
  /* 2 */
  ProvidePositionReport_reset_ProvidePositionReport_Pkg(&outC->_4_Context_2);
  /* 2 */
  TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(&outC->_5_Context_2);
  /* 2 */
  SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
    &outC->_6_Context_2);
  /* 2 */ ManageLevelAndMode_reset(&outC->_7_Context_2);
  /* 2 */ TrackAtlas_reset_TrackAtlas(&outC->_8_Context_2);
  /* 2 */ trainData_reset_trainData_pkg(&outC->_9_Context_2);
  /* 3 */ manageDMI_Input_reset_manage_DMI_Input_Pkg(&outC->_10_Context_3);
  /* 3 */
  calculateTrainPosition_reset_CalculateTrainPosition_Pkg(&outC->_11_Context_3);
  /* 2 */
  Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
    &outC->_12_Context_2);
  /* 5 */ manageTIU_input_reset_input_from_TIU_API_Pkg(&outC->Context_5);
}

/* EVC */
void EVC(
  /* EVC::EVC_reset */kcg_bool _22_EVC_reset,
  /* EVC::API_Odometry */odometry_T_Obu_BasicTypes_Pkg *API_Odometry,
  /* EVC::API_SystemTime */T_internal_Type_Obu_BasicTypes_Pkg API_SystemTime,
  /* EVC::API_fromTrack */API_TrackSideInput_T_API_Msg_Pkg *API_fromTrack,
  /* EVC::API_fromDMI */DMI_to_EVC_Message_int_T_API_DMI_Pkg *API_fromDMI,
  /* EVC::API_fromTIU */TIU_Input_msg_API_TIU_Pkg *API_fromTIU,
  /* EVC::API_mobileHWStatus */mobileHWStatus_Type_MoRC_Pck *API_mobileHWStatus,
  /* EVC::API_persistentData */ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *API_persistentData,
  outC_EVC *outC)
{
  static struct__158298 tmp;
  static struct__156370 tmp1;
  static struct__157584 tmp2;
  static struct__157570 tmp3;
  static struct__157564 tmp4;
  static struct__158523 tmp5;
  static struct__158541 tmp6;
  static struct__158503 tmp7;
  static struct__158511 tmp8;
  static struct__157659 tmp9;
  static morcStatus_T_RCM_Session_Types_Pkg tmp21;
  static connection_ids_T_Handover_Pkg tmp20;
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg tmp19;
  static trainData_Events_T_trainData_Types_pkg tmp18;
  static L_internal_Type_Obu_BasicTypes_Pkg tmp17;
  static DataForModeAndLevel_t_TrackAtlasTypes tmp16;
  static M_LEVEL tmp15;
  static kcg_bool tmp14;
  static kcg_bool tmp13;
  static kcg_bool tmp12;
  static mobileRegistrationContext_T_RCM_Types_Pkg tmp11;
  static mobileConnectionContext_T_RCM_Types_Pkg tmp10;
  /* EVC::EVC_PersistentData */
  static ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg last_EVC_PersistentData;
  /* EVC::DMI_trainRunningNumber */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg DMI_trainRunningNumber;
  /* EVC::_L523 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L523;
  /* EVC::_L772 */
  static trainPosition_T_TrainPosition_Types_Pck _L772;
  /* EVC::_L794 */
  static positionedBGs_T_TrainPosition_Types_Pck _L794;
  /* EVC::_L938 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L938;
  /* EVC::_L950 */
  static trainProperties_T_TrainPosition_Types_Pck _L950;
  /* EVC::_L952 */
  static trainData_T_TIU_Types_Pkg _L952;
  /* EVC::_L993 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L993;
  /* EVC::_L1219 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1219;
  /* EVC::_L1230 */
  static trainDataStatus_T_trainData_Types_pkg _L1230;
  /* EVC::_L1321 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L1321;
  /* EVC::_L1678 */
  static kcg_bool _L1678;
  /* EVC::_L1754 */
  static kcg_bool _L1754;
  
  outC->resetOut = _22_EVC_reset;
  if (outC->init13) {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &_L772,
      (trainPosition_T_TrainPosition_Types_Pck *) &cEmptyTrainPosition);
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cMLInitialModesAndLevel);
    _L938 = cTTrainUnknown1_CheckEuroradioMessage;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_L794,
      (positionedBGs_T_TrainPosition_Types_Pck *) &cEmptyPositionedBGs);
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &_L952,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L1230,
      (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &_L950,
      (trainProperties_T_TrainPosition_Types_Pck *) &cEmptyTrainProperties);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &tmp21,
      (morcStatus_T_RCM_Session_Types_Pkg *)
        &cNoMoRCStatus_RCM_Session_Types_Pkg);
    kcg_copy_connection_ids_T_Handover_Pkg(
      &tmp20,
      (connection_ids_T_Handover_Pkg *) &cNoSupervisingRBC);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp19,
      (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
        &cEmptyTestStatusList_DMI_Types_Pkg);
    tmp17 = cNo_STM_manage_DMI_Input_Pkg;
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_L1219,
      (PT0_PositionReport_T_Packet_TrainTypes_Pkg *) &cNoP0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *) &cNoP1);
    kcg_copy_trainData_Events_T_trainData_Types_pkg(
      &tmp18,
      (trainData_Events_T_trainData_Types_pkg *) &cNoTDEvents);
  }
  else {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &_L772,
      &outC->CALC_TrainPosition);
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L993,
      &outC->ML_ModeAndLevel);
    _L938 = outC->MSG_lastRadioMsgTimestamp;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L794, &outC->CALC_BGs);
    kcg_copy_trainData_T_TIU_Types_Pkg(&_L952, &outC->td_trainData);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L1230, &outC->td_status);
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &_L950,
      &outC->TIU_trainProperties);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &tmp21,
      &outC->MoRC_RadioStatus_1);
    kcg_copy_connection_ids_T_Handover_Pkg(
      &tmp20,
      &outC->MoRC_supervisingRBC_Id);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L523,
      &outC->DMI_currentDMIStatus);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &tmp19,
      &outC->EVC_TextMessageStatusList);
    tmp17 = outC->EVC_currentNTC;
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L1219, &outC->rep_P0);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L1321,
      &outC->rep_P1);
    kcg_copy_trainData_Events_T_trainData_Types_pkg(&tmp18, &outC->td_events);
  }
  /* 5 */
  manageTIU_input_input_from_TIU_API_Pkg(API_fromTIU, &_L952, &outC->Context_5);
  tmp9.pendingL1Transition = kcg_false;
  tmp9.pendingL12L3Transition = kcg_false;
  tmp9.pendingAckOfTrainDataFromRBC = _L1230.waitingForRBCResponse;
  tmp9.emergencyStopAccepted = kcg_false;
  tmp9.lastAckTextMessageId = 0;
  tmp9.pendingNTCTransition = kcg_false;
  tmp9.SPPAndGradientOnBoard = kcg_false;
  tmp9.MACoverNotFullLength = kcg_false;
  /* 2 */
  Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
    kcg_true,
    API_fromTrack,
    API_Odometry,
    outC->resetOut,
    &_L772,
    &_L993,
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.t_nvcontact,
    cOwnVersion,
    _L938,
    &tmp21,
    &tmp20,
    &_L794,
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.q_nvlocacc,
    outC->Context_5.outTIUStatus.deskOpen,
    _L1230.validatedbyRBC,
    &tmp9,
    _L993.newLevel,
    &_L950,
    &outC->_12_Context_2);
  /* 3 */
  calculateTrainPosition_CalculateTrainPosition_Pkg(
    API_Odometry,
    (passedBG_T_BG_Types_Pkg *) &cEmptyPassedBG,
    &outC->_12_Context_2.outputMessage,
    &_L950,
    outC->resetOut,
    &outC->_11_Context_3);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->CALC_TrainPosition,
    &outC->_11_Context_3.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->CALC_BGs,
    &outC->_11_Context_3.BGs);
  /* 3 */
  manageDMI_Input_manage_DMI_Input_Pkg(
    API_fromDMI,
    outC->resetOut,
    &tmp19,
    API_SystemTime,
    tmp17,
    &outC->_10_Context_3);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_currentDMIStatus,
    &outC->_10_Context_3.currentDMIStatus);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &DMI_trainRunningNumber,
    &outC->_10_Context_3.fromDMI_TrainRunningNumber);
  outC->EVC_currentNTC = outC->_10_Context_3.updatedNTC;
  outC->td_events.trainStandStill = (*API_Odometry).valid &
    ((*API_Odometry).motionState == noMotion_Obu_BasicTypes_Pkg);
  outC->td_events.driverRequestModify = kcg_false;
  outC->td_events.safeRadioConnectionLost = kcg_false;
  outC->td_events.approachingRBCarea = kcg_false;
  /* 2 */
  trainData_trainData_pkg(
    outC->resetOut,
    &(*API_fromTIU).info.train_data_info,
    &outC->_10_Context_3.fromDMI_TrainData,
    &outC->_10_Context_3.fromDMI_TrainDataAck,
    &outC->_12_Context_2.outputMessageForRadioAck,
    &tmp18,
    4065801,
    &_L1219,
    &_L1321,
    (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *) &cNoBus_trainData_pkg,
    cOwnVersion,
    API_SystemTime,
    &outC->_9_Context_2);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->td_trainData,
    &outC->_9_Context_2.actualTrainData);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->td_status,
    &outC->_9_Context_2.updatedStatus);
  if (outC->init13) {
    tmp17 = cEmptySpeedForDMI.location_brake_curve_starting_point;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
        &cNoPersistentData);
    _L1678 = kcg_false;
    tmp12 = kcg_false;
  }
  else {
    tmp17 = outC->DMI_sdmToDMI.location_brake_curve_starting_point;
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      &outC->EVC_PersistentData);
    tmp12 = outC->MoRC_newSessionEstablished;
    _L1678 = outC->EVC_ready;
  }
  /* 2 */
  TrackAtlas_TrackAtlas(
    &outC->_12_Context_2.outputMessage,
    &_L993,
    _L952.valid,
    &outC->CALC_TrainPosition,
    _L952.trainLength,
    API_SystemTime,
    tmp17,
    API_Odometry,
    &outC->_10_Context_3.outForMA,
    &_L950,
    &_L1219,
    &_L1321,
    API_SystemTime,
    (P203V1_OBU_T_TM_baseline2 *) &cP203_PermanentData_EVC_PermanentData_Pkg,
    (P003_permanent_data_T_TM_baseline2 *)
      &cP003_PermanentData_EVC_PermanentData_Pkg,
    &outC->_9_Context_2.outMessageBus,
    &outC->_8_Context_2);
  /* 1 */
  maintainTrainProperties_EVC_Support_Pkg(
    &_L950,
    &DMI_trainRunningNumber,
    &_L952,
    4065801,
    &outC->TIU_trainProperties);
  _L1754 = outC->Context_5.outTIUStatus.valid &
    outC->Context_5.outTIUStatus.deskOpen;
  /* 2 */
  patchEmergencyBrakeMsg_EVC_Support_Pkg(
    &outC->_8_Context_2.To_ModeAndLevel,
    &tmp16);
  if (_L1754) {
    if (outC->init) {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->EVC_PersistentData,
        API_persistentData);
      tmp15 = outC->EVC_PersistentData.lastActiveLevel;
    }
    else {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->EVC_PersistentData,
        &last_EVC_PersistentData);
      tmp15 = _L993.level;
    }
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->EVC_ActiveLevelList,
      &outC->EVC_PersistentData.availableLevelsList);
    outC->init = kcg_false;
  }
  else {
    tmp15 = _L993.level;
    if (outC->init13) {
      kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
        &outC->EVC_ActiveLevelList,
        (DMI_LevelList_T_DMI_Types_Pkg *) &cNo_Levels);
    }
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->EVC_PersistentData,
      &last_EVC_PersistentData);
  }
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &tmp8.Common_Errors,
    (MSG_Errors_T_Common_Types_Pkg *) &cNoMsgErrors);
  tmp8.Failure_Occured = kcg_false;
  tmp8.Continue_Shunting_Active = kcg_false;
  tmp8.Stop_Shunting_Stored = kcg_false;
  tmp7.NTC = kcg_true;
  tmp7.L0 = kcg_true;
  tmp7.L1 = kcg_true;
  tmp7.L2 = kcg_true;
  tmp7.L3 = kcg_false;
  tmp6.Estim_front_End_overpass_SR_Dist = kcg_false;
  tmp6.Estim_Front_End_Rear_SSP = kcg_false;
  tmp6.Override_Function_Active = kcg_false;
  tmp6.EOA_Antenna_Overpass = kcg_false;
  tmp6.EOA_Front_End = kcg_false;
  tmp6.Train_Speed_Under_Overide_Limit = kcg_false;
  tmp5.BG_In_List_Expected_BG_In_SR = kcg_false;
  tmp5.BG_In_List_Expected_BG_In_SH = kcg_false;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &tmp5.PositionErrors,
    (positionErrors_T_TrainPosition_Types_Pck *) &cNoPositioningErrors);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &tmp5.Train_Position,
    &outC->CALC_TrainPosition);
  tmp5.Train_Speed = (*API_Odometry).speed.v_safeNominal;
  tmp5.Train_Standstill = (*API_Odometry).motionState ==
    noMotion_Obu_BasicTypes_Pkg;
  /* 2 */
  ManageLevelAndMode(
    &outC->_10_Context_3.forModesAndLevel,
    &tmp5,
    &outC->Context_5.outTIUCurrentInfo,
    &tmp16.train_messages,
    &outC->_12_Context_2.Data_to_From_Track_Packets_at_ML,
    &tmp6,
    outC->Context_5.outTIUStatus.ownCab,
    &outC->_10_Context_3.ML_levelTransition,
    &tmp7,
    &outC->_12_Context_2.forLevelManagement,
    &tmp8,
    (T_Data_From_STM_Level_And_Mode_Types_Pkg *) &cEmptyData_From_STM,
    tmp15,
    &outC->_7_Context_2);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->ML_ModeAndLevel,
    &outC->_7_Context_2.Compatible_Mode_And_Level);
  /* 2 */
  SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
    (P3_NationalValues_T_Packet_Types_Pkg *)
      &cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg,
    &outC->CALC_TrainPosition,
    API_Odometry,
    &outC->TIU_trainProperties,
    &outC->td_trainData,
    &outC->_8_Context_2.to_Supervision,
    (kcg_bool)
      (outC->_7_Context_2.Service_Brake_Command |
        outC->_12_Context_2.ApplyServiceBrake),
    outC->_7_Context_2.EB_Requested,
    &outC->_6_Context_2);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->DMI_sdmToDMI,
    &outC->_6_Context_2.sdmToDMI);
  /* 2 */
  TIU_OutputIntegration_output_to_TIU_API_Pkg(
    (Isolation_Status_T_TIU_Types_Pkg *) &cEmtpyIsolationStatus,
    &outC->_6_Context_2.brakeCmd,
    (Brake_inhibition_command_T_TIU_Types_Pkg *) &cEmptyBrakeInhibitionCommand,
    (Type_I_train_commands_T_TIU_Types_Pkg *) &cEmptyTrainCommand,
    (Change_traction_system_T_TIU_Types_Pkg *) &cEmptyChangeTractionSystem,
    (Passenger_door_control_info_T_TIU_Types_Pkg *) &cPassengerDoorControlInfo,
    (Change_of_allowed_current_consumption_T_TIU_Types_Pkg *)
      &cEmptyChangeOfAllowedCurrentConsumption,
    &outC->ML_ModeAndLevel,
    &outC->_5_Context_2);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->API_toTIU,
    &outC->_5_Context_2.outTIU_to_API);
  outC->td_events.communicationSessionEstablished = tmp12;
  outC->td_events.MoRCreadyFlag = _L1678;
  _L1754 = !outC->Context_5.outTIUStatus.deskOpen;
  outC->debugCurrentMode = outC->ML_ModeAndLevel.Mode;
  outC->debugCurrentLevel = outC->ML_ModeAndLevel.level;
  tmp4.currMode = outC->debugCurrentMode;
  tmp4.currLevel = outC->debugCurrentLevel;
  tmp4.levelTransitionBorderPassed = outC->ML_ModeAndLevel.newLevel;
  tmp3.nid_ntc = outC->EVC_currentNTC;
  tmp3.q_length = Q_LENGTH_No_train_integrity_information_available;
  tmp2.newSessionEstablished = tmp12;
  /* 2 */
  ProvidePositionReport_ProvidePositionReport_Pkg(
    &outC->CALC_BGs,
    &outC->CALC_TrainPosition,
    API_Odometry,
    &outC->TIU_trainProperties,
    (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
      &cEmptyLocationBasedEvents,
    &outC->_12_Context_2.outputMessage,
    API_SystemTime,
    &tmp2,
    &tmp3,
    outC->CALC_TrainPosition.trainRunningDirectionToLRBG,
    outC->_11_Context_3.errors.BG_LinkingConsistencyError,
    outC->_12_Context_2.outCheckErrors.linkedBGError,
    outC->_12_Context_2.outCheckErrors.unlinkedBGError,
    outC->_12_Context_2.outCheckErrors.radioMessageConsistencyError,
    outC->_12_Context_2.outCheckErrors.radioSequenceError,
    kcg_false,
    kcg_false,
    outC->_11_Context_3.errors.twoConsecutiveLinkedBGs_missed,
    outC->_11_Context_3.errors.doubleRepositioningError,
    &tmp4,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg,
    &outC->_8_Context_2.bus_out,
    cOwnVersion,
    API_SystemTime,
    &outC->_4_Context_2);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->rep_P0,
    &outC->_4_Context_2.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->rep_P1,
    &outC->_4_Context_2.packet1);
  if (outC->init13) {
    _L1678 = kcg_false;
    tmp13 = kcg_false;
    tmp14 = kcg_false;
    tmp12 = cNoRadioCmd.valid;
    tmp17 = 0;
  }
  else {
    _L1678 = outC->PROC_statusstartofmissionongoing_to_MoRC;
    tmp14 = outC->PROC_powerUp_to_MoRC;
    tmp13 = outC->PROC_powerOff_to_MoRC;
    tmp12 = outC->PROC_radioCmdFromProcedures.valid;
    tmp17 = outC->MoRC_MN_1;
  }
  /* 1 */
  maintainMobileRegistrationContext_EVC_Support_Pkg(
    API_mobileHWStatus,
    0,
    tmp17,
    &tmp11);
  if (outC->init13) {
    tmp17 = 0;
  }
  else {
    tmp17 = outC->MoRC_RadioID_1;
  }
  /* 1 */
  maintainMobileConnectionContext_EVC_Support_Pkg(
    API_mobileHWStatus,
    0,
    tmp17,
    kcg_false,
    &tmp10);
  tmp1.atPowerUp = tmp14;
  tmp1.atPowerDown = tmp13;
  tmp1.atStartOfMission = kcg_false;
  tmp1.modeChangeHasToBeReportedToRBC = _L1678;
  tmp1.driverHasManuallyChangedLevel_to_2_or_3 = kcg_false;
  tmp1.trainFrontPassesStartOfAnnouncedRadioHole = kcg_false;
  tmp1.trainFrontReachesEndOfAnnouncedRadioHole = kcg_false;
  tmp1.trainFrontInsideInAnAnnouncedRadioHole = kcg_false;
  tmp1.trainFrontPassesALevelTransitionBorder = _L993.newLevel;
  tmp1.trainFrontPassesA_RBC_RBC_border = kcg_false;
  tmp1.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_false;
  tmp1.isPartOfAnOngoingStartOfMissionProcedure = tmp12;
  tmp1.startOfMissionProcedureIsGoingOn = _L1678;
  tmp1.endOfMissionIsExecuted = _L1754;
  tmp1.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_false;
  tmp1.errorConditionRequiringTerminationDetected = kcg_false;
  tmp1.trainIsRejectedByRBC_duringStartOfMission = kcg_false;
  tmp1.driverClosesTheDeskduringStartOfMission = _L1754;
  tmp1.trainExitedFromAnRBCArea = kcg_false;
  tmp1.isInCommunicationSessionWithAnRIU = kcg_false;
  tmp1.level_1_isLeft = kcg_false;
  /* 1 */
  MoRC_HO_MoRC_HO_Pkg(
    _L993.Mode,
    _L993.level,
    &tmp1,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cEmptyRadioNetworkIds.memorizedID,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cEmptyRadioNetworkIds.ID_fromDriver,
    &tmp11,
    (mobileRegistrationContext_T_RCM_Types_Pkg *) &cNoMobileRegistrationContext,
    &tmp10,
    (mobileConnectionContext_T_RCM_Types_Pkg *) &cNoMobileConnectionContext,
    &outC->_12_Context_2.outputMessage,
    &outC->_4_Context_2.posReport,
    &_L772,
    &_L794,
    API_SystemTime,
    API_SystemTime,
    API_SystemTime,
    outC->resetOut,
    isAbleToManageOneSession_Handover_Pkg,
    &outC->TIU_trainProperties,
    (morc_configData_T_RCM_Session_Types_Pkg *)
      &cMoRC_ConfigData_EVC_PermanentData_Pkg,
    (P003_TM_TrainToTrack *) &cMoRC_own_P3ng_EVC_PermanentData_Pkg,
    cOwnVersion,
    &outC->_3_Context_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->MoRC_RadioStatus_1,
    &outC->_3_Context_1.radioStatus_1);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->MoRC_supervisingRBC_Id,
    &outC->_3_Context_1.supervisingRBC);
  outC->EVC_ready = outC->_3_Context_1.ready;
  if (outC->init13) {
    _L1678 = kcg_false;
  }
  else {
    _L1678 = outC->_L477;
  }
  /* 2 */
  Master_Procedure_ManageProcedure_Pkg(
    &_L523,
    _L1678,
    API_SystemTime,
    &outC->ML_ModeAndLevel,
    &outC->MoRC_RadioStatus_1,
    &outC->Context_5.outTIUStatus,
    outC->CALC_TrainPosition.LRBG.valid,
    &outC->_10_Context_3.outDriverRequest,
    _L523.DMI_LevelSelectedByDirver,
    &outC->_2_Context_2);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->PROC_radioCmdFromProcedures,
    &outC->_2_Context_2.request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC);
  outC->PROC_powerUp_to_MoRC = outC->_2_Context_2.powerUp_to_MoRC;
  outC->PROC_statusstartofmissionongoing_to_MoRC =
    outC->_2_Context_2.statusstartofmissionongoing_to_MoRC;
  outC->PROC_powerOff_to_MoRC = outC->_2_Context_2.powerOff_to_MoRC;
  outC->_L477 =
    outC->_2_Context_2.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  outC->init13 = kcg_false;
  tmp.valid = kcg_true;
  tmp.nid_c =
    cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg.nid_cArray[0].nid_c;
  tmp.nid_c_valid = kcg_true;
  /* 2 */
  manageDMI_Output_manage_DMI_Output_Pkg(
    &_L523,
    API_SystemTime,
    &outC->Context_5.outTIUStatus,
    API_Odometry,
    &outC->CALC_TrainPosition,
    &outC->_6_Context_2.brakeCmd,
    &outC->DMI_sdmToDMI,
    &outC->ML_ModeAndLevel,
    &tmp,
    (movementAuthorityForDMI_T_DMI_Types_Pkg *) &cEmptyDMIMA,
    &outC->MoRC_RadioStatus_1,
    &outC->td_trainData,
    &outC->_2_Context_2.DMI_Entry_Request_to_DMI,
    (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIEVCcodedTrainData,
    &outC->_8_Context_2.to_DMI,
    cOwnVersion,
    (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIDisplayControl,
    &outC->EVC_ActiveLevelList,
    outC->_10_Context_3.outUpdateLevelsDMI,
    (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *) &cEmptyDMIRadioNet,
    (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIDriverIdentifier,
    (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMITrainRunningNumber,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIAdhesionFactorData,
    outC->_12_Context_2.BadBaliseMessageToDMI,
    &outC->_7_Context_2.Data_To_DMI_Ack,
    &outC->_7_Context_2.announcedLevel,
    outC->EVC_currentNTC,
    &outC->_10_Context_3.outStatusList,
    &outC->Context_2);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->API_toDMI,
    &outC->Context_2.to_DMI);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->EVC_TextMessageStatusList,
    &outC->Context_2.outStatusList);
  outC->debugIinterventionSpeed = (kcg_real)
      outC->DMI_sdmToDMI.interventionSpeed;
  if (outC->_2_Context_2.start_ack_to_TIU) {
    outC->debugPermittedSpeed = (kcg_real) outC->DMI_sdmToDMI.permittedSpeed;
  }
  else {
    outC->debugPermittedSpeed = (kcg_real) 0;
  }
  if (outC->_12_Context_2.outputMessageForRadioAck.valid &
    (outC->_12_Context_2.outputMessageForRadioAck.source ==
      msrc_Euroradio_Common_Types_Pkg)) {
    outC->MSG_lastRadioMsgTimestamp =
      outC->_12_Context_2.outputMessageForRadioAck.Radio_Common_Header.receivedSystemTime;
  }
  else {
    outC->MSG_lastRadioMsgTimestamp = _L938;
  }
  outC->debugTrainPositionDeltaMax =
    outC->CALC_TrainPosition.trainPosition.d_max;
  outC->debugTrainPositionDeltaMin =
    outC->CALC_TrainPosition.trainPosition.d_min;
  outC->debugTrainPositionNominal =
    outC->CALC_TrainPosition.trainPosition.nominal;
  /* 3 */
  checkGeneralMessage_trainData_pkg(
    &outC->_12_Context_2.outputMessage,
    &outC->Context_3);
  /* 1 */
  collectRadioOutput_radioOutput_Pkg(
    &outC->_3_Context_1.msgBus_2_RBC_1,
    outC->Context_3.genMessageReceived,
    &outC->ML_ModeAndLevel,
    &outC->MoRC_RadioStatus_1,
    &outC->_3_Context_1.mobileConnectionCmd_1,
    &outC->_3_Context_1.mobileRegistrationCmd_1,
    cOwnVersion,
    API_SystemTime,
    &outC->_1_Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->API_toRBC,
    &outC->_1_Context_1.toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &outC->_1_Context_1.API_RTM_management);
  outC->MoRC_RadioID_1 = outC->_1_Context_1.outRadio;
  outC->MoRC_MN_1 = outC->_1_Context_1.outMN;
  outC->MoRC_newSessionEstablished = sp_maintaining_RCM_Session_Types_Pkg ==
    outC->MoRC_RadioStatus_1.session.phase;
  /* 1 */
  ProbeEVC_EnvSim(
    &outC->_12_Context_2.outCheckErrors,
    &outC->_11_Context_3.errors,
    &outC->MoRC_RadioStatus_1,
    &outC->Context_1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVC.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

