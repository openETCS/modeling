/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBCSessionRequests_OutputToRBC.h"

/* OutputToRBC::RBCSessionRequests */
kcg_bool RBCSessionRequests_OutputToRBC(
  /* OutputToRBC::RBCSessionRequests::last_level */M_LEVEL last_level,
  /* OutputToRBC::RBCSessionRequests::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition)
{
  /* OutputToRBC::RBCSessionRequests::Loc_new_level */
  static M_LEVEL Loc_new_level;
  /* OutputToRBC::RBCSessionRequests::Connection_to_RBC_Requested */
  static kcg_bool Connection_to_RBC_Requested;
  
  if ((*selected_level_transition).is_set) {
    Loc_new_level = (*selected_level_transition).transition.level;
  }
  else {
    Loc_new_level = last_level;
  }
  Connection_to_RBC_Requested = (last_level != Loc_new_level) &
    ((Loc_new_level == M_LEVEL_Level_2) | (Loc_new_level == M_LEVEL_Level_3)) &
    ((last_level == M_LEVEL_Level_0) | (last_level == M_LEVEL_Level_1) |
      (last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC));
  return Connection_to_RBC_Requested;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBCSessionRequests_OutputToRBC.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

