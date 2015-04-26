/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _TestEnvironmentSimulation_H_
#define _TestEnvironmentSimulation_H_

#include "kcg_types.h"
#include "RBCSimulation.h"
#include "generateSettings.h"
#include "positionGenerator.h"
#include "tiuSimulation.h"
#include "generateMessage_testScenarios_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* TestEnvironmentSimulation::EVC_TrackSideMessage */ EVC_TrackSideMessage;
  obuEventsAndPhases_T_MoRC_Pck /* TestEnvironmentSimulation::EVC_obuPhasesAndEvents */ EVC_obuPhasesAndEvents;
  T_internal_Type_Obu_BasicTypes_Pkg /* TestEnvironmentSimulation::EVC_currentTimestamp */ EVC_currentTimestamp;
  L_internal_Type_Obu_BasicTypes_Pkg /* TestEnvironmentSimulation::EVC_currentPositionInCm */ EVC_currentPositionInCm;
  kcg_real /* TestEnvironmentSimulation::EVC_currentPositionInM */ EVC_currentPositionInM;
  kcg_real /* TestEnvironmentSimulation::EVC_currentVelocityInKmH */ EVC_currentVelocityInKmH;
  odometry_T_Obu_BasicTypes_Pkg /* TestEnvironmentSimulation::EVC_currentOdometrie */ EVC_currentOdometrie;
  TIU_Input_msg_API_TIU_Pkg /* TestEnvironmentSimulation::EVC_MessageFromTIU */ EVC_MessageFromTIU;
  M_MODE /* TestEnvironmentSimulation::EVC_mode */ EVC_mode;
  M_LEVEL /* TestEnvironmentSimulation::EVC_level */ EVC_level;
  mobileHWStatus_Type_MoRC_Pck /* TestEnvironmentSimulation::EVC_mobileHWStatusOut */ EVC_mobileHWStatusOut;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg /* TestEnvironmentSimulation::EVC_directionOut */ EVC_directionOut;
  M_cab_signal_status_T_TIU_Types_Pkg /* TestEnvironmentSimulation::EVC_cabStatusOut */ EVC_cabStatusOut;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg /* TestEnvironmentSimulation::EVC_apiConnectionStatus */ EVC_apiConnectionStatus;
  kcg_bool /* TestEnvironmentSimulation::GUI_emergencyBrake */ GUI_emergencyBrake;
  kcg_bool /* TestEnvironmentSimulation::GUI_serviceBrake */ GUI_serviceBrake;
  kcg_bool /* TestEnvironmentSimulation::GUI_TractionCutOff */ GUI_TractionCutOff;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_positionGenerator /* 1 */ _2_Context_1;
  outC_generateMessage_testScenarios_Pkg /* 1 */ _1_Context_1;
  outC_tiuSimulation /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_TestEnvironmentSimulation;

/* ===========  node initialization and cycle functions  =========== */
/* TestEnvironmentSimulation */
extern void TestEnvironmentSimulation(
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
  outC_TestEnvironmentSimulation *outC);

extern void TestEnvironmentSimulation_reset(
  outC_TestEnvironmentSimulation *outC);
extern void TestEnvironmentSimulation_init(
  outC_TestEnvironmentSimulation *outC);

#endif /* _TestEnvironmentSimulation_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** TestEnvironmentSimulation.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

