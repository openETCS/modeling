/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputLocalisation_Interfaces.h"

/* Interfaces::InputLocalisation */
void InputLocalisation_Interfaces(
  /* Interfaces::InputLocalisation::Data_From_Localisation */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Interfaces::InputLocalisation::BG_In_Expected_List_In_SR */ kcg_bool *BG_In_Expected_List_In_SR,
  /* Interfaces::InputLocalisation::BG_In_Expected_List_In_SH */ kcg_bool *BG_In_Expected_List_In_SH,
  /* Interfaces::InputLocalisation::Linked_BG_Pased_In_Wrong_Direction */ kcg_bool *Linked_BG_Pased_In_Wrong_Direction,
  /* Interfaces::InputLocalisation::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Interfaces::InputLocalisation::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg *Train_Speed,
  /* Interfaces::InputLocalisation::Train_Standstill */ kcg_bool *Train_Standstill)
{
  /* Interfaces::InputLocalisation::_L1 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L1;
  /* Interfaces::InputLocalisation::_L14 */
  static kcg_bool _L14;
  /* Interfaces::InputLocalisation::_L13 */
  static kcg_bool _L13;
  /* Interfaces::InputLocalisation::_L12 */
  static positionErrors_T_TrainPosition_Types_Pck _L12;
  /* Interfaces::InputLocalisation::_L11 */
  static trainPosition_T_TrainPosition_Types_Pck _L11;
  /* Interfaces::InputLocalisation::_L10 */
  static Speed_T_Obu_BasicTypes_Pkg _L10;
  /* Interfaces::InputLocalisation::_L9 */
  static kcg_bool _L9;
  /* Interfaces::InputLocalisation::_L15 */
  static kcg_bool _L15;
  
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &_L1,
    Data_From_Localisation);
  _L14 = _L1.BG_In_List_Expected_BG_In_SR;
  *BG_In_Expected_List_In_SR = _L14;
  _L13 = _L1.BG_In_List_Expected_BG_In_SH;
  *BG_In_Expected_List_In_SH = _L13;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&_L12, &_L1.PositionErrors);
  _L15 = _L12.BGpassedInUnexpectedDirection;
  *Linked_BG_Pased_In_Wrong_Direction = _L15;
  _L10 = _L1.Train_Speed;
  *Train_Speed = _L10;
  _L9 = _L1.Train_Standstill;
  *Train_Standstill = _L9;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L11, &_L1.Train_Position);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(Train_Position, &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputLocalisation_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

