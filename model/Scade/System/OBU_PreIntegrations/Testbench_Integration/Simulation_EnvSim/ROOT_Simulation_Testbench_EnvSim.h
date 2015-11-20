/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */
#ifndef _ROOT_Simulation_Testbench_EnvSim_H_
#define _ROOT_Simulation_Testbench_EnvSim_H_

#include "kcg_types.h"
#include "EVC.h"
#include "RemoteDMIBus_EnvSim.h"
#include "RemoteGUI_EnvSim.h"
#include "TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* Testbench_EnvSim::ROOT_Simulation::API_toDMI */ API_toDMI;
  L_internal_Type_Obu_BasicTypes_Pkg /* Testbench_EnvSim::ROOT_Simulation::debugTrainPositionNominal */ debugTrainPositionNominal;
  TIU_Output_msg_API_TIU_Pkg /* Testbench_EnvSim::ROOT_Simulation::API_toTIU */ API_toTIU;
  RadioManagement_T_API_RadioCommunication_Pkg /* Testbench_EnvSim::ROOT_Simulation::API_toRTM_Management */ API_toRTM_Management;
  M_TrainTrack_Message_T_TM_radio_messages /* Testbench_EnvSim::ROOT_Simulation::API_toRBC */ API_toRBC;
  GUI_to_EVC_EnvSim /* Testbench_EnvSim::ROOT_Simulation::fromGUI */ fromGUI;
  L_internal_Type_Obu_BasicTypes_Pkg /* Testbench_EnvSim::ROOT_Simulation::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* Testbench_EnvSim::ROOT_Simulation::_L9 */ rem__L9;
  TIU_Input_msg_API_TIU_Pkg /* Testbench_EnvSim::ROOT_Simulation::EVC_fromTIU */ rem_EVC_fromTIU;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox /* 1 */ _3_Context_1;
  outC_RemoteDMIBus_EnvSim /* 1 */ _2_Context_1;
  outC_EVC /* 1 */ _1_Context_1;
  outC_RemoteGUI_EnvSim /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ROOT_Simulation_Testbench_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* Testbench_EnvSim::ROOT_Simulation */
extern void ROOT_Simulation_Testbench_EnvSim(
  outC_ROOT_Simulation_Testbench_EnvSim *outC);

extern void ROOT_Simulation_reset_Testbench_EnvSim(
  outC_ROOT_Simulation_Testbench_EnvSim *outC);

#endif /* _ROOT_Simulation_Testbench_EnvSim_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ROOT_Simulation_Testbench_EnvSim.h
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

