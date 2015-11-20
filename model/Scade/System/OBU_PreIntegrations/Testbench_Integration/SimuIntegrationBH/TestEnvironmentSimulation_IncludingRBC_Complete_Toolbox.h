/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox_H_
#define _TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox_H_

#include "kcg_types.h"
#include "GUI_Settings_Toolbox_Functions.h"
#include "BTM_Toolbox_TrainModules.h"
#include "Amsterdam_Utrecht_US_Integration_November.h"
#include "ProbeTracksideInput_EnvSim.h"
#include "EVC_InputBuffer_Toolbox_Functions.h"
#include "TIU_Toolbox_TrainModules.h"
#include "RTM_Toolbox_TrainModules.h"
#include "PHYSICS_MovementSimulation_Toolbox_Physics.h"
#include "AFB_Toolbox_Physics.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg.h"
#include "RBC_New_RBC_Model_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_reset */ EVC_reset;
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_Odometry */ EVC_Odometry;
  T_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_SystemTime */ EVC_SystemTime;
  API_TrackSideInput_T_API_Msg_Pkg /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_fromTrack */ EVC_fromTrack;
  TIU_Input_msg_API_TIU_Pkg /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_fromTIU */ EVC_fromTIU;
  mobileHWStatus_Type_MoRC_Pck /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_mobileHWStatus */ EVC_mobileHWStatus;
  kcg_bool /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_emergencyBrake */ GUI_emergencyBrake;
  kcg_bool /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_serviceBrake */ GUI_serviceBrake;
  kcg_bool /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_TractionCutOff */ GUI_TractionCutOff;
  L_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_currentPositionInCm */ GUI_currentPositionInCm;
  kcg_real /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_currentPositionInM */ GUI_currentPositionInM;
  kcg_real /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_currentVelocityInKmH */ GUI_currentVelocityInKmH;
  kcg_bool /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::EVC_cycleEVC */ EVC_cycleEVC;
  kcg_bool /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::GUI_AFBActive */ GUI_AFBActive;
  /* -----------------------   local probes  ------------------------- */
  NID_MESSAGE /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::nid_train_track_msg */ nid_train_track_msg;
  NID_BG /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::nid_bg */ nid_bg;
  NID_MESSAGE /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::nid_track_train_msg_radio */ nid_track_train_msg_radio;
  kcg_int /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::RBC_triggerID */ RBC_triggerID;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_currentPositionInCm */ API_currentPositionInCm;
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_currentOdometrie */ API_currentOdometrie;
  T_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::API_currentTimestamp */ API_currentTimestamp;
  kcg_real /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L148 */ _L148;
  M_TrainTrack_Message_T_TM_radio_messages /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L185 */ _L185;
  CompressedRadioMessage_TM /* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete::_L202 */ _L202;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ProbeTracksideInput_EnvSim /* 2 */ Context_2;
  outC_PHYSICS_MovementSimulation_Toolbox_Physics /* 1 */ _6_Context_1;
  outC_AFB_Toolbox_Physics /* 1 */ _5_Context_1;
  outC_TIU_Toolbox_TrainModules /* 1 */ _4_Context_1;
  outC_EVC_InputBuffer_Toolbox_Functions /* 1 */ _3_Context_1;
  outC_RTM_Toolbox_TrainModules /* 1 */ _2_Context_1;
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg /* 1 */ _1_Context_1;
  outC_RBC_New_RBC_Model_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TestEnvironmentSimulation_IncludingRBC_Complete */
extern void TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox(
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
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TestEnvironmentSimulation_IncludingRBC_Complete_reset_Toolbox(
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TestEnvironmentSimulation_IncludingRBC_Complete_init_Toolbox(
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

