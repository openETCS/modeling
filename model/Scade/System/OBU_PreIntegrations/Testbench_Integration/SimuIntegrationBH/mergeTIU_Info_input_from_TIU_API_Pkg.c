/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeTIU_Info_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::mergeTIU_Info */
void mergeTIU_Info_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::mergeTIU_Info::newInfo */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *newInfo,
  /* input_from_TIU_API_Pkg::mergeTIU_Info::storedInfo */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *storedInfo,
  /* input_from_TIU_API_Pkg::mergeTIU_Info::EVC_trainData */ trainData_T_TIU_Types_Pkg *EVC_trainData,
  /* input_from_TIU_API_Pkg::mergeTIU_Info::updatedInfo */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *updatedInfo)
{
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L5 */
  static Mode_control_and_train_status_T_TIU_Types_Pkg _L5;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L6 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L6;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L31 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L31;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L50 */
  static kcg_bool _L50;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L52 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L52;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L53 */
  static Mode_control_and_train_status_T_TIU_Types_Pkg _L53;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L57 */
  static Brake_status_T_TIU_Types_Pkg _L57;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L56 */
  static kcg_bool _L56;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L55 */
  static Brake_status_T_TIU_Types_Pkg _L55;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L54 */
  static Brake_status_T_TIU_Types_Pkg _L54;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L61 */
  static Brake_pressure_value_T_TIU_Types_Pkg _L61;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L60 */
  static Brake_pressure_value_T_TIU_Types_Pkg _L60;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L59 */
  static kcg_bool _L59;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L58 */
  static Brake_pressure_value_T_TIU_Types_Pkg _L58;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L65 */
  static trainData_T_TIU_Types_Pkg _L65;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L69 */
  static Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg _L69;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L68 */
  static Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg _L68;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L67 */
  static kcg_bool _L67;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L66 */
  static Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg _L66;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L71 */
  static M_train_data_entry_type_T_TIU_Types_Pkg _L71;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L72 */
  static M_train_data_entry_type_T_TIU_Types_Pkg _L72;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L73 */
  static M_train_data_entry_type_T_TIU_Types_Pkg _L73;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L74 */
  static kcg_bool _L74;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L75 */
  static M_train_data_entry_type_T_TIU_Types_Pkg _L75;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L76 */
  static M_train_data_entry_type_T_TIU_Types_Pkg _L76;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L77 */
  static Mode_control_and_train_status_T_TIU_Types_Pkg _L77;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L78 */
  static trainData_T_TIU_Types_Pkg _L78;
  /* input_from_TIU_API_Pkg::mergeTIU_Info::_L79 */
  static trainData_T_TIU_Types_Pkg _L79;
  
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L6, newInfo);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &_L5,
    &_L6.train_status);
  _L50 = _L5.valid;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L52, storedInfo);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &_L53,
    &_L52.train_status);
  /* 6 */ if (_L50) {
    kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(&_L77, &_L5);
  }
  else {
    kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(&_L77, &_L53);
  }
  kcg_copy_Brake_status_T_TIU_Types_Pkg(&_L54, &_L6.brake_status);
  _L56 = _L54.valid;
  kcg_copy_Brake_status_T_TIU_Types_Pkg(&_L55, &_L52.brake_status);
  /* 1 */ if (_L56) {
    kcg_copy_Brake_status_T_TIU_Types_Pkg(&_L57, &_L54);
  }
  else {
    kcg_copy_Brake_status_T_TIU_Types_Pkg(&_L57, &_L55);
  }
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(&_L61, &_L6.brake_pressure);
  _L59 = _L61.valid;
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(&_L58, &_L52.brake_pressure);
  /* 2 */ if (_L59) {
    kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(&_L60, &_L61);
  }
  else {
    kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(&_L60, &_L58);
  }
  _L71 = _L6.train_data_entry_type;
  _L72 = no_entry_type_TIU_Types_Pkg;
  _L74 = _L71 != _L72;
  _L75 = _L6.train_data_entry_type;
  _L76 = _L52.train_data_entry_type;
  /* 5 */ if (_L74) {
    _L73 = _L75;
  }
  else {
    _L73 = _L76;
  }
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L65, &_L6.train_data_info);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L79, EVC_trainData);
  /* 1 */ selectTrainData_input_from_TIU_API_Pkg(&_L65, &_L79, &_L78);
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &_L66,
    &_L6.type_I_train_and_brake_inhibition);
  _L67 = _L66.valid;
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &_L69,
    &_L52.type_I_train_and_brake_inhibition);
  /* 4 */ if (_L67) {
    kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
      &_L68,
      &_L66);
  }
  else {
    kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
      &_L68,
      &_L69);
  }
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &_L31.train_status,
    &_L77);
  kcg_copy_Brake_status_T_TIU_Types_Pkg(&_L31.brake_status, &_L57);
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(&_L31.brake_pressure, &_L60);
  _L31.train_data_entry_type = _L73;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L31.train_data_info, &_L78);
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &_L31.type_I_train_and_brake_inhibition,
    &_L68);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(updatedInfo, &_L31);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mergeTIU_Info_input_from_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

