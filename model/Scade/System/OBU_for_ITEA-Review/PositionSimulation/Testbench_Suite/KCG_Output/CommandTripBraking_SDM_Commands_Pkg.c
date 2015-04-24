/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CommandTripBraking */
EB_command_T_SDM_Commands_Pkg CommandTripBraking_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CommandTripBraking::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CommandTripBraking::mrdt */ Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CommandTripBraking::m_level */ M_LEVEL m_level)
{
  /* SDM_Commands_Pkg::CommandTripBraking::eb */ EB_command_T_SDM_Commands_Pkg eb;
  
  eb = ((((*trainLocations).d_minSafeFrontEndPos -
          (*trainLocations).d_antenna2frontend > (*mrdt).distance) &
        (M_LEVEL_Level_1 == m_level) & (*trainLocations).trainPositionIsValid) |
      ((*trainLocations).trainPositionIsValid & ((m_level == M_LEVEL_Level_2) |
          (M_LEVEL_Level_3 == m_level)) &
        ((*trainLocations).d_minSafeFrontEndPos > (*mrdt).distance))) &
    ((EoA_TargetManagement_types == (*mrdt).targetType) | ((*mrdt).targetType ==
        SvL_TargetManagement_types));
  return eb;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CommandTripBraking_SDM_Commands_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

