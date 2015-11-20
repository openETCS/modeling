/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TripRequests_LevelChangement.h"

/* LevelChangement::TripRequests */
kcg_bool TripRequests_LevelChangement(
  /* LevelChangement::TripRequests::last_level */M_LEVEL last_level,
  /* LevelChangement::TripRequests::new_level */M_LEVEL new_level,
  /* LevelChangement::TripRequests::Data_From_Track_to_Level */T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level)
{
  /* LevelChangement::TripRequests::IfBlock1::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* LevelChangement::TripRequests::IfBlock1::then::IfBlock2::else */
  static kcg_bool else_clock_IfBlock1_IfBlock2;
  /* LevelChangement::TripRequests::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* LevelChangement::TripRequests::Trip_Requested */
  static kcg_bool Trip_Requested;
  
  IfBlock1_clock = (last_level == M_LEVEL_Level_0) | (last_level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC);
  if (IfBlock1_clock) {
    IfBlock2_clock_IfBlock1 = new_level == M_LEVEL_Level_1;
    if (IfBlock2_clock_IfBlock1) {
      Trip_Requested = !(*Data_From_Track_to_Level).receivedL1MA_track;
    }
    else {
      else_clock_IfBlock1_IfBlock2 = (new_level == M_LEVEL_Level_2) |
        (new_level == M_LEVEL_Level_3);
      if (else_clock_IfBlock1_IfBlock2) {
        Trip_Requested = !(*Data_From_Track_to_Level).receivedL2L3MA_track;
      }
      else {
        Trip_Requested = kcg_false;
      }
    }
  }
  else {
    Trip_Requested = kcg_false;
  }
  return Trip_Requested;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TripRequests_LevelChangement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

