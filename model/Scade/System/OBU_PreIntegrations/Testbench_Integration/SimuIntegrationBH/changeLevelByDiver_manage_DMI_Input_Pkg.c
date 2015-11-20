/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "changeLevelByDiver_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::changeLevelByDiver */
void changeLevelByDiver_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::changeLevelByDiver::levelData */ DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *levelData,
  /* manage_DMI_Input_Pkg::changeLevelByDiver::lasttNTC */ NID_STM_DMI_Types_Pkg lasttNTC,
  /* manage_DMI_Input_Pkg::changeLevelByDiver::ML_levelTransition */ T_LevelTransition_Level_And_Mode_Types_Pkg *ML_levelTransition,
  /* manage_DMI_Input_Pkg::changeLevelByDiver::updatedNTC */ NID_STM_DMI_Types_Pkg *updatedNTC)
{
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L1 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L1;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L2 */
  static kcg_bool _L2;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L3 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L3;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L4 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L4;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L5 */
  static M_LEVEL _L5;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L6 */
  static kcg_int _L6;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L7 */
  static T_TransitionType_Level_And_Mode_Types_Pkg _L7;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L8 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L8;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L9 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L9;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L12 */
  static M_LEVEL _L12;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L11 */
  static kcg_bool _L11;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L10 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L10;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L13 */
  static kcg_bool _L13;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L14 */
  static M_LEVEL _L14;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L15 */
  static kcg_bool _L15;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L16 */
  static NID_STM_DMI_Types_Pkg _L16;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L18 */
  static NID_STM_DMI_Types_Pkg _L18;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L17 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L17;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L23 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L23;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L22 */
  static M_LEVEL _L22;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L21 */
  static M_LEVEL _L21;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L20 */
  static kcg_bool _L20;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L24 */
  static kcg_bool _L24;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L25 */
  static kcg_bool _L25;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L26 */
  static NID_STM_DMI_Types_Pkg _L26;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L28 */
  static NID_STM_DMI_Types_Pkg _L28;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L29 */
  static NID_STM_DMI_Types_Pkg _L29;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L41 */
  static kcg_int _L41;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L42 */
  static kcg_bool _L42;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L43 */
  static kcg_int _L43;
  /* manage_DMI_Input_Pkg::changeLevelByDiver::_L49 */
  static kcg_int _L49;
  
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&_L1, levelData);
  _L2 = _L1.valid;
  _L5 = _L1.level.level;
  _L6 = 0;
  _L7 = M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg;
  _L42 = kcg_true;
  _L49 = 0;
  _L4.level = _L5;
  _L4.position = _L6;
  _L4.transitionType = _L7;
  _L4.immediateAck = _L42;
  _L4.AckLength = _L49;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L9,
    (T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *)
      &cNoLevelTransitionInfo_manage_DMI_Input_Pkg);
  /* 1 */ if (_L2) {
    kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(&_L8, &_L4);
  }
  else {
    kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(&_L8, &_L9);
  }
  _L41 = 0;
  _L43 = 0;
  _L3.is_set = _L2;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(&_L3.transition, &_L8);
  _L3.LRBG = _L41;
  _L3.referenceLocation = _L43;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(ML_levelTransition, &_L3);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&_L10, levelData);
  _L11 = _L10.valid;
  _L12 = _L10.level.level;
  _L14 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L13 = _L12 == _L14;
  _L15 = _L11 & _L13;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&_L17, levelData);
  _L18 = _L17.level.nid_stm;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(&_L23, levelData);
  _L20 = _L23.valid;
  _L22 = _L23.level.level;
  _L21 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L24 = _L22 != _L21;
  _L25 = _L20 & _L24;
  _L28 = cNo_STM_manage_DMI_Input_Pkg;
  _L29 = lasttNTC;
  /* 3 */ if (_L25) {
    _L26 = _L28;
  }
  else {
    _L26 = _L29;
  }
  /* 2 */ if (_L15) {
    _L16 = _L18;
  }
  else {
    _L16 = _L26;
  }
  *updatedNTC = _L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** changeLevelByDiver_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

