/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg_H_
#define _SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg_H_

#include "kcg_types.h"
#include "CalcSpeeds_SDM_Types_Pkg.h"
#include "SDM_InputWrapper_SDM_Input_Wrappers.h"
#include "ReleaseSpeed_Selection_SDM_ReleaseSoeed_Selection_pkg.h"
#include "SDMLimitLocations_TargetLimits_Pkg.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"
#include "SDM_OutputWrapper_SDM_OutputWrapper.h"
#include "CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h"
#include "TargetManagement_TargetManagement_pkg.h"

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
  outC_SDM_OutputWrapper_SDM_OutputWrapper /* 1 */ _2_Context_1;
  outC_SDM_Commands_SDM_Commands_Pkg /* 1 */ _1_Context_1;
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg /* 1 */ Context_1;
  outC_TargetManagement_TargetManagement_pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
extern void SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRSP */ MRSP_Profile_t *MRSP,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MA */ MAs_t *MA,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::m_level */ M_LEVEL m_level,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MA_updated */ kcg_bool MA_updated,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRSP_updated */ kcg_bool MRSP_updated,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC);

extern void SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC);
extern void SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC);

#endif /* _SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

