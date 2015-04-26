/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Master_Procedure_ManageProcedure_Pkg.h"

void Master_Procedure_init_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  outC->init2 = kcg_true;
  outC->sendingTrainData_to_RBC = kcg_true;
  outC->sendingPositionReport_to_RBC = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_state_nxt = SSM_st_NP_SM1;
  outC->SM3_state_nxt_SM1_Awakness_of_Train =
    SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3;
  for (i = 0; i < 4; i++) {
    outC->fby_tmp.items[i] = kcg_true;
  }
  outC->fby_tmp.idx = 0;
  for (i = 0; i < 4; i++) {
    outC->_1_fby_tmp.items[i] = kcg_true;
  }
  outC->_1_fby_tmp.idx = 0;
  outC->start_ack_to_TIU = kcg_true;
  outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management = kcg_true;
  outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_true;
  outC->powerOff_to_MoRC = kcg_true;
  outC->statusstartofmissionongoing_to_MoRC = kcg_true;
  outC->powerUp_to_MoRC = kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.nid_mn =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_radio =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_rbc =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.nid_c =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.valid =
    kcg_true;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_emergencystop =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_ref =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_sh_rqst =
    0.0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.d_sr =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_em =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_train_reference =
    0.0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_lrbg =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.t_train =
    0.0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.nid_message =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.receivedSystemTime =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header.radioDevice =
    0;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.messageSource =
    msrc_undefined_Common_Types_Pkg;
  outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
    kcg_true;
  outC->DMI_Entry_Request_to_DMI.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->DMI_Entry_Request_to_DMI.system_clock = 0;
  outC->DMI_Entry_Request_to_DMI.valid = kcg_true;
  SoM_SR_FS_OS_LS_SH_SN_UN_init_SoMProcedure_Pkg(&outC->Context_1);
}


void Master_Procedure_reset_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(&outC->Context_1);
}

/* ManageProcedure_Pkg::Master_Procedure */
void Master_Procedure_ManageProcedure_Pkg(
  /* ManageProcedure_Pkg::Master_Procedure::statusDMI_from_DMI */ DMI_EVC_status_T_DMI_Types_Pkg *statusDMI_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */ kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* ManageProcedure_Pkg::Master_Procedure::Status_Mode_Change_from_Level_and_Mode_Management */ kcg_bool Status_Mode_Change_from_Level_and_Mode_Management,
  /* ManageProcedure_Pkg::Master_Procedure::systemtime */ T_internal_Type_Obu_BasicTypes_Pkg systemtime,
  /* ManageProcedure_Pkg::Master_Procedure::mobileSwStatus_p_from_MoRC */ mobileSWStatus_Type_MoRC_Pck *mobileSwStatus_p_from_MoRC,
  /* ManageProcedure_Pkg::Master_Procedure::statusRBCSessioneEstabilished_status_from_MoRC */ sessionStatus_Type_Radio_Types_Pkg statusRBCSessioneEstabilished_status_from_MoRC,
  /* ManageProcedure_Pkg::Master_Procedure::cabStatus_from_TIU */ TIU_trainStatus_T_TIU_Types_Pkg *cabStatus_from_TIU,
  /* ManageProcedure_Pkg::Master_Procedure::statusValid_Position_from_Position_Calculation */ kcg_bool statusValid_Position_from_Position_Calculation,
  /* ManageProcedure_Pkg::Master_Procedure::statusLevel_from_Level_and_Mode_Management */ kcg_bool statusLevel_from_Level_and_Mode_Management,
  outC_Master_Procedure_ManageProcedure_Pkg *outC)
{
  kcg_int i;
  _6_SSM_TR_SM1 tmp;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */ SSM_ST_SM3_SM1_Awakness_of_Train SM3_state_act_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */ SSM_ST_SM3_SM1_Awakness_of_Train SM3_state_sel_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */ kcg_bool Awakness_of_Train_weakb_clock_SM1;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Mobile_terminal_registration */ kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::SB */ kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_SB;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_Acknowledgement_of_Train_Data_from_RBC */ kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Validation_of_Train_Data_from_Driver */ kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Acknowlege_of_Position_from_RBC */ kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waiting_for_RBC_Establishment */ kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::request_Level */ kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_request_Level;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3::Waition_for_Driver_ID */ kcg_bool br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */ kcg_bool br_2_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::NP */ kcg_bool br_1_guard_SM1_NP;
  /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train */ kcg_bool br_1_guard_SM1_Awakness_of_Train;
  /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */ kcg_bool last_sendingTrainData_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */ kcg_bool last_sendingPositionReport_to_RBC;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */ _4_SSM_ST_SM1 SM1_state_sel;
  /* ManageProcedure_Pkg::Master_Procedure::SM1 */ _4_SSM_ST_SM1 SM1_state_act;
  /* ManageProcedure_Pkg::Master_Procedure::_L1 */ kcg_bool _L1;
  /* ManageProcedure_Pkg::Master_Procedure::_L105 */ kcg_bool _L105;
  /* ManageProcedure_Pkg::Master_Procedure::_L164 */ kcg_bool _L164;
  /* ManageProcedure_Pkg::Master_Procedure::_L168 */ kcg_bool _L168;
  
  outC->DMI_Entry_Request_to_DMI.system_clock = systemtime;
  br_1_guard_SM1_Awakness_of_Train_SM3_SB = (*cabStatus_from_TIU).deskOpen &
    (*cabStatus_from_TIU).valid;
  if (outC->init2) {
    last_sendingPositionReport_to_RBC = kcg_true;
    last_sendingTrainData_to_RBC = kcg_true;
    SM1_state_sel = SSM_st_NP_SM1;
    for (i = 0; i < 4; i++) {
      outC->_1_fby_tmp.items[i] = kcg_false;
      outC->fby_tmp.items[i] = kcg_false;
    }
    outC->_1_fby_tmp.idx = 0;
    outC->fby_tmp.idx = 0;
    outC->init2 = kcg_false;
    br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration =
      kcg_false;
  }
  else {
    last_sendingTrainData_to_RBC = outC->sendingTrainData_to_RBC;
    last_sendingPositionReport_to_RBC = outC->sendingPositionReport_to_RBC;
    SM1_state_sel = outC->SM1_state_nxt;
    br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration =
      outC->SM1_reset_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      Awakness_of_Train_weakb_clock_SM1 = kcg_false;
      SM1_state_act = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
        /* 1 */
        SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(&outC->Context_1);
      }
      outC->powerOff_to_MoRC = kcg_false;
      outC->powerUp_to_MoRC = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      br_1_guard_SM1_Awakness_of_Train =
        !br_1_guard_SM1_Awakness_of_Train_SM3_SB;
      Awakness_of_Train_weakb_clock_SM1 = br_1_guard_SM1_Awakness_of_Train;
      outC->powerUp_to_MoRC = kcg_false;
      if (br_1_guard_SM1_Awakness_of_Train) {
        SM1_state_act = SSM_st_NP_SM1;
        outC->powerOff_to_MoRC = kcg_true;
      }
      else {
        SM1_state_act = SSM_st_Awakness_of_Train_SM1;
        outC->powerOff_to_MoRC = kcg_false;
      }
      break;
    case SSM_st_NP_SM1 :
      br_1_guard_SM1_NP = br_1_guard_SM1_Awakness_of_Train_SM3_SB;
      Awakness_of_Train_weakb_clock_SM1 = br_1_guard_SM1_NP;
      outC->powerOff_to_MoRC = kcg_false;
      if (br_1_guard_SM1_NP) {
        SM1_state_act = SSM_st_Awakness_of_Train_SM1;
        outC->powerUp_to_MoRC = kcg_true;
      }
      else {
        SM1_state_act = SSM_st_NP_SM1;
        outC->powerUp_to_MoRC = kcg_false;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      br_2_guard_SM1_Awakness_of_Train = kcg_false;
      br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
        kcg_false;
      _L168 = kcg_false;
      _L1 = kcg_false;
      _L105 = kcg_false;
      _L164 = kcg_false;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      if (Awakness_of_Train_weakb_clock_SM1) {
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
        case SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3 :
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration =
            (*mobileSwStatus_p_from_MoRC).connectionStatus ==
            mswc_registered_MoRC_Pck;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Mobile_terminal_registration) {
            br_2_guard_SM1_Awakness_of_Train = kcg_true;
          }
          else {
            br_2_guard_SM1_Awakness_of_Train = kcg_false;
          }
          _L168 = kcg_false;
          _L1 = kcg_false;
          _L105 = kcg_false;
          _L164 = kcg_false;
          break;
        case SSM_st_SB_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          _L168 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_SB = kcg_true;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_SB) {
            _L1 = kcg_true;
          }
          else {
            _L1 = kcg_false;
          }
          _L105 = kcg_false;
          _L164 = kcg_false;
          break;
        case SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          _L168 = kcg_false;
          _L1 = kcg_false;
          _L105 = kcg_false;
          _L164 = kcg_false;
          break;
        case SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          _L168 = kcg_false;
          _L1 = kcg_false;
          _L105 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC =
            outC->fby_tmp.items[outC->fby_tmp.idx];
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_Acknowledgement_of_Train_Data_from_RBC) {
            _L164 = kcg_true;
          }
          else {
            _L164 = kcg_false;
          }
          break;
        case SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          _L168 = kcg_false;
          _L1 = kcg_false;
          _L105 = kcg_false;
          _L164 = kcg_false;
          break;
        case SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          _L168 = kcg_false;
          _L1 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver =
            (*statusDMI_from_DMI).DMI_TrainDataValidated;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Validation_of_Train_Data_from_Driver) {
            _L105 = kcg_true;
          }
          else {
            _L105 = kcg_false;
          }
          _L164 = kcg_false;
          break;
        case SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          _L168 = kcg_false;
          _L1 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC =
            outC->_1_fby_tmp.items[outC->_1_fby_tmp.idx];
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Acknowlege_of_Position_from_RBC) {
            _L105 = kcg_true;
          }
          else {
            _L105 = kcg_false;
          }
          _L164 = kcg_false;
          break;
        case SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          _L168 = kcg_false;
          _L1 = kcg_false;
          _L105 = kcg_false;
          _L164 = kcg_false;
          break;
        case SSM_st_request_Level_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_request_Level =
            statusLevel_from_Level_and_Mode_Management;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_request_Level) {
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
              kcg_true;
          }
          else {
            br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
              kcg_false;
          }
          _L168 = kcg_false;
          _L1 = kcg_false;
          _L105 = kcg_false;
          _L164 = kcg_false;
          break;
        case SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          _L168 = kcg_false;
          _L1 = kcg_false;
          _L105 = kcg_false;
          _L164 = kcg_false;
          break;
        case SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3 :
          br_2_guard_SM1_Awakness_of_Train = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            kcg_false;
          _L1 = kcg_false;
          br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID =
            (*statusDMI_from_DMI).DMI_DriverIdValidated;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waition_for_Driver_ID) {
            _L168 = kcg_true;
          }
          else {
            _L168 = kcg_false;
          }
          _L105 = kcg_false;
          _L164 = kcg_false;
          break;
        
      }
      break;
    case SSM_st_NP_SM1 :
      br_2_guard_SM1_Awakness_of_Train = kcg_false;
      br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
        kcg_false;
      _L168 = kcg_false;
      _L1 = kcg_false;
      _L105 = kcg_false;
      _L164 = kcg_false;
      break;
    
  }
  if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment) {
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
      br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment;
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
      br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.q_dir =
      Q_DIR_Both_directions;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p45.nid_mn =
      cpacket45_nid_mn_to_MoRC_ManageProcedure_Pkg;
  }
  else if (br_2_guard_SM1_Awakness_of_Train) {
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.valid =
      br_2_guard_SM1_Awakness_of_Train;
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.messageSource =
      msrc_OBU_Common_Types_Pkg;
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.Radio_Common_Header,
      (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
        &cNID_BG_Radio_Header_ManageProcedure_Pkg);
    outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC.p42.valid =
      br_2_guard_SM1_Awakness_of_Train;
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
  }
  else {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
      &outC->request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC,
      (radioManagementMessage_T_Common_Types_Pkg *)
        &cdefault_manageT_ManageProcedure_Pkg);
  }
  outC->DMI_Entry_Request_to_DMI.valid = _L1 | _L168 | _L105 | _L164;
  if (_L1) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  }
  else if (_L168) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Enter_revalidate_train_running_number_DMI_Types_Pkg;
  }
  else if (_L105) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Validate_train_data_DMI_Types_Pkg;
  }
  else if (_L164) {
    outC->DMI_Entry_Request_to_DMI.entry_request =
      Show_main_window_DMI_Types_Pkg;
  }
  else {
    outC->DMI_Entry_Request_to_DMI.entry_request = Spare_DMI_Types_Pkg;
  }
  switch (SM1_state_act) {
    case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
      outC->SM1_reset_nxt = kcg_false;
      /* 1 */
      SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
        Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
        Status_Mode_Change_from_Level_and_Mode_Management,
        &outC->Context_1);
      outC->SM1_state_nxt = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
      outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
      outC->sendingPositionReport_to_RBC = last_sendingPositionReport_to_RBC;
      outC->statusstartofmissionongoing_to_MoRC = kcg_false;
      outC->start_ack_to_TIU = outC->Context_1.start_ack_to_TIU;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        outC->Context_1.request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management =
        outC->Context_1.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
      break;
    case SSM_st_Awakness_of_Train_SM1 :
      switch (SM1_state_sel) {
        case SSM_st_NP_SM1 :
          if (br_1_guard_SM1_NP) {
            tmp = SSM_TR_NP_1_SM1;
          }
          else {
            tmp = _5_SSM_TR_no_trans_SM1;
          }
          break;
        case SSM_st_Awakness_of_Train_SM1 :
          if (br_1_guard_SM1_Awakness_of_Train) {
            tmp = SSM_TR_Awakness_of_Train_1_SM1;
          }
          else {
            tmp = _5_SSM_TR_no_trans_SM1;
          }
          break;
        case SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1 :
          tmp = _5_SSM_TR_no_trans_SM1;
          break;
        
      }
      Awakness_of_Train_weakb_clock_SM1 = tmp != _5_SSM_TR_no_trans_SM1;
      switch (SM3_state_sel_SM1_Awakness_of_Train) {
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
          if ((*statusDMI_from_DMI).DMI_TrainRunningNumberValidated) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3;
            outC->sendingTrainData_to_RBC = kcg_true;
          }
          else {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3;
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
          br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment =
            statusRBCSessioneEstabilished_status_from_MoRC ==
            morc_st_maintaining_Radio_Types_Pkg;
          outC->sendingTrainData_to_RBC = last_sendingTrainData_to_RBC;
          if (br_1_guard_SM1_Awakness_of_Train_SM3_Waiting_for_RBC_Establishment) {
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
          if ((*statusDMI_from_DMI).DMI_TrainRunningNumberFirstValidation &
            statusValid_Position_from_Position_Calculation) {
            SM3_state_act_SM1_Awakness_of_Train =
              SSM_st_request_Level_SM1_Awakness_of_Train_SM3;
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
        
      }
      if (Awakness_of_Train_weakb_clock_SM1) {
        outC->SM1_reset_nxt = kcg_false;
        outC->SM1_state_nxt = SSM_st_Awakness_of_Train_SM1;
      }
      else {
        br_2_guard_SM1_Awakness_of_Train =
          (*statusDMI_from_DMI).DMI_StartReceived &
          statusLevel_from_Level_and_Mode_Management;
        outC->SM1_reset_nxt = br_2_guard_SM1_Awakness_of_Train;
        if (br_2_guard_SM1_Awakness_of_Train) {
          outC->SM1_state_nxt = SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1;
        }
        else {
          outC->SM1_state_nxt = SSM_st_Awakness_of_Train_SM1;
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
      outC->statusstartofmissionongoing_to_MoRC = kcg_true;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_false;
      outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management =
        kcg_false;
      outC->start_ack_to_TIU = kcg_false;
      break;
    
  }
  outC->fby_tmp.items[outC->fby_tmp.idx] = outC->sendingTrainData_to_RBC;
  outC->fby_tmp.idx = (outC->fby_tmp.idx + 1) % 4;
  outC->_1_fby_tmp.items[outC->_1_fby_tmp.idx] =
    outC->sendingPositionReport_to_RBC;
  outC->_1_fby_tmp.idx = (outC->_1_fby_tmp.idx + 1) % 4;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Master_Procedure_ManageProcedure_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

