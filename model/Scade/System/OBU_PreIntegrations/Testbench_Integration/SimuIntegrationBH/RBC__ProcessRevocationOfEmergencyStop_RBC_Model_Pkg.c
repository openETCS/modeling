/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessRevocationOfEmergencyStop_init_RBC_Model_Pkg(
  outC_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg *outC)
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
  outC->revocationMessageWasSentTimestamp = 0;
  outC->ackRequired = kcg_true;
  outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt = kcg_true;
  outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act = kcg_true;
  outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
    SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
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


void RBC__ProcessRevocationOfEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop */
void RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool _20_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _19_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::session */
  static SessionManagement_T _18_session;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _17_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::revocationMessageWasSentTimestamp */
  static T_TRAIN _16_revocationMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::ackRequired */
  static kcg_bool _15_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::IDLE::_L3 */
  static RadioTrackTrainMessageQueue_T _L3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::IDLE::_L4 */
  static RBC_Data_T_RBC_DataBus_Pkg _L4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::IDLE::_L5 */
  static SessionManagement_T _L5_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool _13_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _12_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::session */
  static SessionManagement_T _11_session;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _10_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::revocationMessageWasSentTimestamp */
  static T_TRAIN _9_revocationMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::ackRequired */
  static kcg_bool _8_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L40 */
  static RadioTrackTrainMessageQueue_T _L40_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L41 */
  static RBC_Data_T_RBC_DataBus_Pkg _L41_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L37 */
  static SessionManagement_T _L37_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L38 */
  static RBC_Data_T_RBC_DataBus_Pkg _L38_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L29 */
  static kcg_bool _L29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L30 */
  static kcg_bool _L30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L31 */
  static kcg_bool _L31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L32 */
  static M_ACK _L32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L33 */
  static M_ACK _L33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L34 */
  static Radio_TrackTrain_Header_T_TM _L34_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L35 */
  static kcg_bool _L35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L26 */
  static CompressedRadioMessage_TM _L26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L22 */
  static RadioTrackTrainMessageQueueEntry_T _L22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE::_L20 */
  static RadioTrackTrainMessageQueue_T _L20_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _7_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool _6_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _5_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::session */
  static SessionManagement_T _4_session;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _3_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::revocationMessageWasSentTimestamp */
  static T_TRAIN _2_revocationMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::ackRequired */
  static kcg_bool _1_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L16 */
  static CompressedRadioMessage_TM _L16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L17 */
  static RBC_Data_T_RBC_DataBus_Pkg _L17_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L13 */
  static RBC_Data_T_RBC_DataBus_Pkg _L13_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L14 */
  static SessionManagement_T _L14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L15 */
  static RadioTrackTrainMessageQueue_T _L15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L3 */
  static Radio_TrackTrain_Header_T_TM _L3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L4 */
  static kcg_bool _L4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L5 */
  static NID_MESSAGE _L5_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L6 */
  static NID_MESSAGE _L6_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L7 */
  static T_TRAIN _L7_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L8 */
  static T_TRAIN _L8_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L9 */
  static T_TRAIN _L9_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::session */
  static SessionManagement_T session;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::revocationMessageWasSentTimestamp */
  static T_TRAIN revocationMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::ackRequired */
  static kcg_bool ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L30 */
  static RBC_Data_T_RBC_DataBus_Pkg _L30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L31 */
  static CompressedRadioMessage_TM _L31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L27 */
  static SessionManagement_T _L27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L28 */
  static RadioTrackTrainMessageQueue_T _L28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L29 */
  static RBC_Data_T_RBC_DataBus_Pkg _L29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L18 */
  static kcg_bool _L18_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L19 */
  static NID_MESSAGE _L19_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L20 */
  static T_TRAIN _L20_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L21 */
  static T_TRAIN _L21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L22 */
  static NID_MESSAGE _L22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L23 */
  static Radio_TrackTrain_Header_T_TM _L23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L24 */
  static T_TRAIN _L24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L14 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L15 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L16 */
  static T_TRAIN _L16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::acknowledgementMessageTimestamp */
  static T_TRAIN acknowledgementMessageTimestamp_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool _29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::IDLE */
  static kcg_bool br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool _26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _25_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE */
  static kcg_bool br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE */
  static kcg_bool br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::SEND_REVOCATION_OF_ES_MESSAGE */
  static kcg_bool br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool _23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_4_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::validAck */
  static kcg_bool last_validAck;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::revocationMessageWasSentTimestamp */
  static T_TRAIN last_revocationMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::ackRequired */
  static kcg_bool last_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_sel;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static kcg_bool REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_prv;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
  static SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM _31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::radioTrackTrainMessageId */
  static NID_MESSAGE radioTrackTrainMessageId;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::radioTrackTrainMessage */
  static CompressedRadioMessage_TM radioTrackTrainMessage;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _35_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::session */
  static SessionManagement_T _34_session;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L58 */
  static CompressedRadioMessage_TM _L58;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L61 */
  static Radio_TrackTrain_Header_T_TM _L61;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L60 */
  static NID_MESSAGE _L60;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L59 */
  static CompressedRadioMessage_TM _L59;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L68 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L68;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L67 */
  static NID_MESSAGE _L67;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L66 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L66;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L81 */
  static RBC_Data_T_RBC_DataBus_Pkg _L81;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L80 */
  static RBC_Data_T_RBC_DataBus_Pkg _L80;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L79 */
  static RadioTrackTrainMessageQueue_T _L79;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L77 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L77;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L76 */
  static CompressedRadioMessage_TM _L76;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L75 */
  static RBC_Data_T_RBC_DataBus_Pkg _L75;
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::_L74 */
  static SessionManagement_T _L74;
  
  /* last_init_ck_invalidAck */ if (outC->init) {
    last_invalidAck = kcg_false;
  }
  else {
    last_invalidAck = outC->invalidAck;
  }
  /* init_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ if (outC->init) {
    REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel =
      SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
  }
  else {
    REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel =
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
  }
  /* last_init_ck_validAck */ if (outC->init) {
    last_validAck = kcg_false;
  }
  else {
    last_validAck = outC->validAck;
  }
  kcg_copy_CompressedRadioMessage_TM(&_L58, inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(&radioTrackTrainMessage, &_L58);
  kcg_copy_CompressedRadioMessage_TM(&_L59, &radioTrackTrainMessage);
  /* 1 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L59,
    &_L61);
  _L60 = /* 1 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L61);
  radioTrackTrainMessageId = _L60;
  /* sel_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ switch (REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAck & (radioTrackTrainMessageId == 18);
      br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAck;
      break;
    
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L66,
    inRadioTrainTrackMessage);
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L66,
    &_L68);
  _L67 = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L68);
  radioTrainTrackMessageId = _L67;
  /* sel_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ switch (REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
        radioTrainTrackMessageId == 146;
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT) {
        _22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck & (radioTrainTrackMessageId == 146);
      br_4_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck;
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_4_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      break;
    
  }
  /* last_init_ck_ackRequired */ if (outC->init) {
    last_ackRequired = kcg_false;
  }
  else {
    last_ackRequired = outC->ackRequired;
  }
  /* sel_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ switch (REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE =
        radioTrackTrainMessageId == 18;
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE) {
        _28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
        _28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
        last_ackRequired & (radioTrainTrackMessageId == 146);
      br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
        last_ackRequired & (radioTrainTrackMessageId != 146);
      br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
        !last_ackRequired;
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE) {
        _25_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE) {
        _25_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE) {
        _25_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _25_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
          SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
        _25_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
        _22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act =
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act;
      break;
    
  }
  /* act_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ switch (_33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inRadioTrainTrackMessage);
      /* 5 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &_L15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        /* 2 */
        RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &_L14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      acknowledgementMessageTimestamp_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &_L31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT.lastSentTrackTrainMessage);
      /* 5 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        /* 4 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L19_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        18;
      _L18_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
        _L19_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      _L20_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        /* 3 */
        RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      break;
    
  }
  /* last_init_ck_revocationMessageWasSentTimestamp */ if (outC->init) {
    last_revocationMessageWasSentTimestamp = T_TRAIN_MIN;
  }
  else {
    last_revocationMessageWasSentTimestamp =
      outC->revocationMessageWasSentTimestamp;
  }
  /* act_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ switch (_33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act) {
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _L24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_revocationMessageWasSentTimestamp;
      /* 5 */ if (_L18_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _L21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          _L20_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      else {
        _L21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          _L24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      revocationMessageWasSentTimestamp =
        _L21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      IfBlock1_clock_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        acknowledgementMessageTimestamp_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
        revocationMessageWasSentTimestamp;
      /* ck_IfBlock1 */ if (IfBlock1_clock_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        outC->invalidAck = kcg_false;
        outC->validAck = kcg_true;
      }
      else {
        outC->invalidAck = kcg_true;
        outC->validAck = kcg_false;
      }
      break;
    
  }
  /* init_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ if (outC->init) {
    REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_sel = kcg_false;
  }
  else {
    REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_sel =
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
  }
  /* init_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ if (outC->init) {
    REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_prv = kcg_false;
  }
  else {
    REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_prv =
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
  }
  /* sel_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ switch (REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_sel) {
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        _29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE) {
        _30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_IDLE_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
        _30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE) {
        _26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE) {
        _26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act = kcg_true;
      }
      else {
        _26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
          br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
      }
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        _26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE) {
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE) {
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE) {
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
        _27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        _23_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT) {
        _24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        _24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
        _24_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act = kcg_true;
      }
      else if (br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act = kcg_true;
      }
      else {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
          br_4_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act =
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
      if (br_1_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_2_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_3_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else if (br_4_guard_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      else {
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
          SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      }
      _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong =
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      break;
    
  }
  /* act_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ switch (_33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_act) {
    case SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _15_ackRequired = last_ackRequired;
      outC->ackRequired = _15_ackRequired;
      _16_revocationMessageWasSentTimestamp =
        last_revocationMessageWasSentTimestamp;
      outC->revocationMessageWasSentTimestamp =
        _16_revocationMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE,
        &_L4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_17_messageQueue,
        &_L3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_35_messageQueue,
        &_17_messageQueue);
      kcg_copy_SessionManagement_T(
        &_L5_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE,
        &_L4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE.session);
      kcg_copy_SessionManagement_T(
        &_18_session,
        &_L5_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_IDLE);
      kcg_copy_SessionManagement_T(&_34_session, &_18_session);
      _19_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        _19_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
      _20_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt = kcg_false;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt =
        _20_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
      _21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      _31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _21_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
      break;
    case SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      kcg_copy_CompressedRadioMessage_TM(
        &_L26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE,
        &radioTrackTrainMessage);
      /* 10 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE,
        &_L34_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE);
      _L33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
        /* 2 */
        RadioTrackTrainHeader__Get_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L34_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE);
      _L32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
        M_ACK_Acknowledgement_required;
      _L35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
        _L33_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE ==
        _L32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
      _L29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
        kcg_true;
      _L31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
        kcg_false;
      /* 6 */ if (_L35_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE) {
        _L30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
          _L29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
      }
      else {
        _L30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE =
          _L31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
      }
      _8_ackRequired =
        _L30_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE;
      outC->ackRequired = _8_ackRequired;
      _9_revocationMessageWasSentTimestamp =
        last_revocationMessageWasSentTimestamp;
      outC->revocationMessageWasSentTimestamp =
        _9_revocationMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L41_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L40_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE,
        &_L41_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE.messageQueue);
      /* 1 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &_L26_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE,
        &_L22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE);
      /* 1 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &_L40_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE,
        &_L22_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE,
        &_L20_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_10_messageQueue,
        &_L20_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_35_messageQueue,
        &_10_messageQueue);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L38_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L37_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE,
        &_L38_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE.session);
      kcg_copy_SessionManagement_T(
        &_11_session,
        &_L37_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_SEND_REVOCATION_OF_ES_MESSAGE);
      kcg_copy_SessionManagement_T(&_34_session, &_11_session);
      _12_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        _12_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
      _13_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt = kcg_false;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt =
        _13_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
      _14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      _31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      _1_ackRequired = last_ackRequired;
      outC->ackRequired = _1_ackRequired;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L17_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &_L16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L17_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT.lastSentTrackTrainMessage);
      /* 4 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L16_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      _L6_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
        /* 3 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      _L5_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT = 18;
      _L4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
        _L6_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT ==
        _L5_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      _L8_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
        /* 2 */
        RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      _L7_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
        last_revocationMessageWasSentTimestamp;
      /* 4 */ if (_L4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT) {
        _L9_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
          _L8_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      }
      else {
        _L9_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
          _L7_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      }
      _2_revocationMessageWasSentTimestamp =
        _L9_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      outC->revocationMessageWasSentTimestamp =
        _2_revocationMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L13_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L13_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_3_messageQueue,
        &_L15_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_35_messageQueue,
        &_3_messageQueue);
      kcg_copy_SessionManagement_T(
        &_L14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L13_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT.session);
      kcg_copy_SessionManagement_T(
        &_4_session,
        &_L14_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_SessionManagement_T(&_34_session, &_4_session);
      _5_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        _5_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
      _6_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt = kcg_false;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt =
        _6_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
      _7_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      _31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _7_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM :
      ackRequired = last_ackRequired;
      outC->ackRequired = ackRequired;
      outC->revocationMessageWasSentTimestamp =
        revocationMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue,
        &_L28_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(&_35_messageQueue, &messageQueue);
      kcg_copy_SessionManagement_T(
        &_L27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L29_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT.session);
      kcg_copy_SessionManagement_T(
        &session,
        &_L27_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_SessionManagement_T(&_34_session, &session);
      REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt =
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
      REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt = kcg_false;
      outC->REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt =
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
      REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        _32_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired_strong;
      _31_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired =
        REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_fired;
      break;
    
  }
  kcg_copy_SessionManagement_T(&_L74, &_34_session);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L81, inDataBus);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L79, &_35_messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L75, &_L81);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&_L75.messageQueue, &_L79);
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L77,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &_L77);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L80, &_L75);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&_L80.session, &_L74);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L80);
  kcg_copy_CompressedRadioMessage_TM(&_L76, inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &_L76);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

