/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessPositionReport_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessPositionReport_init_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
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
  outC->terminateSessionInCaseOfLevelLoss = kcg_true;
  outC->POSITION_REPORT_SM_reset_nxt = kcg_true;
  outC->POSITION_REPORT_SM_reset_act = kcg_true;
  outC->POSITION_REPORT_SM_state_nxt = SSM_st_IDLE_POSITION_REPORT_SM;
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
  /* 1 */ RBC__PingTrain_init_RBC_Model_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessPositionReport_reset_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ RBC__PingTrain_reset_RBC_Model_Pkg(&outC->Context_1);
}

/* RBC_Model_Pkg::RBC__ProcessPositionReport */
void RBC__ProcessPositionReport_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_TR_POSITION_REPORT_SM _4_POSITION_REPORT_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static kcg_bool _3_POSITION_REPORT_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_ST_POSITION_REPORT_SM _2_POSITION_REPORT_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::session */
  static SessionManagement_T _1_session;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::IDLE::_L2 */
  static SessionManagement_T _L2_POSITION_REPORT_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::IDLE::_L3 */
  static RBC_Data_T_RBC_DataBus_Pkg _L3_POSITION_REPORT_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_TR_POSITION_REPORT_SM POSITION_REPORT_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static kcg_bool POSITION_REPORT_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_ST_POSITION_REPORT_SM POSITION_REPORT_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::session */
  static SessionManagement_T session;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::PROCESS_POSITION_REPORT::_L8 */
  static SessionManagement_T _L8_POSITION_REPORT_SM_PROCESS_POSITION_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::PROCESS_POSITION_REPORT::_L9 */
  static RBC_Data_T_RBC_DataBus_Pkg _L9_POSITION_REPORT_SM_PROCESS_POSITION_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::PROCESS_POSITION_REPORT::_L5 */
  static SessionManagement_T _L5_POSITION_REPORT_SM_PROCESS_POSITION_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::PROCESS_POSITION_REPORT::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1_POSITION_REPORT_SM_PROCESS_POSITION_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::PROCESS_POSITION_REPORT::_L3 */
  static PosData_T _L3_POSITION_REPORT_SM_PROCESS_POSITION_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::PROCESS_POSITION_REPORT::_L4 */
  static PosData_T _L4_POSITION_REPORT_SM_PROCESS_POSITION_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_TR_POSITION_REPORT_SM _7_POSITION_REPORT_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static kcg_bool _6_POSITION_REPORT_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_ST_POSITION_REPORT_SM _5_POSITION_REPORT_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::IDLE */
  static kcg_bool br_1_guard_POSITION_REPORT_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_TR_POSITION_REPORT_SM POSITION_REPORT_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static kcg_bool POSITION_REPORT_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_ST_POSITION_REPORT_SM POSITION_REPORT_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::PROCESS_POSITION_REPORT */
  static kcg_bool br_2_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM::PROCESS_POSITION_REPORT */
  static kcg_bool br_1_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT;
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg noname;
  static CompressedRadioMessage_TM _8_noname;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::terminateSessionInCaseOfLevelLoss */
  static kcg_bool last_terminateSessionInCaseOfLevelLoss;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_ST_POSITION_REPORT_SM POSITION_REPORT_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_ST_POSITION_REPORT_SM _11_POSITION_REPORT_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static kcg_bool POSITION_REPORT_SM_reset_sel;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static kcg_bool POSITION_REPORT_SM_reset_prv;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_TR_POSITION_REPORT_SM _10_POSITION_REPORT_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
  static SSM_TR_POSITION_REPORT_SM _9_POSITION_REPORT_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::session */
  static SessionManagement_T _12_session;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L18 */
  static NID_MESSAGE _L18;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L17 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L17;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L16 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L16;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L32 */
  static SessionManagement_T _L32;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L30 */
  static RBC_Data_T_RBC_DataBus_Pkg _L30;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L29 */
  static RBC_Data_T_RBC_DataBus_Pkg _L29;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L27 */
  static CompressedRadioMessage_TM _L27;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L25 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L25;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L36 */
  static M_LEVEL _L36;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L37 */
  static PosData_T _L37;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L41 */
  static M_LEVEL _L41;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L42 */
  static kcg_bool _L42;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L44 */
  static kcg_bool _L44;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L43 */
  static M_LEVEL _L43;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L47 */
  static RBC_Data_T_RBC_DataBus_Pkg _L47;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L49 */
  static kcg_int _L49;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L51 */
  static kcg_bool _L51;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L52 */
  static kcg_bool _L52;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L45 */
  static kcg_bool _L45;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L57 */
  static kcg_bool _L57;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L59 */
  static kcg_bool _L59;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L62 */
  static kcg_bool _L62;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L63 */
  static kcg_bool _L63;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L65 */
  static kcg_bool _L65;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L55 */
  static CompressedRadioMessage_TM _L55;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L54 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L54;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L53 */
  static RBC_Data_T_RBC_DataBus_Pkg _L53;
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::_L79 */
  static kcg_bool _L79;
  
  /* init_POSITION_REPORT_SM */ if (outC->init) {
    POSITION_REPORT_SM_state_sel = SSM_st_IDLE_POSITION_REPORT_SM;
  }
  else {
    POSITION_REPORT_SM_state_sel = outC->POSITION_REPORT_SM_state_nxt;
  }
  /* init_POSITION_REPORT_SM */ if (outC->init) {
    POSITION_REPORT_SM_reset_sel = kcg_false;
  }
  else {
    POSITION_REPORT_SM_reset_sel = outC->POSITION_REPORT_SM_reset_nxt;
  }
  /* init_POSITION_REPORT_SM */ if (outC->init) {
    POSITION_REPORT_SM_reset_prv = kcg_false;
  }
  else {
    POSITION_REPORT_SM_reset_prv = outC->POSITION_REPORT_SM_reset_act;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L17,
    inRadioTrainTrackMessage);
  /* 2 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L17,
    &_L16);
  _L18 = /* 2 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L16);
  radioTrainTrackMessageId = _L18;
  /* sel_POSITION_REPORT_SM */ switch (POSITION_REPORT_SM_state_sel) {
    case SSM_st_IDLE_POSITION_REPORT_SM :
      br_1_guard_POSITION_REPORT_SM_IDLE = radioTrainTrackMessageId == 136;
      if (br_1_guard_POSITION_REPORT_SM_IDLE) {
        _5_POSITION_REPORT_SM_state_act =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else {
        _5_POSITION_REPORT_SM_state_act = SSM_st_IDLE_POSITION_REPORT_SM;
      }
      _11_POSITION_REPORT_SM_state_act = _5_POSITION_REPORT_SM_state_act;
      _6_POSITION_REPORT_SM_reset_act = br_1_guard_POSITION_REPORT_SM_IDLE;
      outC->POSITION_REPORT_SM_reset_act = _6_POSITION_REPORT_SM_reset_act;
      if (br_1_guard_POSITION_REPORT_SM_IDLE) {
        _7_POSITION_REPORT_SM_fired_strong = SSM_TR_IDLE_1_POSITION_REPORT_SM;
      }
      else {
        _7_POSITION_REPORT_SM_fired_strong = SSM_TR_no_trans_POSITION_REPORT_SM;
      }
      _10_POSITION_REPORT_SM_fired_strong = _7_POSITION_REPORT_SM_fired_strong;
      break;
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      br_1_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT =
        radioTrainTrackMessageId == 136;
      br_2_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT = kcg_true;
      if (br_1_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT) {
        POSITION_REPORT_SM_state_act =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      else if (br_2_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT) {
        POSITION_REPORT_SM_state_act = SSM_st_IDLE_POSITION_REPORT_SM;
      }
      else {
        POSITION_REPORT_SM_state_act =
          SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      }
      _11_POSITION_REPORT_SM_state_act = POSITION_REPORT_SM_state_act;
      if (br_1_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT) {
        POSITION_REPORT_SM_reset_act = kcg_true;
      }
      else {
        POSITION_REPORT_SM_reset_act =
          br_2_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT;
      }
      outC->POSITION_REPORT_SM_reset_act = POSITION_REPORT_SM_reset_act;
      if (br_1_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT) {
        POSITION_REPORT_SM_fired_strong =
          SSM_TR_PROCESS_POSITION_REPORT_1_POSITION_REPORT_SM;
      }
      else if (br_2_guard_POSITION_REPORT_SM_PROCESS_POSITION_REPORT) {
        POSITION_REPORT_SM_fired_strong =
          SSM_TR_PROCESS_POSITION_REPORT_2_POSITION_REPORT_SM;
      }
      else {
        POSITION_REPORT_SM_fired_strong = SSM_TR_no_trans_POSITION_REPORT_SM;
      }
      _10_POSITION_REPORT_SM_fired_strong = POSITION_REPORT_SM_fired_strong;
      break;
    
  }
  /* act_POSITION_REPORT_SM */ switch (_11_POSITION_REPORT_SM_state_act) {
    case SSM_st_IDLE_POSITION_REPORT_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L3_POSITION_REPORT_SM_IDLE,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L2_POSITION_REPORT_SM_IDLE,
        &_L3_POSITION_REPORT_SM_IDLE.session);
      kcg_copy_SessionManagement_T(&_1_session, &_L2_POSITION_REPORT_SM_IDLE);
      kcg_copy_SessionManagement_T(&_12_session, &_1_session);
      _2_POSITION_REPORT_SM_state_nxt = SSM_st_IDLE_POSITION_REPORT_SM;
      outC->POSITION_REPORT_SM_state_nxt = _2_POSITION_REPORT_SM_state_nxt;
      _3_POSITION_REPORT_SM_reset_nxt = kcg_false;
      outC->POSITION_REPORT_SM_reset_nxt = _3_POSITION_REPORT_SM_reset_nxt;
      _4_POSITION_REPORT_SM_fired = _10_POSITION_REPORT_SM_fired_strong;
      _9_POSITION_REPORT_SM_fired = _4_POSITION_REPORT_SM_fired;
      break;
    case SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L9_POSITION_REPORT_SM_PROCESS_POSITION_REPORT,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L8_POSITION_REPORT_SM_PROCESS_POSITION_REPORT,
        &_L9_POSITION_REPORT_SM_PROCESS_POSITION_REPORT.session);
      /* 2 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &_L8_POSITION_REPORT_SM_PROCESS_POSITION_REPORT,
        &_L3_POSITION_REPORT_SM_PROCESS_POSITION_REPORT);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L1_POSITION_REPORT_SM_PROCESS_POSITION_REPORT,
        inRadioTrainTrackMessage);
      /* 2 */
      PosData__Update_RBC_Session_Pkg(
        &_L3_POSITION_REPORT_SM_PROCESS_POSITION_REPORT,
        &_L1_POSITION_REPORT_SM_PROCESS_POSITION_REPORT,
        &_L4_POSITION_REPORT_SM_PROCESS_POSITION_REPORT);
      /* 1 */
      SessionManagement__SetPosData_RBC_Session_Pkg(
        &_L8_POSITION_REPORT_SM_PROCESS_POSITION_REPORT,
        &_L4_POSITION_REPORT_SM_PROCESS_POSITION_REPORT,
        &_L5_POSITION_REPORT_SM_PROCESS_POSITION_REPORT);
      kcg_copy_SessionManagement_T(
        &session,
        &_L5_POSITION_REPORT_SM_PROCESS_POSITION_REPORT);
      kcg_copy_SessionManagement_T(&_12_session, &session);
      POSITION_REPORT_SM_state_nxt =
        SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM;
      outC->POSITION_REPORT_SM_state_nxt = POSITION_REPORT_SM_state_nxt;
      POSITION_REPORT_SM_reset_nxt = kcg_false;
      outC->POSITION_REPORT_SM_reset_nxt = POSITION_REPORT_SM_reset_nxt;
      POSITION_REPORT_SM_fired = _10_POSITION_REPORT_SM_fired_strong;
      _9_POSITION_REPORT_SM_fired = POSITION_REPORT_SM_fired;
      break;
    
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L25,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &_L25);
  kcg_copy_CompressedRadioMessage_TM(&_L27, inTriggeredRadioTrackTrainMessage);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L29, inDataBus);
  kcg_copy_SessionManagement_T(&_L32, &_12_session);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L30, &_L29);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&_L30.session, &_L32);
  }
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &_L27);
  _L49 = 136;
  _L51 = _L18 != _L49;
  /* 4 */ SessionManagement__GetPosData_RBC_Session_Pkg(&_L32, &_L37);
  _L36 = /* 2 */ PosData__Get_M_LEVEL_RBC_Session_Pkg(&_L37);
  _L43 = M_LEVEL_Level_3;
  _L44 = _L36 == _L43;
  _L41 = M_LEVEL_Level_2;
  _L42 = _L36 == _L41;
  _L45 = _L44 | _L42;
  /* last_init_ck_terminateSessionInCaseOfLevelLoss */ if (outC->init) {
    last_terminateSessionInCaseOfLevelLoss = kcg_false;
  }
  else {
    last_terminateSessionInCaseOfLevelLoss =
      outC->terminateSessionInCaseOfLevelLoss;
  }
  _L57 = last_terminateSessionInCaseOfLevelLoss;
  _L59 = !_L57;
  _L52 = _L51 | _L45 | _L59;
  _L79 = !_L52;
  /* 1 */
  RBC__PingTrain_RBC_Model_Pkg(_L79, &_L30, &_L25, &_L27, &outC->Context_1);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L53, &outC->Context_1.outDataBus);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L54,
    &outC->Context_1.outRadioTrainTrackMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &_L55,
    &outC->Context_1.outTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&noname, &_L54);
  kcg_copy_CompressedRadioMessage_TM(&_8_noname, &_L55);
  /* 1 */ if (_L52) {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L47, &_L30);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L47, &_L53);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L47);
  _L62 = last_terminateSessionInCaseOfLevelLoss;
  _L63 = _L62 & _L52;
  _L65 = _L63 | _L45;
  outC->terminateSessionInCaseOfLevelLoss = _L65;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessPositionReport_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

