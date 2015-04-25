/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _positionGenerator_H_
#define _positionGenerator_H_

#include "kcg_types.h"
#include "buildOdometryPacket.h"
#include "m_s_To_km_h_Converters.h"
#include "calculatePosition.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* positionGenerator::position */ position;
  kcg_real /* positionGenerator::velocity */ velocity;
  T_internal_Type_Obu_BasicTypes_Pkg /* positionGenerator::timestamp */ timestamp;
  odometry_T_Obu_BasicTypes_Pkg /* positionGenerator::odometry */ odometry;
  kcg_bool /* positionGenerator::resetOut */ resetOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* positionGenerator::SM1::Driving::_L1 */ _L1_SM1_Driving;
  kcg_real /* positionGenerator::SM1::Driving::_L2 */ _L2_SM1_Driving;
  SSM_ST_SM1 /* positionGenerator::SM1 */ SM1_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_calculatePosition /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_positionGenerator;

/* ===========  node initialization and cycle functions  =========== */
/* positionGenerator */
extern void positionGenerator(
  /* positionGenerator::reset */ kcg_bool reset,
  /* positionGenerator::accelerationPercent */ kcg_real accelerationPercent,
  /* positionGenerator::activateServiceBrakeFromEVC */ kcg_bool activateServiceBrakeFromEVC,
  /* positionGenerator::activateEmergencyBrakeFromEVC */ kcg_bool activateEmergencyBrakeFromEVC,
  /* positionGenerator::initialPosition */ kcg_real initialPosition,
  /* positionGenerator::initialVelocity */ kcg_real initialVelocity,
  /* positionGenerator::tractionCutOffFromEVC */ kcg_bool tractionCutOffFromEVC,
  outC_positionGenerator *outC);

extern void positionGenerator_reset(outC_positionGenerator *outC);
extern void positionGenerator_init(outC_positionGenerator *outC);

#endif /* _positionGenerator_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** positionGenerator.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

