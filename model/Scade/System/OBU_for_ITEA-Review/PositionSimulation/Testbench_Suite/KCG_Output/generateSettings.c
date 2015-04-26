/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "generateSettings.h"

/* generateSettings */
void generateSettings(
  /* generateSettings::mode */ kcg_int mode,
  /* generateSettings::level */ kcg_int level,
  /* generateSettings::mobileHWStatus */ kcg_int mobileHWStatus,
  /* generateSettings::directionIn */ kcg_int directionIn,
  /* generateSettings::cabStatusIin */ kcg_bool cabStatusIin,
  /* generateSettings::modeOut */ M_MODE *modeOut,
  /* generateSettings::levelOut */ M_LEVEL *levelOut,
  /* generateSettings::mobileHWStatusOut */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatusOut,
  /* generateSettings::directionOut */ M_directioncontroller_signal_status_T_TIU_Types_Pkg *directionOut,
  /* generateSettings::cabStatusOut */ M_cab_signal_status_T_TIU_Types_Pkg *cabStatusOut,
  /* generateSettings::apiConnectionStatus */ connectionStatusRadioUnit_T_API_RadioCommunication_Pkg *apiConnectionStatus)
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
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Connected_MoRC_Pck);
      break;
    case 3 :
      *apiConnectionStatus = conn_no_connection_API_RadioCommunication_Pkg;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        mobileHWStatusOut,
        (mobileHWStatus_Type_MoRC_Pck *)
          &cMobileHWStatus_Disconnected_MoRC_Pck);
      break;
    case 2 :
      *apiConnectionStatus = conn_no_connection_API_RadioCommunication_Pkg;
      kcg_copy_mobileHWStatus_Type_MoRC_Pck(
        mobileHWStatusOut,
        (mobileHWStatus_Type_MoRC_Pck *) &cMobileHWStatus_Registered_MoRC_Pck);
      break;
    case 1 :
      *apiConnectionStatus = conn_no_connection_API_RadioCommunication_Pkg;
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
    case 1 :
      *levelOut = M_LEVEL_Level_0;
      break;
    case 2 :
      *levelOut = M_LEVEL_Level_NTC_specified_by_NID_NTC;
      break;
    case 3 :
      *levelOut = M_LEVEL_Level_1;
      break;
    case 4 :
      *levelOut = M_LEVEL_Level_2;
      break;
    case 5 :
      *levelOut = M_LEVEL_Level_3;
      break;
    
    default :
      *levelOut = M_LEVEL_Level_0;
  }
  switch (mode) {
    case 1 :
      *modeOut = M_MODE_Full_Supervision;
      break;
    case 2 :
      *modeOut = M_MODE_Limited_Supervision;
      break;
    case 3 :
      *modeOut = M_MODE_No_Power;
      break;
    case 4 :
      *modeOut = M_MODE_Stand_By;
      break;
    case 5 :
      *modeOut = M_MODE_Sleeping;
      break;
    case 6 :
      *modeOut = M_MODE_Staff_Responsible;
      break;
    
    default :
      *modeOut = M_MODE_System_Failure;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** generateSettings.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

