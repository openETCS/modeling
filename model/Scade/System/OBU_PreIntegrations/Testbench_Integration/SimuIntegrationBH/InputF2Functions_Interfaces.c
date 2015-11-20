/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputF2Functions_Interfaces.h"

/* Interfaces::InputF2Functions */
void InputF2Functions_Interfaces(
  /* Interfaces::InputF2Functions::Data_From_F2_Functions */ T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Interfaces::InputF2Functions::T_NVCONTACT_Overpass */ kcg_bool *T_NVCONTACT_Overpass,
  /* Interfaces::InputF2Functions::Error_BG_System_Version */ kcg_bool *Error_BG_System_Version,
  /* Interfaces::InputF2Functions::Failure_Occured */ kcg_bool *Failure_Occured,
  /* Interfaces::InputF2Functions::Continue_Shunting_Function_Active */ kcg_bool *Continue_Shunting_Function_Active,
  /* Interfaces::InputF2Functions::Stop_Shunting_Stored */ kcg_bool *Stop_Shunting_Stored,
  /* Interfaces::InputF2Functions::Linking_Reaction_To_Trip */ kcg_bool *Linking_Reaction_To_Trip)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;
  static kcg_bool _3_noname;
  static NID_C _4_noname;
  static NID_ERRORBG_BG_Types_Pkg _5_noname;
  /* Interfaces::InputF2Functions::_L1 */
  static T_Data_From_F2_functions_Level_And_Mode_Types_Pkg _L1;
  /* Interfaces::InputF2Functions::_L21 */
  static kcg_bool _L21;
  /* Interfaces::InputF2Functions::_L20 */
  static kcg_bool _L20;
  /* Interfaces::InputF2Functions::_L19 */
  static kcg_bool _L19;
  /* Interfaces::InputF2Functions::_L18 */
  static kcg_bool _L18;
  /* Interfaces::InputF2Functions::_L17 */
  static kcg_bool _L17;
  /* Interfaces::InputF2Functions::_L16 */
  static kcg_bool _L16;
  /* Interfaces::InputF2Functions::_L15 */
  static kcg_bool _L15;
  /* Interfaces::InputF2Functions::_L14 */
  static NID_C _L14;
  /* Interfaces::InputF2Functions::_L13 */
  static NID_ERRORBG_BG_Types_Pkg _L13;
  /* Interfaces::InputF2Functions::_L25 */
  static MSG_Errors_T_Common_Types_Pkg _L25;
  /* Interfaces::InputF2Functions::_L24 */
  static kcg_bool _L24;
  /* Interfaces::InputF2Functions::_L23 */
  static kcg_bool _L23;
  /* Interfaces::InputF2Functions::_L22 */
  static kcg_bool _L22;
  
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &_L1,
    Data_From_F2_Functions);
  _L23 = _L1.Continue_Shunting_Active;
  *Continue_Shunting_Function_Active = _L23;
  _L22 = _L1.Stop_Shunting_Stored;
  *Stop_Shunting_Stored = _L22;
  _L24 = _L1.Failure_Occured;
  *Failure_Occured = _L24;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&_L25, &_L1.Common_Errors);
  _L17 = _L25.tNvContactError;
  *T_NVCONTACT_Overpass = _L17;
  _L21 = _L25.linkedBGError;
  *Linking_Reaction_To_Trip = _L21;
  _L19 = _L25.BG_versionIncompatible;
  *Error_BG_System_Version = _L19;
  _L13 = _L25.nid_errorbg;
  _L14 = _L25.nid_c;
  _L15 = _L25.radioMessageConsistencyError;
  _L16 = _L25.otherTimingError;
  _L18 = _L25.radioSequenceError;
  _L20 = _L25.unlinkedBGError;
  noname = _L20;
  _1_noname = _L18;
  _2_noname = _L16;
  _3_noname = _L15;
  _4_noname = _L14;
  _5_noname = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputF2Functions_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

