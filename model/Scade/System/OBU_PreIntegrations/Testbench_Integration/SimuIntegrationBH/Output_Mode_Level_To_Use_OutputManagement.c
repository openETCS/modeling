/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_Mode_Level_To_Use_OutputManagement.h"

#ifndef KCG_USER_DEFINED_INIT
void Output_Mode_Level_To_Use_init_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  outC->init = kcg_true;
  outC->rem_currentMode = NP_Level_And_Mode_Types_Pkg;
  outC->Compatible_Mode_And_Level.compatibleModeAndLevel = kcg_true;
  outC->Compatible_Mode_And_Level.level = M_LEVEL_Level_0;
  outC->Compatible_Mode_And_Level.newLevel = kcg_true;
  outC->Compatible_Mode_And_Level.Mode = M_MODE_Full_Supervision;
  outC->Compatible_Mode_And_Level.newMode = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_Mode_Level_To_Use_reset_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* OutputManagement::Output_Mode_Level_To_Use */
void Output_Mode_Level_To_Use_OutputManagement(
  /* OutputManagement::Output_Mode_Level_To_Use::next_level */ M_LEVEL next_level,
  /* OutputManagement::Output_Mode_Level_To_Use::currentMode */ T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* OutputManagement::Output_Mode_Level_To_Use::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_Mode_Level_To_Use::isNewLevel */ kcg_bool isNewLevel,
  outC_Output_Mode_Level_To_Use_OutputManagement *outC)
{
  /* OutputManagement::Output_Mode_Level_To_Use::currentMode */
  static T_Mode_Level_And_Mode_Types_Pkg last_currentMode;
  /* OutputManagement::Output_Mode_Level_To_Use::_L1 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L1;
  /* OutputManagement::Output_Mode_Level_To_Use::_L2 */
  static kcg_bool _L2;
  /* OutputManagement::Output_Mode_Level_To_Use::_L3 */
  static M_LEVEL _L3;
  /* OutputManagement::Output_Mode_Level_To_Use::_L4 */
  static T_Mode_Level_And_Mode_Types_Pkg _L4;
  /* OutputManagement::Output_Mode_Level_To_Use::_L5 */
  static M_MODE _L5;
  /* OutputManagement::Output_Mode_Level_To_Use::_L6 */
  static M_MODE _L6;
  /* OutputManagement::Output_Mode_Level_To_Use::_L7 */
  static M_MODE _L7;
  /* OutputManagement::Output_Mode_Level_To_Use::_L8 */
  static M_MODE _L8;
  /* OutputManagement::Output_Mode_Level_To_Use::_L9 */
  static M_MODE _L9;
  /* OutputManagement::Output_Mode_Level_To_Use::_L10 */
  static M_MODE _L10;
  /* OutputManagement::Output_Mode_Level_To_Use::_L11 */
  static M_MODE _L11;
  /* OutputManagement::Output_Mode_Level_To_Use::_L12 */
  static M_MODE _L12;
  /* OutputManagement::Output_Mode_Level_To_Use::_L13 */
  static M_MODE _L13;
  /* OutputManagement::Output_Mode_Level_To_Use::_L14 */
  static M_MODE _L14;
  /* OutputManagement::Output_Mode_Level_To_Use::_L15 */
  static M_MODE _L15;
  /* OutputManagement::Output_Mode_Level_To_Use::_L16 */
  static M_MODE _L16;
  /* OutputManagement::Output_Mode_Level_To_Use::_L17 */
  static M_MODE _L17;
  /* OutputManagement::Output_Mode_Level_To_Use::_L18 */
  static M_MODE _L18;
  /* OutputManagement::Output_Mode_Level_To_Use::_L19 */
  static M_MODE _L19;
  /* OutputManagement::Output_Mode_Level_To_Use::_L20 */
  static M_MODE _L20;
  /* OutputManagement::Output_Mode_Level_To_Use::_L21 */
  static M_MODE _L21;
  /* OutputManagement::Output_Mode_Level_To_Use::_L22 */
  static M_MODE _L22;
  /* OutputManagement::Output_Mode_Level_To_Use::_L24 */
  static kcg_bool _L24;
  /* OutputManagement::Output_Mode_Level_To_Use::_L25 */
  static T_Mode_Level_And_Mode_Types_Pkg _L25;
  /* OutputManagement::Output_Mode_Level_To_Use::_L28 */
  static T_Mode_Level_And_Mode_Types_Pkg _L28;
  /* OutputManagement::Output_Mode_Level_To_Use::_L29 */
  static kcg_bool _L29;
  
  _L2 = Level_Mode_Compatible;
  _L3 = next_level;
  _L29 = isNewLevel;
  _L4 = currentMode;
  _L6 = M_MODE_Full_Supervision;
  _L7 = M_MODE_On_Sight;
  _L8 = M_MODE_Staff_Responsible;
  _L9 = M_MODE_Shunting;
  _L10 = M_MODE_Unfitted;
  _L11 = M_MODE_Sleeping;
  _L12 = M_MODE_Stand_By;
  _L13 = M_MODE_Trip;
  _L14 = M_MODE_Post_Trip;
  _L15 = M_MODE_System_Failure;
  _L16 = M_MODE_Isolation;
  _L17 = M_MODE_Non_Leading;
  _L18 = M_MODE_Limited_Supervision;
  _L19 = M_MODE_National_System;
  _L20 = M_MODE_Reversing;
  _L21 = M_MODE_Passive_Shunting;
  _L22 = M_MODE_No_Power;
  switch (_L4) {
    case FS_Level_And_Mode_Types_Pkg :
      _L5 = _L6;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L5 = _L7;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L5 = _L8;
      break;
    case SH_Level_And_Mode_Types_Pkg :
      _L5 = _L9;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      _L5 = _L10;
      break;
    case SL_Level_And_Mode_Types_Pkg :
      _L5 = _L11;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      _L5 = _L12;
      break;
    case TR_Level_And_Mode_Types_Pkg :
      _L5 = _L13;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      _L5 = _L14;
      break;
    case SF_Level_And_Mode_Types_Pkg :
      _L5 = _L15;
      break;
    case IS_Level_And_Mode_Types_Pkg :
      _L5 = _L16;
      break;
    case NL_Level_And_Mode_Types_Pkg :
      _L5 = _L17;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L5 = _L18;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L5 = _L19;
      break;
    case RV_Level_And_Mode_Types_Pkg :
      _L5 = _L20;
      break;
    case PS_Level_And_Mode_Types_Pkg :
      _L5 = _L21;
      break;
    case NP_Level_And_Mode_Types_Pkg :
      _L5 = _L22;
      break;
    
  }
  _L25 = currentMode;
  /* last_init_ck_currentMode */ if (outC->init) {
    last_currentMode = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    last_currentMode = outC->rem_currentMode;
  }
  _L28 = last_currentMode;
  _L24 = _L25 != _L28;
  _L1.compatibleModeAndLevel = _L2;
  _L1.level = _L3;
  _L1.newLevel = _L29;
  _L1.Mode = _L5;
  _L1.newMode = _L24;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->Compatible_Mode_And_Level,
    &_L1);
  outC->rem_currentMode = currentMode;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_Mode_Level_To_Use_OutputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

