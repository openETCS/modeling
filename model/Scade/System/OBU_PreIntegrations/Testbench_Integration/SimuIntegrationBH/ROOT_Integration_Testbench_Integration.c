/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ROOT_Integration_Testbench_Integration.h"

#ifndef KCG_USER_DEFINED_INIT
void ROOT_Integration_init_Testbench_Integration(void)
{
  static kcg_int i49;
  static kcg_int i48;
  static kcg_int i47;
  static kcg_int i46;
  static kcg_int i45;
  static kcg_int i44;
  static kcg_int i43;
  static kcg_int i42;
  static kcg_int i41;
  static kcg_int i40;
  static kcg_int i39;
  static kcg_int i38;
  static kcg_int i37;
  static kcg_int i36;
  static kcg_int i35;
  static kcg_int i34;
  static kcg_int i33;
  static kcg_int i32;
  static kcg_int i31;
  static kcg_int i30;
  static kcg_int i29;
  static kcg_int i28;
  static kcg_int i27;
  static kcg_int i26;
  static kcg_int i25;
  static kcg_int i24;
  static kcg_int i23;
  static kcg_int i22;
  static kcg_int i21;
  static kcg_int i20;
  static kcg_int i19;
  static kcg_int i18;
  static kcg_int i17;
  static kcg_int i16;
  static kcg_int i15;
  static kcg_int i14;
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i = 0; i < 4; i++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L250[i] = 0.0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L249 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L248 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L247 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L246 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L245 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.nid_message = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.l_message = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.t_train = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.nid_engine = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.field1 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.field2 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L244.Message.field3 = 0;
  for (i1 = 0; i1 < 50; i1++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L244.OptionalPackets[i1] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L241.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L241.cmd =
    cmdr_not_relevant_API_RadioCommunication_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L241.networkID = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.isolation_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_command.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.d_test_traction.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.d_test_traction.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_traction_system.m_voltage.NID_ctraction =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.passenger_door_control_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.passenger_door_control_info.door_control_info =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.d_test_current.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.d_test_current.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L240.info.change_of_allowed_current_consumption.m_current.restriction =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L233 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L232 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L231 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L230 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L229 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L228 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L227 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L224 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L223 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L221 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L220 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L219 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L218 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L217 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L216 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L215 = kcg_true;
  for (i3 = 0; i3 < 5; i3++) {
    for (i2 = 0; i2 < 30; i2++) {
      Ctxt_ROOT_Integration_Testbench_Integration._L203[i3][i2] = ' ';
    }
  }
  for (i4 = 0; i4 < 5; i4++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L204[i4] = 0.0;
  }
  for (i5 = 0; i5 < 5; i5++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L205[i5] = 0.0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L206 = kcg_true;
  for (i6 = 0; i6 < 10; i6++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L207[i6] = kcg_true;
  }
  for (i7 = 0; i7 < 10; i7++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L208[i7] = 0;
  }
  for (i8 = 0; i8 < 10; i8++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L209[i8] = 0.0;
  }
  for (i9 = 0; i9 < 4; i9++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L210[i9] = 0.0;
  }
  for (i10 = 0; i10 < 4; i10++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L211[i10] = 0.0;
  }
  for (i11 = 0; i11 < 1; i11++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L212[i11] = 0.0;
  }
  for (i12 = 0; i12 < 12; i12++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L213[i12] = kcg_true;
  }
  for (i13 = 0; i13 < 9; i13++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L214[i13] = 0.0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L201.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L201.lastActiveLevel =
    M_LEVEL_Level_0;
  Ctxt_ROOT_Integration_Testbench_Integration._L201.lastActiveNTC = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L201.availableLevelsList.number =
    0;
  for (i14 = 0; i14 < 32; i14++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L201.availableLevelsList.levelList[i14].level =
      M_LEVEL_Level_0;
    Ctxt_ROOT_Integration_Testbench_Integration._L201.availableLevelsList.levelList[i14].nid_stm =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L196 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L27 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L28 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L29 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L30 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L31 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L32 = 0.0;
  for (i15 = 0; i15 < 5; i15++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L191[i15] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L192.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L192.systemTime = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L192.level.level =
    M_LEVEL_Level_0;
  Ctxt_ROOT_Integration_Testbench_Integration._L192.level.nid_stm = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L193 = 0;
  for (i16 = 0; i16 < 12; i16++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L194[i16] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L195 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L190 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L189 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L188 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L183 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L182 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L180 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L179 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L178 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L177 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L176 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L175 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_pressure.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.brake_pressure.pressure =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.acknowledgedByDriver =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.trainLength =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.brakePerctage =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.maxTrainSpeed =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.axleLoadCategory =
    M_AXLELOADCAT_A;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.axleNumber =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.numberNationalSystems =
    0;
  for (i17 = 0; i17 < 5; i17++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.nationSystems[i17] =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.numberTractionSystems =
    0;
  for (i18 = 0; i18 < 4; i18++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.tractionSystem[i18].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_ROOT_Integration_Testbench_Integration._L173.info.train_data_info.tractionSystem[i18].nid_ctraction =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L173.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L172 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L171 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L170 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L169 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L168 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L166 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L165 = kcg_true;
  for (i19 = 0; i19 < 12; i19++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L164[i19] = kcg_true;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L162 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L161 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L160 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L159 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L158 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L157 = kcg_true;
  for (i20 = 0; i20 < 999; i20++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L156[i20] = 0;
  }
  for (i21 = 0; i21 < 311; i21++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L154[i21] = 0;
  }
  for (i22 = 0; i22 < 311; i22++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L94[i22] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L95.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L95.systemTime = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L95.DMI_nid_icon_identifier = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L96 = kcg_true;
  for (i23 = 0; i23 < 15; i23++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L97[i23] = kcg_true;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L98 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L99 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L100 = 0.0;
  for (i24 = 0; i24 < 12; i24++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L101[i24] = 0.0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L102 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L103 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L104 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L105 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L106 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L107 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L108 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L109 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L110 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L111 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L112 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L113 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L114 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L115 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L116 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L117 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L118 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L119 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L120 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L121 = 0;
  for (i25 = 0; i25 < 9; i25++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L122[i25] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L123 = 0;
  for (i26 = 0; i26 < 12; i26++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L124[i26] = 0.0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L125 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L126 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L127 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L128 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L129 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L130 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L131 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L132 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L133 = 0.0;
  for (i27 = 0; i27 < 30; i27++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L134[i27] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L135 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L136 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L137 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L138 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L139 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L140 = kcg_true;
  for (i28 = 0; i28 < 9; i28++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L141[i28] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L142 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L143 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L144 = 0;
  for (i29 = 0; i29 < 12; i29++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L145[i29] = 0.0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L146 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L147 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L148 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L149 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L150 = 0;
  for (i30 = 0; i30 < 5; i30++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L151[i30] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L152 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L153 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L21 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.timestamp = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.odo.o_nominal = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.odo.o_min = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.odo.o_max = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.speed.v_safeNominal = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.speed.v_rawNominal = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.speed.v_lower = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.speed.v_upper = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.acceleration = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L22.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L23 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.systemTimeMsgReceived = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.msg_type =
    msrc_undefined_Common_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.present = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.checkResult =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_bad_balise_received =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.q_media =
    Q_MEDIA_Balise;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.n_pig =
    N_PIG_I_am_the_1st;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.m_dup =
    M_DUP_No_duplicates;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.m_mcount =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.nid_c = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.nid_bg =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.api_header.q_link =
    Q_LINK_Unlinked;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.present = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.apiConsistencyError =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.radioDevice =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.receivedSystemTime =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.nid_message =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.t_train =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.nid_lrbg =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.t_train_reference =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.nid_em =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.d_sr =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.t_sh_rqst =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.d_ref =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.d_emergencystop =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.t_train_reference =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.nid_em =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.q_scale =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.d_sr =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.t_sh_rqst =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.d_ref =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.q_dir =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.d_emergencystop =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.Radio_MetaData.m_version =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.sendingRBC_Id.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.sendingRBC_Id.nid_c =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.sendingRBC_Id.rbc_id =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L24.rtm_msg.sendingRBC_Id.device_id =
    0;
  for (i31 = 0; i31 < 30; i31++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[i31].nid_packet =
      0;
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[i31].q_dir =
      Q_DIR_Reverse;
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[i31].valid =
      kcg_true;
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[i31].startAddress =
      0;
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketHeaders[i31].endAddress =
      0;
  }
  for (i32 = 0; i32 < 500; i32++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L24.packets.PacketData[i32] =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L25.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_pressure.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.brake_pressure.pressure =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.acknowledgedByDriver =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.trainLength =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.brakePerctage =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.maxTrainSpeed =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.axleLoadCategory =
    M_AXLELOADCAT_A;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.axleNumber =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.numberNationalSystems =
    0;
  for (i33 = 0; i33 < 5; i33++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.nationSystems[i33] =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.numberTractionSystems =
    0;
  for (i34 = 0; i34 < 4; i34++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.tractionSystem[i34].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_ROOT_Integration_Testbench_Integration._L25.info.train_data_info.tractionSystem[i34].nid_ctraction =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L25.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L26.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L26.connectionStatus =
    mhwc_notRegistered_MoRC_Pck;
  Ctxt_ROOT_Integration_Testbench_Integration._L26.settingUpConnectionHasFailed =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L26.connectionLost = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.clockEVC = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_pressure.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.brake_pressure.pressure =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.acknowledgedByDriver =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.trainLength =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.brakePerctage =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.maxTrainSpeed =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.axleLoadCategory =
    M_AXLELOADCAT_A;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.axleNumber =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.numberNationalSystems =
    0;
  for (i35 = 0; i35 < 5; i35++) {
    Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.nationSystems[i35] =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.numberTractionSystems =
    0;
  for (i36 = 0; i36 < 4; i36++) {
    Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.tractionSystem[i36].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.train_data_info.tractionSystem[i36].nid_ctraction =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  for (i37 = 0; i37 < 311; i37++) {
    Ctxt_ROOT_Integration_Testbench_Integration.API_fromDMI[i37] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.ck_every = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus.connectionStatus =
    mhwc_notRegistered_MoRC_Pck;
  Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus.settingUpConnectionHasFailed =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus.connectionLost =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.debugCurrentLevel =
    M_LEVEL_Level_0;
  Ctxt_ROOT_Integration_Testbench_Integration.debugCurrentMode =
    M_MODE_Full_Supervision;
  Ctxt_ROOT_Integration_Testbench_Integration.debugInterventionSpeed = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.debugPermittedSpeed = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.debugTrainPositionNominal = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.init = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_openDesk_toDisplay = kcg_true;
  for (i38 = 0; i38 < 15; i38++) {
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_window_mask_visibility__toDisplay[i38] =
      kcg_true;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedTarget_toDisplay = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_VpermColor_toDisplay = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainLenght_toDisplay = 0.0;
  for (i39 = 0; i39 < 12; i39++) {
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsValue_toDisplay[i39] =
      0.0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainPosition_toDisplay = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vinterv_Visibility_toDisplay =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTargetBarVisibility_toDisplay =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitOne_toDisplay = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainAxleloadIndex_toDisplay =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_PointerColor_toDisplay = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_CloseButtonEnabler_toDisplay =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedRelease_toDisplay = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_VtargetColor_toDisplay = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainMaxspeed_toDisplay = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTargetVisible_toDisplay =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_LevelSymbolVisibility_toDisplay =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedIntervention_toDisplay =
    0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_ModeSymbolVisibility_toDisplay =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitThree_toDisplay =
    0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainLoadingGougeIndex_toDisplay =
    0;
  for (i40 = 0; i40 < 9; i40++) {
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainRN_Display_toDisplay[i40] =
      0;
  }
  for (i41 = 0; i41 < 12; i41++) {
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsEnd_toDisplay[i41] =
      0.0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_vtarget_permColor_toDisplay =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_traindataYesNoIndex_toDisplay =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_StatusSymbolBrake_toDisplay =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainDataWindowVisibility_toDisplay =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_levelSymbolAnnouncementIndex_toDisplay =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainCategoryIndex_toDisplay =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedPermitted_toDisplay =
    0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_VreleaseColor_toDisplay = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainBrakePerc_toDisplay =
    0.0;
  for (i42 = 0; i42 < 30; i42++) {
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_ArrayButtonsEnabler_toDisplay[i42] =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_ETCS_LevelSymbol_toDisplay =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_modeSymbolAnnouncementIndex_toDisplay =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_ModeSymbol_toDisplay = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTarget_toDisplay =
    0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vinterv_Color_toDisplay = 0;
  for (i43 = 0; i43 < 9; i43++) {
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_DriverID_Display_toDisplay[i43] =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitTwo_toDisplay = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainAirtightIndex_toDisplay =
    0;
  for (i44 = 0; i44 < 12; i44++) {
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsStart_toDisplay[i44] =
      0.0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vtarget_permVisibility_toDisplay =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_traindataValidWinVisibility_toDisplay =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainSpeed_toDisplay = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_iconGroupIndex_toDisplay = 0;
  for (i45 = 0; i45 < 5; i45++) {
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_ArrayOfMsgIndex_toDisplay[i45] =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_InterpolatedDistanceToTarget_toDisplay =
    0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L238 = M_LEVEL_Level_0;
  Ctxt_ROOT_Integration_Testbench_Integration._L222 = M_MODE_Full_Supervision;
  Ctxt_ROOT_Integration_Testbench_Integration._L1 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.nid_message = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.l_message = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.t_train = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.nid_engine = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.field1 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.field2 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L2.Message.field3 = 0;
  for (i46 = 0; i46 < 50; i46++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L2.OptionalPackets[i46] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L3.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L3.cmd =
    cmdr_not_relevant_API_RadioCommunication_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L3.networkID = 0;
  for (i47 = 0; i47 < 999; i47++) {
    Ctxt_ROOT_Integration_Testbench_Integration._L4[i47] = 0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration._L5.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.isolation_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_command.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.d_test_traction.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.d_test_traction.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_traction_system.m_voltage.NID_ctraction =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.passenger_door_control_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.passenger_door_control_info.door_control_info =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.d_test_current.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.d_test_current.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L5.info.change_of_allowed_current_consumption.m_current.restriction =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration._L6 = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration._L7 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L8 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L9 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration._L10 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration._L11 = 0.0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC.Message.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC.Message.nid_message = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC.Message.l_message = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC.Message.t_train = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC.Message.nid_engine = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC.Message.field1 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC.Message.field2 = 0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC.Message.field3 = 0;
  for (i48 = 0; i48 < 50; i48++) {
    Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC.OptionalPackets[i48] =
      0;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management.cmd =
    cmdr_not_relevant_API_RadioCommunication_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management.networkID =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.valid = kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.isolation_status.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.brake_command.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.brake_inhibition.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.type_I_train_commands.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_traction_system.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_traction_system.d_test_traction.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_traction_system.d_test_traction.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_traction_system.m_voltage.NID_ctraction =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.passenger_door_control_info.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.passenger_door_control_info.door_control_info =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_of_allowed_current_consumption.valid =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_of_allowed_current_consumption.d_test_current.now =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_of_allowed_current_consumption.d_test_current.distance =
    0;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU.info.change_of_allowed_current_consumption.m_current.restriction =
    0;
  for (i49 = 0; i49 < 999; i49++) {
    Ctxt_ROOT_Integration_Testbench_Integration.API_toDMI[i49] = 0;
  }
  /* 1 */ EVC_init(&Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1);
  /* 1 */
  DMI_init_Toolbox(&Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1);
  /* 1 */
  TestEnvironmentSimulation_IncludingRBC_Complete_init_Toolbox(
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ROOT_Integration_reset_Testbench_Integration(void)
{
  Ctxt_ROOT_Integration_Testbench_Integration.init = kcg_true;
  /* 1 */ EVC_reset(&Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1);
  /* 1 */
  DMI_reset_Toolbox(&Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1);
  /* 1 */
  TestEnvironmentSimulation_IncludingRBC_Complete_reset_Toolbox(
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Testbench_Integration::ROOT_Integration */
void ROOT_Integration_Testbench_Integration(void)
{
  /* Testbench_Integration::ROOT_Integration */
  static M_LEVEL tmp12;
  /* Testbench_Integration::ROOT_Integration */
  static M_MODE tmp11;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_real tmp10;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_real tmp9;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_int tmp8;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_int tmp7;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_int tmp6;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_bool tmp5;
  /* Testbench_Integration::ROOT_Integration */
  static TIU_Output_msg_API_TIU_Pkg tmp4;
  /* Testbench_Integration::ROOT_Integration */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg tmp3;
  /* Testbench_Integration::ROOT_Integration */
  static RadioManagement_T_API_RadioCommunication_Pkg tmp2;
  /* Testbench_Integration::ROOT_Integration */
  static M_TrainTrack_Message_T_TM_radio_messages tmp1;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_bool tmp;
  /* Testbench_Integration::ROOT_Integration */
  static M_LEVEL op_call;
  /* Testbench_Integration::ROOT_Integration */
  static M_MODE _13_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_real _14_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_real _15_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static L_internal_Type_Obu_BasicTypes_Pkg _16_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static L_internal_Type_Obu_BasicTypes_Pkg _17_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static L_internal_Type_Obu_BasicTypes_Pkg _18_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_bool _19_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static TIU_Output_msg_API_TIU_Pkg _20_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _21_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static RadioManagement_T_API_RadioCommunication_Pkg _22_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static M_TrainTrack_Message_T_TM_radio_messages _23_op_call;
  /* Testbench_Integration::ROOT_Integration */
  static kcg_bool _24_op_call;
  static kcg_bool noname;
  static kcg_bool _25_noname;
  static kcg_bool _26_noname;
  static kcg_bool _27_noname;
  /* Testbench_Integration::ROOT_Integration::API_toRBC */
  static M_TrainTrack_Message_T_TM_radio_messages last_API_toRBC;
  /* Testbench_Integration::ROOT_Integration::API_toRTM_Management */
  static RadioManagement_T_API_RadioCommunication_Pkg last_API_toRTM_Management;
  /* Testbench_Integration::ROOT_Integration::API_toTIU */
  static TIU_Output_msg_API_TIU_Pkg last_API_toTIU;
  /* Testbench_Integration::ROOT_Integration::API_toDMI */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg last_API_toDMI;
  /* Testbench_Integration::ROOT_Integration::DMI_InterpolatedDistanceToTarget_toDisplay */
  static kcg_real last_DMI_InterpolatedDistanceToTarget_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_ArrayOfMsgIndex_toDisplay */
  static array_int_5 last_DMI_ArrayOfMsgIndex_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_iconGroupIndex_toDisplay */
  static kcg_int last_DMI_iconGroupIndex_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_TrainSpeed_toDisplay */
  static kcg_real last_DMI_TrainSpeed_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_traindataValidWinVisibility_toDisplay */
  static kcg_bool last_DMI_traindataValidWinVisibility_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_Vtarget_permVisibility_toDisplay */
  static kcg_bool last_DMI_Vtarget_permVisibility_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_GradientsStart_toDisplay */
  static array_real_12 last_DMI_GradientsStart_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_trainAirtightIndex_toDisplay */
  static kcg_int last_DMI_trainAirtightIndex_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_SpeedDigitTwo_toDisplay */
  static kcg_real last_DMI_SpeedDigitTwo_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_DriverID_Display_toDisplay */
  static array_int_9 last_DMI_DriverID_Display_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_Vinterv_Color_toDisplay */
  static kcg_int last_DMI_Vinterv_Color_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_DistanceToTarget_toDisplay */
  static kcg_real last_DMI_DistanceToTarget_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_ModeSymbol_toDisplay */
  static kcg_int last_DMI_ModeSymbol_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_modeSymbolAnnouncementIndex_toDisplay */
  static kcg_int last_DMI_modeSymbolAnnouncementIndex_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_ETCS_LevelSymbol_toDisplay */
  static kcg_int last_DMI_ETCS_LevelSymbol_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_ArrayButtonsEnabler_toDisplay */
  static array_int_30 last_DMI_ArrayButtonsEnabler_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_trainBrakePerc_toDisplay */
  static kcg_real last_DMI_trainBrakePerc_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_VreleaseColor_toDisplay */
  static kcg_int last_DMI_VreleaseColor_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_SpeedPermitted_toDisplay */
  static kcg_real last_DMI_SpeedPermitted_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_trainCategoryIndex_toDisplay */
  static kcg_int last_DMI_trainCategoryIndex_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_levelSymbolAnnouncementIndex_toDisplay */
  static kcg_int last_DMI_levelSymbolAnnouncementIndex_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_TrainDataWindowVisibility_toDisplay */
  static kcg_bool last_DMI_TrainDataWindowVisibility_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_StatusSymbolBrake_toDisplay */
  static kcg_bool last_DMI_StatusSymbolBrake_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_traindataYesNoIndex_toDisplay */
  static kcg_int last_DMI_traindataYesNoIndex_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_vtarget_permColor_toDisplay */
  static kcg_int last_DMI_vtarget_permColor_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_GradientsEnd_toDisplay */
  static array_real_12 last_DMI_GradientsEnd_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_TrainRN_Display_toDisplay */
  static array_int_9 last_DMI_TrainRN_Display_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_trainLoadingGougeIndex_toDisplay */
  static kcg_int last_DMI_trainLoadingGougeIndex_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_SpeedDigitThree_toDisplay */
  static kcg_real last_DMI_SpeedDigitThree_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_ModeSymbolVisibility_toDisplay */
  static kcg_bool last_DMI_ModeSymbolVisibility_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_SpeedIntervention_toDisplay */
  static kcg_real last_DMI_SpeedIntervention_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_LevelSymbolVisibility_toDisplay */
  static kcg_bool last_DMI_LevelSymbolVisibility_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_DistanceToTargetVisible_toDisplay */
  static kcg_bool last_DMI_DistanceToTargetVisible_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_trainMaxspeed_toDisplay */
  static kcg_real last_DMI_trainMaxspeed_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_VtargetColor_toDisplay */
  static kcg_int last_DMI_VtargetColor_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_SpeedRelease_toDisplay */
  static kcg_real last_DMI_SpeedRelease_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_CloseButtonEnabler_toDisplay */
  static kcg_int last_DMI_CloseButtonEnabler_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_PointerColor_toDisplay */
  static kcg_int last_DMI_PointerColor_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_trainAxleloadIndex_toDisplay */
  static kcg_int last_DMI_trainAxleloadIndex_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_SpeedDigitOne_toDisplay */
  static kcg_real last_DMI_SpeedDigitOne_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_DistanceToTargetBarVisibility_toDisplay */
  static kcg_bool last_DMI_DistanceToTargetBarVisibility_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_Vinterv_Visibility_toDisplay */
  static kcg_bool last_DMI_Vinterv_Visibility_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_TrainPosition_toDisplay */
  static kcg_real last_DMI_TrainPosition_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_GradientsValue_toDisplay */
  static array_real_12 last_DMI_GradientsValue_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_trainLenght_toDisplay */
  static kcg_real last_DMI_trainLenght_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_VpermColor_toDisplay */
  static kcg_int last_DMI_VpermColor_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_SpeedTarget_toDisplay */
  static kcg_real last_DMI_SpeedTarget_toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_window_mask_visibility__toDisplay */
  static array_bool_15 last_DMI_window_mask_visibility__toDisplay;
  /* Testbench_Integration::ROOT_Integration::DMI_openDesk_toDisplay */
  static kcg_bool last_DMI_openDesk_toDisplay;
  
  Ctxt_ROOT_Integration_Testbench_Integration._L157 = GUI_reset;
  Ctxt_ROOT_Integration_Testbench_Integration._L231 = GUI_targetSpeed;
  Ctxt_ROOT_Integration_Testbench_Integration._L233 = GUI_traction;
  Ctxt_ROOT_Integration_Testbench_Integration._L232 = GUI_brake;
  Ctxt_ROOT_Integration_Testbench_Integration._L175 = GUI_initialPosition;
  Ctxt_ROOT_Integration_Testbench_Integration._L176 = GUI_initialVelocity;
  Ctxt_ROOT_Integration_Testbench_Integration._L178 = GUI_level;
  Ctxt_ROOT_Integration_Testbench_Integration._L177 = GUI_mode;
  Ctxt_ROOT_Integration_Testbench_Integration._L179 = GUI_mobileHWStatus;
  Ctxt_ROOT_Integration_Testbench_Integration._L180 = GUI_openDesk;
  /* last_init_ck_API_toRTM_Management */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &last_API_toRTM_Management,
      (RadioManagement_T_API_RadioCommunication_Pkg *)
        &cInitRTMManagement_Testbench_Integration);
  }
  else {
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &last_API_toRTM_Management,
      &Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management);
  }
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L241,
    &last_API_toRTM_Management);
  /* last_init_ck_API_toTIU */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &last_API_toTIU,
      (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU1_Testbench_Integration);
  }
  else {
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &last_API_toTIU,
      &Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU);
  }
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L240,
    &last_API_toTIU);
  Ctxt_ROOT_Integration_Testbench_Integration._L196 =
    cDeltaSimulationTime_Toolbox;
  Ctxt_ROOT_Integration_Testbench_Integration._L229 = kcg_false;
  /* last_init_ck_API_toRBC */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &last_API_toRBC,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &cInit_toRTM_Testbench_Integration);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &last_API_toRBC,
      &Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC);
  }
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &Ctxt_ROOT_Integration_Testbench_Integration._L244,
    &last_API_toRBC);
  /* 1 */
  TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox(
    Ctxt_ROOT_Integration_Testbench_Integration._L157,
    Ctxt_ROOT_Integration_Testbench_Integration._L231,
    Ctxt_ROOT_Integration_Testbench_Integration._L233,
    Ctxt_ROOT_Integration_Testbench_Integration._L232,
    Ctxt_ROOT_Integration_Testbench_Integration._L175,
    Ctxt_ROOT_Integration_Testbench_Integration._L176,
    Ctxt_ROOT_Integration_Testbench_Integration._L178,
    Ctxt_ROOT_Integration_Testbench_Integration._L177,
    Ctxt_ROOT_Integration_Testbench_Integration._L179,
    Ctxt_ROOT_Integration_Testbench_Integration._L180,
    &Ctxt_ROOT_Integration_Testbench_Integration._L241,
    &Ctxt_ROOT_Integration_Testbench_Integration._L240,
    Ctxt_ROOT_Integration_Testbench_Integration._L196,
    Ctxt_ROOT_Integration_Testbench_Integration._L229,
    Ctxt_ROOT_Integration_Testbench_Integration._L229,
    &Ctxt_ROOT_Integration_Testbench_Integration._L244,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_1);
  Ctxt_ROOT_Integration_Testbench_Integration._L21 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.EVC_reset;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L22,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_1.EVC_Odometry);
  Ctxt_ROOT_Integration_Testbench_Integration._L23 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.EVC_SystemTime;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L24,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_1.EVC_fromTrack);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L25,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_1.EVC_fromTIU);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &Ctxt_ROOT_Integration_Testbench_Integration._L26,
    &Ctxt_ROOT_Integration_Testbench_Integration.Context_1.EVC_mobileHWStatus);
  Ctxt_ROOT_Integration_Testbench_Integration._L27 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.GUI_emergencyBrake;
  Ctxt_ROOT_Integration_Testbench_Integration._L28 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.GUI_serviceBrake;
  Ctxt_ROOT_Integration_Testbench_Integration._L29 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.GUI_TractionCutOff;
  Ctxt_ROOT_Integration_Testbench_Integration._L30 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.GUI_currentPositionInCm;
  Ctxt_ROOT_Integration_Testbench_Integration._L31 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.GUI_currentPositionInM;
  Ctxt_ROOT_Integration_Testbench_Integration._L32 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.GUI_currentVelocityInKmH;
  Ctxt_ROOT_Integration_Testbench_Integration._L227 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.EVC_cycleEVC;
  Ctxt_ROOT_Integration_Testbench_Integration._L230 =
    Ctxt_ROOT_Integration_Testbench_Integration.Context_1.GUI_AFBActive;
  Ctxt_ROOT_Integration_Testbench_Integration.clockEVC =
    Ctxt_ROOT_Integration_Testbench_Integration._L227;
  Ctxt_ROOT_Integration_Testbench_Integration._L228 =
    Ctxt_ROOT_Integration_Testbench_Integration.clockEVC;
  Ctxt_ROOT_Integration_Testbench_Integration.ck_every =
    Ctxt_ROOT_Integration_Testbench_Integration._L228;
  Ctxt_ROOT_Integration_Testbench_Integration._L158 = GUI_reset;
  /* last_init_ck_API_toDMI */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &last_API_toDMI,
      (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
        &cInit_API_toDMI_Testbench_Integration);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &last_API_toDMI,
      &Ctxt_ROOT_Integration_Testbench_Integration.API_toDMI);
  }
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L156,
    &last_API_toDMI);
  Ctxt_ROOT_Integration_Testbench_Integration._L159 = DMI_MousePressed;
  Ctxt_ROOT_Integration_Testbench_Integration._L160 = DMI_startRequest;
  Ctxt_ROOT_Integration_Testbench_Integration._L161 = DMI_openTrainRN;
  Ctxt_ROOT_Integration_Testbench_Integration._L162 = DMI_traindataYesAck;
  kcg_copy_array_bool_12(
    &Ctxt_ROOT_Integration_Testbench_Integration._L164,
    &DMI_keypad);
  Ctxt_ROOT_Integration_Testbench_Integration._L165 = DMI_openTrainDataWindow;
  Ctxt_ROOT_Integration_Testbench_Integration._L166 = DMI_openDriverID;
  Ctxt_ROOT_Integration_Testbench_Integration._L168 = DMI_traindataNoAck;
  Ctxt_ROOT_Integration_Testbench_Integration._L169 = DMI_traindataAck;
  Ctxt_ROOT_Integration_Testbench_Integration._L170 = DMI_closeButton;
  Ctxt_ROOT_Integration_Testbench_Integration._L171 = DMI_confirmTrainData;
  Ctxt_ROOT_Integration_Testbench_Integration._L172 = DMI_textMsgAck;
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU,
    &Ctxt_ROOT_Integration_Testbench_Integration._L25);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L173,
    &Ctxt_ROOT_Integration_Testbench_Integration.EVC_fromTIU);
  Ctxt_ROOT_Integration_Testbench_Integration._L190 = DMI_openLevelMenu;
  Ctxt_ROOT_Integration_Testbench_Integration._L189 = DMI_InputFieldAck;
  Ctxt_ROOT_Integration_Testbench_Integration._L215 =
    DMI_openMainMenu_fromDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L216 = DMI_OverD9_fromDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L217 = DMI_OverD12_frpmDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L218 =
    DMI_HidePlanningArea_fromDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L219 =
    DMI_ShowPlanningArea_fromDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L220 = DMI_closeButtonMain;
  Ctxt_ROOT_Integration_Testbench_Integration._L221 = DMI_C1AreaAck;
  Ctxt_ROOT_Integration_Testbench_Integration._L248 = DMI_ScrollUp;
  Ctxt_ROOT_Integration_Testbench_Integration._L249 = DMI_ScrollDown;
  /* 1 */
  DMI_Toolbox(
    Ctxt_ROOT_Integration_Testbench_Integration._L158,
    &Ctxt_ROOT_Integration_Testbench_Integration._L156,
    Ctxt_ROOT_Integration_Testbench_Integration._L159,
    Ctxt_ROOT_Integration_Testbench_Integration._L160,
    Ctxt_ROOT_Integration_Testbench_Integration._L161,
    Ctxt_ROOT_Integration_Testbench_Integration._L162,
    &Ctxt_ROOT_Integration_Testbench_Integration._L164,
    Ctxt_ROOT_Integration_Testbench_Integration._L165,
    Ctxt_ROOT_Integration_Testbench_Integration._L166,
    Ctxt_ROOT_Integration_Testbench_Integration._L168,
    Ctxt_ROOT_Integration_Testbench_Integration._L169,
    Ctxt_ROOT_Integration_Testbench_Integration._L170,
    Ctxt_ROOT_Integration_Testbench_Integration._L171,
    Ctxt_ROOT_Integration_Testbench_Integration._L172,
    &Ctxt_ROOT_Integration_Testbench_Integration._L173,
    Ctxt_ROOT_Integration_Testbench_Integration._L190,
    Ctxt_ROOT_Integration_Testbench_Integration._L189,
    Ctxt_ROOT_Integration_Testbench_Integration._L215,
    Ctxt_ROOT_Integration_Testbench_Integration._L216,
    Ctxt_ROOT_Integration_Testbench_Integration._L217,
    Ctxt_ROOT_Integration_Testbench_Integration._L218,
    Ctxt_ROOT_Integration_Testbench_Integration._L219,
    Ctxt_ROOT_Integration_Testbench_Integration._L220,
    Ctxt_ROOT_Integration_Testbench_Integration._L221,
    Ctxt_ROOT_Integration_Testbench_Integration._L248,
    Ctxt_ROOT_Integration_Testbench_Integration._L249,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L94,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.EVC_fromDMI);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L95,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_icons_ack);
  Ctxt_ROOT_Integration_Testbench_Integration._L96 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_openDesk_toDisplay;
  kcg_copy_array_bool_15(
    &Ctxt_ROOT_Integration_Testbench_Integration._L97,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_window_mask_visibility__toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L98 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_SpeedTarget_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L99 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_VpermColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L100 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_trainLenght_toDisplay;
  kcg_copy_array_real_12(
    &Ctxt_ROOT_Integration_Testbench_Integration._L101,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_GradientsValue_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L102 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_TrainPosition_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L103 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_Vinterv_Visibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L104 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_DistanceToTargetBarVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L105 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_SpeedDigitOne_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L106 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_hourGlassVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L107 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_trainAxleloadIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L108 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_PointerColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L109 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_CloseButtonEnabler_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L110 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_SpeedRelease_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L111 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_VtargetColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L112 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_trainMaxspeed_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L113 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_DistanceToTargetVisible_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L114 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_LevelSymbolVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L115 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_SpeedIntervention_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L116 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_yellowBorderBrakeSymbol_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L117 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_closeButtonIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L118 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_ModeSymbolVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L119 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_SpeedDigitThree_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L120 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_hourGlassCounter_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L121 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_trainLoadingGougeIndex_toDisplay;
  kcg_copy_array_int_9(
    &Ctxt_ROOT_Integration_Testbench_Integration._L122,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_TrainRN_Display_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L123 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_RBC_status_symbol_toDisplay;
  kcg_copy_array_real_12(
    &Ctxt_ROOT_Integration_Testbench_Integration._L124,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_GradientsEnd_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L125 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_vtarget_permColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L126 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_traindataYesNoIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L127 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_StatusSymbolBrake_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L128 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_TrainDataWindowVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L129 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_levelSymbolAnnouncementIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L130 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_trainCategoryIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L131 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_SpeedPermitted_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L132 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_VreleaseColor_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L133 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_trainBrakePerc_toDisplay;
  kcg_copy_array_int_30(
    &Ctxt_ROOT_Integration_Testbench_Integration._L134,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_ArrayButtonsEnabler_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L135 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_ETCS_LevelSymbol_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L136 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_modeSymbolAnnouncementIndex_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L137 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_ModeSymbol_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L138 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_DistanceToTarget_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L139 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_Vinterv_Color_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L140 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_yellowBorderMsg_toDisplay;
  kcg_copy_array_int_9(
    &Ctxt_ROOT_Integration_Testbench_Integration._L141,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_DriverID_Display_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L142 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_SpeedDigitTwo_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L143 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_yellowBorderC1Area_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L144 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_trainAirtightIndex_toDisplay;
  kcg_copy_array_real_12(
    &Ctxt_ROOT_Integration_Testbench_Integration._L145,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_GradientsStart_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L146 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_Vtarget_permVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L147 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_traindataValidWinVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L148 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_StatusSymbolVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L149 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_TrainSpeed_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L150 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_iconGroupIndex_toDisplay;
  kcg_copy_array_int_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L151,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_ArrayOfMsgIndex_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L152 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_InterpolatedDistanceToTarget_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L153 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_SingleMsgAckRequiredVisibility_toDysplay;
  kcg_copy_array_int_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L191,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_IndexFixedMsg_toDisplay);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L192,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_level_data);
  Ctxt_ROOT_Integration_Testbench_Integration._L193 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_IndexLevel_toDisplay;
  kcg_copy_array_int_12(
    &Ctxt_ROOT_Integration_Testbench_Integration._L194,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_ArrayLevelIndex_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L195 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_levelMenuVisibility_toDisplay;
  kcg_copy_array_char_30_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L203,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_PlainText_toDisplay);
  kcg_copy_array_real_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L204,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_Array_hh_toDisplay);
  kcg_copy_array_real_5(
    &Ctxt_ROOT_Integration_Testbench_Integration._L205,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_Array_mm_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L206 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_isAuxiliarMsg_toDisplay;
  kcg_copy_array_bool_10(
    &Ctxt_ROOT_Integration_Testbench_Integration._L207,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
  kcg_copy_array_int_10(
    &Ctxt_ROOT_Integration_Testbench_Integration._L208,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_D_SPDI_SpeedChangeIndex_toDisplay);
  kcg_copy_array_real_10(
    &Ctxt_ROOT_Integration_Testbench_Integration._L209,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_D_SPDI_SpeedChangePosition_toDisplay);
  kcg_copy_array_real_4(
    &Ctxt_ROOT_Integration_Testbench_Integration._L210,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_D_PASP_Speeds_toDisplay);
  kcg_copy_array_real_4(
    &Ctxt_ROOT_Integration_Testbench_Integration._L211,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_D_PASP_Distances_toDisplay);
  kcg_copy_array_real_1(
    &Ctxt_ROOT_Integration_Testbench_Integration._L212,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_D_PASP_IndicationMarker_toDisplay);
  kcg_copy_array_bool_12(
    &Ctxt_ROOT_Integration_Testbench_Integration._L213,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_D_GradientVisible_toDisplay);
  kcg_copy_tScale(
    &Ctxt_ROOT_Integration_Testbench_Integration._L214,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_D_Scale_toDisplay);
  Ctxt_ROOT_Integration_Testbench_Integration._L245 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_PlanningAreaVisibility_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration._L246 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_ScrollDownEnableIndex;
  Ctxt_ROOT_Integration_Testbench_Integration._L247 =
    Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_ScrollUpEnableIndex;
  kcg_copy_array_real_4(
    &Ctxt_ROOT_Integration_Testbench_Integration._L250,
    &Ctxt_ROOT_Integration_Testbench_Integration._1_Context_1.DMI_TimeArray);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_fromDMI,
    &Ctxt_ROOT_Integration_Testbench_Integration._L94);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L154,
    &Ctxt_ROOT_Integration_Testbench_Integration.API_fromDMI);
  kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration._L201,
    (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
      &cDataStorage_ForInit1_Testbench_Integration);
  /* ck_ROOT_Integration */ if (Ctxt_ROOT_Integration_Testbench_Integration.ck_every) {
    /* 1 */
    EVC(
      Ctxt_ROOT_Integration_Testbench_Integration._L21,
      &Ctxt_ROOT_Integration_Testbench_Integration._L22,
      Ctxt_ROOT_Integration_Testbench_Integration._L23,
      &Ctxt_ROOT_Integration_Testbench_Integration._L24,
      &Ctxt_ROOT_Integration_Testbench_Integration._L154,
      &Ctxt_ROOT_Integration_Testbench_Integration._L25,
      &Ctxt_ROOT_Integration_Testbench_Integration._L26,
      &Ctxt_ROOT_Integration_Testbench_Integration._L201,
      &Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1);
    _24_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.resetOut;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &_23_op_call,
      &Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.API_toRBC);
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &_22_op_call,
      &Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.API_RTM_management);
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &_21_op_call,
      &Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.API_toDMI);
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &_20_op_call,
      &Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.API_toTIU);
    _19_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.EVC_ready;
    _18_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.debugTrainPositionNominal;
    _17_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.debugTrainPositionDeltaMax;
    _16_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.debugTrainPositionDeltaMin;
    _15_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.debugPermittedSpeed;
    _14_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.debugIinterventionSpeed;
    _13_op_call =
      Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.debugCurrentMode;
    op_call =
      Ctxt_ROOT_Integration_Testbench_Integration._2_Context_1.debugCurrentLevel;
    Ctxt_ROOT_Integration_Testbench_Integration._L238 = op_call;
    Ctxt_ROOT_Integration_Testbench_Integration._L222 = _13_op_call;
    Ctxt_ROOT_Integration_Testbench_Integration._L11 = _14_op_call;
    Ctxt_ROOT_Integration_Testbench_Integration._L10 = _15_op_call;
    Ctxt_ROOT_Integration_Testbench_Integration._L9 = _16_op_call;
    Ctxt_ROOT_Integration_Testbench_Integration._L8 = _17_op_call;
    Ctxt_ROOT_Integration_Testbench_Integration._L7 = _18_op_call;
    Ctxt_ROOT_Integration_Testbench_Integration._L6 = _19_op_call;
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L5,
      &_20_op_call);
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L4,
      &_21_op_call);
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L3,
      &_22_op_call);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &Ctxt_ROOT_Integration_Testbench_Integration._L2,
      &_23_op_call);
    Ctxt_ROOT_Integration_Testbench_Integration._L1 = _24_op_call;
  }
  else {
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp12 = cInit_M_LEVEL1_Testbench_Integration;
    }
    else {
      tmp12 = Ctxt_ROOT_Integration_Testbench_Integration._L238;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L238 = tmp12;
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp11 = cInit_M_MODE1_Testbench_Integration;
    }
    else {
      tmp11 = Ctxt_ROOT_Integration_Testbench_Integration._L222;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L222 = tmp11;
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp10 = 0.0;
    }
    else {
      tmp10 = Ctxt_ROOT_Integration_Testbench_Integration._L11;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L11 = tmp10;
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp9 = 0.0;
    }
    else {
      tmp9 = Ctxt_ROOT_Integration_Testbench_Integration._L10;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L10 = tmp9;
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp8 = 0;
    }
    else {
      tmp8 = Ctxt_ROOT_Integration_Testbench_Integration._L9;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L9 = tmp8;
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp7 = 0;
    }
    else {
      tmp7 = Ctxt_ROOT_Integration_Testbench_Integration._L8;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L8 = tmp7;
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp6 = 0;
    }
    else {
      tmp6 = Ctxt_ROOT_Integration_Testbench_Integration._L7;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L7 = tmp6;
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp5 = kcg_true;
    }
    else {
      tmp5 = Ctxt_ROOT_Integration_Testbench_Integration._L6;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L6 = tmp5;
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      kcg_copy_TIU_Output_msg_API_TIU_Pkg(
        &tmp4,
        (TIU_Output_msg_API_TIU_Pkg *) &cInit_API_toTIU1_Testbench_Integration);
    }
    else {
      kcg_copy_TIU_Output_msg_API_TIU_Pkg(
        &tmp4,
        &Ctxt_ROOT_Integration_Testbench_Integration._L5);
    }
    kcg_copy_TIU_Output_msg_API_TIU_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L5,
      &tmp4);
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
        &tmp3,
        (EVC_to_DMI_Message_int_T_API_DMI_Pkg *)
          &cInit_API_toDMI_Testbench_Integration);
    }
    else {
      kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
        &tmp3,
        &Ctxt_ROOT_Integration_Testbench_Integration._L4);
    }
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L4,
      &tmp3);
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
        &tmp2,
        (RadioManagement_T_API_RadioCommunication_Pkg *)
          &cInitRTMManagement_Testbench_Integration);
    }
    else {
      kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
        &tmp2,
        &Ctxt_ROOT_Integration_Testbench_Integration._L3);
    }
    kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
      &Ctxt_ROOT_Integration_Testbench_Integration._L3,
      &tmp2);
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &tmp1,
        (M_TrainTrack_Message_T_TM_radio_messages *)
          &cInit_toRTM_Testbench_Integration);
    }
    else {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &tmp1,
        &Ctxt_ROOT_Integration_Testbench_Integration._L2);
    }
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &Ctxt_ROOT_Integration_Testbench_Integration._L2,
      &tmp1);
    if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
      tmp = kcg_false;
    }
    else {
      tmp = Ctxt_ROOT_Integration_Testbench_Integration._L1;
    }
    Ctxt_ROOT_Integration_Testbench_Integration._L1 = tmp;
  }
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toDMI,
    &Ctxt_ROOT_Integration_Testbench_Integration._L4);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &DMI_icons_ack,
    &Ctxt_ROOT_Integration_Testbench_Integration._L95);
  /* last_init_DMI_openDesk_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_openDesk_toDisplay = kcg_false;
  }
  else {
    last_DMI_openDesk_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_openDesk_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_openDesk_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L96;
  /* last_init_DMI_window_mask_visibility__toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_window_mask_visibility__toDisplay[0] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[1] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[2] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[3] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[4] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[5] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[6] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[7] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[8] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[9] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[10] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[11] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[12] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[13] = kcg_false;
    last_DMI_window_mask_visibility__toDisplay[14] = kcg_false;
  }
  else {
    kcg_copy_array_bool_15(
      &last_DMI_window_mask_visibility__toDisplay,
      &Ctxt_ROOT_Integration_Testbench_Integration.DMI_window_mask_visibility__toDisplay);
  }
  kcg_copy_array_bool_15(
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_window_mask_visibility__toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L97);
  /* last_init_DMI_SpeedTarget_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_SpeedTarget_toDisplay = 0.0;
  }
  else {
    last_DMI_SpeedTarget_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedTarget_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L98;
  /* last_init_DMI_VpermColor_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_VpermColor_toDisplay = 0;
  }
  else {
    last_DMI_VpermColor_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_VpermColor_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_VpermColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L99;
  /* last_init_DMI_trainLenght_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_trainLenght_toDisplay = 0.0;
  }
  else {
    last_DMI_trainLenght_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainLenght_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainLenght_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L100;
  /* last_init_DMI_GradientsValue_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    kcg_copy_array_real_12(
      &last_DMI_GradientsValue_toDisplay,
      (array_real_12 *) &cD_GradientsValue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_12(
      &last_DMI_GradientsValue_toDisplay,
      &Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsValue_toDisplay);
  }
  kcg_copy_array_real_12(
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsValue_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L101);
  /* last_init_DMI_TrainPosition_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_TrainPosition_toDisplay = 0.0;
  }
  else {
    last_DMI_TrainPosition_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainPosition_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainPosition_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L102;
  /* last_init_DMI_Vinterv_Visibility_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_Vinterv_Visibility_toDisplay = kcg_false;
  }
  else {
    last_DMI_Vinterv_Visibility_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vinterv_Visibility_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vinterv_Visibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L103;
  /* last_init_DMI_DistanceToTargetBarVisibility_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_DistanceToTargetBarVisibility_toDisplay = kcg_false;
  }
  else {
    last_DMI_DistanceToTargetBarVisibility_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTargetBarVisibility_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTargetBarVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L104;
  /* last_init_DMI_SpeedDigitOne_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_SpeedDigitOne_toDisplay = 0.0;
  }
  else {
    last_DMI_SpeedDigitOne_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitOne_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitOne_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L105;
  DMI_hourGlassVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L106;
  /* last_init_DMI_trainAxleloadIndex_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_trainAxleloadIndex_toDisplay = 1;
  }
  else {
    last_DMI_trainAxleloadIndex_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainAxleloadIndex_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainAxleloadIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L107;
  /* last_init_DMI_PointerColor_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_PointerColor_toDisplay = 1;
  }
  else {
    last_DMI_PointerColor_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_PointerColor_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_PointerColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L108;
  /* last_init_DMI_CloseButtonEnabler_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_CloseButtonEnabler_toDisplay = 26;
  }
  else {
    last_DMI_CloseButtonEnabler_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_CloseButtonEnabler_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_CloseButtonEnabler_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L109;
  /* last_init_DMI_SpeedRelease_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_SpeedRelease_toDisplay = 0.0;
  }
  else {
    last_DMI_SpeedRelease_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedRelease_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedRelease_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L110;
  /* last_init_DMI_VtargetColor_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_VtargetColor_toDisplay = 0;
  }
  else {
    last_DMI_VtargetColor_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_VtargetColor_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_VtargetColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L111;
  /* last_init_DMI_trainMaxspeed_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_trainMaxspeed_toDisplay = 0.0;
  }
  else {
    last_DMI_trainMaxspeed_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainMaxspeed_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainMaxspeed_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L112;
  /* last_init_DMI_DistanceToTargetVisible_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_DistanceToTargetVisible_toDisplay = kcg_false;
  }
  else {
    last_DMI_DistanceToTargetVisible_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTargetVisible_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTargetVisible_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L113;
  /* last_init_DMI_LevelSymbolVisibility_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_LevelSymbolVisibility_toDisplay = kcg_false;
  }
  else {
    last_DMI_LevelSymbolVisibility_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_LevelSymbolVisibility_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_LevelSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L114;
  /* last_init_DMI_SpeedIntervention_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_SpeedIntervention_toDisplay = 0.0;
  }
  else {
    last_DMI_SpeedIntervention_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedIntervention_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedIntervention_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L115;
  DMI_yellowBorderBrakeSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L116;
  DMI_closeButtonIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L117;
  /* last_init_DMI_ModeSymbolVisibility_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_ModeSymbolVisibility_toDisplay = kcg_false;
  }
  else {
    last_DMI_ModeSymbolVisibility_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_ModeSymbolVisibility_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_ModeSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L118;
  /* last_init_DMI_SpeedDigitThree_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_SpeedDigitThree_toDisplay = 0.0;
  }
  else {
    last_DMI_SpeedDigitThree_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitThree_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitThree_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L119;
  DMI_hourGlassCounter_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L120;
  /* last_init_DMI_trainLoadingGougeIndex_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_trainLoadingGougeIndex_toDisplay = 1;
  }
  else {
    last_DMI_trainLoadingGougeIndex_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainLoadingGougeIndex_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainLoadingGougeIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L121;
  /* last_init_DMI_TrainRN_Display_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    kcg_copy_array_int_9(
      &last_DMI_TrainRN_Display_toDisplay,
      (array_int_9 *) &InitText1_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_int_9(
      &last_DMI_TrainRN_Display_toDisplay,
      &Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainRN_Display_toDisplay);
  }
  kcg_copy_array_int_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainRN_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L122);
  DMI_RBC_status_symbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L123;
  /* last_init_DMI_GradientsEnd_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    kcg_copy_array_real_12(
      &last_DMI_GradientsEnd_toDisplay,
      (array_real_12 *) &cD_GradientsValue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_12(
      &last_DMI_GradientsEnd_toDisplay,
      &Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsEnd_toDisplay);
  }
  kcg_copy_array_real_12(
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsEnd_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L124);
  /* last_init_DMI_vtarget_permColor_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_vtarget_permColor_toDisplay = 1;
  }
  else {
    last_DMI_vtarget_permColor_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_vtarget_permColor_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_vtarget_permColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L125;
  /* last_init_DMI_traindataYesNoIndex_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_traindataYesNoIndex_toDisplay = 1;
  }
  else {
    last_DMI_traindataYesNoIndex_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_traindataYesNoIndex_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_traindataYesNoIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L126;
  /* last_init_DMI_StatusSymbolBrake_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_StatusSymbolBrake_toDisplay = kcg_false;
  }
  else {
    last_DMI_StatusSymbolBrake_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_StatusSymbolBrake_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_StatusSymbolBrake_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L127;
  /* last_init_DMI_TrainDataWindowVisibility_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_TrainDataWindowVisibility_toDisplay = kcg_false;
  }
  else {
    last_DMI_TrainDataWindowVisibility_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainDataWindowVisibility_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainDataWindowVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L128;
  /* last_init_DMI_levelSymbolAnnouncementIndex_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_levelSymbolAnnouncementIndex_toDisplay = 0;
  }
  else {
    last_DMI_levelSymbolAnnouncementIndex_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_levelSymbolAnnouncementIndex_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_levelSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L129;
  /* last_init_DMI_trainCategoryIndex_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_trainCategoryIndex_toDisplay = 1;
  }
  else {
    last_DMI_trainCategoryIndex_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainCategoryIndex_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainCategoryIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L130;
  /* last_init_DMI_SpeedPermitted_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_SpeedPermitted_toDisplay = 0.0;
  }
  else {
    last_DMI_SpeedPermitted_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedPermitted_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedPermitted_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L131;
  /* last_init_DMI_VreleaseColor_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_VreleaseColor_toDisplay = 0;
  }
  else {
    last_DMI_VreleaseColor_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_VreleaseColor_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_VreleaseColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L132;
  /* last_init_DMI_trainBrakePerc_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_trainBrakePerc_toDisplay = 0.0;
  }
  else {
    last_DMI_trainBrakePerc_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainBrakePerc_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainBrakePerc_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L133;
  /* last_init_DMI_ArrayButtonsEnabler_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_ArrayButtonsEnabler_toDisplay[0] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[1] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[2] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[3] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[4] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[5] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[6] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[7] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[8] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[9] = 2;
    last_DMI_ArrayButtonsEnabler_toDisplay[10] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[11] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[12] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[13] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[14] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[15] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[16] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[17] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[18] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[19] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[20] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[21] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[22] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[23] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[24] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[25] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[26] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[27] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[28] = 0;
    last_DMI_ArrayButtonsEnabler_toDisplay[29] = 0;
  }
  else {
    kcg_copy_array_int_30(
      &last_DMI_ArrayButtonsEnabler_toDisplay,
      &Ctxt_ROOT_Integration_Testbench_Integration.DMI_ArrayButtonsEnabler_toDisplay);
  }
  kcg_copy_array_int_30(
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_ArrayButtonsEnabler_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L134);
  /* last_init_DMI_ETCS_LevelSymbol_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_ETCS_LevelSymbol_toDisplay = 4;
  }
  else {
    last_DMI_ETCS_LevelSymbol_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_ETCS_LevelSymbol_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_ETCS_LevelSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L135;
  /* last_init_DMI_modeSymbolAnnouncementIndex_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_modeSymbolAnnouncementIndex_toDisplay = 0;
  }
  else {
    last_DMI_modeSymbolAnnouncementIndex_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_modeSymbolAnnouncementIndex_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_modeSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L136;
  /* last_init_DMI_ModeSymbol_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_ModeSymbol_toDisplay = 13;
  }
  else {
    last_DMI_ModeSymbol_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_ModeSymbol_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_ModeSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L137;
  /* last_init_DMI_DistanceToTarget_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_DistanceToTarget_toDisplay = 0.0;
  }
  else {
    last_DMI_DistanceToTarget_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTarget_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L138;
  /* last_init_DMI_Vinterv_Color_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_Vinterv_Color_toDisplay = 1;
  }
  else {
    last_DMI_Vinterv_Color_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vinterv_Color_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vinterv_Color_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L139;
  DMI_yellowBorderMsg_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L140;
  /* last_init_DMI_DriverID_Display_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    kcg_copy_array_int_9(
      &last_DMI_DriverID_Display_toDisplay,
      (array_int_9 *) &InitText1_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_int_9(
      &last_DMI_DriverID_Display_toDisplay,
      &Ctxt_ROOT_Integration_Testbench_Integration.DMI_DriverID_Display_toDisplay);
  }
  kcg_copy_array_int_9(
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_DriverID_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L141);
  /* last_init_DMI_SpeedDigitTwo_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_SpeedDigitTwo_toDisplay = 0.0;
  }
  else {
    last_DMI_SpeedDigitTwo_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitTwo_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitTwo_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L142;
  DMI_yellowBorderC1Area_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L143;
  /* last_init_DMI_trainAirtightIndex_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_trainAirtightIndex_toDisplay = 1;
  }
  else {
    last_DMI_trainAirtightIndex_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainAirtightIndex_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainAirtightIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L144;
  /* last_init_DMI_GradientsStart_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    kcg_copy_array_real_12(
      &last_DMI_GradientsStart_toDisplay,
      (array_real_12 *) &cD_GradientsValue_DMI_Control_Pkg);
  }
  else {
    kcg_copy_array_real_12(
      &last_DMI_GradientsStart_toDisplay,
      &Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsStart_toDisplay);
  }
  kcg_copy_array_real_12(
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsStart_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L145);
  /* last_init_DMI_Vtarget_permVisibility_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_Vtarget_permVisibility_toDisplay = kcg_false;
  }
  else {
    last_DMI_Vtarget_permVisibility_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vtarget_permVisibility_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vtarget_permVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L146;
  /* last_init_DMI_traindataValidWinVisibility_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_traindataValidWinVisibility_toDisplay = kcg_false;
  }
  else {
    last_DMI_traindataValidWinVisibility_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_traindataValidWinVisibility_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_traindataValidWinVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L147;
  DMI_StatusSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L148;
  /* last_init_DMI_TrainSpeed_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_TrainSpeed_toDisplay = 0.0;
  }
  else {
    last_DMI_TrainSpeed_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainSpeed_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainSpeed_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L149;
  /* last_init_DMI_iconGroupIndex_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_iconGroupIndex_toDisplay = 0;
  }
  else {
    last_DMI_iconGroupIndex_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_iconGroupIndex_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_iconGroupIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L150;
  /* last_init_DMI_ArrayOfMsgIndex_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_ArrayOfMsgIndex_toDisplay[0] = 0;
    last_DMI_ArrayOfMsgIndex_toDisplay[1] = 0;
    last_DMI_ArrayOfMsgIndex_toDisplay[2] = 0;
    last_DMI_ArrayOfMsgIndex_toDisplay[3] = 0;
    last_DMI_ArrayOfMsgIndex_toDisplay[4] = 0;
  }
  else {
    kcg_copy_array_int_5(
      &last_DMI_ArrayOfMsgIndex_toDisplay,
      &Ctxt_ROOT_Integration_Testbench_Integration.DMI_ArrayOfMsgIndex_toDisplay);
  }
  kcg_copy_array_int_5(
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_ArrayOfMsgIndex_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L151);
  /* last_init_DMI_InterpolatedDistanceToTarget_toDisplay */ if (Ctxt_ROOT_Integration_Testbench_Integration.init) {
    last_DMI_InterpolatedDistanceToTarget_toDisplay = 0.0;
  }
  else {
    last_DMI_InterpolatedDistanceToTarget_toDisplay =
      Ctxt_ROOT_Integration_Testbench_Integration.DMI_InterpolatedDistanceToTarget_toDisplay;
  }
  Ctxt_ROOT_Integration_Testbench_Integration.DMI_InterpolatedDistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L152;
  noname = Ctxt_ROOT_Integration_Testbench_Integration._L1;
  GUI_emergencyBrake = Ctxt_ROOT_Integration_Testbench_Integration._L27;
  GUI_serviceBrake = Ctxt_ROOT_Integration_Testbench_Integration._L28;
  GUI_TractionCutOff = Ctxt_ROOT_Integration_Testbench_Integration._L29;
  GUI_currentPositionInCm = Ctxt_ROOT_Integration_Testbench_Integration._L30;
  GUI_currentPositionInM = Ctxt_ROOT_Integration_Testbench_Integration._L31;
  GUI_currentVelocityInKmH = Ctxt_ROOT_Integration_Testbench_Integration._L32;
  Ctxt_ROOT_Integration_Testbench_Integration.debugTrainPositionNominal =
    Ctxt_ROOT_Integration_Testbench_Integration._L7;
  Ctxt_ROOT_Integration_Testbench_Integration.debugPermittedSpeed =
    Ctxt_ROOT_Integration_Testbench_Integration._L10;
  Ctxt_ROOT_Integration_Testbench_Integration.debugInterventionSpeed =
    Ctxt_ROOT_Integration_Testbench_Integration._L11;
  Ctxt_ROOT_Integration_Testbench_Integration.debugCurrentMode =
    Ctxt_ROOT_Integration_Testbench_Integration._L222;
  Ctxt_ROOT_Integration_Testbench_Integration.debugCurrentLevel =
    Ctxt_ROOT_Integration_Testbench_Integration._L238;
  Ctxt_ROOT_Integration_Testbench_Integration._L182 = (kcg_real)
      Ctxt_ROOT_Integration_Testbench_Integration._L8;
  GUI_TrainPositionDeltaMax = Ctxt_ROOT_Integration_Testbench_Integration._L182;
  Ctxt_ROOT_Integration_Testbench_Integration._L183 = (kcg_real)
      Ctxt_ROOT_Integration_Testbench_Integration._L9;
  GUI_TrainPositionDeltaMin = Ctxt_ROOT_Integration_Testbench_Integration._L183;
  Ctxt_ROOT_Integration_Testbench_Integration._L188 = 0.0;
  GUI_TrainPositionNominal = Ctxt_ROOT_Integration_Testbench_Integration._L188;
  GUI_timestamp = Ctxt_ROOT_Integration_Testbench_Integration._L23;
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(
    &Ctxt_ROOT_Integration_Testbench_Integration.debugMobileHwStatus,
    &Ctxt_ROOT_Integration_Testbench_Integration._L26);
  DMI_SingleMsgAckRequiredVisibility_toDysplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L153;
  kcg_copy_array_int_5(
    &DMI_IndexFixedMsg_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L191);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &DMI_level_data,
    &Ctxt_ROOT_Integration_Testbench_Integration._L192);
  DMI_IndexLevel_toDisplay = Ctxt_ROOT_Integration_Testbench_Integration._L193;
  kcg_copy_array_int_12(
    &DMI_ArrayLevelIndex_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L194);
  DMI_levelMenuVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L195;
  kcg_copy_array_char_30_5(
    &DMI_PlainText_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L203);
  kcg_copy_array_real_5(
    &DMI_Array_hh_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L204);
  kcg_copy_array_real_5(
    &DMI_Array_mm_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L205);
  DMI_isAuxiliarMsg_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L206;
  kcg_copy_array_bool_10(
    &DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L207);
  kcg_copy_array_int_10(
    &DMI_D_SPDI_SpeedChangeIndex_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L208);
  kcg_copy_array_real_10(
    &DMI_D_SPDI_SpeedChangePosition_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L209);
  kcg_copy_array_real_4(
    &DMI_D_PASP_Speeds_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L210);
  kcg_copy_array_real_4(
    &DMI_D_PASP_Distances_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L211);
  kcg_copy_array_bool_12(
    &DMI_D_GradientVisible_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L213);
  kcg_copy_tScale(
    &DMI_D_Scale_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L214);
  DMI_PlanningAreaVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration._L245;
  _25_noname = Ctxt_ROOT_Integration_Testbench_Integration._L6;
  Ctxt_ROOT_Integration_Testbench_Integration._L223 = DMI_TrainRN_Ack;
  _26_noname = Ctxt_ROOT_Integration_Testbench_Integration._L223;
  Ctxt_ROOT_Integration_Testbench_Integration._L224 = DMI_DriverID_Ack;
  _27_noname = Ctxt_ROOT_Integration_Testbench_Integration._L224;
  GUI_AFBActive = Ctxt_ROOT_Integration_Testbench_Integration._L230;
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toTIU,
    &Ctxt_ROOT_Integration_Testbench_Integration._L5);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRTM_Management,
    &Ctxt_ROOT_Integration_Testbench_Integration._L3);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &Ctxt_ROOT_Integration_Testbench_Integration.API_toRBC,
    &Ctxt_ROOT_Integration_Testbench_Integration._L2);
  kcg_copy_array_real_1(
    &DMI_D_PASP_IndicationMarker_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration._L212);
  DMI_ScrollDownEnableIndex = Ctxt_ROOT_Integration_Testbench_Integration._L246;
  DMI_ScrollUpEnableIndex = Ctxt_ROOT_Integration_Testbench_Integration._L247;
  kcg_copy_array_real_4(
    &DMI_localTime,
    &Ctxt_ROOT_Integration_Testbench_Integration._L250);
  DMI_InterpolatedDistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_InterpolatedDistanceToTarget_toDisplay;
  kcg_copy_array_int_5(
    &DMI_ArrayOfMsgIndex_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_ArrayOfMsgIndex_toDisplay);
  DMI_iconGroupIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_iconGroupIndex_toDisplay;
  DMI_TrainSpeed_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainSpeed_toDisplay;
  DMI_traindataValidWinVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_traindataValidWinVisibility_toDisplay;
  DMI_Vtarget_permVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vtarget_permVisibility_toDisplay;
  kcg_copy_array_real_12(
    &DMI_GradientsStart_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsStart_toDisplay);
  DMI_trainAirtightIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainAirtightIndex_toDisplay;
  DMI_SpeedDigitTwo_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitTwo_toDisplay;
  kcg_copy_array_int_9(
    &DMI_DriverID_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_DriverID_Display_toDisplay);
  DMI_Vinterv_Color_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vinterv_Color_toDisplay;
  DMI_DistanceToTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTarget_toDisplay;
  DMI_ModeSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_ModeSymbol_toDisplay;
  DMI_modeSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_modeSymbolAnnouncementIndex_toDisplay;
  DMI_ETCS_LevelSymbol_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_ETCS_LevelSymbol_toDisplay;
  kcg_copy_array_int_30(
    &DMI_ArrayButtonsEnabler_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_ArrayButtonsEnabler_toDisplay);
  DMI_trainBrakePerc_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainBrakePerc_toDisplay;
  DMI_VreleaseColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_VreleaseColor_toDisplay;
  DMI_SpeedPermitted_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedPermitted_toDisplay;
  DMI_trainCategoryIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainCategoryIndex_toDisplay;
  DMI_levelSymbolAnnouncementIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_levelSymbolAnnouncementIndex_toDisplay;
  DMI_TrainDataWindowVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainDataWindowVisibility_toDisplay;
  DMI_StatusSymbolBrake_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_StatusSymbolBrake_toDisplay;
  DMI_traindataYesNoIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_traindataYesNoIndex_toDisplay;
  DMI_vtarget_permColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_vtarget_permColor_toDisplay;
  kcg_copy_array_real_12(
    &DMI_GradientsEnd_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsEnd_toDisplay);
  kcg_copy_array_int_9(
    &DMI_TrainRN_Display_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainRN_Display_toDisplay);
  DMI_trainLoadingGougeIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainLoadingGougeIndex_toDisplay;
  DMI_SpeedDigitThree_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitThree_toDisplay;
  DMI_ModeSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_ModeSymbolVisibility_toDisplay;
  DMI_SpeedIntervention_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedIntervention_toDisplay;
  DMI_LevelSymbolVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_LevelSymbolVisibility_toDisplay;
  DMI_DistanceToTargetVisible_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTargetVisible_toDisplay;
  DMI_trainMaxspeed_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainMaxspeed_toDisplay;
  DMI_VtargetColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_VtargetColor_toDisplay;
  DMI_SpeedRelease_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedRelease_toDisplay;
  DMI_CloseButtonEnabler_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_CloseButtonEnabler_toDisplay;
  DMI_PointerColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_PointerColor_toDisplay;
  DMI_trainAxleloadIndex_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainAxleloadIndex_toDisplay;
  DMI_SpeedDigitOne_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedDigitOne_toDisplay;
  DMI_DistanceToTargetBarVisibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_DistanceToTargetBarVisibility_toDisplay;
  DMI_Vinterv_Visibility_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_Vinterv_Visibility_toDisplay;
  DMI_TrainPosition_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_TrainPosition_toDisplay;
  kcg_copy_array_real_12(
    &DMI_GradientsValue_toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_GradientsValue_toDisplay);
  DMI_trainLenght_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_trainLenght_toDisplay;
  DMI_VpermColor_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_VpermColor_toDisplay;
  DMI_SpeedTarget_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_SpeedTarget_toDisplay;
  kcg_copy_array_bool_15(
    &DMI_window_mask_visibility__toDisplay,
    &Ctxt_ROOT_Integration_Testbench_Integration.DMI_window_mask_visibility__toDisplay);
  DMI_openDesk_toDisplay =
    Ctxt_ROOT_Integration_Testbench_Integration.DMI_openDesk_toDisplay;
  Ctxt_ROOT_Integration_Testbench_Integration.init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ROOT_Integration_Testbench_Integration.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

