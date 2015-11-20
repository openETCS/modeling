/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessUnconditionalEmergencyStop_init_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC)
{
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
  
  outC->init = kcg_true;
  outC->radioTrackTrainMessageWasSentEmergencyStopId = 0;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_true;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
  outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  outC->validAck = kcg_true;
  outC->invalidAck = kcg_true;
  outC->outTriggeredRadioTrackTrainMessage.Header.radioDevice = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.receivedSystemTime = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_message = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.m_ack = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_lrbg = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train_reference = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_em = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.q_scale = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.d_sr = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.t_sh_rqst = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.d_ref = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.q_dir = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.d_emergencystop = 0;
  outC->outTriggeredRadioTrackTrainMessage.Header.m_version = 0;
  for (i = 0; i < 30; i++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i].nid_packet =
      0;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i].startAddress =
      0;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i].endAddress =
      0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketData[i1] = 0;
  }
  outC->outRadioTrainTrackMessage.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.nid_message = 0;
  outC->outRadioTrainTrackMessage.header.t_train = 0;
  outC->outRadioTrainTrackMessage.header.nid_engine = 0;
  outC->outRadioTrainTrackMessage.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioTrainTrackMessage.header.xT_TRAIN = 0;
  outC->outRadioTrainTrackMessage.header.xNID_EM = 0;
  outC->outRadioTrainTrackMessage.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioTrainTrackMessage.header.xNID_TEXTMESSAGE = 0;
  outC->outRadioTrainTrackMessage.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.D_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_TRAININT = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.V_TRAIN = 0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_NTC = 0;
  outC->outRadioTrainTrackMessage.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_PACKET = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.D_LRBG = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_TRAININT = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.V_TRAIN = 0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_NTC = 0;
  outC->outRadioTrainTrackMessage.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p3.number = 0;
  for (i3 = 0; i3 < 1; i3++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[i3].valid = kcg_true;
    for (i2 = 0; i2 < 15; i2++) {
      outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[i3].telephoneNumber[i2] =
        0;
    }
  }
  outC->outRadioTrainTrackMessage.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioTrainTrackMessage.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p5.TrainRunningNumber = 0;
  outC->outRadioTrainTrackMessage.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p9.transitionInformation = 0;
  outC->outRadioTrainTrackMessage.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioTrainTrackMessage.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioTrainTrackMessage.packets.p11.l_train = 0;
  outC->outRadioTrainTrackMessage.packets.p11.v_maxtrain = 0;
  outC->outRadioTrainTrackMessage.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioTrainTrackMessage.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrackMessage.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrackMessage.packets.p11.n_axle = 0;
  outC->outRadioTrainTrackMessage.packets.p11.nIter_tractionIdentity = 0;
  for (i4 = 0; i4 < 4; i4++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[i4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[i4].nid_ctraction =
      0;
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = 0;
  for (i5 = 0; i5 < 5; i5++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[i5] = 0;
  }
  outC->outDataBus.session.m_TrainData.nid_engine = 0;
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  for (i7 = 0; i7 < 1; i7++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[i7].valid =
      kcg_true;
    for (i6 = 0; i6 < 15; i6++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[i7].telephoneNumber[i6] =
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
  for (i8 = 0; i8 < 4; i8++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i8].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i8].nid_ctraction =
      0;
  }
  for (i9 = 0; i9 < 5; i9++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[i9] = 0;
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
  for (i10 = 0; i10 < 32; i10++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[i10].d_loc =
      0;
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[i10].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (i11 = 0; i11 < 16; i11++) {
    outC->outDataBus.diagnostic[i11].valid = kcg_true;
    outC->outDataBus.diagnostic[i11].count = 0;
    outC->outDataBus.diagnostic[i11].timestamp = 0;
    outC->outDataBus.diagnostic[i11].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[i11].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[i11].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (i14 = 0; i14 < 8; i14++) {
    outC->outDataBus.messageQueue.m_Entries[i14].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.radioDevice = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.receivedSystemTime =
      0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.nid_message = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.t_train = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.m_ack = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.nid_lrbg = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.t_train_reference =
      0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.nid_em = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.q_scale = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.d_sr = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.t_sh_rqst = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.d_ref = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.q_dir = 0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.d_emergencystop =
      0;
    outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Header.m_version = 0;
    for (i12 = 0; i12 < 30; i12++) {
      outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Messages.PacketHeaders[i12].nid_packet =
        0;
      outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Messages.PacketHeaders[i12].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Messages.PacketHeaders[i12].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Messages.PacketHeaders[i12].startAddress =
        0;
      outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Messages.PacketHeaders[i12].endAddress =
        0;
    }
    for (i13 = 0; i13 < 500; i13++) {
      outC->outDataBus.messageQueue.m_Entries[i14].m_Entry.Messages.PacketData[i13] =
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
  for (i15 = 0; i15 < 30; i15++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i15].nid_packet =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i15].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i15].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i15].startAddress =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i15].endAddress =
      0;
  }
  for (i16 = 0; i16 < 500; i16++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[i16] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop */
void RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _18_UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _17_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _16_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::session */
  static SessionManagement_T _15_session;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _14_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM _13_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::IDLE::_L3 */
  static SessionManagement_T _L3_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::IDLE::_L4 */
  static RadioTrackTrainMessageQueue_T _L4_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::IDLE::_L5 */
  static RBC_Data_T_RBC_DataBus_Pkg _L5_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _12_UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _11_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _10_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::session */
  static SessionManagement_T _9_session;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _8_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM _7_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP::_L65 */
  static RBC_Data_T_RBC_DataBus_Pkg _L65_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP::_L62 */
  static RadioTrackTrainMessageQueue_T _L62_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP::_L63 */
  static RBC_Data_T_RBC_DataBus_Pkg _L63_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP::_L64 */
  static SessionManagement_T _L64_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP::_L57 */
  static RadioTrackTrainMessageQueue_T _L57_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP::_L59 */
  static RadioTrackTrainMessageQueueEntry_T _L59_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP::_L56 */
  static Radio_TrackTrain_Header_T_TM _L56_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP::_L54 */
  static NID_EM _L54_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP::_L52 */
  static CompressedRadioMessage_TM _L52_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _6_UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _5_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _4_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::session */
  static SessionManagement_T _3_session;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _2_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM _1_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::AWAIT_ACKNOWLEDGEMENT::_L3 */
  static RadioTrackTrainMessageQueue_T _L3_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::AWAIT_ACKNOWLEDGEMENT::_L4 */
  static RBC_Data_T_RBC_DataBus_Pkg _L4_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::AWAIT_ACKNOWLEDGEMENT::_L5 */
  static SessionManagement_T _L5_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::session */
  static SessionManagement_T session;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L40 */
  static RadioTrackTrainMessageQueue_T _L40_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L41 */
  static RBC_Data_T_RBC_DataBus_Pkg _L41_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L38 */
  static Q_EMERGENCYSTOP _L38_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L27 */
  static NID_EM _L27_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L26 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L25 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L25_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::qualifierEmergencyStop */
  static Q_EMERGENCYSTOP qualifierEmergencyStop_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::emergencyStopId */
  static NID_EM emergencyStopId_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::else::_L3 */
  static SessionManagement_T _L3_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::else::_L2 */
  static RBC_Data_T_RBC_DataBus_Pkg _L2_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::session */
  static SessionManagement_T _19_session;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L13 */
  static SessionManagement_T _L13_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L12 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L12_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L11 */
  static PosData_T _L11_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L10 */
  static PosData_T _L10_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L15 */
  static RBC_Data_T_RBC_DataBus_Pkg _L15_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L14 */
  static SessionManagement_T _L14_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::session */
  static SessionManagement_T _20_session;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _28_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::IDLE */
  static kcg_bool br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _26_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _25_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _24_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP */
  static kcg_bool br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::SEND_UNCONDITIONAL_EMERGENCY_STOP */
  static kcg_bool br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _23_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _22_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _21_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::AWAIT_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_4_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_3_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::validAck */
  static kcg_bool last_validAck;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM last_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM _32_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool UNCONDITIONAL_EMERGENCY_STOP_SM_reset_sel;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool UNCONDITIONAL_EMERGENCY_STOP_SM_reset_prv;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _31_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM _30_UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessageId */
  static NID_MESSAGE radioTrackTrainMessageId;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessage */
  static CompressedRadioMessage_TM radioTrackTrainMessage;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _34_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::session */
  static SessionManagement_T _33_session;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L60 */
  static CompressedRadioMessage_TM _L60;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L65 */
  static Radio_TrackTrain_Header_T_TM _L65;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L64 */
  static CompressedRadioMessage_TM _L64;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L63 */
  static NID_MESSAGE _L63;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L68 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L68;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L67 */
  static NID_MESSAGE _L67;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L66 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L66;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L81 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L81;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L80 */
  static RadioTrackTrainMessageQueue_T _L80;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L79 */
  static RBC_Data_T_RBC_DataBus_Pkg _L79;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L78 */
  static RBC_Data_T_RBC_DataBus_Pkg _L78;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L77 */
  static SessionManagement_T _L77;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L75 */
  static RBC_Data_T_RBC_DataBus_Pkg _L75;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::_L74 */
  static CompressedRadioMessage_TM _L74;
  
  /* last_init_ck_invalidAck */ if (outC->init) {
    last_invalidAck = kcg_false;
  }
  else {
    last_invalidAck = outC->invalidAck;
  }
  /* init_UNCONDITIONAL_EMERGENCY_STOP_SM */ if (outC->init) {
    UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel =
      SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  }
  else {
    UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel =
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  }
  /* last_init_ck_validAck */ if (outC->init) {
    last_validAck = kcg_false;
  }
  else {
    last_validAck = outC->validAck;
  }
  kcg_copy_CompressedRadioMessage_TM(&_L60, inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(&radioTrackTrainMessage, &_L60);
  kcg_copy_CompressedRadioMessage_TM(&_L64, &radioTrackTrainMessage);
  /* 1 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L64,
    &_L65);
  _L63 = /* 1 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L65);
  radioTrackTrainMessageId = _L63;
  /* sel_UNCONDITIONAL_EMERGENCY_STOP_SM */ switch (UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAck & (radioTrackTrainMessageId == 16);
      br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAck;
      break;
    
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L68,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L68,
    &_L66);
  _L67 = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L66);
  radioTrainTrackMessageId = _L67;
  /* sel_UNCONDITIONAL_EMERGENCY_STOP_SM */ switch (UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE =
        radioTrackTrainMessageId == 16;
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE) {
        _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      _32_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _27_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP =
        radioTrainTrackMessageId == 147;
      br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP =
        radioTrainTrackMessageId != 147;
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP) {
        _24_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP) {
        _24_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _24_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      _32_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _24_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT =
        radioTrainTrackMessageId == 147;
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT) {
        _21_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _21_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      _32_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _21_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      br_3_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck & (radioTrainTrackMessageId == 147);
      br_4_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck;
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_3_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_4_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      _32_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
      break;
    
  }
  /* act_UNCONDITIONAL_EMERGENCY_STOP_SM */ switch (_32_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L25_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inRadioTrainTrackMessage);
      /* 3 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &_L25_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L27_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 1 */
        RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &_L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      emergencyStopId_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L27_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      break;
    
  }
  /* last_init_ck_radioTrackTrainMessageWasSentEmergencyStopId */ if (outC->init) {
    last_radioTrackTrainMessageWasSentEmergencyStopId = NID_EM_DEFAULT;
  }
  else {
    last_radioTrackTrainMessageWasSentEmergencyStopId =
      outC->radioTrackTrainMessageWasSentEmergencyStopId;
  }
  /* act_UNCONDITIONAL_EMERGENCY_STOP_SM */ switch (_32_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      _L38_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 1 */
        RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &_L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      qualifierEmergencyStop_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L38_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        (emergencyStopId_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
          radioTrackTrainMessageWasSentEmergencyStopId) &
        (qualifierEmergencyStop_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
          Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted);
      /* ck_IfBlock1 */ if (IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        outC->invalidAck = kcg_false;
        outC->validAck = kcg_true;
      }
      else {
        outC->invalidAck = kcg_true;
        outC->validAck = kcg_false;
      }
      break;
    
  }
  /* init_UNCONDITIONAL_EMERGENCY_STOP_SM */ if (outC->init) {
    UNCONDITIONAL_EMERGENCY_STOP_SM_reset_sel = kcg_false;
  }
  else {
    UNCONDITIONAL_EMERGENCY_STOP_SM_reset_sel =
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  }
  /* init_UNCONDITIONAL_EMERGENCY_STOP_SM */ if (outC->init) {
    UNCONDITIONAL_EMERGENCY_STOP_SM_reset_prv = kcg_false;
  }
  else {
    UNCONDITIONAL_EMERGENCY_STOP_SM_reset_prv =
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  }
  /* sel_UNCONDITIONAL_EMERGENCY_STOP_SM */ switch (UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      _28_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _28_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE) {
        _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_IDLE_1_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      _31_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _29_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP) {
        _25_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
      }
      else {
        _25_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
          br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _25_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP) {
        _26_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_1_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP) {
        _26_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_2_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _26_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      _31_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _26_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      _22_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _22_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT) {
        _23_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _23_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      _31_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _23_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
      }
      else if (br_3_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
      }
      else {
        UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
          br_4_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
      if (br_1_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_2_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_3_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_4_guard_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      _31_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      break;
    
  }
  /* act_UNCONDITIONAL_EMERGENCY_STOP_SM */ switch (_32_UNCONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      _13_radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _13_radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L5_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L4_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE,
        &_L5_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_14_messageQueue,
        &_L4_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_34_messageQueue,
        &_14_messageQueue);
      kcg_copy_SessionManagement_T(
        &_L3_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE,
        &_L5_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE.session);
      kcg_copy_SessionManagement_T(
        &_15_session,
        &_L3_UNCONDITIONAL_EMERGENCY_STOP_SM_IDLE);
      kcg_copy_SessionManagement_T(&_33_session, &_15_session);
      _16_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _16_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
      _17_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _17_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
      _18_UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _31_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _30_UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _18_UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_CompressedRadioMessage_TM(
        &_L52_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP,
        &radioTrackTrainMessage);
      /* 3 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L52_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP,
        &_L56_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP);
      _L54_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP =
        /* 1 */
        RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L56_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP);
      _7_radioTrackTrainMessageWasSentEmergencyStopId =
        _L54_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _7_radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L65_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L62_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP,
        &_L65_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP.messageQueue);
      /* 3 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &_L52_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP,
        &_L59_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP);
      /* 3 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &_L62_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP,
        &_L59_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP,
        &_L57_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_8_messageQueue,
        &_L57_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_34_messageQueue,
        &_8_messageQueue);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L63_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L64_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP,
        &_L63_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP.session);
      kcg_copy_SessionManagement_T(
        &_9_session,
        &_L64_UNCONDITIONAL_EMERGENCY_STOP_SM_SEND_UNCONDITIONAL_EMERGENCY_STOP);
      kcg_copy_SessionManagement_T(&_33_session, &_9_session);
      _10_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _10_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
      _11_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _11_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
      _12_UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _31_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _30_UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _12_UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      _1_radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _1_radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L4_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L3_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L4_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_2_messageQueue,
        &_L3_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_34_messageQueue,
        &_2_messageQueue);
      kcg_copy_SessionManagement_T(
        &_L5_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L4_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT.session);
      kcg_copy_SessionManagement_T(
        &_3_session,
        &_L5_UNCONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_SessionManagement_T(&_33_session, &_3_session);
      _4_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _4_UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
      _5_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _5_UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
      _6_UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _31_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _30_UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _6_UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L41_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L40_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L41_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue,
        &_L40_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(&_34_messageQueue, &messageQueue);
      /* ck_IfBlock1 */ if (IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &_L15_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &_L14_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L15_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1.session);
        /* 5 */
        SessionManagement__GetPosData_RBC_Session_Pkg(
          &_L14_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L10_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &_L12_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          inRadioTrainTrackMessage);
        /* 5 */
        PosData__Update_RBC_Session_Pkg(
          &_L10_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L12_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L11_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        /* 5 */
        SessionManagement__SetPosData_RBC_Session_Pkg(
          &_L14_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L11_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L13_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        kcg_copy_SessionManagement_T(
          &_20_session,
          &_L13_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        kcg_copy_SessionManagement_T(&session, &_20_session);
      }
      else {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &_L2_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &_L3_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L2_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1.session);
        kcg_copy_SessionManagement_T(
          &_19_session,
          &_L3_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        kcg_copy_SessionManagement_T(&session, &_19_session);
      }
      kcg_copy_SessionManagement_T(&_33_session, &session);
      UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
      UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
      UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        _31_UNCONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _30_UNCONDITIONAL_EMERGENCY_STOP_SM_fired =
        UNCONDITIONAL_EMERGENCY_STOP_SM_fired;
      break;
    
  }
  kcg_copy_CompressedRadioMessage_TM(&_L74, inTriggeredRadioTrackTrainMessage);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L75, inDataBus);
  kcg_copy_SessionManagement_T(&_L77, &_33_session);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L80, &_34_messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L78, &_L75);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&_L78.messageQueue, &_L80);
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L81,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &_L81);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L79, &_L78);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&_L79.session, &_L77);
  }
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &_L74);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L79);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

