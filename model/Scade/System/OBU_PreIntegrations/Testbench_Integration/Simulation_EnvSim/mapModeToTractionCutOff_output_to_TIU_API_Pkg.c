/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapModeToTractionCutOff_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::mapModeToTractionCutOff */
M_traction_cutoff_command_T_TIU_Types_Pkg mapModeToTractionCutOff_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::inModeLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel)
{
  /* output_to_TIU_API_Pkg::mapModeToTractionCutOff::tractionCutOff */
  static M_traction_cutoff_command_T_TIU_Types_Pkg tractionCutOff;
  
  switch ((*inModeLevel).Mode) {
    case M_MODE_Full_Supervision :
      tractionCutOff = release_traction_cutoff_TIU_Types_Pkg;
      break;
    case M_MODE_Limited_Supervision :
      tractionCutOff = release_traction_cutoff_TIU_Types_Pkg;
      break;
    case M_MODE_National_System :
      tractionCutOff = release_traction_cutoff_TIU_Types_Pkg;
      break;
    case M_MODE_On_Sight :
      tractionCutOff = release_traction_cutoff_TIU_Types_Pkg;
      break;
    case M_MODE_Passive_Shunting :
      tractionCutOff = release_traction_cutoff_TIU_Types_Pkg;
      break;
    case M_MODE_Shunting :
      tractionCutOff = release_traction_cutoff_TIU_Types_Pkg;
      break;
    case M_MODE_Staff_Responsible :
      tractionCutOff = release_traction_cutoff_TIU_Types_Pkg;
      break;
    case M_MODE_Unfitted :
      tractionCutOff = release_traction_cutoff_TIU_Types_Pkg;
      break;
    case M_MODE_Stand_By :
      tractionCutOff = apply_traction_cutoff_TIU_Types_Pkg;
      break;
    case M_MODE_No_Power :
      tractionCutOff = apply_traction_cutoff_TIU_Types_Pkg;
      break;
    
    default :
      tractionCutOff = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  }
  return tractionCutOff;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mapModeToTractionCutOff_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

