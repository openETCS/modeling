/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsAckNeeded_Acknowledgement.h"

/* Acknowledgement::IsAckNeeded */
kcg_bool IsAckNeeded_Acknowledgement(
  /* Acknowledgement::IsAckNeeded::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* Acknowledgement::IsAckNeeded::last_level */ M_LEVEL last_level)
{
  /* Acknowledgement::IsAckNeeded::Loc_new_level */
  static M_LEVEL Loc_new_level;
  /* Acknowledgement::IsAckNeeded::_L1 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L1;
  /* Acknowledgement::IsAckNeeded::_L12 */
  static M_LEVEL _L12;
  /* Acknowledgement::IsAckNeeded::_L23 */
  static M_LEVEL _L23;
  /* Acknowledgement::IsAckNeeded::_L19 */
  static kcg_bool _L19;
  /* Acknowledgement::IsAckNeeded::_L18 */
  static M_LEVEL _L18;
  /* Acknowledgement::IsAckNeeded::_L17 */
  static kcg_bool _L17;
  /* Acknowledgement::IsAckNeeded::_L16 */
  static kcg_bool _L16;
  /* Acknowledgement::IsAckNeeded::_L14 */
  static kcg_bool _L14;
  /* Acknowledgement::IsAckNeeded::_L25 */
  static kcg_bool _L25;
  /* Acknowledgement::IsAckNeeded::_L27 */
  static kcg_bool _L27;
  /* Acknowledgement::IsAckNeeded::_L29 */
  static kcg_bool _L29;
  /* Acknowledgement::IsAckNeeded::_L30 */
  static kcg_bool _L30;
  /* Acknowledgement::IsAckNeeded::_L31 */
  static kcg_bool _L31;
  /* Acknowledgement::IsAckNeeded::_L32 */
  static kcg_bool _L32;
  /* Acknowledgement::IsAckNeeded::_L33 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L33;
  /* Acknowledgement::IsAckNeeded::isAckNeeded */
  static kcg_bool isAckNeeded;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L1,
    selected_level_transition);
  _L18 = last_level;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L33,
    &_L1.transition);
  _L12 = _L33.level;
  Loc_new_level = _L12;
  _L23 = Loc_new_level;
  _L19 = _L18 != _L23;
  _L30 = Loc_new_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L31 = last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L32 = _L30 & _L31;
  _L29 = _L19 | _L32;
  _L25 = Loc_new_level == M_LEVEL_Level_0;
  _L27 = Loc_new_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L16 = last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L17 = _L25 | _L27 | _L16;
  _L14 = _L29 & _L17;
  isAckNeeded = _L14;
  return isAckNeeded;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** IsAckNeeded_Acknowledgement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

