/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GUI_Settings_Toolbox_Functions.h"

/* Toolbox::Functions::GUI_Settings */
void GUI_Settings_Toolbox_Functions(
  /* Toolbox::Functions::GUI_Settings::mode */kcg_int mode,
  /* Toolbox::Functions::GUI_Settings::level */kcg_int level,
  /* Toolbox::Functions::GUI_Settings::mobileHWStatus */kcg_int mobileHWStatus,
  /* Toolbox::Functions::GUI_Settings::directionIn */kcg_int directionIn,
  /* Toolbox::Functions::GUI_Settings::cabStatusIin */kcg_bool cabStatusIin,
  /* Toolbox::Functions::GUI_Settings::modeOut */M_MODE *modeOut,
  /* Toolbox::Functions::GUI_Settings::levelOut */M_LEVEL *levelOut,
  /* Toolbox::Functions::GUI_Settings::mobileHWStatusOut */mobileHWStatus_Type_MoRC_Pck *mobileHWStatusOut,
  /* Toolbox::Functions::GUI_Settings::directionOut */M_directioncontroller_signal_status_T_TIU_Types_Pkg *directionOut,
  /* Toolbox::Functions::GUI_Settings::cabStatusOut */M_cab_signal_status_T_TIU_Types_Pkg *cabStatusOut,
  /* Toolbox::Functions::GUI_Settings::apiConnectionStatus */connectionStatusRadioUnit_T_API_RadioCommunication_Pkg *apiConnectionStatus)
{
  if (cabStatusIin) {
    *cabStatusOut = desk_A_is_open_TIU_Types_Pkg;
  }
  else {
    *cabStatusOut = both_desks_are_closed_TIU_Types_Pkg;
  }
  switch (directionIn) {
    case 1 :
      *directionOut = direction_controller_in_neutral_TIU_Types_Pkg;
      break;
    case 2 :
      *directionOut = direction_controller_in_forward_TIU_Types_Pkg;
      break;
    case 3 :
      *directionOut = direction_controller_in_backward_TIU_Types_Pkg;
      break;
    
    default :
      *directionOut = direction_controller_in_neutral_TIU_Types_Pkg;
  }
  switch (mobileHWStatus) {
    case 4 :
      *apiConnectionStatus = conn_ConnectionUp_API_RadioCommunication_Pkg;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        mobileHWStatusOut,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      break;
    case 3 :
      *apiConnectionStatus = conn_no_connection_API_RadioCommunication_Pkg;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        mobileHWStatusOut,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_Pck);
      break;
    case 2 :
      *apiConnectionStatus = conn_no_connection_API_RadioCommunication_Pkg;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        mobileHWStatusOut,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_Disconnected_MoRC_Pck);
      break;
    case 1 :
      *apiConnectionStatus = conn_no_connection_API_RadioCommunication_Pkg;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        mobileHWStatusOut,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      break;
    case 0 :
      *apiConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        mobileHWStatusOut,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
      break;
    
    default :
      *apiConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        mobileHWStatusOut,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_notRegistered_MoRC_Pck);
  }
  switch (level) {
    case 0 :
      *levelOut = M_LEVEL_Level_0;
      break;
    case 1 :
      *levelOut = M_LEVEL_Level_NTC_specified_by_NID_NTC;
      break;
    case 2 :
      *levelOut = M_LEVEL_Level_1;
      break;
    case 3 :
      *levelOut = M_LEVEL_Level_2;
      break;
    case 4 :
      *levelOut = M_LEVEL_Level_3;
      break;
    
    default :
      *levelOut = M_LEVEL_Level_0;
  }
  switch (mode) {
    case 0 :
      *modeOut = M_MODE_Full_Supervision;
      break;
    case 1 :
      *modeOut = M_MODE_Limited_Supervision;
      break;
    case 2 :
      *modeOut = M_MODE_No_Power;
      break;
    case 3 :
      *modeOut = M_MODE_Stand_By;
      break;
    case 4 :
      *modeOut = M_MODE_Sleeping;
      break;
    case 5 :
      *modeOut = M_MODE_Staff_Responsible;
      break;
    
    default :
      *modeOut = M_MODE_System_Failure;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GUI_Settings_Toolbox_Functions.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

