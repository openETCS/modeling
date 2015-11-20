/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SDM_Commands_SDM_Commands_Pkg_H_
#define _SDM_Commands_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "CalcDriverOutput_SDM_Commands_Pkg.h"
#include "CalcModeTransOutput_SDM_Commands_Pkg.h"
#include "CmdTrainSupervisionStatus_SDM_Commands_Pkg.h"
#include "MergeMLRequests_SDM_Commands_Pkg.h"
#include "CalcDMI_output_SDM_Commands_Pkg.h"
#include "CalcBrakeCmd_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  speedSupervisionForDMI_T_DMI_Types_Pkg /* SDM_Commands_Pkg::SDM_Commands::sdmToDMI */ sdmToDMI;
  SDM_Commands_T_SDM_Types_Pkg /* SDM_Commands_Pkg::SDM_Commands::sdmCmd */ sdmCmd;
  kcg_bool /* SDM_Commands_Pkg::SDM_Commands::targetSpeedReached */ targetSpeedReached;
  kcg_bool /* SDM_Commands_Pkg::SDM_Commands::eoaOverpassed */ eoaOverpassed;
  Brake_command_T_TIU_Types_Pkg /* SDM_Commands_Pkg::SDM_Commands::brakeCmd */ brakeCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalcBrakeCmd_SDM_Commands_Pkg /* 1 */ _2_Context_1;
  outC_CalcDMI_output_SDM_Commands_Pkg /* 1 */ _1_Context_1;
  outC_MergeMLRequests_SDM_Commands_Pkg /* 2 */ Context_2;
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_SDM_Commands_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::SDM_Commands */
extern void SDM_Commands_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::SDM_Commands::allTargets */ TargetCollection_T_TargetManagement_types *allTargets,
  /* SDM_Commands_Pkg::SDM_Commands::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::SDM_Commands::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::SDM_Commands::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::SDM_Commands::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::SDM_Commands::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestSB */ kcg_bool MLrequestSB,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestEB */ kcg_bool MLrequestEB,
  /* SDM_Commands_Pkg::SDM_Commands::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Commands_Pkg::SDM_Commands::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_SDM_Commands_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SDM_Commands_reset_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SDM_Commands_init_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SDM_Commands_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SDM_Commands_SDM_Commands_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

