/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputLocalisation_Interfaces.h"

/* Interfaces::InputLocalisation */
void InputLocalisation_Interfaces(
  /* Interfaces::InputLocalisation::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Interfaces::InputLocalisation::BG_In_Expected_List_In_SR */kcg_bool *BG_In_Expected_List_In_SR,
  /* Interfaces::InputLocalisation::BG_In_Expected_List_In_SH */kcg_bool *BG_In_Expected_List_In_SH,
  /* Interfaces::InputLocalisation::Linked_BG_Pased_In_Wrong_Direction */kcg_bool *Linked_BG_Pased_In_Wrong_Direction,
  /* Interfaces::InputLocalisation::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Interfaces::InputLocalisation::Train_Speed */Speed_T_Obu_BasicTypes_Pkg *Train_Speed,
  /* Interfaces::InputLocalisation::Train_Standstill */kcg_bool *Train_Standstill)
{
  *Train_Standstill = (*Data_From_Localisation).Train_Standstill;
  *Train_Speed = (*Data_From_Localisation).Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    Train_Position,
    &(*Data_From_Localisation).Train_Position);
  *BG_In_Expected_List_In_SH =
    (*Data_From_Localisation).BG_In_List_Expected_BG_In_SH;
  *Linked_BG_Pased_In_Wrong_Direction =
    (*Data_From_Localisation).PositionErrors.BGpassedInUnexpectedDirection;
  *BG_In_Expected_List_In_SR =
    (*Data_From_Localisation).BG_In_List_Expected_BG_In_SR;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputLocalisation_Interfaces.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

