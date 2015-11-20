/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TripRequests_LevelChangement.h"

/* LevelChangement::TripRequests */
kcg_bool TripRequests_LevelChangement(
  /* LevelChangement::TripRequests::last_level */ M_LEVEL last_level,
  /* LevelChangement::TripRequests::new_level */ M_LEVEL new_level,
  /* LevelChangement::TripRequests::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level)
{
  /* LevelChangement::TripRequests::Trip_Requested */
  static kcg_bool _1_Trip_Requested;
  /* LevelChangement::TripRequests::IfBlock1::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* LevelChangement::TripRequests::Trip_Requested */
  static kcg_bool _5_Trip_Requested;
  /* LevelChangement::TripRequests::IfBlock1::then::IfBlock2::else::then::_L2 */
  static kcg_bool _L27_IfBlock1_IfBlock2;
  /* LevelChangement::TripRequests::IfBlock1::then::IfBlock2::else::then::_L1 */
  static kcg_bool _L18_IfBlock1_IfBlock2;
  /* LevelChangement::TripRequests::Trip_Requested */
  static kcg_bool _4_Trip_Requested;
  /* LevelChangement::TripRequests::IfBlock1::then::IfBlock2::else::else::_L3 */
  static kcg_bool _L3_IfBlock1_IfBlock2;
  /* LevelChangement::TripRequests::IfBlock1::then::IfBlock2::else */
  static kcg_bool else_clock_IfBlock1_IfBlock2;
  /* LevelChangement::TripRequests::Trip_Requested */
  static kcg_bool _2_Trip_Requested;
  /* LevelChangement::TripRequests::IfBlock1::then::IfBlock2::then::_L1 */
  static kcg_bool _L1_IfBlock1_IfBlock2;
  /* LevelChangement::TripRequests::IfBlock1::then::IfBlock2::then::_L2 */
  static kcg_bool _L2_IfBlock1_IfBlock2;
  /* LevelChangement::TripRequests::Trip_Requested */
  static kcg_bool _3_Trip_Requested;
  /* LevelChangement::TripRequests::Trip_Requested */
  static kcg_bool Trip_Requested;
  /* LevelChangement::TripRequests::IfBlock1::else::_L1 */
  static kcg_bool _L1_IfBlock1;
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg noname;
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _6_noname;
  /* LevelChangement::TripRequests::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* LevelChangement::TripRequests::Loc_L2L3_MA_track */
  static kcg_bool Loc_L2L3_MA_track;
  /* LevelChangement::TripRequests::Loc_L1_MA_track */
  static kcg_bool Loc_L1_MA_track;
  /* LevelChangement::TripRequests::_L2 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L2;
  /* LevelChangement::TripRequests::_L3 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L3;
  /* LevelChangement::TripRequests::_L4 */
  static kcg_bool _L4;
  /* LevelChangement::TripRequests::_L5 */
  static kcg_bool _L5;
  /* LevelChangement::TripRequests::_L1 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L1;
  /* LevelChangement::TripRequests::Trip_Requested */
  static kcg_bool _9_Trip_Requested;
  
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &_L1,
    Data_From_Track_to_Level);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L2,
    &_L1.level_transition_priority_table);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &noname,
    &_L2);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L3,
    &_L1.conditionnalTransition);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_6_noname,
    &_L3);
  _L5 = _L1.receivedL1MA_track;
  _L4 = _L1.receivedL2L3MA_track;
  Loc_L2L3_MA_track = _L4;
  Loc_L1_MA_track = _L5;
  IfBlock1_clock = (last_level == M_LEVEL_Level_0) | (last_level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    IfBlock2_clock_IfBlock1 = new_level == M_LEVEL_Level_1;
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      _L1_IfBlock1_IfBlock2 = Loc_L1_MA_track;
      _L2_IfBlock1_IfBlock2 = !_L1_IfBlock1_IfBlock2;
      _3_Trip_Requested = _L2_IfBlock1_IfBlock2;
      _1_Trip_Requested = _3_Trip_Requested;
    }
    else {
      else_clock_IfBlock1_IfBlock2 = (new_level == M_LEVEL_Level_2) |
        (new_level == M_LEVEL_Level_3);
      /* ck_anon_activ */ if (else_clock_IfBlock1_IfBlock2) {
        _L18_IfBlock1_IfBlock2 = Loc_L2L3_MA_track;
        _L27_IfBlock1_IfBlock2 = !_L18_IfBlock1_IfBlock2;
        _5_Trip_Requested = _L27_IfBlock1_IfBlock2;
        _2_Trip_Requested = _5_Trip_Requested;
      }
      else {
        _L3_IfBlock1_IfBlock2 = kcg_false;
        _4_Trip_Requested = _L3_IfBlock1_IfBlock2;
        _2_Trip_Requested = _4_Trip_Requested;
      }
      _1_Trip_Requested = _2_Trip_Requested;
    }
    _9_Trip_Requested = _1_Trip_Requested;
  }
  else {
    _L1_IfBlock1 = kcg_false;
    Trip_Requested = _L1_IfBlock1;
    _9_Trip_Requested = Trip_Requested;
  }
  return _9_Trip_Requested;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TripRequests_LevelChangement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

