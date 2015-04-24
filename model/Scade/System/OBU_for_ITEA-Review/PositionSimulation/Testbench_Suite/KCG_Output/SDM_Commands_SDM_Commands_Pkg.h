/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SDM_Commands_SDM_Commands_Pkg_H_
#define _SDM_Commands_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "CalcDriverOutput_SDM_Commands_Pkg.h"
#include "CalcModeTransOutput_SDM_Commands_Pkg.h"
#include "CmdTrainSupervisionStatus_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SDM_Commands_real_T_SDM_Types_Pkg /* SDM_Commands_Pkg::SDM_Commands::sdmCmd */ sdmCmd;
  kcg_bool /* SDM_Commands_Pkg::SDM_Commands::targetSpeedReached */ targetSpeedReached;
  kcg_bool /* SDM_Commands_Pkg::SDM_Commands::eoaOverpassed */ eoaOverpassed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_SDM_Commands_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::SDM_Commands */
extern void SDM_Commands_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::SDM_Commands::allTargets */ TargetCollection_T_TargetManagement_types *allTargets,
  /* SDM_Commands_Pkg::SDM_Commands::odometry */ Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_Commands_Pkg::SDM_Commands::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::SDM_Commands::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::SDM_Commands::noSupervisedReleaseSpeed */ kcg_bool noSupervisedReleaseSpeed,
  /* SDM_Commands_Pkg::SDM_Commands::m_level */ M_LEVEL m_level,
  /* SDM_Commands_Pkg::SDM_Commands::mrdt */ Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::SDM_Commands::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::SDM_Commands::floiIsSB1 */ kcg_bool floiIsSB1,
  outC_SDM_Commands_SDM_Commands_Pkg *outC);

extern void SDM_Commands_reset_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC);
extern void SDM_Commands_init_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC);

#endif /* _SDM_Commands_SDM_Commands_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SDM_Commands_SDM_Commands_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

