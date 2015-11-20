/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void manageTIU_input_init_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->storeTIU.train_status.valid = kcg_true;
  outC->storeTIU.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->storeTIU.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->storeTIU.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->storeTIU.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->storeTIU.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->storeTIU.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->storeTIU.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->storeTIU.brake_status.valid = kcg_true;
  outC->storeTIU.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->storeTIU.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->storeTIU.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->storeTIU.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->storeTIU.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->storeTIU.brake_pressure.valid = kcg_true;
  outC->storeTIU.brake_pressure.pressure = 0;
  outC->storeTIU.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->storeTIU.train_data_info.valid = kcg_true;
  outC->storeTIU.train_data_info.acknowledgedByDriver = kcg_true;
  outC->storeTIU.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->storeTIU.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->storeTIU.train_data_info.trainLength = 0;
  outC->storeTIU.train_data_info.brakePerctage = 0;
  outC->storeTIU.train_data_info.maxTrainSpeed = 0;
  outC->storeTIU.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->storeTIU.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->storeTIU.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->storeTIU.train_data_info.axleNumber = 0;
  outC->storeTIU.train_data_info.numberNationalSystems = 0;
  for (i = 0; i < 5; i++) {
    outC->storeTIU.train_data_info.nationSystems[i] = 0;
  }
  outC->storeTIU.train_data_info.numberTractionSystems = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->storeTIU.train_data_info.tractionSystem[i1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->storeTIU.train_data_info.tractionSystem[i1].nid_ctraction = 0;
  }
  outC->storeTIU.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->storeTIU.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->storeTIU.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->storeTIU.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->storeTIU.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->storeTIU.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->storeTIU.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->storeTIU.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->outTIUCurrentInfo.train_status.valid = kcg_true;
  outC->outTIUCurrentInfo.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.valid = kcg_true;
  outC->outTIUCurrentInfo.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_pressure.valid = kcg_true;
  outC->outTIUCurrentInfo.brake_pressure.pressure = 0;
  outC->outTIUCurrentInfo.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_data_info.valid = kcg_true;
  outC->outTIUCurrentInfo.train_data_info.acknowledgedByDriver = kcg_true;
  outC->outTIUCurrentInfo.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outTIUCurrentInfo.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outTIUCurrentInfo.train_data_info.trainLength = 0;
  outC->outTIUCurrentInfo.train_data_info.brakePerctage = 0;
  outC->outTIUCurrentInfo.train_data_info.maxTrainSpeed = 0;
  outC->outTIUCurrentInfo.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outTIUCurrentInfo.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->outTIUCurrentInfo.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  outC->outTIUCurrentInfo.train_data_info.axleNumber = 0;
  outC->outTIUCurrentInfo.train_data_info.numberNationalSystems = 0;
  for (i2 = 0; i2 < 5; i2++) {
    outC->outTIUCurrentInfo.train_data_info.nationSystems[i2] = 0;
  }
  outC->outTIUCurrentInfo.train_data_info.numberTractionSystems = 0;
  for (i3 = 0; i3 < 4; i3++) {
    outC->outTIUCurrentInfo.train_data_info.tractionSystem[i3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outTIUCurrentInfo.train_data_info.tractionSystem[i3].nid_ctraction =
      0;
  }
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->outTIUStatus.valid = kcg_true;
  outC->outTIUStatus.deskOpen = kcg_true;
  outC->outTIUStatus.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->outTIUStatus.activeCab = CabUndefined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageTIU_input_reset_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* input_from_TIU_API_Pkg::manageTIU_input */
void manageTIU_input_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::manageTIU_input::inTIUfromAPI */ TIU_Input_msg_API_TIU_Pkg *inTIUfromAPI,
  /* input_from_TIU_API_Pkg::manageTIU_input::evc_trainData */ trainData_T_TIU_Types_Pkg *evc_trainData,
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC)
{
  /* input_from_TIU_API_Pkg::manageTIU_input */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg op_call;
  /* input_from_TIU_API_Pkg::manageTIU_input */
  static kcg_bool ck_every;
  /* input_from_TIU_API_Pkg::manageTIU_input::storeTIU */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg last_storeTIU;
  /* input_from_TIU_API_Pkg::manageTIU_input::_L8 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L8;
  /* input_from_TIU_API_Pkg::manageTIU_input::_L1 */
  static TIU_Input_msg_API_TIU_Pkg _L1;
  /* input_from_TIU_API_Pkg::manageTIU_input::_L22 */
  static TIU_trainStatus_T_TIU_Types_Pkg _L22;
  /* input_from_TIU_API_Pkg::manageTIU_input::_L35 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L35;
  /* input_from_TIU_API_Pkg::manageTIU_input::_L36 */
  static trainData_T_TIU_Types_Pkg _L36;
  /* input_from_TIU_API_Pkg::manageTIU_input::_L37 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L37;
  /* input_from_TIU_API_Pkg::manageTIU_input::_L39 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L39;
  /* input_from_TIU_API_Pkg::manageTIU_input::_L40 */
  static kcg_bool _L40;
  /* input_from_TIU_API_Pkg::manageTIU_input::_L41 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L41;
  
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&_L1, inTIUfromAPI);
  _L40 = _L1.valid;
  ck_every = _L40;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L41, &_L1.info);
  /* last_init_ck_storeTIU */ if (outC->init) {
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &last_storeTIU,
      (Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *)
        &emptyTIUInfo_TIU_Types_Pkg);
  }
  else {
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &last_storeTIU,
      &outC->storeTIU);
  }
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L8, &last_storeTIU);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L36, evc_trainData);
  /* ck_manageTIU_input */ if (ck_every) {
    /* 1 */ mergeTIU_Info_input_from_TIU_API_Pkg(&_L41, &_L8, &_L36, &op_call);
  }
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &_L39,
    &last_storeTIU);
  /* ck_manageTIU_input */ if (ck_every) {
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L35, &op_call);
  }
  else {
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L35, &_L39);
  }
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->storeTIU,
    &_L35);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &_L37,
    &outC->storeTIU);
  /* 1 */ getTIUStatusFromData_input_from_TIU_API_Pkg(&_L37, &_L22);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->outTIUStatus, &_L22);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->outTIUCurrentInfo,
    &_L37);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTIU_input_input_from_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

