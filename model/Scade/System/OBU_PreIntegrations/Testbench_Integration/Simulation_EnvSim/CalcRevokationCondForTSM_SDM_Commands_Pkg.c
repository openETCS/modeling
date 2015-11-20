/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokationCondForTSM_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokationCondForTSM */
void CalcRevokationCondForTSM_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::mrdt */Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::trainLocations */trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::floiIsSB1 */kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokationCondForTSM::revokationConds */TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds)
{
  if ((EoA_TargetManagement_types == (*mrdt).targetType) |
    ((*mrdt).targetType == SvL_TargetManagement_types)) {
    /* 1 */
    CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
      locations,
      speeds,
      trainLocations,
      floiIsSB1,
      revokationConds);
  }
  else {
    /* 1 */
    CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg(
      locations,
      speeds,
      trainLocations,
      floiIsSB1,
      revokationConds);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcRevokationCondForTSM_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

