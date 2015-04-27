/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcModeTransOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcModeTransOutput */
void CalcModeTransOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcModeTransOutput::m_level */ M_LEVEL m_level,
  /* SDM_Commands_Pkg::CalcModeTransOutput::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcModeTransOutput::eoaOverpassed */ kcg_bool *eoaOverpassed,
  /* SDM_Commands_Pkg::CalcModeTransOutput::targetSpeedReached */ kcg_bool *targetSpeedReached)
{
  *targetSpeedReached = (*speeds).V_est <= (*speeds).V_target;
  *eoaOverpassed = ((M_LEVEL_Level_1 == m_level) & ((*locations).d_eoa <=
        (*trainLocations).d_est_frontendPos -
        (*trainLocations).d_antenna2frontend)) | (((*locations).d_eoa <=
        (*trainLocations).d_est_frontendPos) & ((M_LEVEL_Level_2 == m_level) |
        (m_level == M_LEVEL_Level_3)));
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcModeTransOutput_SDM_Commands_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

