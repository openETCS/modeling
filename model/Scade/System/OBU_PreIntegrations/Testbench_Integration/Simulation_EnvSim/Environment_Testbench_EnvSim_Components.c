/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T09:32:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Environment_Testbench_EnvSim_Components.h"

void Environment_reset_Testbench_EnvSim_Components(
  outC_Environment_Testbench_EnvSim_Components *outC)
{
  outC->init = kcg_true;
  /* 1 */ EVC_InputBuffer_reset_Toolbox_Functions(&outC->Context_1);
  /* 1 */ RTM_reset_Toolbox_TrainModules(&outC->_1_Context_1);
  /* 3 */ ProbeTracksideInput_reset_EnvSim(&outC->Context_3);
  /* 1 */ RBC_New_reset_RBC_Model_Pkg(&outC->_2_Context_1);
  /* 1 */ ScriptedTrack_reset_EnvSim(&outC->_3_Context_1);
  /* 1 */ PHYSICS_MovementSimulation_reset_Toolbox_Physics(&outC->_4_Context_1);
  /* 1 */ TIU_reset_Toolbox_TrainModules(&outC->_5_Context_1);
  /* 1 */ AFB_reset_Toolbox_Physics(&outC->_6_Context_1);
}

/* Testbench_EnvSim::Components::Environment */
void Environment_Testbench_EnvSim_Components(
  /* Testbench_EnvSim::Components::Environment::GUI_reset */kcg_bool GUI_reset,
  /* Testbench_EnvSim::Components::Environment::GUI_targetSpeed */kcg_real GUI_targetSpeed,
  /* Testbench_EnvSim::Components::Environment::GUI_traction */kcg_real GUI_traction,
  /* Testbench_EnvSim::Components::Environment::GUI_brake */kcg_real GUI_brake,
  /* Testbench_EnvSim::Components::Environment::GUI_initialPosition */kcg_real GUI_initialPosition,
  /* Testbench_EnvSim::Components::Environment::GUI_initialVelocity */kcg_real GUI_initialVelocity,
  /* Testbench_EnvSim::Components::Environment::GUI_level */kcg_int GUI_level,
  /* Testbench_EnvSim::Components::Environment::GUI_mode */kcg_int GUI_mode,
  /* Testbench_EnvSim::Components::Environment::GUI_mobileHWStatus */kcg_int GUI_mobileHWStatus,
  /* Testbench_EnvSim::Components::Environment::GUI_openDesk */kcg_bool GUI_openDesk,
  /* Testbench_EnvSim::Components::Environment::EVC_RTM_Management */RadioManagement_T_API_RadioCommunication_Pkg *EVC_RTM_Management,
  /* Testbench_EnvSim::Components::Environment::EVC_MessageToTIU */TIU_Output_msg_API_TIU_Pkg *EVC_MessageToTIU,
  /* Testbench_EnvSim::Components::Environment::deltaSimulationTime */kcg_int deltaSimulationTime,
  /* Testbench_EnvSim::Components::Environment::activateBrakeBuildupTime */kcg_bool activateBrakeBuildupTime,
  /* Testbench_EnvSim::Components::Environment::activateAirResistance */kcg_bool activateAirResistance,
  /* Testbench_EnvSim::Components::Environment::EVC_radioMessageToRBC_nextGen */M_TrainTrack_Message_T_TM_radio_messages *EVC_radioMessageToRBC_nextGen,
  outC_Environment_Testbench_EnvSim_Components *outC)
{
  static kcg_real tmp3;
  static API_TrackSideInput_T_API_Msg_Pkg tmp2;
  static odometry_T_Obu_BasicTypes_Pkg tmp1;
  static TelegramHeader_T_BG_Types_Pkg tmp;
  /* Testbench_EnvSim::Components::Environment::API_tmpDirection */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg API_tmpDirection;
  /* Testbench_EnvSim::Components::Environment::API_tmpCabStatus */
  static M_cab_signal_status_T_TIU_Types_Pkg API_tmpCabStatus;
  /* Testbench_EnvSim::Components::Environment::_L46 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L46;
  /* Testbench_EnvSim::Components::Environment::_L201 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L201;
  /* Testbench_EnvSim::Components::Environment::_L198 */
  static mobileHWStatus_Type_MoRC_Pck _L198;
  /* Testbench_EnvSim::Components::Environment::_L197 */
  static M_LEVEL _L197;
  /* Testbench_EnvSim::Components::Environment::_L196 */
  static M_MODE _L196;
  /* Testbench_EnvSim::Components::Environment::_L217 */
  static CompressedBaliseMessage_TM _L217;
  
  outC->EVC_cycleEVC = kcg_true;
  outC->EVC_reset = GUI_reset;
  if (outC->init) {
    _L46 = 0;
    tmp3 = GUI_initialVelocity;
    outC->init = kcg_false;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &tmp1,
      (odometry_T_Obu_BasicTypes_Pkg *)
        &cInitialOdometrieValue_Testbench_EnvSim_Components);
  }
  else {
    _L46 = outC->EVC_SystemTime;
    tmp3 = outC->GUI_currentVelocityInKmH;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&tmp1, &outC->rem_EVC_Odometry);
  }
  /* 1 */
  AFB_Toolbox_Physics(
    GUI_targetSpeed,
    GUI_traction,
    GUI_brake,
    tmp3,
    &outC->_6_Context_1);
  outC->GUI_AFBActive = outC->_6_Context_1.afbActive;
  /* 1 */
  GUI_Settings_Toolbox_Functions(
    GUI_mode,
    GUI_level,
    GUI_mobileHWStatus,
    0,
    GUI_openDesk,
    &_L196,
    &_L197,
    &_L198,
    &API_tmpDirection,
    &API_tmpCabStatus,
    &_L201);
  /* 1 */
  TIU_Toolbox_TrainModules(
    EVC_MessageToTIU,
    API_tmpCabStatus,
    API_tmpDirection,
    (kcg_bool) (GUI_traction > 0.0),
    190,
    &outC->_5_Context_1);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &outC->EVC_fromTIU,
    &outC->_5_Context_1.output_To_EVC);
  outC->GUI_serviceBrake =
    outC->_5_Context_1.serviceBrakeActivated_To_Environment;
  outC->GUI_emergencyBrake =
    outC->_5_Context_1.emergencyBrakeActivated_To_Environment;
  outC->GUI_TractionCutOff = outC->_5_Context_1.tractionCutOff_To_Environment;
  /* 1 */
  PHYSICS_MovementSimulation_Toolbox_Physics(
    outC->EVC_reset,
    outC->_6_Context_1.calculatedAcceleration,
    outC->GUI_TractionCutOff,
    outC->GUI_serviceBrake,
    outC->GUI_emergencyBrake,
    GUI_initialPosition,
    GUI_initialVelocity,
    deltaSimulationTime,
    activateBrakeBuildupTime,
    activateAirResistance,
    cMaximumAcceleration_Testbench_EnvSim_Components,
    &outC->_4_Context_1);
  outC->GUI_currentPositionInM = outC->_4_Context_1.position;
  outC->GUI_currentVelocityInKmH = outC->_4_Context_1.velocity;
  outC->EVC_SystemTime = outC->_4_Context_1.timestamp;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->EVC_Odometry,
    &outC->_4_Context_1.odometry);
  /* 1 */
  ScriptedTrack_EnvSim(
    outC->GUI_currentPositionInM,
    outC->GUI_currentPositionInM,
    &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &_L217,
    &outC->_3_Context_1.baliseMessage);
  /* 1 */
  RBC_New_RBC_Model_Pkg(
    (DynamicConfig_T *) &DYNAMIC_CONFIG_UTRECHT_AMSTERDAM,
    EVC_radioMessageToRBC_nextGen,
    &outC->_3_Context_1.radioMessage,
    &outC->_2_Context_1);
  /* 3 */
  ProbeTracksideInput_EnvSim(
    outC->GUI_currentPositionInM,
    &_L217,
    &outC->_2_Context_1.outRadioTrackTrainMessage,
    EVC_radioMessageToRBC_nextGen,
    &outC->Context_3);
  /* 1 */
  RTM_Toolbox_TrainModules(
    _L46,
    &outC->_2_Context_1.outRadioTrackTrainMessage.Messages,
    &outC->_2_Context_1.outRadioTrackTrainMessage.Header,
    EVC_RTM_Management,
    &outC->_1_Context_1);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &outC->EVC_mobileHWStatus,
    &outC->_1_Context_1.mobileHWStatus);
  /* 1 */ CASTLIB_BaliseHeaders_TM_conversions(&_L217.Header, &tmp);
  /* 1 */ BTM_Toolbox_TrainModules(_L46, &tmp1, &_L217.Messages, &tmp, &tmp2);
  /* 1 */
  EVC_InputBuffer_Toolbox_Functions(
    &tmp2,
    &outC->_1_Context_1.TrackMessage,
    &outC->Context_1);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->EVC_fromTrack,
    &outC->Context_1.TrackMessageToEVC);
  outC->GUI_currentPositionInCm = (kcg_int)
      (100.0 * outC->GUI_currentPositionInM);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->rem_EVC_Odometry,
    &outC->EVC_Odometry);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Environment_Testbench_EnvSim_Components.c
** Generation date: 2015-11-20T09:32:08
*************************************************************$ */

