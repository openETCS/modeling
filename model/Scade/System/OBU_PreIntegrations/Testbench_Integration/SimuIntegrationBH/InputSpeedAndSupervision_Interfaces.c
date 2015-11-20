/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSpeedAndSupervision_Interfaces.h"

/* Interfaces::InputSpeedAndSupervision */
void InputSpeedAndSupervision_Interfaces(
  /* Interfaces::InputSpeedAndSupervision::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Overpass_SR_Distance */ kcg_bool *Estimated_Front_End_Overpass_SR_Distance,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */ kcg_bool *Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
  /* Interfaces::InputSpeedAndSupervision::Override_Function_Active */ kcg_bool *Override_Function_Active,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Antenna */ kcg_bool *Train_Overpass_EOA_Antenna,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Front_End */ kcg_bool *Train_Overpass_EOA_Front_End,
  /* Interfaces::InputSpeedAndSupervision::Train_Speed_Under_Override_Limit */ kcg_bool *Train_Speed_Under_Override_Limit)
{
  /* Interfaces::InputSpeedAndSupervision::_L1 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L1;
  /* Interfaces::InputSpeedAndSupervision::_L14 */
  static kcg_bool _L14;
  /* Interfaces::InputSpeedAndSupervision::_L13 */
  static kcg_bool _L13;
  /* Interfaces::InputSpeedAndSupervision::_L12 */
  static kcg_bool _L12;
  /* Interfaces::InputSpeedAndSupervision::_L11 */
  static kcg_bool _L11;
  /* Interfaces::InputSpeedAndSupervision::_L10 */
  static kcg_bool _L10;
  /* Interfaces::InputSpeedAndSupervision::_L9 */
  static kcg_bool _L9;
  
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &_L1,
    Data_From_Speed_and_Supervision);
  _L14 = _L1.Estim_front_End_overpass_SR_Dist;
  *Estimated_Front_End_Overpass_SR_Distance = _L14;
  _L13 = _L1.Estim_Front_End_Rear_SSP;
  *Estimated_Front_End_Rear_Location_SSP_Or_Gradient = _L13;
  _L12 = _L1.Override_Function_Active;
  *Override_Function_Active = _L12;
  _L11 = _L1.EOA_Antenna_Overpass;
  *Train_Overpass_EOA_Antenna = _L11;
  _L9 = _L1.Train_Speed_Under_Overide_Limit;
  *Train_Speed_Under_Override_Limit = _L9;
  _L10 = _L1.EOA_Front_End;
  *Train_Overpass_EOA_Front_End = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputSpeedAndSupervision_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

