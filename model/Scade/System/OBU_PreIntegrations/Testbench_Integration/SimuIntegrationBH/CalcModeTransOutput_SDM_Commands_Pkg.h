/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CalcModeTransOutput_SDM_Commands_Pkg_H_
#define _CalcModeTransOutput_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_Commands_Pkg::CalcModeTransOutput */
extern void CalcModeTransOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcModeTransOutput::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcModeTransOutput::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  /* SDM_Commands_Pkg::CalcModeTransOutput::eoaOverpassed */ kcg_bool *eoaOverpassed,
  /* SDM_Commands_Pkg::CalcModeTransOutput::targetSpeedReached */ kcg_bool *targetSpeedReached);

#endif /* _CalcModeTransOutput_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalcModeTransOutput_SDM_Commands_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

