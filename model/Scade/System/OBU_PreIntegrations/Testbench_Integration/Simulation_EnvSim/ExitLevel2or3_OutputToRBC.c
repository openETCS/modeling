/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ExitLevel2or3_OutputToRBC.h"

void ExitLevel2or3_reset_OutputToRBC(outC_ExitLevel2or3_OutputToRBC *outC)
{
  outC->init = kcg_true;
}

/* OutputToRBC::ExitLevel2or3 */
void ExitLevel2or3_OutputToRBC(
  /* OutputToRBC::ExitLevel2or3::new_level */M_LEVEL new_level,
  /* OutputToRBC::ExitLevel2or3::last_level */M_LEVEL last_level,
  /* OutputToRBC::ExitLevel2or3::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* OutputToRBC::ExitLevel2or3::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_ExitLevel2or3_OutputToRBC *outC)
{
  /* OutputToRBC::ExitLevel2or3::SM1::State2 */
  static kcg_bool br_1_guard_SM1_State2;
  /* OutputToRBC::ExitLevel2or3::Loc_Position */
  static M_POSITION last_Loc_Position;
  /* OutputToRBC::ExitLevel2or3::SM1 */
  static _33_SSM_ST_SM1 SM1_state_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    last_Loc_Position = 0;
    SM1_state_act = SSM_st_BeforeChange_SM1;
  }
  else {
    last_Loc_Position = outC->Loc_Position;
    SM1_state_act = outC->SM1_state_nxt;
  }
  switch (SM1_state_act) {
    case SSM_st_BeforeChange_SM1 :
      outC->PositionReportNeeded = kcg_false;
      if ((last_level != new_level) & ((last_level == M_LEVEL_Level_2) |
          (last_level == M_LEVEL_Level_3)) & ((new_level == M_LEVEL_Level_0) |
          (new_level == M_LEVEL_Level_1) | (new_level ==
            M_LEVEL_Level_NTC_specified_by_NID_NTC))) {
        outC->SM1_state_nxt = SSM_st_State2_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_BeforeChange_SM1;
      }
      outC->Loc_Position = (*selected_level_transition).transition.position;
      break;
    case SSM_st_State2_SM1 :
      br_1_guard_SM1_State2 = last_Loc_Position <=
        (*trainPosition).minSafeRearEndPosition;
      outC->Loc_Position = last_Loc_Position;
      if (br_1_guard_SM1_State2) {
        outC->SM1_state_nxt = SSM_st_BeforeChange_SM1;
        outC->PositionReportNeeded = kcg_true;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State2_SM1;
        outC->PositionReportNeeded = kcg_false;
      }
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ExitLevel2or3_OutputToRBC.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

