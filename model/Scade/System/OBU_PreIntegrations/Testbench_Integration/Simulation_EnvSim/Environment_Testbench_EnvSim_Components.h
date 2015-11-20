/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T09:32:06
*************************************************************$ */
#ifndef _Environment_Testbench_EnvSim_Components_H_
#define _Environment_Testbench_EnvSim_Components_H_

#include "kcg_types.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"
#include "GUI_Settings_Toolbox_Functions.h"
#include "BTM_Toolbox_TrainModules.h"
#include "ScriptedTrack_EnvSim.h"
#include "ProbeTracksideInput_EnvSim.h"
#include "EVC_InputBuffer_Toolbox_Functions.h"
#include "PHYSICS_MovementSimulation_Toolbox_Physics.h"
#include "AFB_Toolbox_Physics.h"
#include "TIU_Toolbox_TrainModules.h"
#include "RTM_Toolbox_TrainModules.h"
#include "RBC_New_RBC_Model_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Testbench_EnvSim::Components::Environment::EVC_reset */ EVC_reset;
  odometry_T_Obu_BasicTypes_Pkg /* Testbench_EnvSim::Components::Environment::EVC_Odometry */ EVC_Odometry;
  T_internal_Type_Obu_BasicTypes_Pkg /* Testbench_EnvSim::Components::Environment::EVC_SystemTime */ EVC_SystemTime;
  API_TrackSideInput_T_API_Msg_Pkg /* Testbench_EnvSim::Components::Environment::EVC_fromTrack */ EVC_fromTrack;
  TIU_Input_msg_API_TIU_Pkg /* Testbench_EnvSim::Components::Environment::EVC_fromTIU */ EVC_fromTIU;
  mobileHWStatus_Type_MoRC_Pck /* Testbench_EnvSim::Components::Environment::EVC_mobileHWStatus */ EVC_mobileHWStatus;
  kcg_bool /* Testbench_EnvSim::Components::Environment::GUI_emergencyBrake */ GUI_emergencyBrake;
  kcg_bool /* Testbench_EnvSim::Components::Environment::GUI_serviceBrake */ GUI_serviceBrake;
  kcg_bool /* Testbench_EnvSim::Components::Environment::GUI_TractionCutOff */ GUI_TractionCutOff;
  L_internal_Type_Obu_BasicTypes_Pkg /* Testbench_EnvSim::Components::Environment::GUI_currentPositionInCm */ GUI_currentPositionInCm;
  kcg_real /* Testbench_EnvSim::Components::Environment::GUI_currentPositionInM */ GUI_currentPositionInM;
  kcg_real /* Testbench_EnvSim::Components::Environment::GUI_currentVelocityInKmH */ GUI_currentVelocityInKmH;
  kcg_bool /* Testbench_EnvSim::Components::Environment::EVC_cycleEVC */ EVC_cycleEVC;
  kcg_bool /* Testbench_EnvSim::Components::Environment::GUI_AFBActive */ GUI_AFBActive;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* Testbench_EnvSim::Components::Environment::EVC_Odometry */ rem_EVC_Odometry;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_AFB_Toolbox_Physics /* 1 */ _6_Context_1;
  outC_TIU_Toolbox_TrainModules /* 1 */ _5_Context_1;
  outC_PHYSICS_MovementSimulation_Toolbox_Physics /* 1 */ _4_Context_1;
  outC_ScriptedTrack_EnvSim /* 1 */ _3_Context_1;
  outC_RBC_New_RBC_Model_Pkg /* 1 */ _2_Context_1;
  outC_ProbeTracksideInput_EnvSim /* 3 */ Context_3;
  outC_RTM_Toolbox_TrainModules /* 1 */ _1_Context_1;
  outC_EVC_InputBuffer_Toolbox_Functions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Environment_Testbench_EnvSim_Components;

/* ===========  node initialization and cycle functions  =========== */
/* Testbench_EnvSim::Components::Environment */
extern void Environment_Testbench_EnvSim_Components(
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
  outC_Environment_Testbench_EnvSim_Components *outC);

extern void Environment_reset_Testbench_EnvSim_Components(
  outC_Environment_Testbench_EnvSim_Components *outC);

#endif /* _Environment_Testbench_EnvSim_Components_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Environment_Testbench_EnvSim_Components.h
** Generation date: 2015-11-20T09:32:06
*************************************************************$ */

