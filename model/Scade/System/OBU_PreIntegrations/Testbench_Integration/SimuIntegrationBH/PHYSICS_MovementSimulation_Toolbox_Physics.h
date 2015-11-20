/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _PHYSICS_MovementSimulation_Toolbox_Physics_H_
#define _PHYSICS_MovementSimulation_Toolbox_Physics_H_

#include "kcg_types.h"
#include "ODO_Toolbox_TrainModules.h"
#include "PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.h"
#include "PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h"
#include "m_s_To_km_h_Toolbox_Converters.h"
#include "m_s_To_cm_s_Toolbox_Converters.h"
#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"
#include "PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::position */ position;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::velocity */ velocity;
  T_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::Physics::PHYSICS_MovementSimulation::timestamp */ timestamp;
  odometry_T_Obu_BasicTypes_Pkg /* Toolbox::Physics::PHYSICS_MovementSimulation::odometry */ odometry;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::resetOut */ resetOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init2;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::FlipFlopSet::_L2 */ _L2_1;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L15 */ _L15_SM1_Driving;
  kcg_real /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L14 */ _L14_SM1_Driving;
  _14_SSM_ST_SM1 /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_state_nxt;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_reset_act;
  kcg_bool /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions /* 1 */ _1_Context_1;
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_PHYSICS_MovementSimulation_Toolbox_Physics;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::PHYSICS_MovementSimulation */
extern void PHYSICS_MovementSimulation_Toolbox_Physics(
  /* Toolbox::Physics::PHYSICS_MovementSimulation::reset */ kcg_bool reset,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::accelerationInPercent */ kcg_real accelerationInPercent,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tractionCutOffFromEVC */ kcg_bool tractionCutOffFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateServiceBrakeFromEVC */ kcg_bool activateServiceBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateEmergencyBrakeFromEVC */ kcg_bool activateEmergencyBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialPosition */ kcg_real initialPosition,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialVelocity */ kcg_real initialVelocity,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::timeSinceLastCycle */ kcg_int timeSinceLastCycle,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateBrakeBuildupTime */ kcg_bool activateBrakeBuildupTime,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateAirResistance */ kcg_bool activateAirResistance,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::maximumAcceleration */ kcg_real maximumAcceleration,
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PHYSICS_MovementSimulation_reset_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_MovementSimulation_init_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _PHYSICS_MovementSimulation_Toolbox_Physics_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_MovementSimulation_Toolbox_Physics.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

