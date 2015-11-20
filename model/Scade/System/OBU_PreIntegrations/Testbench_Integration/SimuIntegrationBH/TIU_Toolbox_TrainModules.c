/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TIU_Toolbox_TrainModules.h"

#ifndef KCG_USER_DEFINED_INIT
void TIU_init_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->powerOn = kcg_true;
  outC->cutoffCommand = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->emergencyBrakeCommandTmp =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->serviceBrakeCommandTmp = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->tractionCutOff_To_Environment = kcg_true;
  outC->emergencyBrakeActivated_To_Environment = kcg_true;
  outC->serviceBrakeActivated_To_Environment = kcg_true;
  outC->output_To_EVC.valid = kcg_true;
  outC->output_To_EVC.info.train_status.valid = kcg_true;
  outC->output_To_EVC.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.valid = kcg_true;
  outC->output_To_EVC.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_pressure.valid = kcg_true;
  outC->output_To_EVC.info.brake_pressure.pressure = 0;
  outC->output_To_EVC.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_data_info.valid = kcg_true;
  outC->output_To_EVC.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->output_To_EVC.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->output_To_EVC.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->output_To_EVC.info.train_data_info.trainLength = 0;
  outC->output_To_EVC.info.train_data_info.brakePerctage = 0;
  outC->output_To_EVC.info.train_data_info.maxTrainSpeed = 0;
  outC->output_To_EVC.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->output_To_EVC.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->output_To_EVC.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  outC->output_To_EVC.info.train_data_info.axleNumber = 0;
  outC->output_To_EVC.info.train_data_info.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    outC->output_To_EVC.info.train_data_info.nationSystems[i] = 0;
  }
  outC->output_To_EVC.info.train_data_info.numberTractionSystems = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->output_To_EVC.info.train_data_info.tractionSystem[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->output_To_EVC.info.train_data_info.tractionSystem[i1].nid_ctraction =
      0;
  }
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TIU_reset_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::TrainModules::TIU */
void TIU_Toolbox_TrainModules(
  /* Toolbox::TrainModules::TIU::Input_TIU_From_API */ TIU_Output_msg_API_TIU_Pkg *Input_TIU_From_API,
  /* Toolbox::TrainModules::TIU::cabStatus */ M_cab_signal_status_T_TIU_Types_Pkg cabStatus,
  /* Toolbox::TrainModules::TIU::directionController */ M_directioncontroller_signal_status_T_TIU_Types_Pkg directionController,
  /* Toolbox::TrainModules::TIU::tractionSwitchedOn */ kcg_bool tractionSwitchedOn,
  /* Toolbox::TrainModules::TIU::brakeAccelerationPercentage */ kcg_int brakeAccelerationPercentage,
  outC_TIU_Toolbox_TrainModules *outC)
{
  /* Toolbox::TrainModules::TIU::powerOn */
  static kcg_bool last_powerOn;
  /* Toolbox::TrainModules::TIU::cutoffCommand */
  static M_traction_cutoff_command_T_TIU_Types_Pkg last_cutoffCommand;
  /* Toolbox::TrainModules::TIU::emergencyBrakeCommandTmp */
  static M_brake_signal_command_T_TIU_Types_Pkg last_emergencyBrakeCommandTmp;
  /* Toolbox::TrainModules::TIU::serviceBrakeCommandTmp */
  static M_brake_signal_command_T_TIU_Types_Pkg last_serviceBrakeCommandTmp;
  /* Toolbox::TrainModules::TIU::_L14 */
  static kcg_bool _L14;
  /* Toolbox::TrainModules::TIU::_L15 */
  static Message_EVC_to_Train_Interface_T_TIU_Types_Pkg _L15;
  /* Toolbox::TrainModules::TIU::_L28 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L28;
  /* Toolbox::TrainModules::TIU::_L27 */
  static TIU_Input_msg_API_TIU_Pkg _L27;
  /* Toolbox::TrainModules::TIU::_L33 */
  static kcg_bool _L33;
  /* Toolbox::TrainModules::TIU::_L32 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L32;
  /* Toolbox::TrainModules::TIU::_L31 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L31;
  /* Toolbox::TrainModules::TIU::_L51 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L51;
  /* Toolbox::TrainModules::TIU::_L52 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L52;
  /* Toolbox::TrainModules::TIU::_L54 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L54;
  /* Toolbox::TrainModules::TIU::_L55 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L55;
  /* Toolbox::TrainModules::TIU::_L56 */
  static Brake_command_T_TIU_Types_Pkg _L56;
  /* Toolbox::TrainModules::TIU::_L57 */
  static kcg_bool _L57;
  /* Toolbox::TrainModules::TIU::_L58 */
  static TIU_Output_msg_API_TIU_Pkg _L58;
  /* Toolbox::TrainModules::TIU::_L59 */
  static M_train_data_entry_type_T_TIU_Types_Pkg _L59;
  /* Toolbox::TrainModules::TIU::_L61 */
  static Mode_control_and_train_status_T_TIU_Types_Pkg _L61;
  /* Toolbox::TrainModules::TIU::_L62 */
  static kcg_bool _L62;
  /* Toolbox::TrainModules::TIU::_L64 */
  static M_sleeping_signal_status_T_TIU_Types_Pkg _L64;
  /* Toolbox::TrainModules::TIU::_L65 */
  static M_passiveshunting_signal_status_T_TIU_Types_Pkg _L65;
  /* Toolbox::TrainModules::TIU::_L66 */
  static M_nonleading_signal_status_T_TIU_Types_Pkg _L66;
  /* Toolbox::TrainModules::TIU::_L67 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L67;
  /* Toolbox::TrainModules::TIU::_L68 */
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _L68;
  /* Toolbox::TrainModules::TIU::_L69 */
  static M_trainintegrity_signal_status_T_TIU_Types_Pkg _L69;
  /* Toolbox::TrainModules::TIU::_L70 */
  static M_traction_signal_status_T_TIU_Types_Pkg _L70;
  /* Toolbox::TrainModules::TIU::_L71 */
  static kcg_bool _L71;
  /* Toolbox::TrainModules::TIU::_L72 */
  static M_traction_signal_status_T_TIU_Types_Pkg _L72;
  /* Toolbox::TrainModules::TIU::_L73 */
  static M_traction_signal_status_T_TIU_Types_Pkg _L73;
  /* Toolbox::TrainModules::TIU::_L74 */
  static Brake_status_T_TIU_Types_Pkg _L74;
  /* Toolbox::TrainModules::TIU::_L75 */
  static Brake_pressure_value_T_TIU_Types_Pkg _L75;
  /* Toolbox::TrainModules::TIU::_L76 */
  static kcg_bool _L76;
  /* Toolbox::TrainModules::TIU::_L77 */
  static kcg_int _L77;
  /* Toolbox::TrainModules::TIU::_L78 */
  static kcg_int _L78;
  /* Toolbox::TrainModules::TIU::_L79 */
  static kcg_int _L79;
  /* Toolbox::TrainModules::TIU::_L80 */
  static Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg _L80;
  /* Toolbox::TrainModules::TIU::_L81 */
  static kcg_bool _L81;
  /* Toolbox::TrainModules::TIU::_L82 */
  static kcg_bool _L82;
  /* Toolbox::TrainModules::TIU::_L83 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L83;
  /* Toolbox::TrainModules::TIU::_L84 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L84;
  /* Toolbox::TrainModules::TIU::_L87 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L87;
  /* Toolbox::TrainModules::TIU::_L89 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L89;
  /* Toolbox::TrainModules::TIU::_L90 */
  static kcg_bool _L90;
  /* Toolbox::TrainModules::TIU::_L92 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L92;
  /* Toolbox::TrainModules::TIU::_L93 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L93;
  /* Toolbox::TrainModules::TIU::_L94 */
  static kcg_bool _L94;
  /* Toolbox::TrainModules::TIU::_L95 */
  static kcg_bool _L95;
  /* Toolbox::TrainModules::TIU::_L96 */
  static trainData_T_TIU_Types_Pkg _L96;
  /* Toolbox::TrainModules::TIU::_L97 */
  static kcg_bool _L97;
  /* Toolbox::TrainModules::TIU::_L98 */
  static kcg_bool _L98;
  /* Toolbox::TrainModules::TIU::_L99 */
  static kcg_bool _L99;
  /* Toolbox::TrainModules::TIU::_L100 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L100;
  /* Toolbox::TrainModules::TIU::_L101 */
  static kcg_bool _L101;
  /* Toolbox::TrainModules::TIU::_L102 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L102;
  /* Toolbox::TrainModules::TIU::_L103 */
  static kcg_bool _L103;
  /* Toolbox::TrainModules::TIU::_L104 */
  static kcg_bool _L104;
  /* Toolbox::TrainModules::TIU::_L105 */
  static kcg_bool _L105;
  /* Toolbox::TrainModules::TIU::_L106 */
  static kcg_bool _L106;
  /* Toolbox::TrainModules::TIU::_L109 */
  static kcg_bool _L109;
  /* Toolbox::TrainModules::TIU::_L108 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L108;
  /* Toolbox::TrainModules::TIU::_L107 */
  static M_cab_signal_status_T_TIU_Types_Pkg _L107;
  /* Toolbox::TrainModules::TIU::_L110 */
  static kcg_bool _L110;
  /* Toolbox::TrainModules::TIU::_L112 */
  static kcg_bool _L112;
  
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&_L58, Input_TIU_From_API);
  kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(&_L15, &_L58.info);
  _L14 = _L58.valid;
  _L62 = kcg_true;
  /* last_init_ck_powerOn */ if (outC->init) {
    last_powerOn = kcg_false;
  }
  else {
    last_powerOn = outC->powerOn;
  }
  _L99 = last_powerOn;
  _L105 = !_L99;
  _L100 = cabStatus;
  _L102 = both_desks_are_closed_TIU_Types_Pkg;
  _L101 = _L100 == _L102;
  _L108 = cabStatus;
  _L107 = cab_signal_status_not_defined_TIU_Types_Pkg;
  _L109 = _L108 == _L107;
  _L110 = _L101 | _L109;
  _L112 = !_L110;
  _L104 = _L105 & _L112;
  _L106 = kcg_true;
  _L98 = last_powerOn;
  /* 5 */ if (_L104) {
    _L103 = _L106;
  }
  else {
    _L103 = _L98;
  }
  outC->powerOn = _L103;
  _L97 = outC->powerOn;
  _L64 = signal_not_active_TIU_Types_Pkg;
  _L65 = passive_shunting_not_permitted_TIU_Types_Pkg;
  _L66 = non_leading_not_permitted_TIU_Types_Pkg;
  _L67 = cabStatus;
  _L68 = directionController;
  _L69 = train_is_integer_TIU_Types_Pkg;
  _L71 = tractionSwitchedOn;
  _L72 = traction_on_TIU_Types_Pkg;
  _L73 = traction_off_TIU_Types_Pkg;
  /* 3 */ if (_L71) {
    _L70 = _L72;
  }
  else {
    _L70 = _L73;
  }
  _L61.valid = _L97;
  _L61.m_sleeping_st = _L64;
  _L61.m_passiveshunting_st = _L65;
  _L61.m_nonleading_st = _L66;
  _L61.m_cab_st = _L67;
  _L61.m_directioncontroller_st = _L68;
  _L61.m_trainintegrity_st = _L69;
  _L61.m_traction_st = _L70;
  kcg_copy_Brake_status_T_TIU_Types_Pkg(
    &_L74,
    (Brake_status_T_TIU_Types_Pkg *) &cEmptyBrakeStatus_Toolbox);
  _L76 = kcg_true;
  _L79 = brakeAccelerationPercentage;
  _L78 = 6000;
  _L77 = _L79 * _L78;
  _L75.valid = _L76;
  _L75.pressure = _L77;
  _L59 = cEmtpyDataEntryType_Toolbox;
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &_L96,
    (trainData_T_TIU_Types_Pkg *) &cICE3TrainData_Toolbox);
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &_L80,
    (Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *)
      &cEmptyType_I_train_and_brake_inhibition_with_distance_T_Toolbox);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &_L28.train_status,
    &_L61);
  kcg_copy_Brake_status_T_TIU_Types_Pkg(&_L28.brake_status, &_L74);
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(&_L28.brake_pressure, &_L75);
  _L28.train_data_entry_type = _L59;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L28.train_data_info, &_L96);
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &_L28.type_I_train_and_brake_inhibition,
    &_L80);
  _L27.valid = _L62;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L27.info, &_L28);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L56, &_L15.brake_command);
  _L31 = _L56.m_emergencybrake_cm;
  _L32 = _L56.m_servicebrake_cm;
  _L33 = _L56.valid;
  /* last_init_ck_serviceBrakeCommandTmp */ if (outC->init) {
    last_serviceBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbox;
  }
  else {
    last_serviceBrakeCommandTmp = outC->serviceBrakeCommandTmp;
  }
  _L51 = last_serviceBrakeCommandTmp;
  _L57 = _L14 & _L33;
  /* 1 */ if (_L57) {
    _L52 = _L32;
  }
  else {
    _L52 = _L51;
  }
  outC->serviceBrakeCommandTmp = _L52;
  /* last_init_ck_emergencyBrakeCommandTmp */ if (outC->init) {
    last_emergencyBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbox;
  }
  else {
    last_emergencyBrakeCommandTmp = outC->emergencyBrakeCommandTmp;
  }
  _L54 = last_emergencyBrakeCommandTmp;
  /* 2 */ if (_L57) {
    _L55 = _L31;
  }
  else {
    _L55 = _L54;
  }
  outC->emergencyBrakeCommandTmp = _L55;
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->output_To_EVC, &_L27);
  _L83 = apply_brake_TIU_Types_Pkg;
  _L81 = _L52 == _L83;
  _L84 = apply_brake_TIU_Types_Pkg;
  _L82 = _L55 == _L84;
  outC->serviceBrakeActivated_To_Environment = _L81;
  outC->emergencyBrakeActivated_To_Environment = _L82;
  _L87 = _L15.type_I_train_commands.m_traction_cutoff_cm;
  _L95 = _L15.type_I_train_commands.valid;
  _L94 = _L14 & _L95;
  /* last_init_ck_cutoffCommand */ if (outC->init) {
    last_cutoffCommand = apply_traction_cutoff_TIU_Types_Pkg;
  }
  else {
    last_cutoffCommand = outC->cutoffCommand;
  }
  _L92 = last_cutoffCommand;
  /* 4 */ if (_L94) {
    _L89 = _L87;
  }
  else {
    _L89 = _L92;
  }
  _L93 = apply_traction_cutoff_TIU_Types_Pkg;
  _L90 = _L89 == _L93;
  outC->cutoffCommand = _L89;
  outC->tractionCutOff_To_Environment = _L90;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TIU_Toolbox_TrainModules.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

