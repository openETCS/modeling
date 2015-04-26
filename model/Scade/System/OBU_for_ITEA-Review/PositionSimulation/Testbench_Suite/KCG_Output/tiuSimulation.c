/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "tiuSimulation.h"

void tiuSimulation_init(outC_tiuSimulation *outC)
{
  outC->init = kcg_true;
  outC->cutoffCommand = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->emergencyBrakeCommandTmp =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->serviceBrakeCommandTmp = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->tractionCutOff_To_Environment = kcg_true;
  outC->emergencyBrakeActivated_To_Environment = kcg_true;
  outC->serviceBrakeActivated_To_Environment = kcg_true;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->output_To_EVC.info.train_data_info.axleNumber = 0;
  outC->output_To_EVC.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  outC->output_To_EVC.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->output_To_EVC.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->output_To_EVC.info.train_data_info.maxTrainSpeed = 0;
  outC->output_To_EVC.info.train_data_info.brakePerctage = 0;
  outC->output_To_EVC.info.train_data_info.trainLength = 0;
  outC->output_To_EVC.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->output_To_EVC.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->output_To_EVC.info.train_data_info.valid = kcg_true;
  outC->output_To_EVC.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_pressure.pressure = 0;
  outC->output_To_EVC.info.brake_pressure.valid = kcg_true;
  outC->output_To_EVC.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.valid = kcg_true;
  outC->output_To_EVC.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.valid = kcg_true;
  outC->output_To_EVC.valid = kcg_true;
}


void tiuSimulation_reset(outC_tiuSimulation *outC)
{
  outC->init = kcg_true;
}

/* tiuSimulation */
void tiuSimulation(
  /* tiuSimulation::Input_TIU_From_API */ TIU_Output_msg_API_TIU_Pkg *Input_TIU_From_API,
  /* tiuSimulation::cabStatus */ M_cab_signal_status_T_TIU_Types_Pkg cabStatus,
  /* tiuSimulation::directionController */ M_directioncontroller_signal_status_T_TIU_Types_Pkg directionController,
  /* tiuSimulation::tractionSwitchedOn */ kcg_bool tractionSwitchedOn,
  /* tiuSimulation::brakeAccelerationPercentage */ kcg_int brakeAccelerationPercentage,
  outC_tiuSimulation *outC)
{
  /* tiuSimulation::_L57 */ kcg_bool _L57;
  
  outC->output_To_EVC.valid = kcg_true;
  kcg_copy_Brake_status_T_TIU_Types_Pkg(
    &outC->output_To_EVC.info.brake_status,
    (Brake_status_T_TIU_Types_Pkg *) &cEmptyBrakeStatus);
  outC->output_To_EVC.info.brake_pressure.valid = kcg_true;
  outC->output_To_EVC.info.brake_pressure.pressure =
    brakeAccelerationPercentage * 6000;
  outC->output_To_EVC.info.train_data_entry_type = cEmtpyDataEntryType;
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->output_To_EVC.info.train_data_info,
    (trainData_T_TIU_Types_Pkg *) &cICE3TrainData);
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &outC->output_To_EVC.info.type_I_train_and_brake_inhibition,
    (Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *)
      &cEmptyType_I_train_and_brake_inhibition_with_distance_T);
  outC->output_To_EVC.info.train_status.valid = kcg_true;
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
    outC->emergencyBrakeCommandTmp = cEmptyBrakeSignalCommand;
    outC->serviceBrakeCommandTmp = cEmptyBrakeSignalCommand;
  }
  outC->emergencyBrakeActivated_To_Environment =
    outC->emergencyBrakeCommandTmp == apply_brake_TIU_Types_Pkg;
  outC->init = kcg_false;
  outC->serviceBrakeActivated_To_Environment = outC->serviceBrakeCommandTmp ==
    apply_brake_TIU_Types_Pkg;
  if (tractionSwitchedOn) {
    outC->output_To_EVC.info.train_status.m_traction_st =
      traction_on_TIU_Types_Pkg;
  }
  else {
    outC->output_To_EVC.info.train_status.m_traction_st =
      traction_off_TIU_Types_Pkg;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** tiuSimulation.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

