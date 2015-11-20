/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox.h"

void TestEnvironmentSimulation_IncludingRBC_Complete_reset_Toolbox(
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox *outC)
{
  outC->init = kcg_true;
  /* 1 */ PHYSICS_MovementSimulation_reset_Toolbox_Physics(&outC->Context_1);
  /* 1 */ TIU_reset_Toolbox_TrainModules(&outC->_1_Context_1);
  /* 1 */ EVC_InputBuffer_reset_Toolbox_Functions(&outC->_2_Context_1);
  /* 1 */ RTM_reset_Toolbox_TrainModules(&outC->_3_Context_1);
  /* 1 */ AFB_reset_Toolbox_Physics(&outC->_4_Context_1);
  /* 2 */ ProbeTracksideInput_reset_EnvSim(&outC->Context_2);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper_reset_RBC_Scenario_Pkg(
    &outC->_5_Context_1);
  /* 1 */ RBC_New_reset_RBC_Model_Pkg(&outC->_6_Context_1);
}

/* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete */
void TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox(
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_reset */kcg_bool GUI_reset,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_targetSpeed */kcg_real GUI_targetSpeed,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_traction */kcg_real GUI_traction,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_brake */kcg_real GUI_brake,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_initialPosition */kcg_real GUI_initialPosition,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_initialVelocity */kcg_real GUI_initialVelocity,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_level */kcg_int GUI_level,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_mode */kcg_int GUI_mode,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_mobileHWStatus */kcg_int GUI_mobileHWStatus,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_openDesk */kcg_bool GUI_openDesk,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_RTM_Management */RadioManagement_T_API_RadioCommunication_Pkg *EVC_RTM_Management,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_MessageToTIU */TIU_Output_msg_API_TIU_Pkg *EVC_MessageToTIU,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::deltaSimulationTime */kcg_int deltaSimulationTime,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::activateBrakeBuildupTime */kcg_bool activateBrakeBuildupTime,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::activateAirResistance */kcg_bool activateAirResistance,
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_radioMessageToRBC_nextGen */M_TrainTrack_Message_T_TM_radio_messages *EVC_radioMessageToRBC_nextGen,
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox *outC)
{
  static M_TrainTrack_Message_T_TM_radio_messages tmp4;
  static CompressedRadioMessage_TM tmp3;
  static kcg_real tmp2;
  static API_TrackSideInput_T_API_Msg_Pkg tmp1;
  static odometry_T_Obu_BasicTypes_Pkg tmp;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_tmpDirection */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg API_tmpDirection;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_tmpCabStatus */
  static M_cab_signal_status_T_TIU_Types_Pkg API_tmpCabStatus;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::compressedBaliseMessages */
  static CompressedBaliseMessage_TM compressedBaliseMessages;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L42 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L42;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L53 */
  static M_MODE _L53;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L54 */
  static M_LEVEL _L54;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L55 */
  static mobileHWStatus_Type_MoRC_Pck _L55;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L58 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L58;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L136 */
  static CompressedPackets_T_Common_Types_Pkg _L136;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L135 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L135;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L133 */
  static TelegramHeader_T_BG_Types_Pkg _L133;
  /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L132 */
  static CompressedPackets_T_Common_Types_Pkg _L132;
  
  outC->EVC_cycleEVC = kcg_true;
  outC->EVC_reset = GUI_reset;
  if (outC->init) {
    _L42 = 0;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &tmp4,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &cEmptyRadioMessageToRBC_Message_nextGen_Toolbox);
    kcg_copy_CompressedRadioMessage_TM(
      &tmp3,
      (CompressedRadioMessage_TM *) &RADIO_TRACK_TRAIN_MESSAGE_DEFAULT);
    tmp2 = (kcg_real) 0 / 100.0;
  }
  else {
    _L42 = outC->EVC_SystemTime;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &tmp4,
      &outC->rem_EVC_radioMessageToRBC_nextGen);
    kcg_copy_CompressedRadioMessage_TM(&tmp3, &outC->_L202);
    tmp2 = (kcg_real) outC->GUI_currentPositionInCm / 100.0;
  }
  /* 1 */
  RBC_New_RBC_Model_Pkg(
    (DynamicConfig_T *) &DYNAMIC_CONFIG_UTRECHT_AMSTERDAM,
    &tmp4,
    &tmp3,
    &outC->_6_Context_1);
  /* 1 */
  UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg(
    &outC->_6_Context_1.outSessionManagement,
    &outC->_6_Context_1.outClock,
    &outC->_5_Context_1);
  /* 2 */
  Amsterdam_Utrecht_US_Integration_November(
    tmp2,
    outC->_5_Context_1.outTriggerId,
    US_01_to_12_US_Integration_November,
    &_L132,
    &_L133,
    &compressedBaliseMessages,
    &_L135,
    &_L136,
    &outC->_L202);
  /* 2 */
  ProbeTracksideInput_EnvSim(
    tmp2,
    &compressedBaliseMessages,
    &outC->_6_Context_1.outRadioTrackTrainMessage,
    EVC_radioMessageToRBC_nextGen,
    &outC->Context_2);
  if (outC->init) {
    tmp2 = GUI_initialVelocity;
    outC->init = kcg_false;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &tmp,
      (odometry_T_Obu_BasicTypes_Pkg *) &cInitialOdometrieValue_Toolbox);
  }
  else {
    tmp2 = outC->GUI_currentVelocityInKmH;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&tmp, &outC->EVC_Odometry);
  }
  /* 1 */
  AFB_Toolbox_Physics(
    GUI_targetSpeed,
    GUI_traction,
    GUI_brake,
    tmp2,
    &outC->_4_Context_1);
  outC->GUI_AFBActive = outC->_4_Context_1.afbActive;
  /* 1 */
  RTM_Toolbox_TrainModules(
    _L42,
    &outC->_6_Context_1.outRadioTrackTrainMessage.Messages,
    &outC->_6_Context_1.outRadioTrackTrainMessage.Header,
    EVC_RTM_Management,
    &outC->_3_Context_1);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->EVC_mobileHWStatus,
    &outC->_3_Context_1.mobileHWStatus);
  /* 1 */ BTM_Toolbox_TrainModules(_L42, &tmp, &_L132, &_L133, &tmp1);
  /* 1 */
  EVC_InputBuffer_Toolbox_Functions(
    &tmp1,
    &outC->_3_Context_1.TrackMessage,
    &outC->_2_Context_1);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->EVC_fromTrack,
    &outC->_2_Context_1.TrackMessageToEVC);
  /* 1 */
  GUI_Settings_Toolbox_Functions(
    GUI_mode,
    GUI_level,
    GUI_mobileHWStatus,
    0,
    GUI_openDesk,
    &_L53,
    &_L54,
    &_L55,
    &API_tmpDirection,
    &API_tmpCabStatus,
    &_L58);
  /* 1 */
  TIU_Toolbox_TrainModules(
    EVC_MessageToTIU,
    API_tmpCabStatus,
    API_tmpDirection,
    (kcg_bool) (GUI_traction > 0.0),
    190,
    &outC->_1_Context_1);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->EVC_fromTIU,
    &outC->_1_Context_1.output_To_EVC);
  outC->GUI_serviceBrake =
    outC->_1_Context_1.serviceBrakeActivated_To_Environment;
  outC->GUI_emergencyBrake =
    outC->_1_Context_1.emergencyBrakeActivated_To_Environment;
  outC->GUI_TractionCutOff = outC->_1_Context_1.tractionCutOff_To_Environment;
  /* 1 */
  PHYSICS_MovementSimulation_Toolbox_Physics(
    outC->EVC_reset,
    outC->_4_Context_1.calculatedAcceleration,
    outC->GUI_TractionCutOff,
    outC->GUI_serviceBrake,
    outC->GUI_emergencyBrake,
    GUI_initialPosition,
    GUI_initialVelocity,
    deltaSimulationTime,
    activateBrakeBuildupTime,
    activateAirResistance,
    cMaximumAcceleration_Toolbox,
    &outC->Context_1);
  outC->GUI_currentPositionInM = outC->Context_1.position;
  outC->GUI_currentVelocityInKmH = outC->Context_1.velocity;
  outC->EVC_SystemTime = outC->Context_1.timestamp;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->EVC_Odometry,
    &outC->Context_1.odometry);
  outC->GUI_currentPositionInCm = (kcg_int)
      (100.0 * outC->GUI_currentPositionInM);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->rem_EVC_radioMessageToRBC_nextGen,
    EVC_radioMessageToRBC_nextGen);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

