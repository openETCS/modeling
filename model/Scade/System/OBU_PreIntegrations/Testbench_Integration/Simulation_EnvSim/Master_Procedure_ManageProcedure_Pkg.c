/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"

void Master_Procedure_reset_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init3 = kcg_true;
  /* 1 */ SoM_NTC_SN_reset_SoMProcedure_Pkg(&outC->Context_1);
  /* 1 */ SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(&outC->_1_Context_1);
}

/* ManageProcedure_Pkg::Master_Procedure */
void Master_Procedure_ManageProcedure_Pkg(
  /* ManageProcedure_Pkg::Master_Procedure::statusDMI_from_DMI */DMI_EVC_status_T_DMI_Types_Pkg *statusDMI_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* ManageProcedure_Pkg::Master_Procedure::systemtime */T_internal_Type_Obu_BasicTypes_Pkg systemtime,
  /* ManageProcedure_Pkg::Master_Procedure::StatusModeandLevel_from_Level_and_Mode_Management */T_Mode_Level_Level_And_Mode_Types_Pkg *StatusModeandLevel_from_Level_and_Mode_Management,
  /* ManageProcedure_Pkg::Master_Procedure::mobileStatus */morcStatus_T_RCM_Session_Types_Pkg *mobileStatus,
  /* ManageProcedure_Pkg::Master_Procedure::cabStatus_from_TIU */TIU_trainStatus_T_TIU_Types_Pkg *cabStatus_from_TIU,
  /* ManageProcedure_Pkg::Master_Procedure::statusValid_Position_from_Position_Calculation */kcg_bool statusValid_Position_from_Position_Calculation,
  /* ManageProcedure_Pkg::Master_Procedure::status_DMIlevel_from_DMI */DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *status_DMIlevel_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::LevelValid_from_Level_and_Mode_Management */kcg_bool LevelValid_from_Level_and_Mode_Management,
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  static kcg_int i;
  static _43_SSM_TR_SM1 tmp;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train SM3_state_sel_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool Awakness_of_Train_weakb_clock_SM1;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_driver_selection_E10_E11_or_E12 */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Mobile_terminal_registration */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::SB */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_SB;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Acknowledgement_of_Train_Data_from_RBC */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Second_Validation_of_Train_Number_from_Driver */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Second_Validation_of_Train_Number_from_Driver */
  static kcg_bool br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Validation_of_Train_Data_from_Driver */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Acknowlege_of_Position_from_RBC */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::request_Level */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_request_Level;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waition_for_Driver_ID */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool br_2_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool br_3_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::NP */
  static kcg_bool br_1_guard_SM1_NP;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool last_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool last_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _41_SSM_ST_SM1 SM1_state_sel;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _41_SSM_ST_SM1 SM1_state_act;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level_NTC */
  static kcg_bool M_LEVEL_Level_NTC;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level3 */
  static kcg_bool M_LEVEL_Level3;
  /* ManageProcedure_Pkg::Master_Procedure::_L67 */
  static kcg_bool _L67;
  /* ManageProcedure_Pkg::Master_Procedure::_L262 */
  static kcg_bool _L262;
  
  outC->DMI_Entry_Request_to_DMI.system_clock = systemtime;
  br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
    (*cabStatus_from_TIU).deskOpen & (*cabStatus_from_TIU).valid;
  if (outC->init3) {
    last_sendingPositionReport_to_RBC = kcg_true;
    last_sendingTrainData_to_RBC = kcg_true;
    SM1_state_sel = SSM_st_NP_SM1;
    for (i = 0; i < 4; i++) {
      outC->_2_fby_tmp.items[i] = kcg_false;
      outC->fby_tmp.items[i] = kcg_false;
    }
    outC->_2_fby_tmp.idx = 0;
    outC->fby_tmp.idx = 0;
  }
  else {
    last_sendingTrainData_to_RBC = outC->sendingTrainData_to_RBC;
    last_sendingPositionReport_to_RBC = outC->sendingPositionReport_to_RBC;
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_NP_SM1 :
      br_1_guard_SM1_NP =
        br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number &
        ((*StatusModeandLevel_from_Level_and_Mode_Management).Mode ==
          M_MODE_Stand_By);
      if (br_1_guard_SM1_NP) {
        SM1_state_act = SSM_st_Awakness_of_Train_SM1;
      }
      else {
        SM1_state_act = SSM_st_NP_SM1;
      }
      br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver =
        br_1_guard_SM1_NP;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      br_1_guard_SM1_Awakness_of_Train =
        !br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
      if (br_1_guard_SM1_Awakness_of_Train) {
        SM1_state_act = SSM_st_NP_SM1;
      }
      else {
        SM1_state_act = SSM_st_Awakness_of_Train_SM1;
      }
      br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver =
        br_1_guard_SM1_Awakness_of_Train;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver =
        kcg_false;
      SM1_state_act = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver =
        kcg_false;
      SM1_state_act = SSM_st_SoM_NTC_SN_SM1;
      break;
    
  }
  _L262 = (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_0;
  br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC =
    (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_1;
  M_LEVEL_Level_NTC =
    (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_NTC_specified_by_NID_NTC;
  switch (SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      Awakness_of_Train_weakb_clock_SM1 = kcg_false;
      _L67 = kcg_false;
      br_2_guard_SM1_Awakness_of_Train = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      Awakness_of_Train_weakb_clock_SM1 = kcg_false;
      _L67 = kcg_false;
      br_2_guard_SM1_Awakness_of_Train = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      if (br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        SM3_state_sel_SM1_Awakness_of_Train =
          SSM_st_SB_SM1_Awakness_of_Train_SM3;
      }
      else {
        SM3_state_sel_SM1_Awakness_of_Train =
          outC->SM3_state_nxt_SM1_Awakness_of_Train;
      }
      switch (SM3_state_sel_SM1_Awakness_of_Train) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12 =
            LevelValid_from_Level_and_Mode_Management & (_L262 |
              br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC |
              M_LEVEL_Level_NTC);
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12) {
            br_2_guard_SM1_Awakness_of_Train = kcg_true;
          }
          else {
            br_2_guard_SM1_Awakness_of_Train = kcg_false;
          }
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_SB = kcg_true;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_SB) {
            _L67 = br_1_guard_SM1_Awakness_of_Train_SM3_SB;
          }
          else {
            _L67 = kcg_false;
          }
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver =
            (*statusDMI_from_DMI).DMI_TrainDataValidated;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver) {
            br_2_guard_SM1_Awakness_of_Train = kcg_true;
          }
          else {
            br_2_guard_SM1_Awakness_of_Train = kcg_false;
          }
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC =
            outC->_2_fby_tmp.items[outC->_2_fby_tmp.idx];
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC) {
            br_2_guard_SM1_Awakness_of_Train = kcg_true;
          }
          else {
            br_2_guard_SM1_Awakness_of_Train = kcg_false;
          }
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          _L67 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberFirstValidation &
            statusValid_Position_from_Position_Calculation;
          br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberFirstValidation &
            !statusValid_Position_from_Position_Calculation &
            !LevelValid_from_Level_and_Mode_Management;
          br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberFirstValidation &
            !statusValid_Position_from_Position_Calculation &
            LevelValid_from_Level_and_Mode_Management;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            br_2_guard_SM1_Awakness_of_Train = kcg_false;
          }
          else {
            br_1_guard_SM1_Awakness_of_Train_SM3_request_Level =
              br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
            if (br_1_guard_SM1_Awakness_of_Train_SM3_request_Level) {
              br_2_guard_SM1_Awakness_of_Train = kcg_false;
            }
            else if (br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
              br_2_guard_SM1_Awakness_of_Train = kcg_true;
            }
            else {
              br_2_guard_SM1_Awakness_of_Train = kcg_false;
            }
          }
          break;
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          _L67 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID =
            (*statusDMI_from_DMI).DMI_DriverIdValidated;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID) {
            Awakness_of_Train_weakb_clock_SM1 = kcg_true;
          }
          else {
            Awakness_of_Train_weakb_clock_SM1 = kcg_false;
          }
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        
      }
      break;
    case SSM_st_NP_SM1 :
      Awakness_of_Train_weakb_clock_SM1 = kcg_false;
      _L67 = kcg_false;
      br_2_guard_SM1_Awakness_of_Train = kcg_false;
      break;
    
  }
  br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
    (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_2;
  M_LEVEL_Level3 = (*StatusModeandLevel_from_Level_and_Mode_Management).level ==
    M_LEVEL_Level_3;
  switch (SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      _L262 = kcg_false;
      br_3_guard_SM1_Awakness_of_Train = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _L262 = kcg_false;
      br_3_guard_SM1_Awakness_of_Train = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      switch (SM3_state_sel_SM1_Awakness_of_Train) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC =
            outC->fby_tmp.items[outC->fby_tmp.idx];
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC) {
            br_3_guard_SM1_Awakness_of_Train = kcg_true;
          }
          else {
            br_3_guard_SM1_Awakness_of_Train = kcg_false;
          }
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberValidated &
            (br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number |
              M_LEVEL_Level3);
          br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver =
            (*statusDMI_from_DMI).DMI_TrainRunningNumberValidated & (_L262 |
              br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC |
              M_LEVEL_Level_NTC);
          _L262 = kcg_false;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            br_3_guard_SM1_Awakness_of_Train = kcg_false;
          }
          else if (br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            br_3_guard_SM1_Awakness_of_Train = kcg_true;
          }
          else {
            br_3_guard_SM1_Awakness_of_Train = kcg_false;
          }
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _L262 = kcg_false;
          }
          else if (br_1_guard_SM1_Awakness_of_Train_SM3_request_Level) {
            _L262 = kcg_true;
          }
          else {
            _L262 = kcg_false;
          }
          break;
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_3_guard_SM1_Awakness_of_Train = kcg_false;
          break;
        
      }
      break;
    case SSM_st_NP_SM1 :
      _L262 = kcg_false;
      br_3_guard_SM1_Awakness_of_Train = kcg_false;
      break;
    
  }
  outC->DMI_Entry_Request_to_DMI.valid = _L67 |
    Awakness_of_Train_weakb_clock_SM1 | br_2_guard_SM1_Awakness_of_Train |
    br_3_guard_SM1_Awakness_of_Train | _L262;
  if (_L67) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  }
  else if (Awakness_of_Train_weakb_clock_SM1) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Enter_revalidate_train_running_number_DMI_Types_Pkg;
  }
  else if (br_2_guard_SM1_Awakness_of_Train) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Validate_train_data_DMI_Types_Pkg;
  }
  else if (br_3_guard_SM1_Awakness_of_Train) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Show_main_window_DMI_Types_Pkg;
  }
  else if (_L262) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Enter_revalidate_ETCS_level_DMI_Types_Pkg;
  }
  else {
    outC->DMI_Entry_Request_to_DMI.entry_request = Spare_DMI_Types_Pkg;
  }
  switch (SM1_state_act) {
    case SSM_st_NP_SM1 :
      _L262 = kcg_false;
      _L67 = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      switch (SM3_state_sel_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_request_Level =
            br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number |
            M_LEVEL_Level3;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_request_Level) {
            _L67 = kcg_true;
          }
          else {
            _L67 = kcg_false;
          }
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          _L67 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration =
            (*mobileStatus).registration.status == mrs_registered_RCM_Types_Pkg;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
            _L262 = kcg_true;
          }
          else {
            _L262 = kcg_false;
          }
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          _L262 = kcg_false;
          _L67 = kcg_false;
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _L262 = kcg_false;
      _L67 = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      _L262 = kcg_false;
      _L67 = kcg_false;
      break;
    
  }
  if (_L67) {
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
      _L67;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.messageSource =
      msrc_OBU_Common_Types_Pkg;
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header,
      (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
        &cNID_BG_Radio_Header_ManageProcedure_Pkg);
    kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42,
      (P42_SessionManagement_T_Packet_Types_Pkg *)
        &cpacket42_to_MoRC_ManageProcedure_Pkg);
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.valid =
      _L67;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.q_dir =
      Q_DIR_Both_directions;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.nid_mn =
      cpacket45_nid_mn_to_MoRC_ManageProcedure_Pkg;
    kcg_copy_RBC_Id_T_Common_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC,
      (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_ManageProcedure_Pkg);
  }
  else if (_L262) {
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
      _L262;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.messageSource =
      msrc_OBU_Common_Types_Pkg;
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header,
      (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
        &cNID_BG_Radio_Header_ManageProcedure_Pkg);
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.valid =
      _L262;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_dir =
      Q_DIR_Both_directions;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_rbc =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.q_rbc;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_c =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.nid_c;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_rbc =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.nid_rbc;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_radio =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.nid_radio;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_sleepsession =
      cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg.q_sleepsession;
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45,
      (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
        &cpacket45_to_MoRC_ManageProcedure_Pkg);
    kcg_copy_RBC_Id_T_Common_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC,
      (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_ManageProcedure_Pkg);
  }
  else {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC,
      (radioManagementMessage_T_Common_Types_Pkg *)
        &cdefault_manageT_ManageProcedure_Pkg);
  }
  if (outC->init3) {
    outC->init3 = kcg_false;
    _L67 = kcg_false;
  }
  else {
    _L67 = outC->SM1_reset_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      if (_L67) {
        /* 1 */ SoM_NTC_SN_reset_SoMProcedure_Pkg(&outC->Context_1);
      }
      outC->powerUp_to_MoRC = kcg_false;
      outC->powerOff_to_MoRC = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      if (_L67) {
        /* 1 */
        SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(&outC->_1_Context_1);
      }
      outC->powerUp_to_MoRC = kcg_false;
      outC->powerOff_to_MoRC = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      outC->powerUp_to_MoRC = kcg_false;
      if (br_1_guard_SM1_Awakness_of_Train) {
        outC->powerOff_to_MoRC = kcg_true;
      }
      else {
        outC->powerOff_to_MoRC = kcg_false;
      }
      break;
    case SSM_st_NP_SM1 :
      outC->powerOff_to_MoRC = kcg_false;
      if (br_1_guard_SM1_NP) {
        outC->powerUp_to_MoRC = kcg_true;
      }
      else {
        outC->powerUp_to_MoRC = kcg_false;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->SM1_reset_nxt = kcg_false;
      /* 1 */
      SoM_NTC_SN_SoMProcedure_Pkg(
        StatusModeandLevel_from_Level_and_Mode_Management,
        &outC->Context_1);
      outC->SM1_state_nxt = SSM_st_SoM_NTC_SN_SM1;
      outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      outC->start_ack_to_TIU = outC->Context_1.start_ack_to_TIU;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      /* 1 */
      SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
        Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
        StatusModeandLevel_from_Level_and_Mode_Management,
        &outC->_1_Context_1);
      outC->SM1_reset_nxt = kcg_false;
      outC->SM1_state_nxt = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      outC->statusstartofmissionongoing_to_MoRC = kcg_false;
      outC->start_ack_to_TIU = outC->_1_Context_1.start_ack_to_TIU;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        outC->_1_Context_1.request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        outC->_1_Context_1.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      switch (SM1_state_sel) {
        case SSM_st_NP_SM1 :
          if (br_1_guard_SM1_NP) {
            tmp = SSM_TR_NP_1_SM1;
          }
          else {
            tmp = _42_SSM_TR_no_trans_SM1;
          }
          break;
        case SSM_st_Awakness_of_Train_SM1 :
          if (br_1_guard_SM1_Awakness_of_Train) {
            tmp = SSM_TR_Awakness_of_Train_1_SM1;
          }
          else {
            tmp = _42_SSM_TR_no_trans_SM1;
          }
          break;
        case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
          tmp = _42_SSM_TR_no_trans_SM1;
          break;
        case SSM_st_SoM_NTC_SN_SM1 :
          tmp = _42_SSM_TR_no_trans_SM1;
          break;
        
      }
      Awakness_of_Train_weakb_clock_SM1 = tmp != _42_SSM_TR_no_trans_SM1;
      switch (SM3_state_sel_SM1_Awakness_of_Train) {
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3;
          }
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3;
          }
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_SB) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_SB_SM1_Awakness_of_Train_SM3;
          }
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          SM3_state_act_SM1_Awakness_of_Train =
            SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
            outC->sendingTrainData_to_RBC = kcg_true;
          }
          else {
            if (br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
              SM3_state_act_SM1_Awakness_of_Train =
                SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
            }
            else {
              SM3_state_act_SM1_Awakness_of_Train =
                SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
            }
            outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          }
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          _L262 = (*mobileStatus).session.phase ==
            sp_maintaining_RCM_Session_Types_Pkg;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (_L262) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3;
            outC->sendingPositionReport_to_RBC = kcg_true;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3;
            outC->sendingPositionReport_to_RBC =
              last_sendingPositionReport_to_RBC;
          }
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_request_Level) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
          }
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
          }
          else if (br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3;
          }
          else if (br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3;
          }
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
          }
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          outC->sendingPositionReport_to_RBC =
            last_sendingPositionReport_to_RBC;
          break;
        
      }
      switch (SM3_state_act_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_SB_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3;
          break;
        
      }
      if (Awakness_of_Train_weakb_clock_SM1) {
        outC->SM1_reset_nxt = kcg_false;
        outC->SM1_state_nxt = SSM_st_Awakness_of_Train_SM1;
      }
      else {
        br_3_guard_SM1_Awakness_of_Train =
          (*statusDMI_from_DMI).DMI_StartReceived & M_LEVEL_Level_NTC;
        br_2_guard_SM1_Awakness_of_Train =
          (*statusDMI_from_DMI).DMI_StartReceived &
          (br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number |
            M_LEVEL_Level3);
        if (br_2_guard_SM1_Awakness_of_Train) {
          outC->SM1_reset_nxt = kcg_true;
          outC->SM1_state_nxt = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
        }
        else {
          outC->SM1_reset_nxt = br_3_guard_SM1_Awakness_of_Train;
          if (br_3_guard_SM1_Awakness_of_Train) {
            outC->SM1_state_nxt = SSM_st_SoM_NTC_SN_SM1;
          }
          else {
            outC->SM1_state_nxt = SSM_st_Awakness_of_Train_SM1;
          }
        }
      }
      outC->statusstartofmissionongoing_to_MoRC = kcg_true;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_false;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        kcg_false;
      outC->start_ack_to_TIU = kcg_false;
      outC->init = kcg_false;
      break;
    case SSM_st_NP_SM1 :
      outC->SM1_reset_nxt = kcg_false;
      outC->SM1_state_nxt = SSM_st_NP_SM1;
      outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      outC->statusstartofmissionongoing_to_MoRC = kcg_false;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_false;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        kcg_false;
      outC->start_ack_to_TIU = kcg_false;
      break;
    
  }
  outC->fby_tmp.items[outC->fby_tmp.idx] = outC->sendingTrainData_to_RBC;
  outC->fby_tmp.idx = (outC->fby_tmp.idx + 1) % 4;
  outC->_2_fby_tmp.items[outC->_2_fby_tmp.idx] =
    outC->sendingPositionReport_to_RBC;
  outC->_2_fby_tmp.idx = (outC->_2_fby_tmp.idx + 1) % 4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Master_Procedure_ManageProcedure_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

