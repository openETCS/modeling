/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TIU_Toolbox_TrainModules.h"

void TIU_reset_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC)
{
  outC->init = kcg_true;
}

/* Toolbox::TrainModules::TIU */
void TIU_Toolbox_TrainModules(
  /* Toolbox::TrainModules::TIU::Input_TIU_From_API */TIU_Output_msg_API_TIU_Pkg *Input_TIU_From_API,
  /* Toolbox::TrainModules::TIU::cabStatus */M_cab_signal_status_T_TIU_Types_Pkg cabStatus,
  /* Toolbox::TrainModules::TIU::directionController */M_directioncontroller_signal_status_T_TIU_Types_Pkg directionController,
  /* Toolbox::TrainModules::TIU::tractionSwitchedOn */kcg_bool tractionSwitchedOn,
  /* Toolbox::TrainModules::TIU::brakeAccelerationPercentage */kcg_int brakeAccelerationPercentage,
  outC_TIU_Toolbox_TrainModules *outC)
{
  static M_traction_signal_status_T_TIU_Types_Pkg tmp;
  /* Toolbox::TrainModules::TIU::_L57 */
  static kcg_bool _L57;
  
  outC->output_To_EVC.valid = kcg_true;
  if (outC->init) {
    _L57 = kcg_false;
  }
  else {
    _L57 = outC->powerOn;
  }
  if (!_L57 & !((cabStatus == both_desks_are_closed_TIU_Types_Pkg) |
      (cabStatus == cab_signal_status_not_defined_TIU_Types_Pkg))) {
    outC->powerOn = kcg_true;
  }
  else {
    outC->powerOn = _L57;
  }
  if ((*Input_TIU_From_API).valid &
    (*Input_TIU_From_API).info.type_I_train_commands.valid) {
    outC->cutoffCommand =
      (*Input_TIU_From_API).info.type_I_train_commands.m_traction_cutoff_cm;
  }
  else if (outC->init) {
    outC->cutoffCommand = apply_traction_cutoff_TIU_Types_Pkg;
  }
  outC->tractionCutOff_To_Environment = outC->cutoffCommand ==
    apply_traction_cutoff_TIU_Types_Pkg;
  _L57 = (*Input_TIU_From_API).valid &
    (*Input_TIU_From_API).info.brake_command.valid;
  if (_L57) {
    outC->emergencyBrakeCommandTmp =
      (*Input_TIU_From_API).info.brake_command.m_emergencybrake_cm;
    outC->serviceBrakeCommandTmp =
      (*Input_TIU_From_API).info.brake_command.m_servicebrake_cm;
  }
  else if (outC->init) {
    outC->emergencyBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbox;
    outC->serviceBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbox;
  }
  outC->emergencyBrakeActivated_To_Environment =
    outC->emergencyBrakeCommandTmp == apply_brake_TIU_Types_Pkg;
  outC->init = kcg_false;
  outC->serviceBrakeActivated_To_Environment = outC->serviceBrakeCommandTmp ==
    apply_brake_TIU_Types_Pkg;
  if (tractionSwitchedOn) {
    tmp = traction_on_TIU_Types_Pkg;
  }
  else {
    tmp = traction_off_TIU_Types_Pkg;
  }
  outC->output_To_EVC.info.train_status.valid = outC->powerOn;
  outC->output_To_EVC.info.train_status.m_sleeping_st =
    signal_not_active_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_passiveshunting_st =
    passive_shunting_not_permitted_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_nonleading_st =
    non_leading_not_permitted_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_cab_st = cabStatus;
  outC->output_To_EVC.info.train_status.m_directioncontroller_st =
    directionController;
  outC->output_To_EVC.info.train_status.m_trainintegrity_st =
    train_is_integer_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_traction_st = tmp;
  kcg_copy_Brake_status_T_TIU_Types_Pkg(
    &outC->output_To_EVC.info.brake_status,
    (Brake_status_T_TIU_Types_Pkg *) &cEmptyBrakeStatus_Toolbox);
  outC->output_To_EVC.info.brake_pressure.valid = kcg_true;
  outC->output_To_EVC.info.brake_pressure.pressure =
    brakeAccelerationPercentage * 6000;
  outC->output_To_EVC.info.train_data_entry_type = cEmtpyDataEntryType_Toolbox;
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->output_To_EVC.info.train_data_info,
    (trainData_T_TIU_Types_Pkg *) &cICE3TrainData_Toolbox);
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &outC->output_To_EVC.info.type_I_train_and_brake_inhibition,
    (Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *)
      &cEmptyType_I_train_and_brake_inhibition_with_distance_T_Toolbox);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TIU_Toolbox_TrainModules.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

