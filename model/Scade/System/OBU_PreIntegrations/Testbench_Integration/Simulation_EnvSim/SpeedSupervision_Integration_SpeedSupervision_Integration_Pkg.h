/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */
#ifndef _SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg_H_
#define _SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg_H_

#include "kcg_types.h"
#include "SimpleValidityCheck_SDM_Input_Wrappers.h"
#include "SDMLimitLocations_TargetLimits_Pkg.h"
#include "ABrakeFactory_SDMModelPkg.h"
#include "addGradient_SDMModelPkg.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"
#include "SDM_InputWrapper_SDM_Input_Wrappers.h"
#include "CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h"
#include "TargetManagement_TargetManagement_pkg.h"
#include "AGradient_SDM_GradientAcceleration_Pkg.h"
#include "ProbeSDM_EnvSim.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Types_Pkg /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::sdmToDMI */ sdmToDMI;
  Target_T_TargetManagement_types /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::target */ target;
  SDM_Commands_T_SDM_Types_Pkg /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::sdmCommands */ sdmCommands;
  Brake_command_T_TIU_Types_Pkg /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::brakeCmd */ brakeCmd;
  kcg_bool /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::EOA_overpassed */ EOA_overpassed;
  kcg_bool /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Target_Speed_Reached */ Target_Speed_Reached;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SDM_InputWrapper_SDM_Input_Wrappers /* 1 */ _4_Context_1;
  outC_TargetManagement_TargetManagement_pkg /* 2 */ Context_2;
  outC_AGradient_SDM_GradientAcceleration_Pkg /* 1 */ _3_Context_1;
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg /* 1 */ _2_Context_1;
  outC_ProbeSDM_EnvSim /* 1 */ _1_Context_1;
  outC_SDM_Commands_SDM_Commands_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
extern void SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::TrainPosition */trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::dataFromTrackAtlas */DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Service_brake_requested_by_modes_and_levels */kcg_bool Service_brake_requested_by_modes_and_levels,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Emergency_brake_requested_by_modes_and_levels */kcg_bool Emergency_brake_requested_by_modes_and_levels,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC);

extern void SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC);

#endif /* _SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h
** Generation date: 2015-11-20T19:46:55
*************************************************************$ */

