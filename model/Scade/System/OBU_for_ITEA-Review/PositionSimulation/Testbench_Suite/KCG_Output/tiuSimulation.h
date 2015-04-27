/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _tiuSimulation_H_
#define _tiuSimulation_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_Input_msg_API_TIU_Pkg /* tiuSimulation::output_To_EVC */ output_To_EVC;
  kcg_bool /* tiuSimulation::serviceBrakeActivated_To_Environment */ serviceBrakeActivated_To_Environment;
  kcg_bool /* tiuSimulation::emergencyBrakeActivated_To_Environment */ emergencyBrakeActivated_To_Environment;
  kcg_bool /* tiuSimulation::tractionCutOff_To_Environment */ tractionCutOff_To_Environment;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_brake_signal_command_T_TIU_Types_Pkg /* tiuSimulation::serviceBrakeCommandTmp */ serviceBrakeCommandTmp;
  M_brake_signal_command_T_TIU_Types_Pkg /* tiuSimulation::emergencyBrakeCommandTmp */ emergencyBrakeCommandTmp;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* tiuSimulation::cutoffCommand */ cutoffCommand;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_tiuSimulation;

/* ===========  node initialization and cycle functions  =========== */
/* tiuSimulation */
extern void tiuSimulation(
  /* tiuSimulation::Input_TIU_From_API */ TIU_Output_msg_API_TIU_Pkg *Input_TIU_From_API,
  /* tiuSimulation::cabStatus */ M_cab_signal_status_T_TIU_Types_Pkg cabStatus,
  /* tiuSimulation::directionController */ M_directioncontroller_signal_status_T_TIU_Types_Pkg directionController,
  /* tiuSimulation::tractionSwitchedOn */ kcg_bool tractionSwitchedOn,
  /* tiuSimulation::brakeAccelerationPercentage */ kcg_int brakeAccelerationPercentage,
  outC_tiuSimulation *outC);

extern void tiuSimulation_reset(outC_tiuSimulation *outC);
extern void tiuSimulation_init(outC_tiuSimulation *outC);

#endif /* _tiuSimulation_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** tiuSimulation.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

