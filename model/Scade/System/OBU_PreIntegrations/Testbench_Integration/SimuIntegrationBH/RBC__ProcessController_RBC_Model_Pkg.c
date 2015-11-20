/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessController_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessController_init_RBC_Model_Pkg(
  outC_RBC__ProcessController_RBC_Model_Pkg *outC)
{
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
  
  outC->init = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  outC->init10 = kcg_true;
  outC->init11 = kcg_true;
  outC->init12 = kcg_true;
  outC->CONTROLLER_SM_reset_nxt = kcg_true;
  outC->CONTROLLER_SM_reset_act = kcg_true;
  outC->CONTROLLER_SM_state_nxt = SSM_st_SESSION_TERMINATED_CONTROLLER_SM;
  outC->invalidAckForMessage129 = kcg_true;
  outC->trainDataValidated = kcg_true;
  outC->invalidAckForMAandPosRepParams = kcg_true;
  outC->paramsSent = kcg_true;
  outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC =
    0;
  outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
    kcg_true;
  outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
    kcg_true;
  outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
    SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P;
  outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
    kcg_true;
  outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
    kcg_true;
  outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
    SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN;
  outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND =
    0;
  outC->_13_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
    0;
  outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
    SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
    kcg_true;
  outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
    kcg_true;
  outC->outDataBus.session.m_TrainData.nid_engine = 0;
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  for (i1 = 0; i1 < 1; i1++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[i1].valid =
      kcg_true;
    for (i = 0; i < 15; i++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[i1].telephoneNumber[i] =
        0;
    }
  }
  outC->outDataBus.session.m_TrainData.t_train_ref = 0;
  outC->outDataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outDataBus.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outDataBus.session.m_TrainData.l_train = 0;
  outC->outDataBus.session.m_TrainData.v_maxtrain = 0;
  outC->outDataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outDataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outDataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outDataBus.session.m_TrainData.n_axle = 0;
  for (i2 = 0; i2 < 4; i2++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i2].nid_ctraction =
      0;
  }
  for (i3 = 0; i3 < 5; i3++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[i3] = 0;
  }
  outC->outDataBus.session.m_TrainData.nid_operational = 0;
  outC->outDataBus.session.m_PosData.nid_lrbg = 0;
  outC->outDataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.session.m_PosData.d_lrbg = 0;
  outC->outDataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outDataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outDataBus.session.m_PosData.l_doubtover = 0;
  outC->outDataBus.session.m_PosData.l_doubtunder = 0;
  outC->outDataBus.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outDataBus.session.m_PosData.l_trainint = 0;
  outC->outDataBus.session.m_PosData.v_train = 0;
  outC->outDataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outDataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outDataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outDataBus.session.m_PosData.nid_ntc = 0;
  outC->outDataBus.session.m_PosData.nid_prvlrbg = 0;
  outC->outDataBus.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outDataBus.config.m_NationalParams.nid_c = 0;
  outC->outDataBus.config.m_NationalParams.v_nvshunt = 0;
  outC->outDataBus.config.m_NationalParams.v_nvstff = 0;
  outC->outDataBus.config.m_NationalParams.v_nvonsight = 0;
  outC->outDataBus.config.m_NationalParams.v_nvunfit = 0;
  outC->outDataBus.config.m_NationalParams.v_nvrel = 0;
  outC->outDataBus.config.m_NationalParams.t_nvcontact = 0;
  outC->outDataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_MAReqParams.t_mar = 0;
  outC->outDataBus.config.m_MAReqParams.t_timeoutrqst = 0;
  outC->outDataBus.config.m_MAReqParams.t_cycrqst = 0;
  outC->outDataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.config.m_PosRepParams.t_cycloc = 0;
  outC->outDataBus.config.m_PosRepParams.d_cycloc = 0;
  outC->outDataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->outDataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    0;
  for (i4 = 0; i4 < 32; i4++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[i4].d_loc =
      0;
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[i4].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (i5 = 0; i5 < 16; i5++) {
    outC->outDataBus.diagnostic[i5].valid = kcg_true;
    outC->outDataBus.diagnostic[i5].count = 0;
    outC->outDataBus.diagnostic[i5].timestamp = 0;
    outC->outDataBus.diagnostic[i5].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[i5].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[i5].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (i8 = 0; i8 < 8; i8++) {
    outC->outDataBus.messageQueue.m_Entries[i8].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.radioDevice = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.receivedSystemTime =
      0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.nid_message = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.t_train = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.m_ack = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.nid_lrbg = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.t_train_reference =
      0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.nid_em = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.q_scale = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.d_sr = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.t_sh_rqst = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.d_ref = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.q_dir = 0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.d_emergencystop =
      0;
    outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Header.m_version = 0;
    for (i6 = 0; i6 < 30; i6++) {
      outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].nid_packet =
        0;
      outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].startAddress =
        0;
      outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].endAddress =
        0;
    }
    for (i7 = 0; i7 < 500; i7++) {
      outC->outDataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketData[i7] =
        0;
    }
  }
  outC->outDataBus.clockk.m_Value = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.radioDevice = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.receivedSystemTime = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_message = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_ack = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_lrbg = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train_reference = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_em = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_scale = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_sr = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_ref = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_dir = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_emergencystop = 0;
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_version = 0;
  for (i9 = 0; i9 < 30; i9++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].nid_packet =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].startAddress =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].endAddress =
      0;
  }
  for (i10 = 0; i10 < 500; i10++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[i10] = 0;
  }
  /* 2 */ RBC__ProcessGeneralMessage_init_RBC_Model_Pkg(&outC->_7_Context_2);
  /* 1 */ RBC__ProcessTripAndPostTrip_init_RBC_Model_Pkg(&outC->_6_Context_1);
  /* 1 */
  RBC__ProcessRevocationOfEmergencyStop_init_RBC_Model_Pkg(&outC->_5_Context_1);
  /* 1 */ RBC__ProcessMovementAuthority_init_RBC_Model_Pkg(&outC->_4_Context_1);
  /* 1 */
  RBC__ProcessUnconditionalEmergencyStop_init_RBC_Model_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  RBC__ProcessConditionalEmergencyStop_init_RBC_Model_Pkg(&outC->_2_Context_1);
  /* 1 */ RBC__PingTrain_init_RBC_Model_Pkg(&outC->_1_Context_1);
  /* 1 */ RBC__ProcessPositionReport_init_RBC_Model_Pkg(&outC->Context_1);
  /* 2 */ RBC__PingTrain_init_RBC_Model_Pkg(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC__ProcessController_reset_RBC_Model_Pkg(
  outC_RBC__ProcessController_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  outC->init10 = kcg_true;
  outC->init11 = kcg_true;
  outC->init12 = kcg_true;
  /* 2 */ RBC__ProcessGeneralMessage_reset_RBC_Model_Pkg(&outC->_7_Context_2);
  /* 1 */ RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(&outC->_6_Context_1);
  /* 1 */
  RBC__ProcessRevocationOfEmergencyStop_reset_RBC_Model_Pkg(
    &outC->_5_Context_1);
  /* 1 */
  RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(&outC->_4_Context_1);
  /* 1 */
  RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(&outC->_2_Context_1);
  /* 1 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->_1_Context_1);
  /* 1 */ RBC__ProcessPositionReport_reset_RBC_Model_Pkg(&outC->Context_1);
  /* 2 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Model_Pkg::RBC__ProcessController */
void RBC__ProcessController_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessController::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessController::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessController::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessController_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _16_CONTROLLER_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool _15_CONTROLLER_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM _14_CONTROLLER_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _13_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATED::_L14 */
  static Clock_T _L14_CONTROLLER_SM_SESSION_TERMINATED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATED::_L13 */
  static RBC_Data_T_RBC_DataBus_Pkg _L13_CONTROLLER_SM_SESSION_TERMINATED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATED::_L7 */
  static RBC_Data_T_RBC_DataBus_Pkg _L7_CONTROLLER_SM_SESSION_TERMINATED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATED::_L6 */
  static Clock_T _L6_CONTROLLER_SM_SESSION_TERMINATED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _12_CONTROLLER_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool _11_CONTROLLER_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM _10_CONTROLLER_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _9_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L62 */
  static RBC_Data_T_RBC_DataBus_Pkg _L62_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L61 */
  static RBC_Data_T_RBC_DataBus_Pkg _L61_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L60 */
  static RBC_Data_T_RBC_DataBus_Pkg _L60_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L58 */
  static RadioTrackTrainMessageQueue_T _L58_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L59 */
  static RBC_Data_T_RBC_DataBus_Pkg _L59_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L56 */
  static RBC_Data_T_RBC_DataBus_Pkg _L56_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L57 */
  static DynamicConfig_T _L57_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L55 */
  static SessionManagement_T _L55_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L54 */
  static RBC_Data_T_RBC_DataBus_Pkg _L54_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L49 */
  static RadioTrackTrainMessageQueue_T _L49_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L50 */
  static RadioTrackTrainMessageQueueEntry_T _L50_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L40 */
  static CompressedRadioMessage_TM _L40_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L41 */
  static NID_LRBG _L41_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L42 */
  static T_TRAIN _L42_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L43 */
  static M_ACK _L43_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L44 */
  static M_VERSION _L44_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L31 */
  static TrainData_T _L31_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L32 */
  static NID_ENGINE _L32_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L33 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L33_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L35 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L35_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L36 */
  static TrainData_T _L36_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L37 */
  static SessionManagement_T _L37_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L16 */
  static SessionManagement_T _L16_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L15 */
  static NID_LRBG _L15_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L14 */
  static PosData_T _L14_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION::_L13 */
  static PosData_T _L13_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _8_CONTROLLER_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool _7_CONTROLLER_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM _6_CONTROLLER_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _5_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::AWAIT_SESSION_ESTABLISHED_REPORT::_L11 */
  static RBC_Data_T_RBC_DataBus_Pkg _L11_CONTROLLER_SM_AWAIT_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _4_CONTROLLER_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool _3_CONTROLLER_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM _2_CONTROLLER_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _1_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _148_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool SESSION_ESTABLISHED_SM_reset_prv_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool SESSION_ESTABLISHED_SM_reset_sel_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED SESSION_ESTABLISHED_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _133_SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RBC_REQUEST_SESSION_TERMINATION */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _93_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _94_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _95_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _96_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _97_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _98_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::AWAIT_VALIDATED_TRAIN_DATA */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_VALIDATED_TRAIN_DATA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _99_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _100_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _101_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::START */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::START */
  static kcg_bool br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _102_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _103_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _104_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _105_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _106_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _107_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _108_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _109_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _110_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT */
  static kcg_bool br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _111_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _112_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _113_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
  static CompressedRadioMessage_TM noname;
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _126_noname;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RBC_REQUEST_SESSION_TERMINATION::_L34 */
  static CompressedRadioMessage_TM _L34_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RBC_REQUEST_SESSION_TERMINATION::_L27 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RBC_REQUEST_SESSION_TERMINATION::_L20 */
  static RBC_Data_T_RBC_DataBus_Pkg _L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RBC_REQUEST_SESSION_TERMINATION::_L41 */
  static kcg_bool _L41_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RBC_REQUEST_SESSION_TERMINATION::_L44 */
  static CompressedRadioMessage_TM _L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RBC_REQUEST_SESSION_TERMINATION::_L43 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L43_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RBC_REQUEST_SESSION_TERMINATION::_L42 */
  static RBC_Data_T_RBC_DataBus_Pkg _L42_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _17_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _57_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool _56_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _55_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::messageQueue */
  static RadioTrackTrainMessageQueue_T _54_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::START::_L1 */
  static RadioTrackTrainMessageQueue_T _L1175_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::START::_L2 */
  static RBC_Data_T_RBC_DataBus_Pkg _L2176_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _53_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool _52_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _51_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::messageQueue */
  static RadioTrackTrainMessageQueue_T _50_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L33 */
  static RadioTrackTrainMessageQueue_T _L33_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L34 */
  static RBC_Data_T_RBC_DataBus_Pkg _L34_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L31 */
  static DynamicConfig_T _L31_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L32 */
  static RBC_Data_T_RBC_DataBus_Pkg _L32_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L28 */
  static SessionManagement_T _L28_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L27 */
  static RBC_Data_T_RBC_DataBus_Pkg _L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L1 */
  static Q_DIR _L1163_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L3 */
  static T_CYCRQST _L3_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L4 */
  static RadioTrackTrainMessageQueueEntry_T _L4164_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L5 */
  static T_TRAIN _L5165_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L6 */
  static M_LOC _L6166_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L7 */
  static Q_SCALE _L7167_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L9 */
  static P057_trackside_int_T_TM _L9_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L10 */
  static M_ACK _L10_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L11 */
  static PosData_T _L11168_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L12 */
  static MAReqParams_T _L12169_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L15 */
  static NID_LRBG _L15170_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L16 */
  static RadioTrackTrainMessageQueue_T _L16171_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L17 */
  static Q_DIR _L17172_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L18 */
  static array_169739 _L18_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L19 */
  static N_ITER _L19_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L20 */
  static T_TIMEOUTRQST _L20173_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L21 */
  static P058_trackside_int_T_TM _L21174_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L22 */
  static T_MAR _L22_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L23 */
  static PosRepParams_T _L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L24 */
  static CompressedRadioMessage_TM _L24_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L25 */
  static T_CYCLOC _L25_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS::_L26 */
  static D_CYCLOC _L26_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _49_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool _48_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _47_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::messageQueue */
  static RadioTrackTrainMessageQueue_T _46_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L15 */
  static RBC_Data_T_RBC_DataBus_Pkg _L15154_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L16 */
  static CompressedRadioMessage_TM _L16155_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L13 */
  static RBC_Data_T_RBC_DataBus_Pkg _L13156_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L14 */
  static RadioTrackTrainMessageQueue_T _L14157_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L2 */
  static NID_MESSAGE _L2_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L4 */
  static Radio_TrackTrain_Header_T_TM _L4158_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L5 */
  static kcg_int _L5159_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L7 */
  static kcg_bool _L7160_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L8 */
  static T_TRAIN _L8161_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L11 */
  static T_TRAIN _L11_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::_L12 */
  static T_TRAIN _L12162_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _127_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::messageQueue */
  static RadioTrackTrainMessageQueue_T messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L20 */
  static RBC_Data_T_RBC_DataBus_Pkg _L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L21 */
  static CompressedRadioMessage_TM _L21_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L16 */
  static RadioTrackTrainMessageQueue_T _L16_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L17 */
  static RBC_Data_T_RBC_DataBus_Pkg _L17_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L1 */
  static NID_MESSAGE _L1_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L4 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L4_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L5 */
  static kcg_int _L5_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L6 */
  static Radio_TrackTrain_Header_T_TM _L6_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L7 */
  static T_TRAIN _L7_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L8 */
  static T_TRAIN _L8_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L12 */
  static T_TRAIN _L12_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L13 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L13_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L14 */
  static kcg_bool _L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::_L15 */
  static T_TRAIN _L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::radioTrainTrackMessageTimestamp */
  static T_TRAIN radioTrainTrackMessageTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_S;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _66_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool _65_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _64_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::START */
  static kcg_bool _137_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _63_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool _62_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _61_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS */
  static kcg_bool _136_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::SEND_MA_AND_POS_REP_PARAMS */
  static kcg_bool _135_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _60_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool _59_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _58_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::AWAIT_ACKNOWLEDGMENT */
  static kcg_bool _134_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT */
  static kcg_bool br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM::TRY_PROCESS_ACKNOWLEDGMENT */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _131_SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M SEND_MA_AMD_POS_REP_PARAMS_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _140_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool SEND_MA_AMD_POS_REP_PARAMS_SM_reset_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static kcg_bool SEND_MA_AMD_POS_REP_PARAMS_SM_reset_prv_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _139_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
  static SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M _138_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::messageQueue */
  static RadioTrackTrainMessageQueue_T _177_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAM;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::_L35 */
  static RBC_Data_T_RBC_DataBus_Pkg _L35_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::_L36 */
  static RadioTrackTrainMessageQueue_T _L36_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::_L38 */
  static RBC_Data_T_RBC_DataBus_Pkg _L38_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _18_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _19_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _20_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _21_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::AWAIT_SESSION_TERMINATION_REQUEST::_L10 */
  static RBC_Data_T_RBC_DataBus_Pkg _L10_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _22_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _23_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _24_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _25_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::AWAIT_VALIDATED_TRAIN_DATA::_L10 */
  static RBC_Data_T_RBC_DataBus_Pkg _L10_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_VALIDATED_TRAIN_DATA;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _26_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _27_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _28_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _29_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _30_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _31_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _32_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _33_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
  static CompressedRadioMessage_TM _128_noname;
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _129_noname;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L3 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L3_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L27 */
  static CompressedRadioMessage_TM _L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L35 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L35_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L38 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L38_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L54 */
  static CompressedRadioMessage_TM _L54_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L132 */
  static CompressedRadioMessage_TM _L132_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L129 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L129_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L139 */
  static CompressedRadioMessage_TM _L139_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L136 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L136_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L141 */
  static CompressedRadioMessage_TM _L141_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L147 */
  static CompressedRadioMessage_TM _L147_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L144 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L144_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L154 */
  static CompressedRadioMessage_TM _L154_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L151 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L151_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L158 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L158_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L161 */
  static CompressedRadioMessage_TM _L161_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L168 */
  static CompressedRadioMessage_TM _L168_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L165 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L165_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L170 */
  static RBC_Data_T_RBC_DataBus_Pkg _L170_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L171 */
  static RBC_Data_T_RBC_DataBus_Pkg _L171_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L172 */
  static RBC_Data_T_RBC_DataBus_Pkg _L172_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L173 */
  static RBC_Data_T_RBC_DataBus_Pkg _L173_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L174 */
  static RBC_Data_T_RBC_DataBus_Pkg _L174_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L175 */
  static RBC_Data_T_RBC_DataBus_Pkg _L175_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L176 */
  static RBC_Data_T_RBC_DataBus_Pkg _L176_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L177 */
  static RBC_Data_T_RBC_DataBus_Pkg _L177_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L178 */
  static RBC_Data_T_RBC_DataBus_Pkg _L178_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::RECEIVE_AND_TRIGGER::_L179 */
  static kcg_bool _L179_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _34_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _35_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _36_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _37_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _82_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool _81_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _80_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _79_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _78_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _77_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool _76_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _75_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _74_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _73_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L62 */
  static CompressedRadioMessage_TM _L62_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L61 */
  static RBC_Data_T_RBC_DataBus_Pkg _L61_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L60 */
  static RBC_Data_T_RBC_DataBus_Pkg _L60_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L55 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L55179_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L53 */
  static T_TRAIN _L53180_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L54 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L54_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L44 */
  static Radio_TrackTrain_Header_T_TM _L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L45 */
  static kcg_bool _L45_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L46 */
  static T_TRAIN _L46_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L48 */
  static T_TRAIN _L48_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L49 */
  static NID_MESSAGE _L49_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L50 */
  static T_TRAIN _L50_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L51 */
  static NID_MESSAGE _L51_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::radioTrainTrackMessageTimestamp */
  static T_TRAIN radioTrainTrackMessageTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VAL;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _72_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool _71_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _70_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _69_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _68_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L29 */
  static RBC_Data_T_RBC_DataBus_Pkg _L29_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L30 */
  static CompressedRadioMessage_TM _L30_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L28 */
  static RBC_Data_T_RBC_DataBus_Pkg _L28_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L23 */
  static T_TRAIN _L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L16 */
  static kcg_bool _L16_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L17 */
  static T_TRAIN _L17_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L18 */
  static NID_MESSAGE _L18_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L19 */
  static NID_MESSAGE _L19_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L20 */
  static Radio_TrackTrain_Header_T_TM _L20178_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT::_L21 */
  static T_TRAIN _L21_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCE;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _67_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L85 */
  static RBC_Data_T_RBC_DataBus_Pkg _L85_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L86 */
  static SessionManagement_T _L86_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L83 */
  static RBC_Data_T_RBC_DataBus_Pkg _L83_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L84 */
  static RadioTrackTrainMessageQueue_T _L84_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L80 */
  static RBC_Data_T_RBC_DataBus_Pkg _L80_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L81 */
  static RBC_Data_T_RBC_DataBus_Pkg _L81_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L82 */
  static RBC_Data_T_RBC_DataBus_Pkg _L82_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L75 */
  static RadioTrackTrainMessageQueueEntry_T _L75_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L77 */
  static RadioTrackTrainMessageQueue_T _L77_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L63 */
  static T_TRAIN _L63_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L64 */
  static M_ACK _L64_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L65 */
  static T_TRAIN _L65_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L66 */
  static CompressedRadioMessage_TM _L66_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L68 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L68_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L70 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L70_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L71 */
  static NID_LRBG _L71_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L57 */
  static SessionManagement_T _L57_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L58 */
  static SessionManagement_T _L58_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L53 */
  static TrainData_T _L53_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L55 */
  static TrainData_T _L55_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L20 */
  static PosData_T _L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L15 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA::_L14 */
  static PosData_T _L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _91_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool _90_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _89_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::START */
  static kcg_bool _144_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _88_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool _87_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _86_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool _143_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool _142_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _85_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool _84_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _83_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::AWAIT_ACKNOWLEDGEMENT */
  static kcg_bool _141_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA */
  static kcg_bool br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM::PROCESS_VALIDATED_TRAIN_DATA */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _130_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCE;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _132_PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC PROCESS_VALIDATED_TRAIN_DATA_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _147_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool PROCESS_VALIDATED_TRAIN_DATA_SM_reset_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static kcg_bool PROCESS_VALIDATED_TRAIN_DATA_SM_reset_prv_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _146_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLIS;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
  static SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC _145_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _38_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _39_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _40_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _41_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::session */
  static SessionManagement_T _92_session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REP;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::IfBlock1::then::_L26 */
  static RBC_Data_T_RBC_DataBus_Pkg _L26_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::IfBlock1::then::_L27 */
  static SessionManagement_T _L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::IfBlock1::then::_L24 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L24_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::IfBlock1::then::_L22 */
  static SessionManagement_T _L22_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::IfBlock1::then::_L20 */
  static TrainData_T _L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::IfBlock1::then::_L19 */
  static TrainData_T _L19_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::session */
  static SessionManagement_T session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::IfBlock1::else::_L5 */
  static SessionManagement_T _L5_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfBl;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::IfBlock1::else::_L4 */
  static RBC_Data_T_RBC_DataBus_Pkg _L4_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfBl;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::IfBlock1 */
  static kcg_bool IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::valid */
  static kcg_bool valid_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::session */
  static SessionManagement_T _181_session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_RE;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::_L5 */
  static kcg_bool _L5_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::_L4 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L4_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::_L3 */
  static outPackets_T_Common_Types_Pkg _L3_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::_L2 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L2_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::_L13 */
  static RBC_Data_T_RBC_DataBus_Pkg _L13_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::_L14 */
  static RBC_Data_T_RBC_DataBus_Pkg _L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_SESSION_ESTABLISHED_REPORT::_L15 */
  static SessionManagement_T _L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg _42_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _43_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static kcg_bool _44_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
  static SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED _45_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM CONTROLLER_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool CONTROLLER_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM CONTROLLER_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L35 */
  static RadioTrackTrainMessageQueue_T _L35_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L36 */
  static RBC_Data_T_RBC_DataBus_Pkg _L36_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L26 */
  static RBC_Data_T_RBC_DataBus_Pkg _L26_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L27 */
  static RBC_Data_T_RBC_DataBus_Pkg _L27_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L28 */
  static RBC_Data_T_RBC_DataBus_Pkg _L28_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L24 */
  static SessionManagement_T _L24_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L25 */
  static RBC_Data_T_RBC_DataBus_Pkg _L25_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L23 */
  static SessionManagement_T _L23_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L18 */
  static RadioTrackTrainMessageQueueEntry_T _L18_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L19 */
  static RadioTrackTrainMessageQueue_T _L19_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L11 */
  static NID_LRBG _L11_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L6 */
  static T_TRAIN _L6_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L4 */
  static PosData_T _L4_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST::_L3 */
  static CompressedRadioMessage_TM _L3_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _125_CONTROLLER_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool _124_CONTROLLER_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM _123_CONTROLLER_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATED */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_TERMINATED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _122_CONTROLLER_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool _121_CONTROLLER_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM _120_CONTROLLER_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION */
  static kcg_bool br_2_guard_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SEND_RBC_VERSION */
  static kcg_bool br_1_guard_CONTROLLER_SM_SEND_RBC_VERSION;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _119_CONTROLLER_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool _118_CONTROLLER_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM _117_CONTROLLER_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::AWAIT_SESSION_ESTABLISHED_REPORT */
  static kcg_bool br_1_guard_CONTROLLER_SM_AWAIT_SESSION_ESTABLISHED_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _116_CONTROLLER_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool _115_CONTROLLER_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM _114_CONTROLLER_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM CONTROLLER_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool CONTROLLER_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM CONTROLLER_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST */
  static kcg_bool br_2_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_TERMINATION_REQUEST */
  static kcg_bool br_1_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
  /* RBC_Model_Pkg::RBC__ProcessController::outDataBus */
  static RBC_Data_T_RBC_DataBus_Pkg last_outDataBus;
  /* RBC_Model_Pkg::RBC__ProcessController::paramsSent */
  static kcg_bool last_paramsSent;
  /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMAandPosRepParams */
  static kcg_bool last_invalidAckForMAandPosRepParams;
  /* RBC_Model_Pkg::RBC__ProcessController::trainDataValidated */
  static kcg_bool last_trainDataValidated;
  /* RBC_Model_Pkg::RBC__ProcessController::invalidAckForMessage129 */
  static kcg_bool last_invalidAckForMessage129;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM CONTROLLER_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_ST_CONTROLLER_SM _153_CONTROLLER_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool CONTROLLER_SM_reset_sel;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static kcg_bool CONTROLLER_SM_reset_prv;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _152_CONTROLLER_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
  static SSM_TR_CONTROLLER_SM _151_CONTROLLER_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessController::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessController::_L2 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L2;
  /* RBC_Model_Pkg::RBC__ProcessController::_L4 */
  static NID_MESSAGE _L4;
  /* RBC_Model_Pkg::RBC__ProcessController::_L5 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L5;
  
  /* init_CONTROLLER_SM */ if (outC->init12) {
    CONTROLLER_SM_state_sel = SSM_st_SESSION_TERMINATED_CONTROLLER_SM;
  }
  else {
    CONTROLLER_SM_state_sel = outC->CONTROLLER_SM_state_nxt;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L2,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L2,
    &_L5);
  _L4 = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L5);
  radioTrainTrackMessageId = _L4;
  /* sel_CONTROLLER_SM */ switch (CONTROLLER_SM_state_sel) {
    case SSM_st_SESSION_TERMINATED_CONTROLLER_SM :
      br_1_guard_CONTROLLER_SM_SESSION_TERMINATED = radioTrainTrackMessageId ==
        155;
      if (br_1_guard_CONTROLLER_SM_SESSION_TERMINATED) {
        _123_CONTROLLER_SM_state_act = SSM_st_SEND_RBC_VERSION_CONTROLLER_SM;
      }
      else {
        _123_CONTROLLER_SM_state_act = SSM_st_SESSION_TERMINATED_CONTROLLER_SM;
      }
      _153_CONTROLLER_SM_state_act = _123_CONTROLLER_SM_state_act;
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROLLER_SM :
      br_1_guard_CONTROLLER_SM_SEND_RBC_VERSION = (radioTrainTrackMessageId ==
          159) | (radioTrainTrackMessageId == 154);
      br_2_guard_CONTROLLER_SM_SEND_RBC_VERSION = kcg_true;
      if (br_1_guard_CONTROLLER_SM_SEND_RBC_VERSION) {
        _120_CONTROLLER_SM_state_act = SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM;
      }
      else if (br_2_guard_CONTROLLER_SM_SEND_RBC_VERSION) {
        _120_CONTROLLER_SM_state_act =
          SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM;
      }
      else {
        _120_CONTROLLER_SM_state_act = SSM_st_SEND_RBC_VERSION_CONTROLLER_SM;
      }
      _153_CONTROLLER_SM_state_act = _120_CONTROLLER_SM_state_act;
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM :
      br_1_guard_CONTROLLER_SM_AWAIT_SESSION_ESTABLISHED_REPORT =
        (radioTrainTrackMessageId == 159) | (radioTrainTrackMessageId == 154);
      if (br_1_guard_CONTROLLER_SM_AWAIT_SESSION_ESTABLISHED_REPORT) {
        _117_CONTROLLER_SM_state_act = SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM;
      }
      else {
        _117_CONTROLLER_SM_state_act =
          SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM;
      }
      _153_CONTROLLER_SM_state_act = _117_CONTROLLER_SM_state_act;
      break;
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED = radioTrainTrackMessageId ==
        156;
      if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED) {
        _114_CONTROLLER_SM_state_act =
          SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
      }
      else {
        _114_CONTROLLER_SM_state_act = SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM;
      }
      _153_CONTROLLER_SM_state_act = _114_CONTROLLER_SM_state_act;
      break;
    case SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM :
      br_1_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST =
        radioTrainTrackMessageId == 155;
      br_2_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST = kcg_true;
      if (br_1_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST) {
        CONTROLLER_SM_state_act = SSM_st_SEND_RBC_VERSION_CONTROLLER_SM;
      }
      else if (br_2_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST) {
        CONTROLLER_SM_state_act = SSM_st_SESSION_TERMINATED_CONTROLLER_SM;
      }
      else {
        CONTROLLER_SM_state_act =
          SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
      }
      _153_CONTROLLER_SM_state_act = CONTROLLER_SM_state_act;
      break;
    
  }
  /* init_CONTROLLER_SM */ if (outC->init12) {
    CONTROLLER_SM_reset_prv = kcg_false;
  }
  else {
    CONTROLLER_SM_reset_prv = outC->CONTROLLER_SM_reset_act;
  }
  /* sel_CONTROLLER_SM */ switch (CONTROLLER_SM_state_sel) {
    case SSM_st_SESSION_TERMINATED_CONTROLLER_SM :
      _124_CONTROLLER_SM_reset_act =
        br_1_guard_CONTROLLER_SM_SESSION_TERMINATED;
      outC->CONTROLLER_SM_reset_act = _124_CONTROLLER_SM_reset_act;
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROLLER_SM :
      if (br_1_guard_CONTROLLER_SM_SEND_RBC_VERSION) {
        _121_CONTROLLER_SM_reset_act = kcg_true;
      }
      else {
        _121_CONTROLLER_SM_reset_act =
          br_2_guard_CONTROLLER_SM_SEND_RBC_VERSION;
      }
      outC->CONTROLLER_SM_reset_act = _121_CONTROLLER_SM_reset_act;
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM :
      _118_CONTROLLER_SM_reset_act =
        br_1_guard_CONTROLLER_SM_AWAIT_SESSION_ESTABLISHED_REPORT;
      outC->CONTROLLER_SM_reset_act = _118_CONTROLLER_SM_reset_act;
      break;
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      _115_CONTROLLER_SM_reset_act =
        br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED;
      outC->CONTROLLER_SM_reset_act = _115_CONTROLLER_SM_reset_act;
      break;
    case SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM :
      if (br_1_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST) {
        CONTROLLER_SM_reset_act = kcg_true;
      }
      else {
        CONTROLLER_SM_reset_act =
          br_2_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST;
      }
      outC->CONTROLLER_SM_reset_act = CONTROLLER_SM_reset_act;
      break;
    
  }
  /* act_CONTROLLER_SM */ switch (_153_CONTROLLER_SM_state_act) {
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      if (outC->CONTROLLER_SM_reset_act) {
        outC->init = kcg_true;
      }
      /* init_SESSION_ESTABLISHED_SM */ if (outC->init) {
        SESSION_ESTABLISHED_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED =
          SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
      }
      else {
        SESSION_ESTABLISHED_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED =
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
      }
      _133_SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED =
        SESSION_ESTABLISHED_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED;
      /* cb_SESSION_ESTABLISHED_SM */ switch (_133_SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION =
            kcg_true;
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION) {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          break;
        
      }
      break;
    
  }
  /* last_init_ck_paramsSent */ if (outC->init12) {
    last_paramsSent = kcg_false;
  }
  else {
    last_paramsSent = outC->paramsSent;
  }
  /* act_CONTROLLER_SM */ switch (_153_CONTROLLER_SM_state_act) {
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      /* cb_SESSION_ESTABLISHED_SM */ switch (_133_SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER =
            radioTrainTrackMessageId == 150;
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER) {
            _105_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            _105_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START =
            radioTrainTrackMessageId == 159;
          br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START =
            radioTrainTrackMessageId == 154;
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START) {
            _102_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else if (br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START) {
            _102_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            _102_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_VALIDATED_TRAIN_DATA =
            radioTrainTrackMessageId == 129;
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_VALIDATED_TRAIN_DATA) {
            _99_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            _99_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _96_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS =
            last_paramsSent;
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS) {
            _93_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            _93_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          break;
        
      }
      break;
    
  }
  /* last_init_ck_trainDataValidated */ if (outC->init12) {
    last_trainDataValidated = kcg_false;
  }
  else {
    last_trainDataValidated = outC->trainDataValidated;
  }
  /* act_CONTROLLER_SM */ switch (_153_CONTROLLER_SM_state_act) {
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      /* cb_SESSION_ESTABLISHED_SM */ switch (_133_SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO =
            radioTrainTrackMessageId == 129;
          br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO =
            kcg_true;
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO) {
            _111_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else if (br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO) {
            _111_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            _111_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _111_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
            last_trainDataValidated;
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA) {
            _108_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          else {
            _108_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          }
          _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _108_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _105_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _102_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _99_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _96_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _93_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        
      }
      SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED =
        _150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED;
      if (outC->CONTROLLER_SM_reset_act) {
        outC->init9 = kcg_true;
      }
      /* init_SESSION_ESTABLISHED_SM */ if (outC->init) {
        SESSION_ESTABLISHED_SM_reset_prv_CONTROLLER_SM_SESSION_ESTABLISHED =
          kcg_false;
      }
      else {
        SESSION_ESTABLISHED_SM_reset_prv_CONTROLLER_SM_SESSION_ESTABLISHED =
          outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (_133_SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO) {
            _112_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              kcg_true;
          }
          else {
            _112_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO;
          }
          outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _112_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _109_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA;
          outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _109_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _106_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER;
          outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _106_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START) {
            _103_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              kcg_true;
          }
          else {
            _103_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
              br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START;
          }
          outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _103_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _100_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_VALIDATED_TRAIN_DATA;
          outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _100_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _97_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _97_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _94_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS;
          outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            _94_SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION;
          outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED =
            SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            outC->init9 = kcg_true;
          }
          break;
        
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* init_SEND_MA_AMD_POS_REP_PARAMS_SM */ if (outC->init9) {
            SEND_MA_AMD_POS_REP_PARAMS_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
              SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN;
          }
          else {
            SEND_MA_AMD_POS_REP_PARAMS_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
          }
          _131_SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE =
            SEND_MA_AMD_POS_REP_PARAMS_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
          break;
        
      }
      break;
    
  }
  /* last_init_ck_invalidAckForMAandPosRepParams */ if (outC->init12) {
    last_invalidAckForMAandPosRepParams = kcg_false;
  }
  else {
    last_invalidAckForMAandPosRepParams = outC->invalidAckForMAandPosRepParams;
  }
  /* act_CONTROLLER_SM */ switch (_153_CONTROLLER_SM_state_act) {
    case SSM_st_SESSION_TERMINATED_CONTROLLER_SM :
      outC->paramsSent = kcg_false;
      outC->invalidAckForMAandPosRepParams = kcg_false;
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROLLER_SM :
      outC->paramsSent = kcg_false;
      outC->invalidAckForMAandPosRepParams = kcg_false;
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM :
      outC->paramsSent = kcg_false;
      outC->invalidAckForMAandPosRepParams = kcg_false;
      break;
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* cb_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (_131_SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN :
              _137_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_ =
                kcg_true;
              if (_137_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_) {
                _64_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A;
              }
              else {
                _64_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN;
              }
              _140_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S =
                _64_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              _135_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_ =
                radioTrainTrackMessageId == 146;
              _136_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_ =
                kcg_true;
              if (_135_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_) {
                _61_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A;
              }
              else if (_136_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_) {
                _61_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS;
              }
              else {
                _61_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A;
              }
              _140_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S =
                _61_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS :
              _134_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_ =
                radioTrainTrackMessageId == 146;
              if (_134_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_) {
                _58_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A;
              }
              else {
                _58_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS;
              }
              _140_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S =
                _58_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_ =
                (radioTrainTrackMessageId == 146) &
                last_invalidAckForMAandPosRepParams;
              br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_ =
                last_invalidAckForMAandPosRepParams;
              if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_) {
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A;
              }
              else if (br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_) {
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                  SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS;
              }
              else {
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A;
              }
              _140_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S =
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
              break;
            
          }
          SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA =
            _140_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S;
          /* init_SEND_MA_AMD_POS_REP_PARAMS_SM */ if (outC->init9) {
            SEND_MA_AMD_POS_REP_PARAMS_SM_reset_prv_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
              kcg_false;
          }
          else {
            SEND_MA_AMD_POS_REP_PARAMS_SM_reset_prv_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
          }
          /* cb_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (_131_SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN :
              _65_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                _137_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _65_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              if (_135_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_) {
                _62_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  kcg_true;
              }
              else {
                _62_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  _136_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_;
              }
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _62_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS :
              _59_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                _134_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _59_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_) {
                SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                  kcg_true;
              }
              else {
                SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                  br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_;
              }
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
              break;
            
          }
          /* act_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (_140_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S) {
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              if (outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN) {
                outC->init11 = kcg_true;
              }
              break;
            
          }
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            outC->init11 = kcg_true;
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        outC->init11 = kcg_true;
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* act_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (_140_SEND_MA_AMD_POS_REP_PARAMS_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S) {
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS :
              if (outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN) {
                outC->init10 = kcg_true;
              }
              break;
            
          }
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            outC->init10 = kcg_true;
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        outC->init10 = kcg_true;
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            outC->init8 = kcg_true;
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        outC->init8 = kcg_true;
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          break;
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          /* init_PROCESS_VALIDATED_TRAIN_DATA_SM */ if (outC->init8) {
            PROCESS_VALIDATED_TRAIN_DATA_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
              SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P;
          }
          else {
            PROCESS_VALIDATED_TRAIN_DATA_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
          }
          _132_PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
            PROCESS_VALIDATED_TRAIN_DATA_SM_state_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
          /* cb_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (_132_PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_) {
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA :
              _141_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT =
                radioTrainTrackMessageId == 146;
              if (_141_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT) {
                _83_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_;
              }
              else {
                _83_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA;
              }
              break;
            case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS :
              br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO =
                radioTrainTrackMessageId == 146;
              br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO =
                kcg_true;
              if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO) {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_;
              }
              else if (br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO) {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA;
              }
              else {
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                  SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS;
              }
              break;
            
          }
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* cb_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN :
              outC->paramsSent = kcg_false;
              outC->invalidAckForMAandPosRepParams = kcg_false;
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              outC->paramsSent = kcg_false;
              outC->invalidAckForMAandPosRepParams = kcg_false;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS :
              outC->paramsSent = kcg_false;
              outC->invalidAckForMAandPosRepParams = kcg_false;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
                &_L13_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                inRadioTrainTrackMessage);
              /* 7 */
              RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                &_L13_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L4_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_);
              _L8_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_ =
                /* 2 */
                RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                  &_L4_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_);
              radioTrainTrackMessageTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND =
                _L8_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
              /* last_init_ck_radioTrackTrainMessageWasSentTimestamp */ if (outC->init11) {
                last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  T_TRAIN_MIN;
              }
              else {
                last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                  outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND;
              }
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                inDataBus);
              kcg_copy_CompressedRadioMessage_TM(
                &_L21_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD.lastSentTrackTrainMessage);
              /* 4 */
              RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                &_L21_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L6_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_);
              _L1_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_ =
                /* 4 */
                RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L6_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_);
              _L5_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_ =
                24;
              _L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD =
                _L1_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_ ==
                _L5_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
              _L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD =
                /* 5 */
                RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L6_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_);
              _L12_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD =
                last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              /* 5 */ if (_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD) {
                _L7_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_ =
                  _L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
              }
              else {
                _L7_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_ =
                  _L12_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
              }
              outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND =
                _L7_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_;
              IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_S =
                radioTrainTrackMessageTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND ==
                outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND;
              /* ck_IfBlock1 */ if (IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_S) {
                outC->paramsSent = kcg_true;
                outC->invalidAckForMAandPosRepParams = kcg_false;
              }
              else {
                outC->paramsSent = kcg_false;
                outC->invalidAckForMAandPosRepParams = kcg_true;
              }
              break;
            
          }
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->paramsSent = kcg_false;
          outC->invalidAckForMAandPosRepParams = kcg_false;
          break;
        
      }
      break;
    case SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM :
      outC->paramsSent = kcg_false;
      outC->invalidAckForMAandPosRepParams = kcg_false;
      break;
    
  }
  /* last_init_ck_invalidAckForMessage129 */ if (outC->init12) {
    last_invalidAckForMessage129 = kcg_false;
  }
  else {
    last_invalidAckForMessage129 = outC->invalidAckForMessage129;
  }
  /* act_CONTROLLER_SM */ switch (_153_CONTROLLER_SM_state_act) {
    case SSM_st_SESSION_TERMINATED_CONTROLLER_SM :
      outC->trainDataValidated = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROLLER_SM :
      outC->trainDataValidated = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM :
      outC->trainDataValidated = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      break;
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          break;
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* cb_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (_132_PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P :
              _144_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT =
                kcg_true;
              if (_144_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT) {
                _89_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                  SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS;
              }
              else {
                _89_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P;
              }
              _147_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                _89_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_ :
              _142_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT =
                (radioTrainTrackMessageId == 146) &
                last_invalidAckForMessage129;
              _143_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT =
                last_invalidAckForMessage129;
              if (_142_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT) {
                _86_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_;
              }
              else if (_143_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT) {
                _86_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA;
              }
              else {
                _86_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_;
              }
              _147_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                _86_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA :
              _147_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                _83_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              break;
            case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS :
              _147_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
              break;
            
          }
          PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCE =
            _147_PROCESS_VALIDATED_TRAIN_DATA_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED;
          /* cb_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCE) {
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_ :
              kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
                &_L54_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inRadioTrainTrackMessage);
              /* 2 */
              RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                &_L54_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L55179_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES);
              _L53180_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES =
                /* 1 */
                RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                  &_L55179_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES);
              radioTrainTrackMessageTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VAL =
                _L53180_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES;
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L61_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inDataBus);
              kcg_copy_CompressedRadioMessage_TM(
                &_L62_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L61_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V.lastSentTrackTrainMessage);
              /* 1 */
              RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                &_L62_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              _L49_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                /* 1 */
                RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              _L51_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                8;
              _L45_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                _L49_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V ==
                _L51_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
              _L50_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                /* 1 */
                RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              break;
            
          }
          /* last_init_ck_radioTrackTrainMessageWasSentTimestamp */ if (outC->init8) {
            _130_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
              T_TRAIN_MIN;
          }
          else {
            _130_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
              outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC;
          }
          /* cb_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCE) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P :
              outC->trainDataValidated = kcg_false;
              outC->invalidAckForMessage129 = kcg_false;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_ :
              _L46_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                _130_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
              /* 4 */ if (_L45_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V) {
                _L48_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                  _L50_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
              }
              else {
                _L48_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                  _L46_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
              }
              _74_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                _L48_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
              IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA =
                radioTrainTrackMessageTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VAL ==
                _74_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
              /* ck_IfBlock1 */ if (IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA) {
                outC->trainDataValidated = kcg_true;
                outC->invalidAckForMessage129 = kcg_false;
              }
              else {
                outC->trainDataValidated = kcg_false;
                outC->invalidAckForMessage129 = kcg_true;
              }
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA :
              outC->trainDataValidated = kcg_false;
              outC->invalidAckForMessage129 = kcg_false;
              break;
            case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS :
              outC->trainDataValidated = kcg_false;
              outC->invalidAckForMessage129 = kcg_false;
              break;
            
          }
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->trainDataValidated = kcg_false;
          outC->invalidAckForMessage129 = kcg_false;
          break;
        
      }
      break;
    case SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM :
      outC->trainDataValidated = kcg_false;
      outC->invalidAckForMessage129 = kcg_false;
      break;
    
  }
  /* init_CONTROLLER_SM */ if (outC->init12) {
    CONTROLLER_SM_reset_sel = kcg_false;
  }
  else {
    CONTROLLER_SM_reset_sel = outC->CONTROLLER_SM_reset_nxt;
  }
  /* sel_CONTROLLER_SM */ switch (CONTROLLER_SM_state_sel) {
    case SSM_st_SESSION_TERMINATED_CONTROLLER_SM :
      if (br_1_guard_CONTROLLER_SM_SESSION_TERMINATED) {
        _125_CONTROLLER_SM_fired_strong =
          SSM_TR_SESSION_TERMINATED_1_CONTROLLER_SM;
      }
      else {
        _125_CONTROLLER_SM_fired_strong = SSM_TR_no_trans_CONTROLLER_SM;
      }
      _152_CONTROLLER_SM_fired_strong = _125_CONTROLLER_SM_fired_strong;
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROLLER_SM :
      if (br_1_guard_CONTROLLER_SM_SEND_RBC_VERSION) {
        _122_CONTROLLER_SM_fired_strong =
          SSM_TR_SEND_RBC_VERSION_1_CONTROLLER_SM;
      }
      else if (br_2_guard_CONTROLLER_SM_SEND_RBC_VERSION) {
        _122_CONTROLLER_SM_fired_strong =
          SSM_TR_SEND_RBC_VERSION_2_CONTROLLER_SM;
      }
      else {
        _122_CONTROLLER_SM_fired_strong = SSM_TR_no_trans_CONTROLLER_SM;
      }
      _152_CONTROLLER_SM_fired_strong = _122_CONTROLLER_SM_fired_strong;
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM :
      if (br_1_guard_CONTROLLER_SM_AWAIT_SESSION_ESTABLISHED_REPORT) {
        _119_CONTROLLER_SM_fired_strong =
          SSM_TR_AWAIT_SESSION_ESTABLISHED_REPORT_1_CONTROLLER_SM;
      }
      else {
        _119_CONTROLLER_SM_fired_strong = SSM_TR_no_trans_CONTROLLER_SM;
      }
      _152_CONTROLLER_SM_fired_strong = _119_CONTROLLER_SM_fired_strong;
      break;
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED) {
        _116_CONTROLLER_SM_fired_strong =
          SSM_TR_SESSION_ESTABLISHED_1_CONTROLLER_SM;
      }
      else {
        _116_CONTROLLER_SM_fired_strong = SSM_TR_no_trans_CONTROLLER_SM;
      }
      _152_CONTROLLER_SM_fired_strong = _116_CONTROLLER_SM_fired_strong;
      break;
    case SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM :
      if (br_1_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST) {
        CONTROLLER_SM_fired_strong =
          SSM_TR_SESSION_TERMINATION_REQUEST_1_CONTROLLER_SM;
      }
      else if (br_2_guard_CONTROLLER_SM_SESSION_TERMINATION_REQUEST) {
        CONTROLLER_SM_fired_strong =
          SSM_TR_SESSION_TERMINATION_REQUEST_2_CONTROLLER_SM;
      }
      else {
        CONTROLLER_SM_fired_strong = SSM_TR_no_trans_CONTROLLER_SM;
      }
      _152_CONTROLLER_SM_fired_strong = CONTROLLER_SM_fired_strong;
      break;
    
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&last_outDataBus, &outC->outDataBus);
  /* act_CONTROLLER_SM */ switch (_153_CONTROLLER_SM_state_act) {
    case SSM_st_SESSION_TERMINATED_CONTROLLER_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L7_CONTROLLER_SM_SESSION_TERMINATED,
        inDataBus);
      kcg_copy_Clock_T(
        &_L14_CONTROLLER_SM_SESSION_TERMINATED,
        &_L7_CONTROLLER_SM_SESSION_TERMINATED.clockk);
      /* 2 */
      Clock__Reset_RBC_Time_Pkg(
        &_L14_CONTROLLER_SM_SESSION_TERMINATED,
        &_L6_CONTROLLER_SM_SESSION_TERMINATED);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L13_CONTROLLER_SM_SESSION_TERMINATED,
        &_L7_CONTROLLER_SM_SESSION_TERMINATED);
      if (kcg_true) {
        kcg_copy_Clock_T(
          &_L13_CONTROLLER_SM_SESSION_TERMINATED.clockk,
          &_L6_CONTROLLER_SM_SESSION_TERMINATED);
      }
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_13_outDataBus,
        &_L13_CONTROLLER_SM_SESSION_TERMINATED);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_13_outDataBus);
      _14_CONTROLLER_SM_state_nxt = SSM_st_SESSION_TERMINATED_CONTROLLER_SM;
      outC->CONTROLLER_SM_state_nxt = _14_CONTROLLER_SM_state_nxt;
      _15_CONTROLLER_SM_reset_nxt = kcg_false;
      outC->CONTROLLER_SM_reset_nxt = _15_CONTROLLER_SM_reset_nxt;
      _16_CONTROLLER_SM_fired = _152_CONTROLLER_SM_fired_strong;
      _151_CONTROLLER_SM_fired = _16_CONTROLLER_SM_fired;
      break;
    case SSM_st_SEND_RBC_VERSION_CONTROLLER_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L61_CONTROLLER_SM_SEND_RBC_VERSION,
        inDataBus);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L54_CONTROLLER_SM_SEND_RBC_VERSION,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L55_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L54_CONTROLLER_SM_SEND_RBC_VERSION.session);
      /* 2 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &_L55_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L13_CONTROLLER_SM_SEND_RBC_VERSION);
      _L15_CONTROLLER_SM_SEND_RBC_VERSION = NID_LRBG_UNKNOWN;
      /* 1 */
      PosData__Set_NID_LRBG_RBC_Session_Pkg(
        &_L13_CONTROLLER_SM_SEND_RBC_VERSION,
        _L15_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L14_CONTROLLER_SM_SEND_RBC_VERSION);
      /* 2 */
      SessionManagement__SetPosData_RBC_Session_Pkg(
        &_L55_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L14_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L16_CONTROLLER_SM_SEND_RBC_VERSION);
      /* 10 */
      SessionManagement__GetTrainData_RBC_Session_Pkg(
        &_L16_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L36_CONTROLLER_SM_SEND_RBC_VERSION);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L35_CONTROLLER_SM_SEND_RBC_VERSION,
        inRadioTrainTrackMessage);
      /* 5 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &_L35_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L33_CONTROLLER_SM_SEND_RBC_VERSION);
      _L32_CONTROLLER_SM_SEND_RBC_VERSION = /* 2 */
        RadioTrainTrackHeader__Get_NID_ENGINE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &_L33_CONTROLLER_SM_SEND_RBC_VERSION);
      /* 2 */
      TrainData__Set_NID_ENGINE_RBC_Session_Pkg(
        &_L36_CONTROLLER_SM_SEND_RBC_VERSION,
        _L32_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L31_CONTROLLER_SM_SEND_RBC_VERSION);
      /* 10 */
      SessionManagement__SetTrainData_RBC_Session_Pkg(
        &_L16_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L31_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L37_CONTROLLER_SM_SEND_RBC_VERSION);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L60_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L61_CONTROLLER_SM_SEND_RBC_VERSION);
      if (kcg_true) {
        kcg_copy_SessionManagement_T(
          &_L60_CONTROLLER_SM_SEND_RBC_VERSION.session,
          &_L37_CONTROLLER_SM_SEND_RBC_VERSION);
      }
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L59_CONTROLLER_SM_SEND_RBC_VERSION,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L58_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L59_CONTROLLER_SM_SEND_RBC_VERSION.messageQueue);
      _L42_CONTROLLER_SM_SEND_RBC_VERSION = T_TRAIN_MIN;
      _L43_CONTROLLER_SM_SEND_RBC_VERSION = M_ACK_No_acknowledgement_required;
      _L41_CONTROLLER_SM_SEND_RBC_VERSION = NID_LRBG_UNKNOWN;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L56_CONTROLLER_SM_SEND_RBC_VERSION,
        inDataBus);
      kcg_copy_DynamicConfig_T(
        &_L57_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L56_CONTROLLER_SM_SEND_RBC_VERSION.config);
      _L44_CONTROLLER_SM_SEND_RBC_VERSION = /* 2 */
        DynamicConfig__Get_M_VERSION_RBC_Config_Pkg(
          &_L57_CONTROLLER_SM_SEND_RBC_VERSION);
      /* 2 */
      RadioTrackTrainFactory__CreateMsg032_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
        _L42_CONTROLLER_SM_SEND_RBC_VERSION,
        _L43_CONTROLLER_SM_SEND_RBC_VERSION,
        _L41_CONTROLLER_SM_SEND_RBC_VERSION,
        _L44_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L40_CONTROLLER_SM_SEND_RBC_VERSION);
      /* 6 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &_L40_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L50_CONTROLLER_SM_SEND_RBC_VERSION);
      /* 6 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &_L58_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L50_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L49_CONTROLLER_SM_SEND_RBC_VERSION);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L62_CONTROLLER_SM_SEND_RBC_VERSION,
        &_L60_CONTROLLER_SM_SEND_RBC_VERSION);
      if (kcg_true) {
        kcg_copy_RadioTrackTrainMessageQueue_T(
          &_L62_CONTROLLER_SM_SEND_RBC_VERSION.messageQueue,
          &_L49_CONTROLLER_SM_SEND_RBC_VERSION);
      }
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_9_outDataBus,
        &_L62_CONTROLLER_SM_SEND_RBC_VERSION);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_9_outDataBus);
      _10_CONTROLLER_SM_state_nxt = SSM_st_SEND_RBC_VERSION_CONTROLLER_SM;
      outC->CONTROLLER_SM_state_nxt = _10_CONTROLLER_SM_state_nxt;
      _11_CONTROLLER_SM_reset_nxt = kcg_false;
      outC->CONTROLLER_SM_reset_nxt = _11_CONTROLLER_SM_reset_nxt;
      _12_CONTROLLER_SM_fired = _152_CONTROLLER_SM_fired_strong;
      _151_CONTROLLER_SM_fired = _12_CONTROLLER_SM_fired;
      break;
    case SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L11_CONTROLLER_SM_AWAIT_SESSION_ESTABLISHED_REPORT,
        inDataBus);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_5_outDataBus,
        &_L11_CONTROLLER_SM_AWAIT_SESSION_ESTABLISHED_REPORT);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_5_outDataBus);
      _6_CONTROLLER_SM_state_nxt =
        SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM;
      outC->CONTROLLER_SM_state_nxt = _6_CONTROLLER_SM_state_nxt;
      _7_CONTROLLER_SM_reset_nxt = kcg_false;
      outC->CONTROLLER_SM_reset_nxt = _7_CONTROLLER_SM_reset_nxt;
      _8_CONTROLLER_SM_fired = _152_CONTROLLER_SM_fired_strong;
      _151_CONTROLLER_SM_fired = _8_CONTROLLER_SM_fired;
      break;
    case SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM :
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _L41_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION =
            kcg_true;
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            inDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            inRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L34_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            inTriggeredRadioTrackTrainMessage);
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 2 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->Context_2);
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        /* 2 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->Context_2);
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _L179_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER =
            kcg_false;
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L178_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            inDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L3_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            inRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L141_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            inTriggeredRadioTrackTrainMessage);
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_30_outDataBus,
            &last_outDataBus);
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L10_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_VALIDATED_TRAIN_DATA,
            inDataBus);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_26_outDataBus,
            &_L10_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_VALIDATED_TRAIN_DATA);
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L10_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_SESSION_TERMINATION_REQUEST,
            inDataBus);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_22_outDataBus,
            &_L10_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_SESSION_TERMINATION_REQUEST);
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L35_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
            inDataBus);
          /* cb_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN :
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L2176_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A,
                inDataBus);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_L1175_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A,
                &_L2176_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A.messageQueue);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_54_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
                &_L1175_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_177_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAM,
                &_54_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS);
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L34_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                inDataBus);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_L33_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L34_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD.messageQueue);
              _L5165_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A =
                T_TRAIN_MIN;
              _L10_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD =
                M_ACK_Acknowledgement_required;
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                inDataBus);
              kcg_copy_SessionManagement_T(
                &_L28_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD.session);
              /* 7 */
              SessionManagement__GetPosData_RBC_Session_Pkg(
                &_L28_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L11168_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              _L15170_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_ =
                /* 9 */
                PosData__Get_NID_LRBG_RBC_Session_Pkg(
                  &_L11168_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L32_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                inDataBus);
              kcg_copy_DynamicConfig_T(
                &_L31_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L32_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD.config);
              /* 2 */
              DynamicConfig__GetMAReqParams_RBC_Config_Pkg(
                &_L31_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L12169_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              _L1163_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A =
                /* 2 */
                MAReqParams__Get_Q_DIR_RBC_Config_Pkg(
                  &_L12169_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              _L22_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD =
                /* 2 */
                MAReqParams__Get_T_MAR_RBC_Config_Pkg(
                  &_L12169_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              _L20173_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_ =
                /* 2 */
                MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg(
                  &_L12169_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              _L3_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_ =
                /* 2 */
                MAReqParams__Get_T_CYCRQST_RBC_Config_Pkg(
                  &_L12169_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              /* 2 */
              RadioTrackTrainFactory__CreateP057_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
                _L1163_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A,
                _L22_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                _L20173_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_,
                _L3_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_,
                &_L9_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_);
              /* 2 */
              DynamicConfig__GetPosRepParams_RBC_Config_Pkg(
                &_L31_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              _L17172_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_ =
                /* 2 */
                PosRepParams__Get_Q_DIR_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              _L7167_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A =
                /* 2 */
                PosRepParams__Get_Q_SCALE_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              _L25_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD =
                /* 2 */
                PosRepParams__Get_T_CYCLOC_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              _L26_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD =
                /* 2 */
                PosRepParams__Get_D_CYCLOC_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              _L6166_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A =
                /* 2 */
                PosRepParams__Get_M_LOC_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              _L19_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD =
                /* 2 */
                PosRepParams__CountIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
                  &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              /* 2 */
              PosRepParams__GetIncrementalDistancesAndQualifiers_RBC_Config_Pkg(
                &_L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L18_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              /* 2 */
              RadioTrackTrainFactory__CreateP058_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
                _L17172_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_,
                _L7167_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A,
                _L25_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                _L26_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                _L6166_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A,
                _L19_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L18_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L21174_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              /* 2 */
              RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
                _L5165_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A,
                _L10_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                _L15170_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_,
                (P003V1_trackside_int_T_TM_baseline2 *) &P003_DEFAULT,
                (P005_trackside_int_T_TM *) &P005_DEFAULT,
                (P042_trackside_int_T_TM *) &P042_DEFAULT,
                &_L9_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_,
                &_L21174_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_,
                &_L24_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              /* 9 */
              RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
                &_L24_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L4164_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A);
              /* 9 */
              RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
                &_L33_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L4164_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A,
                &_L16171_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_50_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
                &_L16171_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_177_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAM,
                &_50_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS);
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS :
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L13156_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_,
                inDataBus);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_L14157_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_,
                &_L13156_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_.messageQueue);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_46_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
                &_L14157_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_177_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAM,
                &_46_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS);
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L17_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                inDataBus);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_L16_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD,
                &_L17_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD.messageQueue);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
                &_L16_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_177_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAM,
                &messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS);
              break;
            
          }
          kcg_copy_RadioTrackTrainMessageQueue_T(
            &_L36_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
            &_177_messageQueue_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAM);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L38_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS,
            &_L35_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS);
          if (kcg_true) {
            kcg_copy_RadioTrackTrainMessageQueue_T(
              &_L38_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS.messageQueue,
              &_L36_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS);
          }
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_18_outDataBus,
            &_L38_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS);
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* 2 */
          RBC__PingTrain_RBC_Model_Pkg(
            _L41_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            &_L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            &_L34_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            &outC->Context_2);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L42_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            &outC->Context_2.outDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L43_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            &outC->Context_2.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION,
            &outC->Context_2.outTriggeredRadioTrackTrainMessage);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_17_outDataBus,
            &_L42_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION);
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 1 */
            RBC__ProcessPositionReport_reset_RBC_Model_Pkg(&outC->Context_1);
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        /* 1 */
        RBC__ProcessPositionReport_reset_RBC_Model_Pkg(&outC->Context_1);
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* 1 */
          RBC__ProcessPositionReport_RBC_Model_Pkg(
            &_L178_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L3_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L141_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L174_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L38_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L54_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->Context_1.outTriggeredRadioTrackTrainMessage);
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 1 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->_1_Context_1);
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        /* 1 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->_1_Context_1);
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* 1 */
          RBC__PingTrain_RBC_Model_Pkg(
            _L179_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L174_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L38_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L54_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_1_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L170_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_1_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L136_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_1_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L139_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_1_Context_1.outTriggeredRadioTrackTrainMessage);
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 1 */
            RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(
              &outC->_2_Context_1);
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        /* 1 */
        RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(
          &outC->_2_Context_1);
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* 1 */
          RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
            &_L170_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L136_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L139_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_2_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L171_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_2_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L129_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_2_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L132_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_2_Context_1.outTriggeredRadioTrackTrainMessage);
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 1 */
            RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
              &outC->_3_Context_1);
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        /* 1 */
        RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
          &outC->_3_Context_1);
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* 1 */
          RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg(
            &_L171_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L129_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L132_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_3_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L177_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_3_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L144_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_3_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L147_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_3_Context_1.outTriggeredRadioTrackTrainMessage);
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 1 */
            RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(
              &outC->_4_Context_1);
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        /* 1 */
        RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(&outC->_4_Context_1);
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* 1 */
          RBC__ProcessMovementAuthority_RBC_Model_Pkg(
            &_L177_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L144_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L147_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_4_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L173_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_4_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L35_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_4_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_4_Context_1.outTriggeredRadioTrackTrainMessage);
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 1 */
            RBC__ProcessRevocationOfEmergencyStop_reset_RBC_Model_Pkg(
              &outC->_5_Context_1);
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        /* 1 */
        RBC__ProcessRevocationOfEmergencyStop_reset_RBC_Model_Pkg(
          &outC->_5_Context_1);
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* 1 */
          RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg(
            &_L173_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L35_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_5_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L175_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_5_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L151_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_5_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L154_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_5_Context_1.outTriggeredRadioTrackTrainMessage);
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 1 */
            RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(
              &outC->_6_Context_1);
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        /* 1 */
        RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(&outC->_6_Context_1);
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* 1 */
          RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
            &_L175_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L151_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L154_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_6_Context_1);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L176_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_6_Context_1.outDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L165_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_6_Context_1.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L168_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_6_Context_1.outTriggeredRadioTrackTrainMessage);
          break;
        
      }
      /* act_SESSION_ESTABLISHED_SM */ switch (_150_SESSION_ESTABLISHED_SM_state_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (outC->SESSION_ESTABLISHED_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED) {
            /* 2 */
            RBC__ProcessGeneralMessage_reset_RBC_Model_Pkg(&outC->_7_Context_2);
          }
          break;
        
      }
      if (outC->CONTROLLER_SM_reset_act) {
        /* 2 */
        RBC__ProcessGeneralMessage_reset_RBC_Model_Pkg(&outC->_7_Context_2);
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L13_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT,
            inDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L4_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT,
            inRadioTrainTrackMessage);
          /* 1 */
          RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
            &_L4_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT,
            &_L3_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT);
          /* 1 */
          RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
            &_L3_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT,
            &_L2_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT);
          _L5_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT =
            /* 1 */
            RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
              &_L2_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT);
          valid_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT =
            _L5_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
          IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_ =
            valid_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT;
          /* ck_IfBlock1 */ if (IfBlock1_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_) {
            kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
              &_L26_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB,
              inDataBus);
            kcg_copy_SessionManagement_T(
              &_L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB,
              &_L26_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB.session);
            /* 9 */
            SessionManagement__GetTrainData_RBC_Session_Pkg(
              &_L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB,
              &_L19_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB);
            kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
              &_L24_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB,
              inRadioTrainTrackMessage);
            /* 7 */
            TrainData__UpdateWithP003_RBC_Session_Pkg(
              &_L19_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB,
              &_L24_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB,
              &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB);
            /* 9 */
            SessionManagement__SetTrainData_RBC_Session_Pkg(
              &_L27_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB,
              &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB,
              &_L22_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB);
            kcg_copy_SessionManagement_T(
              &_92_session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REP,
              &_L22_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfB);
            kcg_copy_SessionManagement_T(
              &_181_session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_RE,
              &_92_session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REP);
          }
          else {
            kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
              &_L4_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfBl,
              inDataBus);
            kcg_copy_SessionManagement_T(
              &_L5_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfBl,
              &_L4_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfBl.session);
            kcg_copy_SessionManagement_T(
              &session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT,
              &_L5_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT_IfBl);
            kcg_copy_SessionManagement_T(
              &_181_session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_RE,
              &session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT);
          }
          kcg_copy_SessionManagement_T(
            &_L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT,
            &_181_session_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_RE);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT,
            &_L13_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT);
          if (kcg_true) {
            kcg_copy_SessionManagement_T(
              &_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT.session,
              &_L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT);
          }
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_42_outDataBus,
            &_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPORT);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_1_outDataBus, &_42_outDataBus);
          break;
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* cb_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCE) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P :
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_78_outDataBus,
                &last_outDataBus);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_38_outDataBus,
                &_78_outDataBus);
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_ :
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L60_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inDataBus);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_73_outDataBus,
                &_L60_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_38_outDataBus,
                &_73_outDataBus);
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA :
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L28_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inDataBus);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_68_outDataBus,
                &_L28_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_38_outDataBus,
                &_68_outDataBus);
              break;
            case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS :
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L80_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inDataBus);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L85_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inDataBus);
              kcg_copy_SessionManagement_T(
                &_L86_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L85_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V.session);
              /* 1 */
              SessionManagement__GetPosData_RBC_Session_Pkg(
                &_L86_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
                &_L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inRadioTrainTrackMessage);
              /* 1 */
              PosData__Update_RBC_Session_Pkg(
                &_L20_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              /* 3 */
              SessionManagement__SetPosData_RBC_Session_Pkg(
                &_L86_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L57_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              /* 11 */
              SessionManagement__GetTrainData_RBC_Session_Pkg(
                &_L86_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L55_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              /* 2 */
              TrainData__UpdateWithP011_RBC_Session_Pkg(
                &_L55_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L15_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L53_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              /* 11 */
              SessionManagement__SetTrainData_RBC_Session_Pkg(
                &_L57_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L53_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L58_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L82_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L80_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              if (kcg_true) {
                kcg_copy_SessionManagement_T(
                  &_L82_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V.session,
                  &_L58_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              }
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L83_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inDataBus);
              kcg_copy_RadioTrackTrainMessageQueue_T(
                &_L84_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L83_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V.messageQueue);
              _L65_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                T_TRAIN_MIN;
              _L64_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                M_ACK_Acknowledgement_required;
              _L71_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                /* 7 */
                PosData__Get_NID_LRBG_RBC_Session_Pkg(
                  &_L14_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
                &_L70_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inRadioTrainTrackMessage);
              /* 6 */
              RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                &_L70_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L68_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              _L63_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                /* 2 */
                RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
                  &_L68_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              /* 2 */
              RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
                _L65_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                _L64_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                _L71_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                _L63_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L66_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              /* 7 */
              RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
                &_L66_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L75_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              /* 7 */
              RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
                &_L84_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L75_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L77_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L81_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L82_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              if (kcg_true) {
                kcg_copy_RadioTrackTrainMessageQueue_T(
                  &_L81_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V.messageQueue,
                  &_L77_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              }
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_67_outDataBus,
                &_L81_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V);
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_38_outDataBus,
                &_67_outDataBus);
              break;
            
          }
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_1_outDataBus, &_38_outDataBus);
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          /* 2 */
          RBC__ProcessGeneralMessage_RBC_Model_Pkg(
            &_L176_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L165_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &_L168_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_7_Context_2);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_L172_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_7_Context_2.outDataBus);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_L158_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_7_Context_2.outRadioTrainTrackMessage);
          kcg_copy_CompressedRadioMessage_TM(
            &_L161_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER,
            &outC->_7_Context_2.outTriggeredRadioTrackTrainMessage);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
            &_34_outDataBus,
            &_L172_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER);
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_1_outDataBus, &_34_outDataBus);
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_1_outDataBus, &_30_outDataBus);
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_1_outDataBus, &_26_outDataBus);
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_1_outDataBus, &_22_outDataBus);
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_1_outDataBus, &_18_outDataBus);
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_1_outDataBus, &_17_outDataBus);
          break;
        
      }
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_1_outDataBus);
      _2_CONTROLLER_SM_state_nxt = SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM;
      outC->CONTROLLER_SM_state_nxt = _2_CONTROLLER_SM_state_nxt;
      _3_CONTROLLER_SM_reset_nxt = kcg_false;
      outC->CONTROLLER_SM_reset_nxt = _3_CONTROLLER_SM_reset_nxt;
      _4_CONTROLLER_SM_fired = _152_CONTROLLER_SM_fired_strong;
      _151_CONTROLLER_SM_fired = _4_CONTROLLER_SM_fired;
      /* init_SESSION_ESTABLISHED_SM */ if (outC->init) {
        SESSION_ESTABLISHED_SM_reset_sel_CONTROLLER_SM_SESSION_ESTABLISHED =
          kcg_false;
      }
      else {
        SESSION_ESTABLISHED_SM_reset_sel_CONTROLLER_SM_SESSION_ESTABLISHED =
          outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (_133_SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO) {
            _113_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_PROCESS_SESSION_ESTABLISHED_REPORT_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          else if (br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_SESSION_ESTABLISHED_REPO) {
            _113_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_PROCESS_SESSION_ESTABLISHED_REPORT_2_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          else {
            _113_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
            _113_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA) {
            _110_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          else {
            _110_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
            _110_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER) {
            _107_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_RECEIVE_AND_TRIGGER_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          else {
            _107_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
            _107_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START) {
            _104_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_START_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          else if (br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_START) {
            _104_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_START_2_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          else {
            _104_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
            _104_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_AWAIT_VALIDATED_TRAIN_DATA) {
            _101_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_AWAIT_VALIDATED_TRAIN_DATA_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          else {
            _101_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
            _101_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _98_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
            _98_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS) {
            _95_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_SEND_MA_AND_POS_REP_PARAMS_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          else {
            _95_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
            _95_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION) {
            SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_RBC_REQUEST_SESSION_TERMINATION_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          else {
            SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
              SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
          }
          _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED =
            SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        
      }
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _43_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _43_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _44_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _44_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _45_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          _148_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _45_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _39_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _39_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _40_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _40_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _41_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          _148_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _41_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
          /* init_PROCESS_VALIDATED_TRAIN_DATA_SM */ if (outC->init8) {
            PROCESS_VALIDATED_TRAIN_DATA_SM_reset_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
              kcg_false;
          }
          else {
            PROCESS_VALIDATED_TRAIN_DATA_SM_reset_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
          }
          /* init_PROCESS_VALIDATED_TRAIN_DATA_SM */ if (outC->init8) {
            PROCESS_VALIDATED_TRAIN_DATA_SM_reset_prv_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
              kcg_false;
          }
          else {
            PROCESS_VALIDATED_TRAIN_DATA_SM_reset_prv_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
          }
          /* cb_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (_132_PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P :
              _90_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                _144_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _90_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              if (_144_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT) {
                _91_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
                  SSM_TR_START_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED;
              }
              else {
                _91_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
                  SSM_TR_no_trans_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE;
              }
              _146_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLIS =
                _91_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_ :
              if (_142_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT) {
                _87_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                  kcg_true;
              }
              else {
                _87_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                  _143_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT;
              }
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _87_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              if (_142_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT) {
                _88_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
                  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISH;
              }
              else if (_143_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT) {
                _88_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
                  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISH;
              }
              else {
                _88_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
                  SSM_TR_no_trans_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE;
              }
              _146_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLIS =
                _88_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA :
              _84_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                _141_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _84_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              if (_141_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DAT) {
                _85_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
                  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SES;
              }
              else {
                _85_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
                  SSM_TR_no_trans_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE;
              }
              _146_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLIS =
                _85_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
              break;
            case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS :
              if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO) {
                PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                  kcg_true;
              }
              else {
                PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                  br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO;
              }
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                PROCESS_VALIDATED_TRAIN_DATA_SM_reset_act_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
              if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO) {
                PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S =
                  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLIS;
              }
              else if (br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PRO) {
                PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S =
                  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLIS;
              }
              else {
                PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S =
                  SSM_TR_no_trans_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE;
              }
              _146_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLIS =
                PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S;
              break;
            
          }
          /* cb_PROCESS_VALIDATED_TRAIN_DATA_SM */ switch (PROCESS_VALIDATED_TRAIN_DATA_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCE) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P :
              _79_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                _130_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
              outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC =
                _79_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
              _80_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _80_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              _81_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                kcg_false;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _81_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              _82_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _146_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLIS;
              _145_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                _82_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_ :
              outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC =
                _74_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
              _75_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _75_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              _76_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                kcg_false;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _76_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              _77_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _146_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLIS;
              _145_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                _77_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA :
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L29_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                inDataBus);
              kcg_copy_CompressedRadioMessage_TM(
                &_L30_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L29_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V.lastSentTrackTrainMessage);
              /* 3 */
              RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                &_L30_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V,
                &_L20178_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES);
              _L19_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                /* 3 */
                RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L20178_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES);
              _L18_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                8;
              _L16_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                _L19_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V ==
                _L18_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
              _L17_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                /* 4 */
                RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L20178_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCES);
              _L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                _130_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
              /* 2 */ if (_L16_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V) {
                _L21_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                  _L17_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
              }
              else {
                _L21_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V =
                  _L23_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
              }
              _69_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                _L21_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_PROCESS_V;
              outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC =
                _69_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
              _70_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _70_PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              _71_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_ =
                kcg_false;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _71_PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              _72_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                _146_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLIS;
              _145_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                _72_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
              break;
            case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS :
              radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC =
                _130_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
              outC->radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC =
                radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC;
              PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                PROCESS_VALIDATED_TRAIN_DATA_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
              PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                kcg_false;
              outC->PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P =
                PROCESS_VALIDATED_TRAIN_DATA_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_P;
              PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCE =
                _146_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLIS;
              _145_PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                PROCESS_VALIDATED_TRAIN_DATA_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCE;
              break;
            
          }
          break;
        case SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _35_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _35_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _36_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _36_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _37_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          _148_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _37_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
          kcg_copy_CompressedRadioMessage_TM(
            &_128_noname,
            &_L161_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_129_noname,
            &_L158_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RECEIVE_AND_TRIGGER);
          break;
        case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _31_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _31_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _32_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _32_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _33_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          _148_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _33_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _27_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _27_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _28_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _28_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _29_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          _148_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _29_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _23_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _23_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _24_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _24_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _25_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          _148_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _25_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          _19_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _19_SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _20_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            _20_SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          _21_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          _148_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _21_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
          /* init_SEND_MA_AMD_POS_REP_PARAMS_SM */ if (outC->init9) {
            SEND_MA_AMD_POS_REP_PARAMS_SM_reset_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
              kcg_false;
          }
          else {
            SEND_MA_AMD_POS_REP_PARAMS_SM_reset_sel_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
          }
          /* cb_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (_131_SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN :
              if (_137_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_) {
                _66_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                  SSM_TR_START_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S;
              }
              else {
                _66_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                  SSM_TR_no_trans_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              }
              _139_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE =
                _66_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED;
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              if (_135_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_) {
                _63_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_;
              }
              else if (_136_br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_) {
                _63_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_;
              }
              else {
                _63_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                  SSM_TR_no_trans_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              }
              _139_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE =
                _63_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS :
              if (_134_br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_) {
                _60_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                  SSM_TR_AWAIT_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSIO;
              }
              else {
                _60_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED =
                  SSM_TR_no_trans_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              }
              _139_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE =
                _60_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              if (br_1_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_) {
                SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_;
              }
              else if (br_2_guard_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_) {
                SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_;
              }
              else {
                SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                  SSM_TR_no_trans_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_;
              }
              _139_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE =
                SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
              break;
            
          }
          /* cb_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA) {
            case SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN :
              _55_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _55_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              _56_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                kcg_false;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _56_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              _57_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _139_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE;
              _138_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE =
                _57_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
              break;
            case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              _51_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _51_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              _52_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                kcg_false;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _52_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              _53_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _139_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE;
              _138_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE =
                _53_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
              break;
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS :
              _47_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _47_SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              _48_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM =
                kcg_false;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _48_SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
              _49_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                _139_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE;
              _138_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE =
                _49_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
              kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
                &_L15154_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_,
                inDataBus);
              kcg_copy_CompressedRadioMessage_TM(
                &_L16155_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_,
                &_L15154_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_.lastSentTrackTrainMessage);
              /* 5 */
              RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                &_L16155_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_,
                &_L4158_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A);
              _L2_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_ =
                /* 5 */
                RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L4158_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A);
              /* last_init_ck_radioTrackTrainMessageWasSentTimestamp */ if (outC->init10) {
                _127_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
                  T_TRAIN_MIN;
              }
              else {
                _127_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH =
                  outC->_13_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_;
              }
              _L5159_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A =
                24;
              _L7160_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A =
                _L2_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD_ ==
                _L5159_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
              _L11_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD =
                /* 6 */
                RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
                  &_L4158_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A);
              _L12162_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_ =
                _127_last_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISH;
              /* 6 */ if (_L7160_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A) {
                _L8161_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A =
                  _L11_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_AMD;
              }
              else {
                _L8161_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A =
                  _L12162_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_;
              }
              outC->_13_radioTrackTrainMessageWasSentTimestamp_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_ =
                _L8161_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEND_MA_A;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                SEND_MA_AMD_POS_REP_PARAMS_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
              SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                kcg_false;
              outC->SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN =
                SEND_MA_AMD_POS_REP_PARAMS_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEN;
              SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA =
                _139_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE;
              _138_SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SE =
                SEND_MA_AMD_POS_REP_PARAMS_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA;
              break;
            
          }
          break;
        case SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM;
          outC->SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SESSION_ESTABLISHED_SM_state_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            kcg_false;
          outC->SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED =
            SESSION_ESTABLISHED_SM_reset_nxt_CONTROLLER_SM_SESSION_ESTABLISHED;
          SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            _149_SESSION_ESTABLISHED_SM_fired_strong_CONTROLLER_SM_SESSION_ESTABLISHED;
          _148_SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED =
            SESSION_ESTABLISHED_SM_fired_CONTROLLER_SM_SESSION_ESTABLISHED;
          kcg_copy_CompressedRadioMessage_TM(
            &noname,
            &_L44_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &_126_noname,
            &_L43_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_RBC_REQUEST_SESSION_TERMINATION);
          break;
        
      }
      outC->init = kcg_false;
      /* cb_SESSION_ESTABLISHED_SM */ switch (SESSION_ESTABLISHED_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED) {
        case SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->init8 = kcg_false;
          break;
        case SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM :
          outC->init9 = kcg_false;
          /* cb_SEND_MA_AMD_POS_REP_PARAMS_SM */ switch (SEND_MA_AMD_POS_REP_PARAMS_SM_clock_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA) {
            case SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS :
              outC->init10 = kcg_false;
              break;
            case SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A :
              outC->init11 = kcg_false;
              break;
            
          }
          break;
        
      }
      break;
    case SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L26_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        inDataBus);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L25_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L24_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L25_CONTROLLER_SM_SESSION_TERMINATION_REQUEST.session);
      /* 1 */
      SessionManagement__Reset_RBC_Session_Pkg(
        &_L24_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L23_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L27_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L26_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      if (kcg_true) {
        kcg_copy_SessionManagement_T(
          &_L27_CONTROLLER_SM_SESSION_TERMINATION_REQUEST.session,
          &_L23_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      }
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L36_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L35_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L36_CONTROLLER_SM_SESSION_TERMINATION_REQUEST.messageQueue);
      _L6_CONTROLLER_SM_SESSION_TERMINATION_REQUEST = T_TRAIN_MIN;
      /* 5 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &_L24_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L4_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      _L11_CONTROLLER_SM_SESSION_TERMINATION_REQUEST = /* 4 */
        PosData__Get_NID_LRBG_RBC_Session_Pkg(
          &_L4_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      /* 1 */
      RadioTrackTrainFactory__CreateMsg039_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
        _L6_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        _L11_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L3_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      /* 5 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &_L3_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L18_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      /* 5 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &_L35_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L18_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L19_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L28_CONTROLLER_SM_SESSION_TERMINATION_REQUEST,
        &_L27_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      if (kcg_true) {
        kcg_copy_RadioTrackTrainMessageQueue_T(
          &_L28_CONTROLLER_SM_SESSION_TERMINATION_REQUEST.messageQueue,
          &_L19_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      }
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &outDataBus,
        &_L28_CONTROLLER_SM_SESSION_TERMINATION_REQUEST);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outDataBus);
      CONTROLLER_SM_state_nxt =
        SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM;
      outC->CONTROLLER_SM_state_nxt = CONTROLLER_SM_state_nxt;
      CONTROLLER_SM_reset_nxt = kcg_false;
      outC->CONTROLLER_SM_reset_nxt = CONTROLLER_SM_reset_nxt;
      CONTROLLER_SM_fired = _152_CONTROLLER_SM_fired_strong;
      _151_CONTROLLER_SM_fired = CONTROLLER_SM_fired;
      break;
    
  }
  outC->init12 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessController_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

