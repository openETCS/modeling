/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeNewLevel_LevelChangement.h"

/* LevelChangement::ComputeNewLevel */
void ComputeNewLevel_LevelChangement(
  /* LevelChangement::ComputeNewLevel::current_level */ M_LEVEL current_level,
  /* LevelChangement::ComputeNewLevel::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* LevelChangement::ComputeNewLevel::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* LevelChangement::ComputeNewLevel::next_level */ M_LEVEL *next_level,
  /* LevelChangement::ComputeNewLevel::IsNewLevel */ kcg_bool *IsNewLevel)
{
  static NID_LRBG noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_noname;
  static kcg_bool _2_noname;
  static Location_T_Obu_BasicTypes_Pkg _3_noname;
  /* LevelChangement::ComputeNewLevel::Loc_is_set */
  static kcg_bool Loc_is_set;
  /* LevelChangement::ComputeNewLevel::Loc_Level */
  static M_LEVEL Loc_Level;
  /* LevelChangement::ComputeNewLevel::Loc_Position */
  static M_POSITION Loc_Position;
  /* LevelChangement::ComputeNewLevel::Loc_Type */
  static T_TransitionType_Level_And_Mode_Types_Pkg Loc_Type;
  /* LevelChangement::ComputeNewLevel::_L1 */
  static M_LEVEL _L1;
  /* LevelChangement::ComputeNewLevel::_L7 */
  static kcg_bool _L7;
  /* LevelChangement::ComputeNewLevel::_L6 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L6;
  /* LevelChangement::ComputeNewLevel::_L5 */
  static NID_LRBG _L5;
  /* LevelChangement::ComputeNewLevel::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* LevelChangement::ComputeNewLevel::_L12 */
  static M_LEVEL _L12;
  /* LevelChangement::ComputeNewLevel::_L11 */
  static M_POSITION _L11;
  /* LevelChangement::ComputeNewLevel::_L10 */
  static T_TransitionType_Level_And_Mode_Types_Pkg _L10;
  /* LevelChangement::ComputeNewLevel::_L9 */
  static kcg_bool _L9;
  /* LevelChangement::ComputeNewLevel::_L8 */
  static Location_T_Obu_BasicTypes_Pkg _L8;
  /* LevelChangement::ComputeNewLevel::_L13 */
  static M_LEVEL _L13;
  /* LevelChangement::ComputeNewLevel::_L14 */
  static M_LEVEL _L14;
  /* LevelChangement::ComputeNewLevel::_L15 */
  static kcg_bool _L15;
  /* LevelChangement::ComputeNewLevel::_L16 */
  static kcg_bool _L16;
  /* LevelChangement::ComputeNewLevel::_L17 */
  static M_LEVEL _L17;
  /* LevelChangement::ComputeNewLevel::_L18 */
  static M_LEVEL _L18;
  /* LevelChangement::ComputeNewLevel::_L19 */
  static kcg_bool _L19;
  /* LevelChangement::ComputeNewLevel::_L20 */
  static kcg_bool _L20;
  /* LevelChangement::ComputeNewLevel::_L21 */
  static kcg_bool _L21;
  /* LevelChangement::ComputeNewLevel::_L24 */
  static kcg_bool _L24;
  /* LevelChangement::ComputeNewLevel::_L25 */
  static kcg_bool _L25;
  /* LevelChangement::ComputeNewLevel::_L26 */
  static M_POSITION _L26;
  /* LevelChangement::ComputeNewLevel::_L28 */
  static kcg_bool _L28;
  /* LevelChangement::ComputeNewLevel::_L29 */
  static kcg_bool _L29;
  /* LevelChangement::ComputeNewLevel::_L30 */
  static Location_T_Obu_BasicTypes_Pkg _L30;
  /* LevelChangement::ComputeNewLevel::_L31 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L31;
  /* LevelChangement::ComputeNewLevel::_L32 */
  static trainPosition_T_TrainPosition_Types_Pck _L32;
  
  _L1 = current_level;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L31,
    selected_level_transition);
  _L7 = _L31.is_set;
  Loc_is_set = _L7;
  _L16 = Loc_is_set;
  _L17 = current_level;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L6,
    &_L31.transition);
  _L12 = _L6.level;
  Loc_Level = _L12;
  _L18 = Loc_Level;
  _L19 = _L17 != _L18;
  _L10 = _L6.transitionType;
  Loc_Type = _L10;
  _L21 = Loc_Type == M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  _L24 = Loc_Type == M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg;
  _L25 = Loc_Type == M_TransitionType_Normal_Level_And_Mode_Types_Pkg;
  _L11 = _L6.position;
  Loc_Position = _L11;
  _L26 = Loc_Position;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L32, trainPosition);
  _L30 = _L32.estimatedFrontEndPosition;
  _L28 = _L26 <= _L30;
  _L29 = _L25 & _L28;
  _L20 = _L21 | _L24 | _L29;
  _L15 = _L16 & _L19 & _L20;
  _L14 = Loc_Level;
  /* 1 */ if (_L15) {
    _L13 = _L14;
  }
  else {
    _L13 = _L1;
  }
  *next_level = _L13;
  _L4 = _L31.referenceLocation;
  _L5 = _L31.LRBG;
  _L8 = _L6.AckLength;
  _L9 = _L6.immediateAck;
  noname = _L5;
  _1_noname = _L4;
  _2_noname = _L9;
  _3_noname = _L8;
  *IsNewLevel = _L15;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ComputeNewLevel_LevelChangement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

