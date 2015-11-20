/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTrackManagement_Interfaces.h"

/* Interfaces::InputTrackManagement */
void InputTrackManagement_Interfaces(
  /* Interfaces::InputTrackManagement::Data_From_Track */T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track,
  /* Interfaces::InputTrackManagement::MA_SSP_Gradient_Available */kcg_bool *MA_SSP_Gradient_Available,
  /* Interfaces::InputTrackManagement::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Interfaces::InputTrackManagement::Shunting_Granted_By_RBC */kcg_bool *Shunting_Granted_By_RBC,
  /* Interfaces::InputTrackManagement::Trip_Order_Given_By_Balise */kcg_bool *Trip_Order_Given_By_Balise,
  /* Interfaces::InputTrackManagement::List_BG_Related_To_SR_Empty */kcg_bool *List_BG_Related_To_SR_Empty,
  /* Interfaces::InputTrackManagement::Stop_If_In_Shunting */kcg_bool *Stop_If_In_Shunting,
  /* Interfaces::InputTrackManagement::Stop_If_In_SR */kcg_bool *Stop_If_In_SR,
  /* Interfaces::InputTrackManagement::RCB_Ack_And_EB_Revocked */kcg_bool *RCB_Ack_And_EB_Revocked,
  /* Interfaces::InputTrackManagement::RBC_Authorized_SR */kcg_bool *RBC_Authorized_SR,
  /* Interfaces::InputTrackManagement::Reversing_Data */T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* Interfaces::InputTrackManagement::Emergency_Stop_Message_Received */kcg_bool *Emergency_Stop_Message_Received)
{
  *Emergency_Stop_Message_Received =
    (*Data_From_Track).Emergency_Stop_Message_Received;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    Reversing_Data,
    &(*Data_From_Track).Reversing_Data);
  *RBC_Authorized_SR = (*Data_From_Track).RBC_Authorized_SR;
  *RCB_Ack_And_EB_Revocked = (*Data_From_Track).RBC_Ack_TR_EB_Revocked;
  *Stop_If_In_SR = (*Data_From_Track).Stop_If_In_SR;
  *Stop_If_In_Shunting = (*Data_From_Track).Stop_If_In_shunting;
  *List_BG_Related_To_SR_Empty = (*Data_From_Track).List_Bg_Related_To_SR_Empty;
  *Trip_Order_Given_By_Balise = (*Data_From_Track).Trip_Order_Given_By_Balise;
  *Shunting_Granted_By_RBC = (*Data_From_Track).Shunting_granted_By_RBC;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    Mode_Profile_On_Board,
    &(*Data_From_Track).Mode_Profile_On_Board[1]);
  *MA_SSP_Gradient_Available = (*Data_From_Track).MA_SSP_Gradient_Available;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputTrackManagement_Interfaces.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

