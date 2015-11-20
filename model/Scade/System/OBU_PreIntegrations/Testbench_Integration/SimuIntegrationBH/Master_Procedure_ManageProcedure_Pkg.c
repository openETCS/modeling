/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Master_Procedure_init_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->init2 = kcg_true;
  outC->sendingTrainData_to_RBC = kcg_true;
  outC->sendingPositionReport_to_RBC = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_NP_SM1;
  outC->SM3_state_nxt_SM1_Awakness_of_Train =
    SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
  outC->SM3_reset_act_SM1_Awakness_of_Train = kcg_true;
  outC->SM3_reset_nxt_SM1_Awakness_of_Train = kcg_true;
  outC->fby__L212.idx = 0;
  for (i = 0; i < 4; i++) {
    outC->fby__L212.items[i] = kcg_true;
  }
  outC->fby__L214.idx = 0;
  for (i1 = 0; i1 < 4; i1++) {
    outC->fby__L214.items[i1] = kcg_true;
  }
  outC->start_ack_to_TIU = kcg_true;
  outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management = kcg_true;
  outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_true;
  outC->powerOff_to_MoRC = kcg_true;
  outC->statusstartofmissionongoing_to_MoRC = kcg_true;
  outC->powerUp_to_MoRC = kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.messageSource =
    msrc_undefined_Common_Types_Pkg;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.radioDevice =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_message =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_train =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_lrbg =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_train_reference =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_em =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_sr =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_sh_rqst =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_ref =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_emergencystop =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_c =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_rbc =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_radio =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.nid_mn =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.nid_c =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.rbc_id =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.sendingRBC.device_id =
    0;
  outC->DMI_Entry_Request_to_DMI.valid = kcg_true;
  outC->DMI_Entry_Request_to_DMI.system_clock = 0;
  outC->DMI_Entry_Request_to_DMI.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  /* 1 */ SoM_NTC_SN_init_SoMProcedure_Pkg(&outC->_1_Context_1);
  /* 1 */ SoM_SR_FS_OS_LS_SH_SN_UN_init_SoMProcedure_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Master_Procedure_reset_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init2 = kcg_true;
  /* 1 */ SoM_NTC_SN_reset_SoMProcedure_Pkg(&outC->_1_Context_1);
  /* 1 */ SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ManageProcedure_Pkg::Master_Procedure */
void Master_Procedure_ManageProcedure_Pkg(
  /* ManageProcedure_Pkg::Master_Procedure::statusDMI_from_DMI */ DMI_EVC_status_T_DMI_Types_Pkg *statusDMI_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */ kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* ManageProcedure_Pkg::Master_Procedure::systemtime */ T_internal_Type_Obu_BasicTypes_Pkg systemtime,
  /* ManageProcedure_Pkg::Master_Procedure::StatusModeandLevel_from_Level_and_Mode_Management */ T_Mode_Level_Level_And_Mode_Types_Pkg *StatusModeandLevel_from_Level_and_Mode_Management,
  /* ManageProcedure_Pkg::Master_Procedure::mobileStatus */ morcStatus_T_RCM_Session_Types_Pkg *mobileStatus,
  /* ManageProcedure_Pkg::Master_Procedure::cabStatus_from_TIU */ TIU_trainStatus_T_TIU_Types_Pkg *cabStatus_from_TIU,
  /* ManageProcedure_Pkg::Master_Procedure::statusValid_Position_from_Position_Calculation */ kcg_bool statusValid_Position_from_Position_Calculation,
  /* ManageProcedure_Pkg::Master_Procedure::status_DMIlevel_from_DMI */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *status_DMIlevel_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::LevelValid_from_Level_and_Mode_Management */ kcg_bool LevelValid_from_Level_and_Mode_Management,
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _28_SM1_fired;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool _27_SM1_reset_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 _26_SM1_state_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _25_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _24_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::start_ack_to_TIU */
  static kcg_bool _23_start_ack_to_TIU;
  /* ManageProcedure_Pkg::Master_Procedure::request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management */
  static kcg_bool _22_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  /* ManageProcedure_Pkg::Master_Procedure::request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management */
  static kcg_bool _21_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  /* ManageProcedure_Pkg::Master_Procedure::statusstartofmissionongoing_to_MoRC */
  static kcg_bool _20_statusstartofmissionongoing_to_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::NP::_L2 */
  static kcg_bool _L2_SM1_NP;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::NP::_L3 */
  static kcg_bool _L3_SM1_NP;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::NP::_L1 */
  static kcg_bool _L1_SM1_NP;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _19_SM1_fired;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool _18_SM1_reset_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 _17_SM1_state_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _16_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _15_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::start_ack_to_TIU */
  static kcg_bool _14_start_ack_to_TIU;
  /* ManageProcedure_Pkg::Master_Procedure::request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management */
  static kcg_bool _13_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  /* ManageProcedure_Pkg::Master_Procedure::request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management */
  static kcg_bool _12_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  /* ManageProcedure_Pkg::Master_Procedure::statusstartofmissionongoing_to_MoRC */
  static kcg_bool _11_statusstartofmissionongoing_to_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::_L5 */
  static kcg_bool _L5_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::_L3 */
  static kcg_bool _L3_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::_L2 */
  static kcg_bool _L2_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _142_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _143_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool SM3_reset_prv_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool SM3_reset_sel_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _144_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train SM3_state_sel_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _141_SM3_clock_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train SM3_clock_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool Awakness_of_Train_weakb_clock_SM1;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_driver_selection_E10_E11_or_E12 */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_driver_selection_E10_E11_or_E12 */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _68_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _69_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Mobile_terminal_registration */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Mobile_terminal_registration */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _70_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _71_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _72_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _73_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _74_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::SB */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_SB;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::SB */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_SB;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _75_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _76_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _77_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _78_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _79_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _80_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _81_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _82_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _83_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _84_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Acknowledgement_of_Train_Data_from_RBC */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Acknowledgement_of_Train_Data_from_RBC */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _85_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _86_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _87_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _88_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _89_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _126_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _125_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Second_Validation_of_Train_Number_from_Driver */
  static kcg_bool br_2_clock_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Second_Validation_of_Train_Number_from_Driver */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Second_Validation_of_Train_Number_from_Driver */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Second_Validation_of_Train_Number_from_Driver */
  static kcg_bool br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _90_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _91_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _92_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _93_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _94_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Validation_of_Train_Data_from_Driver */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Validation_of_Train_Data_from_Driver */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _95_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _96_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _97_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _98_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _99_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Acknowlege_of_Position_from_RBC */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Acknowlege_of_Position_from_RBC */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _100_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _101_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _102_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _103_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _104_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _128_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _127_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_RBC_Establishment */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_RBC_Establishment */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _105_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _106_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _107_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _108_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _109_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::request_Level */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_request_Level;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::request_Level */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_request_Level;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _110_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _111_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _112_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _113_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _114_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_2_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::first_Validation_for_Train_Number */
  static kcg_bool br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _115_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _116_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _117_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _118_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _119_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waition_for_Driver_ID */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waition_for_Driver_ID */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _120_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _121_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _122_SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _123_SM3_reset_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _124_SM3_fired_strong_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _35_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _36_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _37_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _38_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _39_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _40_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _41_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _42_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _43_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _44_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _45_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _46_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _47_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _48_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _49_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _50_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _51_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _52_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _53_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _54_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _55_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _56_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _57_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _58_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _59_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _60_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _61_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _62_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _63_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _64_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_ST_SM3_SM1_Awakness_of_Train _65_SM3_state_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static kcg_bool _66_SM3_reset_nxt_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
  static SSM_TR_SM3_SM1_Awakness_of_Train _67_SM3_fired_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool br_2_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool br_3_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 _29_SM1_state_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool _30_SM1_reset_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _31_SM1_fired;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 _32_SM1_state_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool _33_SM1_reset_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _34_SM1_fired;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _10_SM1_fired;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool _9_SM1_reset_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 _8_SM1_state_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool _7_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool _6_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::start_ack_to_TIU */
  static kcg_bool _5_start_ack_to_TIU;
  /* ManageProcedure_Pkg::Master_Procedure::request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management */
  static kcg_bool _4_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  /* ManageProcedure_Pkg::Master_Procedure::request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management */
  static kcg_bool _3_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  /* ManageProcedure_Pkg::Master_Procedure::statusstartofmissionongoing_to_MoRC */
  static kcg_bool _2_statusstartofmissionongoing_to_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::SoM_L2_3_FS_SR_OS_LS_SH::_L13 */
  static kcg_bool _L13_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::SoM_L2_3_FS_SR_OS_LS_SH::_L12 */
  static kcg_bool _L12_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::SoM_L2_3_FS_SR_OS_LS_SH::_L10 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L10_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::SoM_L2_3_FS_SR_OS_LS_SH::_L9 */
  static kcg_bool _L9_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::SoM_L2_3_FS_SR_OS_LS_SH::_L4 */
  static kcg_bool _L4_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::SoM_L2_3_FS_SR_OS_LS_SH::_L5 */
  static kcg_bool _L5_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 SM1_fired;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 SM1_state_nxt;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::start_ack_to_TIU */
  static kcg_bool start_ack_to_TIU;
  /* ManageProcedure_Pkg::Master_Procedure::request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management */
  static kcg_bool request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  /* ManageProcedure_Pkg::Master_Procedure::request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management */
  static kcg_bool request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  /* ManageProcedure_Pkg::Master_Procedure::statusstartofmissionongoing_to_MoRC */
  static kcg_bool statusstartofmissionongoing_to_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::SoM_NTC_SN::_L3 */
  static kcg_bool _L3_SM1_SoM_NTC_SN;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::SoM_NTC_SN::_L2 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L2_SM1_SoM_NTC_SN;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _137_SM1_fired_strong;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool _136_SM1_reset_act;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 _135_SM1_state_act;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::NP */
  static kcg_bool br_1_guard_SM1_NP;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::NP */
  static kcg_bool br_1_clock_SM1_NP;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _134_SM1_fired_strong;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool _133_SM1_reset_act;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 _132_SM1_state_act;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool br_1_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */
  static kcg_bool br_1_clock_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _131_SM1_fired_strong;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool _130_SM1_reset_act;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 _129_SM1_state_act;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 SM1_fired_strong;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool SM1_reset_act;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 SM1_state_act;
  /* ManageProcedure_Pkg::Master_Procedure::request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management */
  static kcg_bool last_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  /* ManageProcedure_Pkg::Master_Procedure::request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management */
  static kcg_bool last_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  /* ManageProcedure_Pkg::Master_Procedure::statusstartofmissionongoing_to_MoRC */
  static kcg_bool last_statusstartofmissionongoing_to_MoRC;
  static kcg_bool noname;
  static kcg_bool _138_noname;
  static Q_DIR _139_noname;
  static kcg_bool _140_noname;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */
  static kcg_bool last_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */
  static kcg_bool last_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI */
  static kcg_bool requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::requestTrainNumber_to_DMI */
  static kcg_bool requestTrainNumber_to_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::requestSoM_to_DMI */
  static kcg_bool requestSoM_to_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::power_Off_to_MoRC */
  static kcg_bool power_Off_to_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::requestLevelStaus_from_Level_Management */
  static kcg_bool requestLevelStaus_from_Level_Management;
  /* ManageProcedure_Pkg::Master_Procedure::requestTrainData_to_DMI */
  static kcg_bool requestTrainData_to_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::power_Up_to_MoRC */
  static kcg_bool power_Up_to_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::requestStartMobileTerminalRegistration_to_MoRC */
  static kcg_bool requestStartMobileTerminalRegistration_to_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::requestStartRBCSession_to_MoRC */
  static kcg_bool requestStartRBCSession_to_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::requestDriverID_to_DMI */
  static kcg_bool requestDriverID_to_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 SM1_state_sel;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _61_SSM_ST_SM1 _147_SM1_state_act;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool SM1_reset_sel;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static kcg_bool SM1_reset_prv;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _146_SM1_fired_strong;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */
  static _63_SSM_TR_SM1 _145_SM1_fired;
  /* ManageProcedure_Pkg::Master_Procedure::statusCabOpen_from_TIU */
  static kcg_bool statusCabOpen_from_TIU;
  /* ManageProcedure_Pkg::Master_Procedure::statusTrainNumberfirstvalidation_from_DMI */
  static kcg_bool statusTrainNumberfirstvalidation_from_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::statusValid_position_from_Positon_Calculation */
  static kcg_bool statusValid_position_from_Positon_Calculation;
  /* ManageProcedure_Pkg::Master_Procedure::statusMobileRegistrated_from_MoRC */
  static kcg_bool statusMobileRegistrated_from_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::statusRBCSessionEstablishmen_from_MoRC */
  static kcg_bool statusRBCSessionEstablishmen_from_MoRC;
  /* ManageProcedure_Pkg::Master_Procedure::statusDriverID_from_DMI */
  static kcg_bool statusDriverID_from_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::statusTrainData_from_DMI */
  static kcg_bool statusTrainData_from_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::statusTrainNumbersecondvalidation_from_DMI */
  static kcg_bool statusTrainNumbersecondvalidation_from_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::statusStart_from_DMI */
  static kcg_bool statusStart_from_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::statusAcknowledgementPositionReport_from_RBC */
  static kcg_bool statusAcknowledgementPositionReport_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::statusAcknowledgementofTrainData_from_RBC */
  static kcg_bool statusAcknowledgementofTrainData_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::M_Mode_Stand_By */
  static kcg_bool M_Mode_Stand_By;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level_NTC */
  static kcg_bool M_LEVEL_Level_NTC;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level2 */
  static kcg_bool M_LEVEL_Level2;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level3 */
  static kcg_bool M_LEVEL_Level3;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level0 */
  static kcg_bool M_LEVEL_Level0;
  /* ManageProcedure_Pkg::Master_Procedure::M_LEVEL_Level1 */
  static kcg_bool M_LEVEL_Level1;
  /* ManageProcedure_Pkg::Master_Procedure::statusLevel_from_DMI */
  static kcg_bool statusLevel_from_DMI;
  /* ManageProcedure_Pkg::Master_Procedure::Mode_and_Level_is_valid_from_Mode_and_Level_Management */
  static kcg_bool Mode_and_Level_is_valid_from_Mode_and_Level_Management;
  /* ManageProcedure_Pkg::Master_Procedure::_L29 */
  static radioManagementMessage_T_Common_Types_Pkg _L29;
  /* ManageProcedure_Pkg::Master_Procedure::_L37 */
  static MsgSource_T_Common_Types_Pkg _L37;
  /* ManageProcedure_Pkg::Master_Procedure::_L39 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L39;
  /* ManageProcedure_Pkg::Master_Procedure::_L40 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L40;
  /* ManageProcedure_Pkg::Master_Procedure::_L47 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L47;
  /* ManageProcedure_Pkg::Master_Procedure::_L49 */
  static Q_DIR _L49;
  /* ManageProcedure_Pkg::Master_Procedure::_L50 */
  static NID_MN _L50;
  /* ManageProcedure_Pkg::Master_Procedure::_L61 */
  static radioManagementMessage_T_Common_Types_Pkg _L61;
  /* ManageProcedure_Pkg::Master_Procedure::_L63 */
  static MsgSource_T_Common_Types_Pkg _L63;
  /* ManageProcedure_Pkg::Master_Procedure::_L65 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L65;
  /* ManageProcedure_Pkg::Master_Procedure::_L67 */
  static kcg_bool _L67;
  /* ManageProcedure_Pkg::Master_Procedure::_L69 */
  static kcg_bool _L69;
  /* ManageProcedure_Pkg::Master_Procedure::_L70 */
  static radioManagementMessage_T_Common_Types_Pkg _L70;
  /* ManageProcedure_Pkg::Master_Procedure::_L71 */
  static morcStatus_T_RCM_Session_Types_Pkg _L71;
  /* ManageProcedure_Pkg::Master_Procedure::_L82 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L82;
  /* ManageProcedure_Pkg::Master_Procedure::_L83 */
  static kcg_bool _L83;
  /* ManageProcedure_Pkg::Master_Procedure::_L84 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L84;
  /* ManageProcedure_Pkg::Master_Procedure::_L85 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L85;
  /* ManageProcedure_Pkg::Master_Procedure::_L86 */
  static kcg_bool _L86;
  /* ManageProcedure_Pkg::Master_Procedure::_L91 */
  static kcg_bool _L91;
  /* ManageProcedure_Pkg::Master_Procedure::_L96 */
  static kcg_bool _L96;
  /* ManageProcedure_Pkg::Master_Procedure::_L97 */
  static TIU_trainStatus_T_TIU_Types_Pkg _L97;
  /* ManageProcedure_Pkg::Master_Procedure::_L128 */
  static kcg_bool _L128;
  /* ManageProcedure_Pkg::Master_Procedure::_L130 */
  static kcg_bool _L130;
  /* ManageProcedure_Pkg::Master_Procedure::_L131 */
  static kcg_bool _L131;
  /* ManageProcedure_Pkg::Master_Procedure::_L147 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L147;
  /* ManageProcedure_Pkg::Master_Procedure::_L149 */
  static Q_DIR _L149;
  /* ManageProcedure_Pkg::Master_Procedure::_L151 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L151;
  /* ManageProcedure_Pkg::Master_Procedure::_L153 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L153;
  /* ManageProcedure_Pkg::Master_Procedure::_L154 */
  static radioManagementMessage_T_Common_Types_Pkg _L154;
  /* ManageProcedure_Pkg::Master_Procedure::_L193 */
  static kcg_bool _L193;
  /* ManageProcedure_Pkg::Master_Procedure::_L192 */
  static Q_DIR _L192;
  /* ManageProcedure_Pkg::Master_Procedure::_L191 */
  static Q_RBC _L191;
  /* ManageProcedure_Pkg::Master_Procedure::_L190 */
  static NID_C _L190;
  /* ManageProcedure_Pkg::Master_Procedure::_L189 */
  static NID_RBC _L189;
  /* ManageProcedure_Pkg::Master_Procedure::_L188 */
  static NID_RADIO _L188;
  /* ManageProcedure_Pkg::Master_Procedure::_L187 */
  static Q_SLEEPSESSION _L187;
  /* ManageProcedure_Pkg::Master_Procedure::_L194 */
  static radioManagementMessage_T_Common_Types_Pkg _L194;
  /* ManageProcedure_Pkg::Master_Procedure::_L213 */
  static kcg_bool _L213;
  /* ManageProcedure_Pkg::Master_Procedure::_L212 */
  static kcg_bool _L212;
  /* ManageProcedure_Pkg::Master_Procedure::_L209 */
  static kcg_bool _L209;
  /* ManageProcedure_Pkg::Master_Procedure::_L216 */
  static kcg_bool _L216;
  /* ManageProcedure_Pkg::Master_Procedure::_L214 */
  static kcg_bool _L214;
  /* ManageProcedure_Pkg::Master_Procedure::_L217 */
  static kcg_bool _L217;
  /* ManageProcedure_Pkg::Master_Procedure::_L218 */
  static kcg_bool _L218;
  /* ManageProcedure_Pkg::Master_Procedure::_L219 */
  static kcg_bool _L219;
  /* ManageProcedure_Pkg::Master_Procedure::_L220 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L220;
  /* ManageProcedure_Pkg::Master_Procedure::_L221 */
  static M_MODE _L221;
  /* ManageProcedure_Pkg::Master_Procedure::_L222 */
  static kcg_bool _L222;
  /* ManageProcedure_Pkg::Master_Procedure::_L223 */
  static M_MODE _L223;
  /* ManageProcedure_Pkg::Master_Procedure::_L226 */
  static M_LEVEL _L226;
  /* ManageProcedure_Pkg::Master_Procedure::_L227 */
  static kcg_bool _L227;
  /* ManageProcedure_Pkg::Master_Procedure::_L228 */
  static M_LEVEL _L228;
  /* ManageProcedure_Pkg::Master_Procedure::_L230 */
  static kcg_bool _L230;
  /* ManageProcedure_Pkg::Master_Procedure::_L231 */
  static kcg_bool _L231;
  /* ManageProcedure_Pkg::Master_Procedure::_L232 */
  static M_LEVEL _L232;
  /* ManageProcedure_Pkg::Master_Procedure::_L233 */
  static M_LEVEL _L233;
  /* ManageProcedure_Pkg::Master_Procedure::_L234 */
  static kcg_bool _L234;
  /* ManageProcedure_Pkg::Master_Procedure::_L235 */
  static kcg_bool _L235;
  /* ManageProcedure_Pkg::Master_Procedure::_L236 */
  static M_LEVEL _L236;
  /* ManageProcedure_Pkg::Master_Procedure::_L237 */
  static M_LEVEL _L237;
  /* ManageProcedure_Pkg::Master_Procedure::_L261 */
  static kcg_bool _L261;
  /* ManageProcedure_Pkg::Master_Procedure::_L260 */
  static kcg_bool _L260;
  /* ManageProcedure_Pkg::Master_Procedure::_L259 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L259;
  /* ManageProcedure_Pkg::Master_Procedure::_L258 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L258;
  /* ManageProcedure_Pkg::Master_Procedure::_L257 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L257;
  /* ManageProcedure_Pkg::Master_Procedure::_L256 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L256;
  /* ManageProcedure_Pkg::Master_Procedure::_L255 */
  static kcg_bool _L255;
  /* ManageProcedure_Pkg::Master_Procedure::_L254 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L254;
  /* ManageProcedure_Pkg::Master_Procedure::_L253 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L253;
  /* ManageProcedure_Pkg::Master_Procedure::_L252 */
  static kcg_bool _L252;
  /* ManageProcedure_Pkg::Master_Procedure::_L250 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L250;
  /* ManageProcedure_Pkg::Master_Procedure::_L249 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L249;
  /* ManageProcedure_Pkg::Master_Procedure::_L248 */
  static kcg_bool _L248;
  /* ManageProcedure_Pkg::Master_Procedure::_L247 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L247;
  /* ManageProcedure_Pkg::Master_Procedure::_L246 */
  static kcg_bool _L246;
  /* ManageProcedure_Pkg::Master_Procedure::_L245 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L245;
  /* ManageProcedure_Pkg::Master_Procedure::_L244 */
  static kcg_bool _L244;
  /* ManageProcedure_Pkg::Master_Procedure::_L243 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L243;
  /* ManageProcedure_Pkg::Master_Procedure::_L242 */
  static kcg_bool _L242;
  /* ManageProcedure_Pkg::Master_Procedure::_L241 */
  static kcg_bool _L241;
  /* ManageProcedure_Pkg::Master_Procedure::_L240 */
  static kcg_bool _L240;
  /* ManageProcedure_Pkg::Master_Procedure::_L262 */
  static kcg_bool _L262;
  /* ManageProcedure_Pkg::Master_Procedure::_L263 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L263;
  /* ManageProcedure_Pkg::Master_Procedure::_L264 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L264;
  /* ManageProcedure_Pkg::Master_Procedure::_L265 */
  static DMI_List_Entry_Request_T_DMI_Types_Pkg _L265;
  /* ManageProcedure_Pkg::Master_Procedure::_L271 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L271;
  /* ManageProcedure_Pkg::Master_Procedure::_L272 */
  static DMI_Request_T_DMI_Types_Pkg _L272;
  /* ManageProcedure_Pkg::Master_Procedure::_L277 */
  static kcg_bool _L277;
  /* ManageProcedure_Pkg::Master_Procedure::_L278 */
  static DMI_Request_T_DMI_Types_Pkg _L278;
  /* ManageProcedure_Pkg::Master_Procedure::_L279 */
  static kcg_bool _L279;
  /* ManageProcedure_Pkg::Master_Procedure::_L280 */
  static kcg_bool _L280;
  /* ManageProcedure_Pkg::Master_Procedure::_L282 */
  static kcg_bool _L282;
  /* ManageProcedure_Pkg::Master_Procedure::_L283 */
  static kcg_bool _L283;
  /* ManageProcedure_Pkg::Master_Procedure::_L290 */
  static RBC_Id_T_Common_Types_Pkg _L290;
  /* ManageProcedure_Pkg::Master_Procedure::_L303 */
  static RBC_Id_T_Common_Types_Pkg _L303;
  /* ManageProcedure_Pkg::Master_Procedure::_L304 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L304;
  /* ManageProcedure_Pkg::Master_Procedure::_L305 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L305;
  /* ManageProcedure_Pkg::Master_Procedure::_L306 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L306;
  
  /* init_SM1 */ if (outC->init2) {
    SM1_state_sel = SSM_st_NP_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _129_SM1_state_act = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      SM1_state_act = SSM_st_SoM_NTC_SN_SM1;
      break;
    
  }
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&_L97, cabStatus_from_TIU);
  _L218 = _L97.deskOpen;
  _L219 = _L97.valid;
  _L96 = _L218 & _L219;
  statusCabOpen_from_TIU = _L96;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_Awakness_of_Train_SM1 :
      br_1_guard_SM1_Awakness_of_Train = !statusCabOpen_from_TIU;
      if (br_1_guard_SM1_Awakness_of_Train) {
        _132_SM1_state_act = SSM_st_NP_SM1;
      }
      else {
        _132_SM1_state_act = SSM_st_Awakness_of_Train_SM1;
      }
      break;
    
  }
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &_L220,
    StatusModeandLevel_from_Level_and_Mode_Management);
  _L221 = _L220.Mode;
  _L223 = M_MODE_Stand_By;
  _L222 = _L221 == _L223;
  M_Mode_Stand_By = _L222;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_NP_SM1 :
      br_1_guard_SM1_NP = statusCabOpen_from_TIU & M_Mode_Stand_By;
      if (br_1_guard_SM1_NP) {
        _135_SM1_state_act = SSM_st_Awakness_of_Train_SM1;
      }
      else {
        _135_SM1_state_act = SSM_st_NP_SM1;
      }
      _147_SM1_state_act = _135_SM1_state_act;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      _147_SM1_state_act = _132_SM1_state_act;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _147_SM1_state_act = _129_SM1_state_act;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      _147_SM1_state_act = SM1_state_act;
      break;
    
  }
  /* init_SM1 */ if (outC->init2) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_NP_SM1 :
      _136_SM1_reset_act = br_1_guard_SM1_NP;
      outC->SM1_reset_act = _136_SM1_reset_act;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      _133_SM1_reset_act = br_1_guard_SM1_Awakness_of_Train;
      outC->SM1_reset_act = _133_SM1_reset_act;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _130_SM1_reset_act = kcg_false;
      outC->SM1_reset_act = _130_SM1_reset_act;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      SM1_reset_act = kcg_false;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      /* init_SM3 */ if (outC->init) {
        SM3_state_sel_SM1_Awakness_of_Train =
          SSM_st_SB_SM1_Awakness_of_Train_SM3;
      }
      else {
        SM3_state_sel_SM1_Awakness_of_Train =
          outC->SM3_state_nxt_SM1_Awakness_of_Train;
      }
      _141_SM3_clock_SM1_Awakness_of_Train =
        SM3_state_sel_SM1_Awakness_of_Train;
      break;
    
  }
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L256, statusDMI_from_DMI);
  _L246 = _L256.DMI_TrainRunningNumberFirstValidation;
  statusTrainNumberfirstvalidation_from_DMI = _L246;
  _L130 = statusValid_Position_from_Position_Calculation;
  statusValid_position_from_Positon_Calculation = _L130;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            statusTrainNumberfirstvalidation_from_DMI &
            statusValid_position_from_Positon_Calculation;
          br_1_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
          break;
        
      }
      break;
    
  }
  _L282 = LevelValid_from_Level_and_Mode_Management;
  Mode_and_Level_is_valid_from_Mode_and_Level_Management = _L282;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            statusTrainNumberfirstvalidation_from_DMI &
            !statusValid_position_from_Positon_Calculation &
            !Mode_and_Level_is_valid_from_Mode_and_Level_Management;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          }
          else {
            br_2_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
              br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
            /* cb_anon_sm */ if (br_2_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
              requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_true;
            }
            else {
              requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
            }
          }
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI = kcg_false;
      break;
    
  }
  _L241 = _L256.DMI_DriverIdValidated;
  statusDriverID_from_DMI = _L241;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      requestTrainNumber_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID =
            statusDriverID_from_DMI;
          br_1_clock_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID) {
            requestTrainNumber_to_DMI = kcg_true;
          }
          else {
            requestTrainNumber_to_DMI = kcg_false;
          }
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          requestTrainNumber_to_DMI = kcg_false;
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      requestTrainNumber_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      requestTrainNumber_to_DMI = kcg_false;
      break;
    
  }
  _L248 = _L256.DMI_TrainRunningNumberValidated;
  statusTrainNumbersecondvalidation_from_DMI = _L248;
  _L226 = _L220.level;
  _L232 = M_LEVEL_Level_2;
  _L230 = _L226 == _L232;
  M_LEVEL_Level2 = _L230;
  _L233 = M_LEVEL_Level_3;
  _L231 = _L226 == _L233;
  M_LEVEL_Level3 = _L231;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver =
            statusTrainNumbersecondvalidation_from_DMI & (M_LEVEL_Level2 |
              M_LEVEL_Level3);
          br_1_clock_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver =
            br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
          break;
        
      }
      break;
    
  }
  _L236 = M_LEVEL_Level_0;
  _L234 = _L226 == _L236;
  M_LEVEL_Level0 = _L234;
  _L237 = M_LEVEL_Level_1;
  _L235 = _L226 == _L237;
  M_LEVEL_Level1 = _L235;
  _L228 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L227 = _L226 == _L228;
  M_LEVEL_Level_NTC = _L227;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver =
            statusTrainNumbersecondvalidation_from_DMI & (M_LEVEL_Level0 |
              M_LEVEL_Level1 | M_LEVEL_Level_NTC);
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
          }
          else {
            br_2_clock_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver =
              br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
          }
          break;
        
      }
      break;
    
  }
  _L216 = kcg_false;
  /* 2 */ if (outC->init2) {
    /* 2 */ for (i1 = 0; i1 < 4; i1++) {
      outC->fby__L214.items[i1] = _L216;
    }
    outC->fby__L214.idx = 0;
  }
  _L214 = outC->fby__L214.items[outC->fby__L214.idx];
  statusAcknowledgementofTrainData_from_RBC = _L214;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      requestSoM_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            requestSoM_to_DMI = kcg_false;
          }
          else /* cb_anon_sm */ if (br_2_clock_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            requestSoM_to_DMI = kcg_true;
          }
          else {
            requestSoM_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC =
            statusAcknowledgementofTrainData_from_RBC;
          br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC) {
            requestSoM_to_DMI = kcg_true;
          }
          else {
            requestSoM_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          requestSoM_to_DMI = kcg_false;
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      requestSoM_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      requestSoM_to_DMI = kcg_false;
      break;
    
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_NP_SM1 :
      power_Off_to_MoRC = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      br_1_clock_SM1_Awakness_of_Train = br_1_guard_SM1_Awakness_of_Train;
      /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train) {
        power_Off_to_MoRC = kcg_true;
      }
      else {
        power_Off_to_MoRC = kcg_false;
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      power_Off_to_MoRC = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      power_Off_to_MoRC = kcg_false;
      break;
    
  }
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      requestLevelStaus_from_Level_Management = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            requestLevelStaus_from_Level_Management = kcg_true;
          }
          else {
            requestLevelStaus_from_Level_Management = kcg_false;
          }
          br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
            statusTrainNumberfirstvalidation_from_DMI &
            !statusValid_position_from_Positon_Calculation &
            Mode_and_Level_is_valid_from_Mode_and_Level_Management;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
          }
          else /* cb_anon_sm */ if (br_2_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
          }
          else {
            br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number =
              br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
          }
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          requestLevelStaus_from_Level_Management = kcg_false;
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      requestLevelStaus_from_Level_Management = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      requestLevelStaus_from_Level_Management = kcg_false;
      break;
    
  }
  _L213 = kcg_false;
  /* 1 */ if (outC->init2) {
    /* 1 */ for (i = 0; i < 4; i++) {
      outC->fby__L212.items[i] = _L213;
    }
    outC->fby__L212.idx = 0;
  }
  _L212 = outC->fby__L212.items[outC->fby__L212.idx];
  statusAcknowledgementPositionReport_from_RBC = _L212;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC =
            statusAcknowledgementPositionReport_from_RBC;
          br_1_clock_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC =
            br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC;
          break;
        
      }
      break;
    
  }
  _L244 = _L256.DMI_TrainDataValidated;
  statusTrainData_from_DMI = _L244;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      requestTrainData_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            requestTrainData_to_DMI = kcg_false;
          }
          else /* cb_anon_sm */ if (br_2_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            requestTrainData_to_DMI = kcg_false;
          }
          else /* cb_anon_sm */ if (br_3_clock_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            requestTrainData_to_DMI = kcg_true;
          }
          else {
            requestTrainData_to_DMI = kcg_false;
          }
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC) {
            requestTrainData_to_DMI = kcg_true;
          }
          else {
            requestTrainData_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver =
            statusTrainData_from_DMI;
          br_1_clock_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver =
            br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver) {
            requestTrainData_to_DMI = kcg_true;
          }
          else {
            requestTrainData_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          requestTrainData_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12 =
            Mode_and_Level_is_valid_from_Mode_and_Level_Management &
            (M_LEVEL_Level0 | M_LEVEL_Level1 | M_LEVEL_Level_NTC);
          br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12 =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12) {
            requestTrainData_to_DMI = kcg_true;
          }
          else {
            requestTrainData_to_DMI = kcg_false;
          }
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      requestTrainData_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      requestTrainData_to_DMI = kcg_false;
      break;
    
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_NP_SM1 :
      br_1_clock_SM1_NP = br_1_guard_SM1_NP;
      /* cb_anon_sm */ if (br_1_clock_SM1_NP) {
        power_Up_to_MoRC = kcg_true;
      }
      else {
        power_Up_to_MoRC = kcg_false;
      }
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      power_Up_to_MoRC = kcg_false;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      power_Up_to_MoRC = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      power_Up_to_MoRC = kcg_false;
      break;
    
  }
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_request_Level = M_LEVEL_Level2 |
            M_LEVEL_Level3;
          br_1_clock_SM1_Awakness_of_Train_SM3_request_Level =
            br_1_guard_SM1_Awakness_of_Train_SM3_request_Level;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_request_Level) {
            requestStartMobileTerminalRegistration_to_MoRC = kcg_true;
          }
          else {
            requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          }
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      requestStartMobileTerminalRegistration_to_MoRC = kcg_false;
      break;
    
  }
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L71, mobileStatus);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(&_L84, &_L71.registration);
  _L304 = _L84.status;
  _L82 = mrs_registered_RCM_Types_Pkg;
  _L83 = _L304 == _L82;
  statusMobileRegistrated_from_MoRC = _L83;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      requestStartRBCSession_to_MoRC = kcg_false;
      requestDriverID_to_DMI = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_SB = kcg_true;
          br_1_clock_SM1_Awakness_of_Train_SM3_SB =
            br_1_guard_SM1_Awakness_of_Train_SM3_SB;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_SB) {
            requestDriverID_to_DMI = kcg_true;
          }
          else {
            requestDriverID_to_DMI = kcg_false;
          }
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration =
            statusMobileRegistrated_from_MoRC;
          br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
            requestStartRBCSession_to_MoRC = kcg_true;
          }
          else {
            requestStartRBCSession_to_MoRC = kcg_false;
          }
          requestDriverID_to_DMI = kcg_false;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          requestStartRBCSession_to_MoRC = kcg_false;
          requestDriverID_to_DMI = kcg_false;
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      requestStartRBCSession_to_MoRC = kcg_false;
      requestDriverID_to_DMI = kcg_false;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      requestStartRBCSession_to_MoRC = kcg_false;
      requestDriverID_to_DMI = kcg_false;
      break;
    
  }
  /* init_SM1 */ if (outC->init2) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_NP_SM1 :
      if (br_1_guard_SM1_NP) {
        _137_SM1_fired_strong = SSM_TR_NP_1_SM1;
      }
      else {
        _137_SM1_fired_strong = _62_SSM_TR_no_trans_SM1;
      }
      _146_SM1_fired_strong = _137_SM1_fired_strong;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      if (br_1_guard_SM1_Awakness_of_Train) {
        _134_SM1_fired_strong = SSM_TR_Awakness_of_Train_1_SM1;
      }
      else {
        _134_SM1_fired_strong = _62_SSM_TR_no_trans_SM1;
      }
      _146_SM1_fired_strong = _134_SM1_fired_strong;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _131_SM1_fired_strong = _62_SSM_TR_no_trans_SM1;
      _146_SM1_fired_strong = _131_SM1_fired_strong;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      SM1_fired_strong = _62_SSM_TR_no_trans_SM1;
      _146_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  last_statusstartofmissionongoing_to_MoRC =
    outC->statusstartofmissionongoing_to_MoRC;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      _L1_SM1_NP = kcg_false;
      _20_statusstartofmissionongoing_to_MoRC = _L1_SM1_NP;
      outC->statusstartofmissionongoing_to_MoRC =
        _20_statusstartofmissionongoing_to_MoRC;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      _L2_SM1_Awakness_of_Train = kcg_true;
      _11_statusstartofmissionongoing_to_MoRC = _L2_SM1_Awakness_of_Train;
      outC->statusstartofmissionongoing_to_MoRC =
        _11_statusstartofmissionongoing_to_MoRC;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _L12_SM1_SoM_L2_3_FS_SR_OS_LS_SH = kcg_false;
      _2_statusstartofmissionongoing_to_MoRC = _L12_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
      outC->statusstartofmissionongoing_to_MoRC =
        _2_statusstartofmissionongoing_to_MoRC;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      statusstartofmissionongoing_to_MoRC =
        last_statusstartofmissionongoing_to_MoRC;
      outC->statusstartofmissionongoing_to_MoRC =
        statusstartofmissionongoing_to_MoRC;
      break;
    
  }
  last_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
    outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _L9_SM1_SoM_L2_3_FS_SR_OS_LS_SH =
        Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management;
      kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
        &_L10_SM1_SoM_L2_3_FS_SR_OS_LS_SH,
        StatusModeandLevel_from_Level_and_Mode_Management);
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        last_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      break;
    
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      if (SM1_reset_sel) {
        /* 1 */
        SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(&outC->Context_1);
      }
      break;
    
  }
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      _L3_SM1_NP = kcg_false;
      _21_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = _L3_SM1_NP;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        _21_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      _L5_SM1_Awakness_of_Train = kcg_false;
      _12_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        _L5_SM1_Awakness_of_Train;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        _12_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      /* 1 */
      SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
        _L9_SM1_SoM_L2_3_FS_SR_OS_LS_SH,
        &_L10_SM1_SoM_L2_3_FS_SR_OS_LS_SH,
        &outC->Context_1);
      _L4_SM1_SoM_L2_3_FS_SR_OS_LS_SH =
        outC->Context_1.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      _L5_SM1_SoM_L2_3_FS_SR_OS_LS_SH =
        outC->Context_1.request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      _L13_SM1_SoM_L2_3_FS_SR_OS_LS_SH = outC->Context_1.start_ack_to_TIU;
      _3_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        _L4_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        _3_request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      break;
    
  }
  last_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
    outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      _L2_SM1_NP = kcg_false;
      _22_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        _L2_SM1_NP;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        _22_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      _L3_SM1_Awakness_of_Train = kcg_false;
      _13_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        _L3_SM1_Awakness_of_Train;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        _13_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _4_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        _L5_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        _4_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        last_request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
        &_L2_SM1_SoM_NTC_SN,
        StatusModeandLevel_from_Level_and_Mode_Management);
      break;
    
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_SoM_NTC_SN_SM1 :
      if (SM1_reset_sel) {
        /* 1 */ SoM_NTC_SN_reset_SoMProcedure_Pkg(&outC->_1_Context_1);
      }
      break;
    
  }
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      _23_start_ack_to_TIU = kcg_false;
      outC->start_ack_to_TIU = _23_start_ack_to_TIU;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      _14_start_ack_to_TIU = kcg_false;
      outC->start_ack_to_TIU = _14_start_ack_to_TIU;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _5_start_ack_to_TIU = _L13_SM1_SoM_L2_3_FS_SR_OS_LS_SH;
      outC->start_ack_to_TIU = _5_start_ack_to_TIU;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      /* 1 */
      SoM_NTC_SN_SoMProcedure_Pkg(&_L2_SM1_SoM_NTC_SN, &outC->_1_Context_1);
      _L3_SM1_SoM_NTC_SN = outC->_1_Context_1.start_ack_to_TIU;
      start_ack_to_TIU = _L3_SM1_SoM_NTC_SN;
      outC->start_ack_to_TIU = start_ack_to_TIU;
      break;
    
  }
  /* last_init_ck_sendingPositionReport_to_RBC */ if (outC->init2) {
    last_sendingPositionReport_to_RBC = kcg_true;
  }
  else {
    last_sendingPositionReport_to_RBC = outC->sendingPositionReport_to_RBC;
  }
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          _100_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          _95_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          _90_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          _85_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          _80_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          _75_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          _70_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          _68_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _6_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      break;
    
  }
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L305, &_L71.session);
  _L306 = _L305.phase;
  _L85 = sp_maintaining_RCM_Session_Types_Pkg;
  _L86 = _L306 == _L85;
  statusRBCSessionEstablishmen_from_MoRC = _L86;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      _24_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      outC->sendingPositionReport_to_RBC = _24_sendingPositionReport_to_RBC;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          _120_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          _15_sendingPositionReport_to_RBC = _120_sendingPositionReport_to_RBC;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          _115_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          _15_sendingPositionReport_to_RBC = _115_sendingPositionReport_to_RBC;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          _110_sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
          _15_sendingPositionReport_to_RBC = _110_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            statusRBCSessionEstablishmen_from_MoRC;
          br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment;
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment) {
            _128_sendingPositionReport_to_RBC = kcg_true;
            _105_sendingPositionReport_to_RBC =
              _128_sendingPositionReport_to_RBC;
          }
          else {
            _127_sendingPositionReport_to_RBC =
              last_sendingPositionReport_to_RBC;
            _105_sendingPositionReport_to_RBC =
              _127_sendingPositionReport_to_RBC;
          }
          _15_sendingPositionReport_to_RBC = _105_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          _15_sendingPositionReport_to_RBC = _100_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          _15_sendingPositionReport_to_RBC = _95_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          _15_sendingPositionReport_to_RBC = _90_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          _15_sendingPositionReport_to_RBC = _85_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          _15_sendingPositionReport_to_RBC = _80_sendingPositionReport_to_RBC;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          _15_sendingPositionReport_to_RBC = _75_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          _15_sendingPositionReport_to_RBC = _70_sendingPositionReport_to_RBC;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          _15_sendingPositionReport_to_RBC = _68_sendingPositionReport_to_RBC;
          break;
        
      }
      outC->sendingPositionReport_to_RBC = _15_sendingPositionReport_to_RBC;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->sendingPositionReport_to_RBC = _6_sendingPositionReport_to_RBC;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->sendingPositionReport_to_RBC = sendingPositionReport_to_RBC;
      break;
    
  }
  /* last_init_ck_sendingTrainData_to_RBC */ if (outC->init2) {
    last_sendingTrainData_to_RBC = kcg_true;
  }
  else {
    last_sendingTrainData_to_RBC = outC->sendingTrainData_to_RBC;
  }
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      _25_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->sendingTrainData_to_RBC = _25_sendingTrainData_to_RBC;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          _121_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _121_sendingTrainData_to_RBC;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          _116_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _116_sendingTrainData_to_RBC;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          _111_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _111_sendingTrainData_to_RBC;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          _106_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _106_sendingTrainData_to_RBC;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          _101_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _101_sendingTrainData_to_RBC;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          _96_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _96_sendingTrainData_to_RBC;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          /* cb_anon_sm */ if (br_1_clock_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            _126_sendingTrainData_to_RBC = kcg_true;
            _91_sendingTrainData_to_RBC = _126_sendingTrainData_to_RBC;
          }
          else {
            _125_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
            _91_sendingTrainData_to_RBC = _125_sendingTrainData_to_RBC;
          }
          _16_sendingTrainData_to_RBC = _91_sendingTrainData_to_RBC;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          _86_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _86_sendingTrainData_to_RBC;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          _81_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _81_sendingTrainData_to_RBC;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          _76_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _76_sendingTrainData_to_RBC;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          _71_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _71_sendingTrainData_to_RBC;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          _69_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          _16_sendingTrainData_to_RBC = _69_sendingTrainData_to_RBC;
          break;
        
      }
      outC->sendingTrainData_to_RBC = _16_sendingTrainData_to_RBC;
      Awakness_of_Train_weakb_clock_SM1 = _146_SM1_fired_strong !=
        _62_SSM_TR_no_trans_SM1;
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      _7_sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->sendingTrainData_to_RBC = _7_sendingTrainData_to_RBC;
      _8_SM1_state_nxt = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->sendingTrainData_to_RBC = sendingTrainData_to_RBC;
      SM1_state_nxt = SSM_st_SoM_NTC_SN_SM1;
      break;
    
  }
  _L242 = _L256.DMI_StartReceived;
  statusStart_from_DMI = _L242;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_NP_SM1 :
      _26_SM1_state_nxt = SSM_st_NP_SM1;
      outC->SM1_state_nxt = _26_SM1_state_nxt;
      _27_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _27_SM1_reset_nxt;
      _28_SM1_fired = _146_SM1_fired_strong;
      _145_SM1_fired = _28_SM1_fired;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      /* strong_fired_Awakness_of_Train */ if (Awakness_of_Train_weakb_clock_SM1) {
        _32_SM1_state_nxt = SSM_st_Awakness_of_Train_SM1;
        _17_SM1_state_nxt = _32_SM1_state_nxt;
      }
      else {
        br_2_guard_SM1_Awakness_of_Train = statusStart_from_DMI &
          (M_LEVEL_Level2 | M_LEVEL_Level3);
        br_3_guard_SM1_Awakness_of_Train = statusStart_from_DMI &
          M_LEVEL_Level_NTC;
        if (br_2_guard_SM1_Awakness_of_Train) {
          _29_SM1_state_nxt = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
        }
        else if (br_3_guard_SM1_Awakness_of_Train) {
          _29_SM1_state_nxt = SSM_st_SoM_NTC_SN_SM1;
        }
        else {
          _29_SM1_state_nxt = SSM_st_Awakness_of_Train_SM1;
        }
        _17_SM1_state_nxt = _29_SM1_state_nxt;
      }
      outC->SM1_state_nxt = _17_SM1_state_nxt;
      /* strong_fired_Awakness_of_Train */ if (Awakness_of_Train_weakb_clock_SM1) {
        _33_SM1_reset_nxt = kcg_false;
        _18_SM1_reset_nxt = _33_SM1_reset_nxt;
      }
      else {
        if (br_2_guard_SM1_Awakness_of_Train) {
          _30_SM1_reset_nxt = kcg_true;
        }
        else {
          _30_SM1_reset_nxt = br_3_guard_SM1_Awakness_of_Train;
        }
        _18_SM1_reset_nxt = _30_SM1_reset_nxt;
      }
      outC->SM1_reset_nxt = _18_SM1_reset_nxt;
      /* strong_fired_Awakness_of_Train */ if (Awakness_of_Train_weakb_clock_SM1) {
        _34_SM1_fired = _146_SM1_fired_strong;
        _19_SM1_fired = _34_SM1_fired;
      }
      else {
        if (br_2_guard_SM1_Awakness_of_Train) {
          _31_SM1_fired = SSM_TR_Awakness_of_Train_2_SM1;
        }
        else if (br_3_guard_SM1_Awakness_of_Train) {
          _31_SM1_fired = SSM_TR_Awakness_of_Train_3_SM1;
        }
        else {
          _31_SM1_fired = _62_SSM_TR_no_trans_SM1;
        }
        _19_SM1_fired = _31_SM1_fired;
      }
      _145_SM1_fired = _19_SM1_fired;
      /* init_SM3 */ if (outC->init) {
        SM3_reset_sel_SM1_Awakness_of_Train = kcg_false;
      }
      else {
        SM3_reset_sel_SM1_Awakness_of_Train =
          outC->SM3_reset_nxt_SM1_Awakness_of_Train;
      }
      /* init_SM3 */ if (outC->init) {
        SM3_reset_prv_SM1_Awakness_of_Train = kcg_false;
      }
      else {
        SM3_reset_prv_SM1_Awakness_of_Train =
          outC->SM3_reset_act_SM1_Awakness_of_Train;
      }
      /* cb_SM3 */ switch (_141_SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID) {
            _122_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3;
          }
          else {
            _122_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _122_SM3_state_act_SM1_Awakness_of_Train;
          _123_SM3_reset_act_SM1_Awakness_of_Train =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _123_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID) {
            _124_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_Waition_for_Driver_ID_1_SM3_SM1_Awakness_of_Train;
          }
          else {
            _124_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _124_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _117_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
          }
          else if (br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _117_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3;
          }
          else if (br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _117_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            _117_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _117_SM3_state_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _118_SM3_reset_act_SM1_Awakness_of_Train = kcg_true;
          }
          else if (br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _118_SM3_reset_act_SM1_Awakness_of_Train = kcg_true;
          }
          else {
            _118_SM3_reset_act_SM1_Awakness_of_Train =
              br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number;
          }
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _118_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _119_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_first_Validation_for_Train_Number_1_SM3_SM1_Awakness_of_Train;
          }
          else if (br_2_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _119_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_first_Validation_for_Train_Number_2_SM3_SM1_Awakness_of_Train;
          }
          else if (br_3_guard_SM1_Awakness_of_Train_SM3_first_Validation_for_Train_Number) {
            _119_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_first_Validation_for_Train_Number_3_SM3_SM1_Awakness_of_Train;
          }
          else {
            _119_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _119_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_request_Level) {
            _112_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3;
          }
          else {
            _112_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _112_SM3_state_act_SM1_Awakness_of_Train;
          _113_SM3_reset_act_SM1_Awakness_of_Train =
            br_1_guard_SM1_Awakness_of_Train_SM3_request_Level;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _113_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_request_Level) {
            _114_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_request_Level_1_SM3_SM1_Awakness_of_Train;
          }
          else {
            _114_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _114_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment) {
            _107_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          else {
            _107_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _107_SM3_state_act_SM1_Awakness_of_Train;
          _108_SM3_reset_act_SM1_Awakness_of_Train =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _108_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment) {
            _109_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_Waiting_for_RBC_Establishment_1_SM3_SM1_Awakness_of_Train;
          }
          else {
            _109_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _109_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC) {
            _102_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            _102_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _102_SM3_state_act_SM1_Awakness_of_Train;
          _103_SM3_reset_act_SM1_Awakness_of_Train =
            br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _103_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC) {
            _104_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_Acknowlege_of_Position_from_RBC_1_SM3_SM1_Awakness_of_Train;
          }
          else {
            _104_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _104_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver) {
            _97_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            _97_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _97_SM3_state_act_SM1_Awakness_of_Train;
          _98_SM3_reset_act_SM1_Awakness_of_Train =
            br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _98_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver) {
            _99_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_Validation_of_Train_Data_from_Driver_1_SM3_SM1_Awakness_of_Train;
          }
          else {
            _99_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _99_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            _92_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          else if (br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            _92_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            _92_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _92_SM3_state_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            _93_SM3_reset_act_SM1_Awakness_of_Train = kcg_true;
          }
          else {
            _93_SM3_reset_act_SM1_Awakness_of_Train =
              br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver;
          }
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _93_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            _94_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_Second_Validation_of_Train_Number_from_Driver_1_SM3_SM1_Awakness_of_Train;
          }
          else if (br_2_guard_SM1_Awakness_of_Train_SM3_Second_Validation_of_Train_Number_from_Driver) {
            _94_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_Second_Validation_of_Train_Number_from_Driver_2_SM3_SM1_Awakness_of_Train;
          }
          else {
            _94_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _94_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC) {
            _87_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            _87_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _87_SM3_state_act_SM1_Awakness_of_Train;
          _88_SM3_reset_act_SM1_Awakness_of_Train =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _88_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC) {
            _89_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_1_SM3_SM1_Awakness_of_Train;
          }
          else {
            _89_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _89_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          _82_SM3_state_act_SM1_Awakness_of_Train =
            SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _82_SM3_state_act_SM1_Awakness_of_Train;
          _83_SM3_reset_act_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _83_SM3_reset_act_SM1_Awakness_of_Train;
          _84_SM3_fired_strong_SM1_Awakness_of_Train =
            SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _84_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_SB) {
            _77_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
          }
          else {
            _77_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_SB_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _77_SM3_state_act_SM1_Awakness_of_Train;
          _78_SM3_reset_act_SM1_Awakness_of_Train =
            br_1_guard_SM1_Awakness_of_Train_SM3_SB;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _78_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_SB) {
            _79_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_SB_1_SM3_SM1_Awakness_of_Train;
          }
          else {
            _79_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _79_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
            _72_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3;
          }
          else {
            _72_SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            _72_SM3_state_act_SM1_Awakness_of_Train;
          _73_SM3_reset_act_SM1_Awakness_of_Train =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            _73_SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
            _74_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_Waiting_for_Mobile_terminal_registration_1_SM3_SM1_Awakness_of_Train;
          }
          else {
            _74_SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            _74_SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3;
          }
          _144_SM3_state_act_SM1_Awakness_of_Train =
            SM3_state_act_SM1_Awakness_of_Train;
          SM3_reset_act_SM1_Awakness_of_Train =
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12;
          outC->SM3_reset_act_SM1_Awakness_of_Train =
            SM3_reset_act_SM1_Awakness_of_Train;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_driver_selection_E10_E11_or_E12) {
            SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_Waiting_for_driver_selection_E10_E11_or_E12_1_SM3_SM1_Awakness_of_Train;
          }
          else {
            SM3_fired_strong_SM1_Awakness_of_Train =
              SSM_TR_no_trans_SM3_SM1_Awakness_of_Train;
          }
          _143_SM3_fired_strong_SM1_Awakness_of_Train =
            SM3_fired_strong_SM1_Awakness_of_Train;
          break;
        
      }
      SM3_clock_SM1_Awakness_of_Train =
        _144_SM3_state_act_SM1_Awakness_of_Train;
      /* cb_SM3 */ switch (SM3_clock_SM1_Awakness_of_Train) {
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          _65_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _65_SM3_state_nxt_SM1_Awakness_of_Train;
          _66_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _66_SM3_reset_nxt_SM1_Awakness_of_Train;
          _67_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _67_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          _62_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _62_SM3_state_nxt_SM1_Awakness_of_Train;
          _63_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _63_SM3_reset_nxt_SM1_Awakness_of_Train;
          _64_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _64_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          _59_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _59_SM3_state_nxt_SM1_Awakness_of_Train;
          _60_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _60_SM3_reset_nxt_SM1_Awakness_of_Train;
          _61_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _61_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          _56_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _56_SM3_state_nxt_SM1_Awakness_of_Train;
          _57_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _57_SM3_reset_nxt_SM1_Awakness_of_Train;
          _58_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _58_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          _53_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _53_SM3_state_nxt_SM1_Awakness_of_Train;
          _54_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _54_SM3_reset_nxt_SM1_Awakness_of_Train;
          _55_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _55_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          _50_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _50_SM3_state_nxt_SM1_Awakness_of_Train;
          _51_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _51_SM3_reset_nxt_SM1_Awakness_of_Train;
          _52_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _52_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          _47_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _47_SM3_state_nxt_SM1_Awakness_of_Train;
          _48_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _48_SM3_reset_nxt_SM1_Awakness_of_Train;
          _49_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _49_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          _44_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _44_SM3_state_nxt_SM1_Awakness_of_Train;
          _45_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _45_SM3_reset_nxt_SM1_Awakness_of_Train;
          _46_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _46_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          _41_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _41_SM3_state_nxt_SM1_Awakness_of_Train;
          _42_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _42_SM3_reset_nxt_SM1_Awakness_of_Train;
          _43_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _43_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          _38_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_SB_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _38_SM3_state_nxt_SM1_Awakness_of_Train;
          _39_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _39_SM3_reset_nxt_SM1_Awakness_of_Train;
          _40_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _40_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          _35_SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            _35_SM3_state_nxt_SM1_Awakness_of_Train;
          _36_SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            _36_SM3_reset_nxt_SM1_Awakness_of_Train;
          _37_SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            _37_SM3_fired_SM1_Awakness_of_Train;
          break;
        case SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3 :
          SM3_state_nxt_SM1_Awakness_of_Train =
            SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3;
          outC->SM3_state_nxt_SM1_Awakness_of_Train =
            SM3_state_nxt_SM1_Awakness_of_Train;
          SM3_reset_nxt_SM1_Awakness_of_Train = kcg_false;
          outC->SM3_reset_nxt_SM1_Awakness_of_Train =
            SM3_reset_nxt_SM1_Awakness_of_Train;
          SM3_fired_SM1_Awakness_of_Train =
            _143_SM3_fired_strong_SM1_Awakness_of_Train;
          _142_SM3_fired_SM1_Awakness_of_Train =
            SM3_fired_SM1_Awakness_of_Train;
          break;
        
      }
      break;
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->SM1_state_nxt = _8_SM1_state_nxt;
      _9_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _9_SM1_reset_nxt;
      _10_SM1_fired = _146_SM1_fired_strong;
      _145_SM1_fired = _10_SM1_fired;
      break;
    case SSM_st_SoM_NTC_SN_SM1 :
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _146_SM1_fired_strong;
      _145_SM1_fired = SM1_fired;
      break;
    
  }
  _L67 = requestStartMobileTerminalRegistration_to_MoRC;
  _L37 = msrc_OBU_Common_Types_Pkg;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L39,
    (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
      &cNID_BG_Radio_Header_ManageProcedure_Pkg);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &_L40,
    (P42_SessionManagement_T_Packet_Types_Pkg *)
      &cpacket42_to_MoRC_ManageProcedure_Pkg);
  _L49 = Q_DIR_Both_directions;
  _L50 = cpacket45_nid_mn_to_MoRC_ManageProcedure_Pkg;
  _L47.valid = _L67;
  _L47.q_dir = _L49;
  _L47.nid_mn = _L50;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &_L290,
    (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_ManageProcedure_Pkg);
  _L29.valid = _L67;
  _L29.messageSource = _L37;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L29.Radio_Common_Header,
    &_L39);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&_L29.p42, &_L40);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L29.p45, &_L47);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L29.sendingRBC, &_L290);
  _L69 = requestStartRBCSession_to_MoRC;
  _L63 = msrc_OBU_Common_Types_Pkg;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L65,
    (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
      &cNID_BG_Radio_Header_ManageProcedure_Pkg);
  _L149 = Q_DIR_Both_directions;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &_L153,
    (P42_SessionManagement_T_Packet_Types_Pkg *)
      &cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg);
  _L191 = _L153.q_rbc;
  _L190 = _L153.nid_c;
  _L189 = _L153.nid_rbc;
  _L188 = _L153.nid_radio;
  _L187 = _L153.q_sleepsession;
  _L147.valid = _L69;
  _L147.q_dir = _L149;
  _L147.q_rbc = _L191;
  _L147.nid_c = _L190;
  _L147.nid_rbc = _L189;
  _L147.nid_radio = _L188;
  _L147.q_sleepsession = _L187;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_L151,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cpacket45_to_MoRC_ManageProcedure_Pkg);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &_L303,
    (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC_ManageProcedure_Pkg);
  _L61.valid = _L69;
  _L61.messageSource = _L63;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L61.Radio_Common_Header,
    &_L65);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&_L61.p42, &_L147);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_L61.p45, &_L151);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L61.sendingRBC, &_L303);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &_L194,
    (radioManagementMessage_T_Common_Types_Pkg *)
      &cdefault_manageT_ManageProcedure_Pkg);
  /* 5 */ if (_L69) {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(&_L154, &_L61);
  }
  else {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(&_L154, &_L194);
  }
  /* 3 */ if (_L67) {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(&_L70, &_L29);
  }
  else {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(&_L70, &_L154);
  }
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC,
    &_L70);
  _L91 = power_Up_to_MoRC;
  outC->powerUp_to_MoRC = _L91;
  _L128 = requestLevelStaus_from_Level_Management;
  noname = _L128;
  _L131 = power_Off_to_MoRC;
  outC->powerOff_to_MoRC = _L131;
  _L192 = _L153.q_dir;
  _L193 = _L153.valid;
  _138_noname = _L193;
  _139_noname = _L192;
  _L209 = outC->sendingPositionReport_to_RBC;
  outC->fby__L212.items[outC->fby__L212.idx] = _L209;
  outC->fby__L212.idx = (outC->fby__L212.idx + 1) % 4;
  _L217 = outC->sendingTrainData_to_RBC;
  outC->fby__L214.items[outC->fby__L214.idx] = _L217;
  outC->fby__L214.idx = (outC->fby__L214.idx + 1) % 4;
  _L240 = requestDriverID_to_DMI;
  _L252 = requestTrainNumber_to_DMI;
  _L255 = requestTrainData_to_DMI;
  _L261 = requestSoM_to_DMI;
  _L262 = requestLevel_NL_SH_TraindDataEntry_Menu_to_DMI;
  _L260 = _L240 | _L252 | _L255 | _L261 | _L262;
  _L247 = systemtime;
  _L243 = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  _L245 = Enter_revalidate_train_running_number_DMI_Types_Pkg;
  _L249 = Validate_train_data_DMI_Types_Pkg;
  _L259 = Show_main_window_DMI_Types_Pkg;
  _L264 = Enter_revalidate_ETCS_level_DMI_Types_Pkg;
  _L265 = Spare_DMI_Types_Pkg;
  /* 11 */ if (_L262) {
    _L263 = _L264;
  }
  else {
    _L263 = _L265;
  }
  /* 10 */ if (_L261) {
    _L250 = _L259;
  }
  else {
    _L250 = _L263;
  }
  /* 7 */ if (_L255) {
    _L258 = _L249;
  }
  else {
    _L258 = _L250;
  }
  /* 8 */ if (_L252) {
    _L257 = _L245;
  }
  else {
    _L257 = _L258;
  }
  /* 9 */ if (_L240) {
    _L254 = _L243;
  }
  else {
    _L254 = _L257;
  }
  _L253.valid = _L260;
  _L253.system_clock = _L247;
  _L253.entry_request = _L254;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->DMI_Entry_Request_to_DMI,
    &_L253);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L271,
    status_DMIlevel_from_DMI);
  _L272 = _L271.m_request;
  _L278 = Level_entry_request_DMI_Types_Pkg;
  _L279 = _L272 == _L278;
  _L277 = _L271.valid;
  _L280 = _L279 & _L277;
  statusLevel_from_DMI = _L280;
  _L283 = statusLevel_from_DMI;
  _140_noname = _L283;
  /* act_SM1 */ switch (_147_SM1_state_act) {
    case SSM_st_Awakness_of_Train_SM1 :
      outC->init = kcg_false;
      break;
    
  }
  outC->init2 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Master_Procedure_ManageProcedure_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

