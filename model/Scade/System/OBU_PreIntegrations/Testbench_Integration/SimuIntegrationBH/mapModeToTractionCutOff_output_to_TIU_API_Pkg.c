/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapModeToTractionCutOff_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::mapModeToTractionCutOff */
M_traction_cutoff_command_T_TIU_Types_Pkg mapModeToTractionCutOff_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::inModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel)
{
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::_L1 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L1;
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::_L2 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L2;
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::_L4 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L4;
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::_L5 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L5;
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::_L7 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L7;
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::_L8 */
  static M_MODE _L8;
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::tractionCutOff */
  static M_traction_cutoff_command_T_TIU_Types_Pkg tractionCutOff;
  
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L1, inModeLevel);
  _L8 = _L1.Mode;
  _L5 = release_traction_cutoff_TIU_Types_Pkg;
  _L4 = apply_traction_cutoff_TIU_Types_Pkg;
  _L7 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  switch (_L8) {
    case M_MODE_Full_Supervision :
      _L2 = _L5;
      break;
    case M_MODE_Limited_Supervision :
      _L2 = _L5;
      break;
    case M_MODE_National_System :
      _L2 = _L5;
      break;
    case M_MODE_On_Sight :
      _L2 = _L5;
      break;
    case M_MODE_Passive_Shunting :
      _L2 = _L5;
      break;
    case M_MODE_Shunting :
      _L2 = _L5;
      break;
    case M_MODE_Staff_Responsible :
      _L2 = _L5;
      break;
    case M_MODE_Unfitted :
      _L2 = _L5;
      break;
    case M_MODE_Stand_By :
      _L2 = _L4;
      break;
    case M_MODE_No_Power :
      _L2 = _L4;
      break;
    
    default :
      _L2 = _L7;
  }
  tractionCutOff = _L2;
  return tractionCutOff;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapModeToTractionCutOff_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

