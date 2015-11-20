/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSpeedAndSupervision_InputManagement.h"

/* InputManagement::InputSpeedAndSupervision */
void InputSpeedAndSupervision_InputManagement(
  /* InputManagement::InputSpeedAndSupervision::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* InputManagement::InputSpeedAndSupervision::Data_From_Speed_and_Supervision_To_Mode */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision_To_Mode)
{
  /* InputManagement::InputSpeedAndSupervision::Loc_Estimated_Front_End_Overpass_SR_Distance */
  static kcg_bool Loc_Estimated_Front_End_Overpass_SR_Distance;
  /* InputManagement::InputSpeedAndSupervision::Loc_Estimated_Front_End_Rear_Location_SSP_Or_Gradientl */
  static kcg_bool Loc_Estimated_Front_End_Rear_Location_SSP_Or_Gradientl;
  /* InputManagement::InputSpeedAndSupervision::Loc_Override_Function_Active */
  static kcg_bool Loc_Override_Function_Active;
  /* InputManagement::InputSpeedAndSupervision::Loc_Train_Overpass_EOA_Antenna */
  static kcg_bool Loc_Train_Overpass_EOA_Antenna;
  /* InputManagement::InputSpeedAndSupervision::Loc_Train_Overpass_EOA_Front_End */
  static kcg_bool Loc_Train_Overpass_EOA_Front_End;
  /* InputManagement::InputSpeedAndSupervision::Loc_Train_Speed_Under_Override_Limit */
  static kcg_bool Loc_Train_Speed_Under_Override_Limit;
  /* InputManagement::InputSpeedAndSupervision::_L1 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L1;
  /* InputManagement::InputSpeedAndSupervision::_L14 */
  static kcg_bool _L14;
  /* InputManagement::InputSpeedAndSupervision::_L13 */
  static kcg_bool _L13;
  /* InputManagement::InputSpeedAndSupervision::_L12 */
  static kcg_bool _L12;
  /* InputManagement::InputSpeedAndSupervision::_L11 */
  static kcg_bool _L11;
  /* InputManagement::InputSpeedAndSupervision::_L10 */
  static kcg_bool _L10;
  /* InputManagement::InputSpeedAndSupervision::_L9 */
  static kcg_bool _L9;
  /* InputManagement::InputSpeedAndSupervision::_L15 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L15;
  /* InputManagement::InputSpeedAndSupervision::_L16 */
  static kcg_bool _L16;
  /* InputManagement::InputSpeedAndSupervision::_L17 */
  static kcg_bool _L17;
  /* InputManagement::InputSpeedAndSupervision::_L18 */
  static kcg_bool _L18;
  /* InputManagement::InputSpeedAndSupervision::_L19 */
  static kcg_bool _L19;
  /* InputManagement::InputSpeedAndSupervision::_L20 */
  static kcg_bool _L20;
  /* InputManagement::InputSpeedAndSupervision::_L21 */
  static kcg_bool _L21;
  
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &_L1,
    Data_From_Speed_and_Supervision);
  _L9 = _L1.Train_Speed_Under_Overide_Limit;
  _L10 = _L1.EOA_Front_End;
  _L11 = _L1.EOA_Antenna_Overpass;
  _L12 = _L1.Override_Function_Active;
  _L13 = _L1.Estim_Front_End_Rear_SSP;
  _L14 = _L1.Estim_front_End_overpass_SR_Dist;
  Loc_Estimated_Front_End_Overpass_SR_Distance = _L14;
  Loc_Estimated_Front_End_Rear_Location_SSP_Or_Gradientl = _L13;
  Loc_Override_Function_Active = _L12;
  Loc_Train_Overpass_EOA_Antenna = _L11;
  Loc_Train_Overpass_EOA_Front_End = _L10;
  Loc_Train_Speed_Under_Override_Limit = _L9;
  _L16 = Loc_Estimated_Front_End_Overpass_SR_Distance;
  _L17 = Loc_Estimated_Front_End_Rear_Location_SSP_Or_Gradientl;
  _L18 = Loc_Override_Function_Active;
  _L19 = Loc_Train_Overpass_EOA_Antenna;
  _L20 = Loc_Train_Overpass_EOA_Front_End;
  _L21 = Loc_Train_Speed_Under_Override_Limit;
  _L15.Estim_front_End_overpass_SR_Dist = _L16;
  _L15.Estim_Front_End_Rear_SSP = _L17;
  _L15.Override_Function_Active = _L18;
  _L15.EOA_Antenna_Overpass = _L19;
  _L15.EOA_Front_End = _L20;
  _L15.Train_Speed_Under_Overide_Limit = _L21;
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    Data_From_Speed_and_Supervision_To_Mode,
    &_L15);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputSpeedAndSupervision_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

