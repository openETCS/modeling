/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBCSessionRequests_OutputToRBC.h"

/* OutputToRBC::RBCSessionRequests */
kcg_bool RBCSessionRequests_OutputToRBC(
  /* OutputToRBC::RBCSessionRequests::last_level */ M_LEVEL last_level,
  /* OutputToRBC::RBCSessionRequests::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition)
{
  static NID_LRBG noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_noname;
  /* OutputToRBC::RBCSessionRequests::Loc_new_level */
  static M_LEVEL Loc_new_level;
  /* OutputToRBC::RBCSessionRequests::_L3 */
  static kcg_bool _L3;
  /* OutputToRBC::RBCSessionRequests::_L4 */
  static kcg_bool _L4;
  /* OutputToRBC::RBCSessionRequests::_L5 */
  static kcg_bool _L5;
  /* OutputToRBC::RBCSessionRequests::_L6 */
  static kcg_bool _L6;
  /* OutputToRBC::RBCSessionRequests::_L7 */
  static kcg_bool _L7;
  /* OutputToRBC::RBCSessionRequests::_L8 */
  static kcg_bool _L8;
  /* OutputToRBC::RBCSessionRequests::_L9 */
  static kcg_bool _L9;
  /* OutputToRBC::RBCSessionRequests::_L10 */
  static kcg_bool _L10;
  /* OutputToRBC::RBCSessionRequests::_L11 */
  static kcg_bool _L11;
  /* OutputToRBC::RBCSessionRequests::_L1 */
  static M_LEVEL _L1;
  /* OutputToRBC::RBCSessionRequests::_L12 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L12;
  /* OutputToRBC::RBCSessionRequests::_L16 */
  static kcg_bool _L16;
  /* OutputToRBC::RBCSessionRequests::_L15 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L15;
  /* OutputToRBC::RBCSessionRequests::_L14 */
  static NID_LRBG _L14;
  /* OutputToRBC::RBCSessionRequests::_L13 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* OutputToRBC::RBCSessionRequests::_L17 */
  static M_LEVEL _L17;
  /* OutputToRBC::RBCSessionRequests::_L18 */
  static M_LEVEL _L18;
  /* OutputToRBC::RBCSessionRequests::_L19 */
  static M_LEVEL _L19;
  /* OutputToRBC::RBCSessionRequests::_L20 */
  static M_LEVEL _L20;
  /* OutputToRBC::RBCSessionRequests::Connection_to_RBC_Requested */
  static kcg_bool Connection_to_RBC_Requested;
  
  _L1 = last_level;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L12,
    selected_level_transition);
  _L16 = _L12.is_set;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L15,
    &_L12.transition);
  _L17 = _L15.level;
  _L19 = last_level;
  /* 1 */ if (_L16) {
    _L18 = _L17;
  }
  else {
    _L18 = _L19;
  }
  Loc_new_level = _L18;
  _L20 = Loc_new_level;
  _L4 = _L1 != _L20;
  _L5 = Loc_new_level == M_LEVEL_Level_2;
  _L6 = Loc_new_level == M_LEVEL_Level_3;
  _L10 = _L5 | _L6;
  _L7 = last_level == M_LEVEL_Level_0;
  _L8 = last_level == M_LEVEL_Level_1;
  _L9 = last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L11 = _L7 | _L8 | _L9;
  _L3 = _L4 & _L10 & _L11;
  Connection_to_RBC_Requested = _L3;
  _L13 = _L12.referenceLocation;
  _L14 = _L12.LRBG;
  noname = _L14;
  _1_noname = _L13;
  return Connection_to_RBC_Requested;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBCSessionRequests_OutputToRBC.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

