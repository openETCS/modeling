/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TIU_Toolbox_TrainModules_H_
#define _TIU_Toolbox_TrainModules_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_Input_msg_API_TIU_Pkg /* Toolbox::TrainModules::TIU::output_To_EVC */ output_To_EVC;
  kcg_bool /* Toolbox::TrainModules::TIU::serviceBrakeActivated_To_Environment */ serviceBrakeActivated_To_Environment;
  kcg_bool /* Toolbox::TrainModules::TIU::emergencyBrakeActivated_To_Environment */ emergencyBrakeActivated_To_Environment;
  kcg_bool /* Toolbox::TrainModules::TIU::tractionCutOff_To_Environment */ tractionCutOff_To_Environment;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_brake_signal_command_T_TIU_Types_Pkg /* Toolbox::TrainModules::TIU::serviceBrakeCommandTmp */ serviceBrakeCommandTmp;
  M_brake_signal_command_T_TIU_Types_Pkg /* Toolbox::TrainModules::TIU::emergencyBrakeCommandTmp */ emergencyBrakeCommandTmp;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* Toolbox::TrainModules::TIU::cutoffCommand */ cutoffCommand;
  kcg_bool /* Toolbox::TrainModules::TIU::powerOn */ powerOn;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TIU_Toolbox_TrainModules;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::TrainModules::TIU */
extern void TIU_Toolbox_TrainModules(
  /* Toolbox::TrainModules::TIU::Input_TIU_From_API */ TIU_Output_msg_API_TIU_Pkg *Input_TIU_From_API,
  /* Toolbox::TrainModules::TIU::cabStatus */ M_cab_signal_status_T_TIU_Types_Pkg cabStatus,
  /* Toolbox::TrainModules::TIU::directionController */ M_directioncontroller_signal_status_T_TIU_Types_Pkg directionController,
  /* Toolbox::TrainModules::TIU::tractionSwitchedOn */ kcg_bool tractionSwitchedOn,
  /* Toolbox::TrainModules::TIU::brakeAccelerationPercentage */ kcg_int brakeAccelerationPercentage,
  outC_TIU_Toolbox_TrainModules *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TIU_reset_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TIU_init_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TIU_Toolbox_TrainModules_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TIU_Toolbox_TrainModules.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

