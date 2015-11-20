/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutputToRBC_OutputToRBC.h"

void BuildOutputToRBC_reset_OutputToRBC(outC_BuildOutputToRBC_OutputToRBC *outC)
{
  /* 1 */ ExitLevel2or3_reset_OutputToRBC(&outC->Context_1);
}

/* OutputToRBC::BuildOutputToRBC */
void BuildOutputToRBC_OutputToRBC(
  /* OutputToRBC::BuildOutputToRBC::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* OutputToRBC::BuildOutputToRBC::last_level */M_LEVEL last_level,
  /* OutputToRBC::BuildOutputToRBC::new_level */M_LEVEL new_level,
  /* OutputToRBC::BuildOutputToRBC::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_BuildOutputToRBC_OutputToRBC *outC)
{
  /* 1 */
  ExitLevel2or3_OutputToRBC(
    new_level,
    last_level,
    selected_level_transition,
    trainPosition,
    &outC->Context_1);
  outC->PositionReportNeeded = /* 1 */
    EntryInLevel2or3_OutputToRBC(last_level, new_level) |
    outC->Context_1.PositionReportNeeded;
  outC->Connection_to_RBC_Requested = /* 2 */
    RBCSessionRequests_OutputToRBC(last_level, selected_level_transition);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildOutputToRBC_OutputToRBC.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

