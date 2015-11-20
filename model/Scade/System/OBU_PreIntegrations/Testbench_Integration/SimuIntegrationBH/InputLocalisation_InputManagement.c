/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputLocalisation_InputManagement.h"

/* InputManagement::InputLocalisation */
void InputLocalisation_InputManagement(
  /* InputManagement::InputLocalisation::Data_From_Localisation */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* InputManagement::InputLocalisation::train_standstill */ kcg_bool *train_standstill,
  /* InputManagement::InputLocalisation::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* InputManagement::InputLocalisation::Data_From_Localisation_To_Mode */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation_To_Mode)
{
  /* InputManagement::InputLocalisation::Loc_BG_In_Expected_List_In_SR */
  static kcg_bool Loc_BG_In_Expected_List_In_SR;
  /* InputManagement::InputLocalisation::Loc_BG_In_Expected_List_In_SH */
  static kcg_bool Loc_BG_In_Expected_List_In_SH;
  /* InputManagement::InputLocalisation::Loc_PositionErrors */
  static positionErrors_T_TrainPosition_Types_Pck Loc_PositionErrors;
  /* InputManagement::InputLocalisation::Loc_Train_Position */
  static trainPosition_T_TrainPosition_Types_Pck Loc_Train_Position;
  /* InputManagement::InputLocalisation::Loc_Train_Speed */
  static Speed_T_Obu_BasicTypes_Pkg Loc_Train_Speed;
  /* InputManagement::InputLocalisation::Loc_Train_Standstill */
  static kcg_bool Loc_Train_Standstill;
  /* InputManagement::InputLocalisation::_L1 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L1;
  /* InputManagement::InputLocalisation::_L14 */
  static kcg_bool _L14;
  /* InputManagement::InputLocalisation::_L13 */
  static kcg_bool _L13;
  /* InputManagement::InputLocalisation::_L12 */
  static positionErrors_T_TrainPosition_Types_Pck _L12;
  /* InputManagement::InputLocalisation::_L11 */
  static trainPosition_T_TrainPosition_Types_Pck _L11;
  /* InputManagement::InputLocalisation::_L10 */
  static Speed_T_Obu_BasicTypes_Pkg _L10;
  /* InputManagement::InputLocalisation::_L9 */
  static kcg_bool _L9;
  /* InputManagement::InputLocalisation::_L15 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L15;
  /* InputManagement::InputLocalisation::_L16 */
  static kcg_bool _L16;
  /* InputManagement::InputLocalisation::_L17 */
  static kcg_bool _L17;
  /* InputManagement::InputLocalisation::_L18 */
  static positionErrors_T_TrainPosition_Types_Pck _L18;
  /* InputManagement::InputLocalisation::_L19 */
  static trainPosition_T_TrainPosition_Types_Pck _L19;
  /* InputManagement::InputLocalisation::_L20 */
  static Speed_T_Obu_BasicTypes_Pkg _L20;
  /* InputManagement::InputLocalisation::_L21 */
  static kcg_bool _L21;
  /* InputManagement::InputLocalisation::_L22 */
  static kcg_bool _L22;
  /* InputManagement::InputLocalisation::_L23 */
  static trainPosition_T_TrainPosition_Types_Pck _L23;
  
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &_L1,
    Data_From_Localisation);
  _L9 = _L1.Train_Standstill;
  _L10 = _L1.Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L11, &_L1.Train_Position);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&_L12, &_L1.PositionErrors);
  _L13 = _L1.BG_In_List_Expected_BG_In_SH;
  _L14 = _L1.BG_In_List_Expected_BG_In_SR;
  Loc_BG_In_Expected_List_In_SR = _L14;
  Loc_BG_In_Expected_List_In_SH = _L13;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&Loc_PositionErrors, &_L12);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&Loc_Train_Position, &_L11);
  Loc_Train_Speed = _L10;
  Loc_Train_Standstill = _L9;
  _L22 = Loc_Train_Standstill;
  *train_standstill = _L22;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L23, &Loc_Train_Position);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(trainPosition, &_L23);
  _L16 = Loc_BG_In_Expected_List_In_SH;
  _L17 = Loc_BG_In_Expected_List_In_SR;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&_L18, &Loc_PositionErrors);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L19, &Loc_Train_Position);
  _L20 = Loc_Train_Speed;
  _L21 = Loc_Train_Standstill;
  _L15.BG_In_List_Expected_BG_In_SR = _L16;
  _L15.BG_In_List_Expected_BG_In_SH = _L17;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &_L15.PositionErrors,
    &_L18);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L15.Train_Position, &_L19);
  _L15.Train_Speed = _L20;
  _L15.Train_Standstill = _L21;
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    Data_From_Localisation_To_Mode,
    &_L15);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputLocalisation_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

