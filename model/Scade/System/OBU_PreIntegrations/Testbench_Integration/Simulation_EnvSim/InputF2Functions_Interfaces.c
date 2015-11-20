/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputF2Functions_Interfaces.h"

/* Interfaces::InputF2Functions */
void InputF2Functions_Interfaces(
  /* Interfaces::InputF2Functions::Data_From_F2_Functions */T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Interfaces::InputF2Functions::T_NVCONTACT_Overpass */kcg_bool *T_NVCONTACT_Overpass,
  /* Interfaces::InputF2Functions::Error_BG_System_Version */kcg_bool *Error_BG_System_Version,
  /* Interfaces::InputF2Functions::Failure_Occured */kcg_bool *Failure_Occured,
  /* Interfaces::InputF2Functions::Continue_Shunting_Function_Active */kcg_bool *Continue_Shunting_Function_Active,
  /* Interfaces::InputF2Functions::Stop_Shunting_Stored */kcg_bool *Stop_Shunting_Stored,
  /* Interfaces::InputF2Functions::Linking_Reaction_To_Trip */kcg_bool *Linking_Reaction_To_Trip)
{
  *T_NVCONTACT_Overpass =
    (*Data_From_F2_Functions).Common_Errors.tNvContactError;
  *Error_BG_System_Version =
    (*Data_From_F2_Functions).Common_Errors.BG_versionIncompatible;
  *Stop_Shunting_Stored = (*Data_From_F2_Functions).Stop_Shunting_Stored;
  *Continue_Shunting_Function_Active =
    (*Data_From_F2_Functions).Continue_Shunting_Active;
  *Failure_Occured = (*Data_From_F2_Functions).Failure_Occured;
  *Linking_Reaction_To_Trip =
    (*Data_From_F2_Functions).Common_Errors.linkedBGError;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputF2Functions_Interfaces.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

