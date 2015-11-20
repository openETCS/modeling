/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessGeneralMessage_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessGeneralMessage_init_RBC_Model_Pkg(
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg *outC)
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
  outC->radioTrackTrainMessageWasSentTimestamp = 0;
  outC->ackRequired = kcg_true;
  outC->GENERAL_MESSAGE_SM_reset_nxt = kcg_true;
  outC->GENERAL_MESSAGE_SM_reset_act = kcg_true;
  outC->GENERAL_MESSAGE_SM_state_nxt = SSM_st_IDLE_GENERAL_MESSAGE_SM;
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


void RBC__ProcessGeneralMessage_reset_RBC_Model_Pkg(
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
void RBC__ProcessGeneralMessage_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM _21_GENERAL_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool _20_GENERAL_MESSAGE_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM _19_GENERAL_MESSAGE_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::messageQueue */
  static RadioTrackTrainMessageQueue_T _18_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::session */
  static SessionManagement_T _17_session;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _16_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::ackRequired */
  static kcg_bool _15_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::IDLE::_L3 */
  static SessionManagement_T _L3_GENERAL_MESSAGE_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::IDLE::_L4 */
  static RBC_Data_T_RBC_DataBus_Pkg _L4_GENERAL_MESSAGE_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::IDLE::_L5 */
  static RadioTrackTrainMessageQueue_T _L5_GENERAL_MESSAGE_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM _14_GENERAL_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool _13_GENERAL_MESSAGE_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM _12_GENERAL_MESSAGE_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::messageQueue */
  static RadioTrackTrainMessageQueue_T _11_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::session */
  static SessionManagement_T _10_session;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _9_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::ackRequired */
  static kcg_bool _8_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L46 */
  static RadioTrackTrainMessageQueue_T _L46_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L47 */
  static RBC_Data_T_RBC_DataBus_Pkg _L47_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L38 */
  static SessionManagement_T _L38_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L39 */
  static RBC_Data_T_RBC_DataBus_Pkg _L39_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L27 */
  static M_ACK _L27_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L29 */
  static kcg_bool _L29_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L30 */
  static kcg_bool _L30_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L31 */
  static kcg_bool _L31_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L32 */
  static M_ACK _L32_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L33 */
  static M_ACK _L33_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L34 */
  static Radio_TrackTrain_Header_T_TM _L34_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L35 */
  static kcg_bool _L35_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L26 */
  static CompressedRadioMessage_TM _L26_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L22 */
  static RadioTrackTrainMessageQueueEntry_T _L22_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::_L20 */
  static RadioTrackTrainMessageQueue_T _L20_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE::ack */
  static M_ACK ack_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM _7_GENERAL_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool _6_GENERAL_MESSAGE_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM _5_GENERAL_MESSAGE_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::messageQueue */
  static RadioTrackTrainMessageQueue_T _4_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::session */
  static SessionManagement_T _3_session;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _2_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::ackRequired */
  static kcg_bool _1_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L16 */
  static CompressedRadioMessage_TM _L16_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L17 */
  static RBC_Data_T_RBC_DataBus_Pkg _L17_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L13 */
  static RBC_Data_T_RBC_DataBus_Pkg _L13_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L14 */
  static RadioTrackTrainMessageQueue_T _L14_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L15 */
  static SessionManagement_T _L15_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L3 */
  static Radio_TrackTrain_Header_T_TM _L3_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L4 */
  static kcg_bool _L4_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L5 */
  static NID_MESSAGE _L5_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L6 */
  static NID_MESSAGE _L6_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L7 */
  static T_TRAIN _L7_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L8 */
  static T_TRAIN _L8_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L9 */
  static T_TRAIN _L9_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool GENERAL_MESSAGE_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::messageQueue */
  static RadioTrackTrainMessageQueue_T messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::session */
  static SessionManagement_T session;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::ackRequired */
  static kcg_bool ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L30 */
  static CompressedRadioMessage_TM _L30_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L31 */
  static RBC_Data_T_RBC_DataBus_Pkg _L31_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L27 */
  static RadioTrackTrainMessageQueue_T _L27_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L28 */
  static RBC_Data_T_RBC_DataBus_Pkg _L28_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L29 */
  static SessionManagement_T _L29_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L18 */
  static kcg_bool _L18_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L19 */
  static NID_MESSAGE _L19_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L20 */
  static T_TRAIN _L20_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L21 */
  static T_TRAIN _L21_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L22 */
  static NID_MESSAGE _L22_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L23 */
  static Radio_TrackTrain_Header_T_TM _L23_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L24 */
  static T_TRAIN _L24_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L14 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L14_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L15 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L15_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L16 */
  static T_TRAIN _L16_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::radioTrainTrackMessageTimestamp */
  static T_TRAIN radioTrainTrackMessageTimestamp_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM _30_GENERAL_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool _29_GENERAL_MESSAGE_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM _28_GENERAL_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::IDLE */
  static kcg_bool br_1_guard_GENERAL_MESSAGE_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM _27_GENERAL_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool _26_GENERAL_MESSAGE_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM _25_GENERAL_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE */
  static kcg_bool br_3_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE */
  static kcg_bool br_2_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::SEND_GENERAL_MESSAGE */
  static kcg_bool br_1_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM _24_GENERAL_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool _23_GENERAL_MESSAGE_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM _22_GENERAL_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool GENERAL_MESSAGE_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_4_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_3_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_2_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::validAck */
  static kcg_bool last_validAck;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN last_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::ackRequired */
  static kcg_bool last_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM _33_GENERAL_MESSAGE_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool GENERAL_MESSAGE_SM_reset_sel;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static kcg_bool GENERAL_MESSAGE_SM_reset_prv;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM _32_GENERAL_MESSAGE_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_TR_GENERAL_MESSAGE_SM _31_GENERAL_MESSAGE_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessageId */
  static NID_MESSAGE radioTrackTrainMessageId;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessage */
  static CompressedRadioMessage_TM radioTrackTrainMessage;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::session */
  static SessionManagement_T _35_session;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::messageQueue */
  static RadioTrackTrainMessageQueue_T _34_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L58 */
  static CompressedRadioMessage_TM _L58;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L61 */
  static Radio_TrackTrain_Header_T_TM _L61;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L60 */
  static NID_MESSAGE _L60;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L59 */
  static CompressedRadioMessage_TM _L59;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L68 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L68;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L67 */
  static NID_MESSAGE _L67;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L66 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L66;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L81 */
  static RadioTrackTrainMessageQueue_T _L81;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L80 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L80;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L79 */
  static CompressedRadioMessage_TM _L79;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L78 */
  static RBC_Data_T_RBC_DataBus_Pkg _L78;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L77 */
  static RBC_Data_T_RBC_DataBus_Pkg _L77;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L76 */
  static SessionManagement_T _L76;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::_L74 */
  static RBC_Data_T_RBC_DataBus_Pkg _L74;
  
  /* last_init_ck_invalidAck */ if (outC->init) {
    last_invalidAck = kcg_false;
  }
  else {
    last_invalidAck = outC->invalidAck;
  }
  /* init_GENERAL_MESSAGE_SM */ if (outC->init) {
    GENERAL_MESSAGE_SM_state_sel = SSM_st_IDLE_GENERAL_MESSAGE_SM;
  }
  else {
    GENERAL_MESSAGE_SM_state_sel = outC->GENERAL_MESSAGE_SM_state_nxt;
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
  /* 7 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L59,
    &_L61);
  _L60 = /* 5 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L61);
  radioTrackTrainMessageId = _L60;
  /* sel_GENERAL_MESSAGE_SM */ switch (GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      br_1_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAck & (radioTrackTrainMessageId == 24);
      br_2_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT = last_validAck;
      break;
    
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L66,
    inRadioTrainTrackMessage);
  /* 6 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L66,
    &_L68);
  _L67 = /* 2 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L68);
  radioTrainTrackMessageId = _L67;
  /* sel_GENERAL_MESSAGE_SM */ switch (GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      br_1_guard_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
        radioTrainTrackMessageId == 146;
      if (br_1_guard_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT) {
        _22_GENERAL_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else {
        _22_GENERAL_MESSAGE_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      br_3_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck & (radioTrainTrackMessageId == 146);
      br_4_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck;
      if (br_1_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else if (br_2_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      else if (br_3_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (br_4_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      break;
    
  }
  /* last_init_ck_ackRequired */ if (outC->init) {
    last_ackRequired = kcg_false;
  }
  else {
    last_ackRequired = outC->ackRequired;
  }
  /* sel_GENERAL_MESSAGE_SM */ switch (GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      br_1_guard_GENERAL_MESSAGE_SM_IDLE = radioTrackTrainMessageId == 24;
      if (br_1_guard_GENERAL_MESSAGE_SM_IDLE) {
        _28_GENERAL_MESSAGE_SM_state_act =
          SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else {
        _28_GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      _33_GENERAL_MESSAGE_SM_state_act = _28_GENERAL_MESSAGE_SM_state_act;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      br_1_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE = last_ackRequired &
        (radioTrainTrackMessageId == 146);
      br_2_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE = last_ackRequired &
        (radioTrainTrackMessageId != 146);
      br_3_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE = !last_ackRequired;
      if (br_1_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE) {
        _25_GENERAL_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (br_2_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE) {
        _25_GENERAL_MESSAGE_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (br_3_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE) {
        _25_GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      else {
        _25_GENERAL_MESSAGE_SM_state_act =
          SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      _33_GENERAL_MESSAGE_SM_state_act = _25_GENERAL_MESSAGE_SM_state_act;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      _33_GENERAL_MESSAGE_SM_state_act = _22_GENERAL_MESSAGE_SM_state_act;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      _33_GENERAL_MESSAGE_SM_state_act = GENERAL_MESSAGE_SM_state_act;
      break;
    
  }
  /* act_GENERAL_MESSAGE_SM */ switch (_33_GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L15_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inRadioTrainTrackMessage);
      /* 5 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &_L15_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L14_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L16_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 2 */
        RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &_L14_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      radioTrainTrackMessageTimestamp_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L16_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L31_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &_L30_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L31_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT.lastSentTrackTrainMessage);
      /* 5 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L30_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L23_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L22_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 4 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L23_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L19_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT = 24;
      _L18_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L22_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
        _L19_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      _L20_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 3 */
        RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L23_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      break;
    
  }
  /* last_init_ck_radioTrackTrainMessageWasSentTimestamp */ if (outC->init) {
    last_radioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  }
  else {
    last_radioTrackTrainMessageWasSentTimestamp =
      outC->radioTrackTrainMessageWasSentTimestamp;
  }
  /* act_GENERAL_MESSAGE_SM */ switch (_33_GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      _L24_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_radioTrackTrainMessageWasSentTimestamp;
      /* 5 */ if (_L18_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _L21_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          _L20_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      else {
        _L21_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          _L24_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      radioTrackTrainMessageWasSentTimestamp =
        _L21_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        radioTrainTrackMessageTimestamp_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
        radioTrackTrainMessageWasSentTimestamp;
      /* ck_IfBlock1 */ if (IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        outC->invalidAck = kcg_false;
        outC->validAck = kcg_true;
      }
      else {
        outC->invalidAck = kcg_true;
        outC->validAck = kcg_false;
      }
      break;
    
  }
  /* init_GENERAL_MESSAGE_SM */ if (outC->init) {
    GENERAL_MESSAGE_SM_reset_sel = kcg_false;
  }
  else {
    GENERAL_MESSAGE_SM_reset_sel = outC->GENERAL_MESSAGE_SM_reset_nxt;
  }
  /* init_GENERAL_MESSAGE_SM */ if (outC->init) {
    GENERAL_MESSAGE_SM_reset_prv = kcg_false;
  }
  else {
    GENERAL_MESSAGE_SM_reset_prv = outC->GENERAL_MESSAGE_SM_reset_act;
  }
  /* sel_GENERAL_MESSAGE_SM */ switch (GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      _29_GENERAL_MESSAGE_SM_reset_act = br_1_guard_GENERAL_MESSAGE_SM_IDLE;
      outC->GENERAL_MESSAGE_SM_reset_act = _29_GENERAL_MESSAGE_SM_reset_act;
      if (br_1_guard_GENERAL_MESSAGE_SM_IDLE) {
        _30_GENERAL_MESSAGE_SM_fired_strong = SSM_TR_IDLE_1_GENERAL_MESSAGE_SM;
      }
      else {
        _30_GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_no_trans_GENERAL_MESSAGE_SM;
      }
      _32_GENERAL_MESSAGE_SM_fired_strong = _30_GENERAL_MESSAGE_SM_fired_strong;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      if (br_1_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE) {
        _26_GENERAL_MESSAGE_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE) {
        _26_GENERAL_MESSAGE_SM_reset_act = kcg_true;
      }
      else {
        _26_GENERAL_MESSAGE_SM_reset_act =
          br_3_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
      }
      outC->GENERAL_MESSAGE_SM_reset_act = _26_GENERAL_MESSAGE_SM_reset_act;
      if (br_1_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE) {
        _27_GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_SEND_GENERAL_MESSAGE_1_GENERAL_MESSAGE_SM;
      }
      else if (br_2_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE) {
        _27_GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_SEND_GENERAL_MESSAGE_2_GENERAL_MESSAGE_SM;
      }
      else if (br_3_guard_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE) {
        _27_GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_SEND_GENERAL_MESSAGE_3_GENERAL_MESSAGE_SM;
      }
      else {
        _27_GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_no_trans_GENERAL_MESSAGE_SM;
      }
      _32_GENERAL_MESSAGE_SM_fired_strong = _27_GENERAL_MESSAGE_SM_fired_strong;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      _23_GENERAL_MESSAGE_SM_reset_act =
        br_1_guard_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      outC->GENERAL_MESSAGE_SM_reset_act = _23_GENERAL_MESSAGE_SM_reset_act;
      if (br_1_guard_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT) {
        _24_GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_GENERAL_MESSAGE_SM;
      }
      else {
        _24_GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_no_trans_GENERAL_MESSAGE_SM;
      }
      _32_GENERAL_MESSAGE_SM_fired_strong = _24_GENERAL_MESSAGE_SM_fired_strong;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      if (br_1_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_reset_act = kcg_true;
      }
      else if (br_3_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_reset_act = kcg_true;
      }
      else {
        GENERAL_MESSAGE_SM_reset_act =
          br_4_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      outC->GENERAL_MESSAGE_SM_reset_act = GENERAL_MESSAGE_SM_reset_act;
      if (br_1_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_GENERAL_MESSAGE_SM;
      }
      else if (br_2_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_GENERAL_MESSAGE_SM;
      }
      else if (br_3_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_GENERAL_MESSAGE_SM;
      }
      else if (br_4_guard_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_GENERAL_MESSAGE_SM;
      }
      else {
        GENERAL_MESSAGE_SM_fired_strong = SSM_TR_no_trans_GENERAL_MESSAGE_SM;
      }
      _32_GENERAL_MESSAGE_SM_fired_strong = GENERAL_MESSAGE_SM_fired_strong;
      break;
    
  }
  /* act_GENERAL_MESSAGE_SM */ switch (_33_GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      _15_ackRequired = last_ackRequired;
      outC->ackRequired = _15_ackRequired;
      _16_radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _16_radioTrackTrainMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L4_GENERAL_MESSAGE_SM_IDLE,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L3_GENERAL_MESSAGE_SM_IDLE,
        &_L4_GENERAL_MESSAGE_SM_IDLE.session);
      kcg_copy_SessionManagement_T(&_17_session, &_L3_GENERAL_MESSAGE_SM_IDLE);
      kcg_copy_SessionManagement_T(&_35_session, &_17_session);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L5_GENERAL_MESSAGE_SM_IDLE,
        &_L4_GENERAL_MESSAGE_SM_IDLE.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_18_messageQueue,
        &_L5_GENERAL_MESSAGE_SM_IDLE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_34_messageQueue,
        &_18_messageQueue);
      _19_GENERAL_MESSAGE_SM_state_nxt = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      outC->GENERAL_MESSAGE_SM_state_nxt = _19_GENERAL_MESSAGE_SM_state_nxt;
      _20_GENERAL_MESSAGE_SM_reset_nxt = kcg_false;
      outC->GENERAL_MESSAGE_SM_reset_nxt = _20_GENERAL_MESSAGE_SM_reset_nxt;
      _21_GENERAL_MESSAGE_SM_fired = _32_GENERAL_MESSAGE_SM_fired_strong;
      _31_GENERAL_MESSAGE_SM_fired = _21_GENERAL_MESSAGE_SM_fired;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      kcg_copy_CompressedRadioMessage_TM(
        &_L26_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE,
        &radioTrackTrainMessage);
      /* 10 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L26_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE,
        &_L34_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE);
      _L33_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE = /* 2 */
        RadioTrackTrainHeader__Get_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L34_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE);
      ack_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE =
        _L33_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
      _L27_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE =
        ack_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
      _L32_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE =
        M_ACK_Acknowledgement_required;
      _L35_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE =
        _L27_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE ==
        _L32_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
      _L29_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE = kcg_true;
      _L31_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE = kcg_false;
      /* 6 */ if (_L35_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE) {
        _L30_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE =
          _L29_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
      }
      else {
        _L30_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE =
          _L31_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
      }
      _8_ackRequired = _L30_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE;
      outC->ackRequired = _8_ackRequired;
      _9_radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _9_radioTrackTrainMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L39_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L38_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE,
        &_L39_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE.session);
      kcg_copy_SessionManagement_T(
        &_10_session,
        &_L38_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE);
      kcg_copy_SessionManagement_T(&_35_session, &_10_session);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L47_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L46_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE,
        &_L47_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE.messageQueue);
      /* 1 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &_L26_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE,
        &_L22_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE);
      /* 1 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &_L46_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE,
        &_L22_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE,
        &_L20_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_11_messageQueue,
        &_L20_GENERAL_MESSAGE_SM_SEND_GENERAL_MESSAGE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_34_messageQueue,
        &_11_messageQueue);
      _12_GENERAL_MESSAGE_SM_state_nxt =
        SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      outC->GENERAL_MESSAGE_SM_state_nxt = _12_GENERAL_MESSAGE_SM_state_nxt;
      _13_GENERAL_MESSAGE_SM_reset_nxt = kcg_false;
      outC->GENERAL_MESSAGE_SM_reset_nxt = _13_GENERAL_MESSAGE_SM_reset_nxt;
      _14_GENERAL_MESSAGE_SM_fired = _32_GENERAL_MESSAGE_SM_fired_strong;
      _31_GENERAL_MESSAGE_SM_fired = _14_GENERAL_MESSAGE_SM_fired;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      _1_ackRequired = last_ackRequired;
      outC->ackRequired = _1_ackRequired;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L17_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &_L16_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L17_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT.lastSentTrackTrainMessage);
      /* 4 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L16_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L3_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      _L6_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT = /* 3 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L3_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      _L5_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT = 24;
      _L4_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
        _L6_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT ==
        _L5_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      _L8_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT = /* 2 */
        RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L3_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      _L7_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
        last_radioTrackTrainMessageWasSentTimestamp;
      /* 4 */ if (_L4_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT) {
        _L9_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
          _L8_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      }
      else {
        _L9_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT =
          _L7_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      }
      _2_radioTrackTrainMessageWasSentTimestamp =
        _L9_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _2_radioTrackTrainMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L13_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L15_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L13_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT.session);
      kcg_copy_SessionManagement_T(
        &_3_session,
        &_L15_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_SessionManagement_T(&_35_session, &_3_session);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L14_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L13_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_4_messageQueue,
        &_L14_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_34_messageQueue,
        &_4_messageQueue);
      _5_GENERAL_MESSAGE_SM_state_nxt =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      outC->GENERAL_MESSAGE_SM_state_nxt = _5_GENERAL_MESSAGE_SM_state_nxt;
      _6_GENERAL_MESSAGE_SM_reset_nxt = kcg_false;
      outC->GENERAL_MESSAGE_SM_reset_nxt = _6_GENERAL_MESSAGE_SM_reset_nxt;
      _7_GENERAL_MESSAGE_SM_fired = _32_GENERAL_MESSAGE_SM_fired_strong;
      _31_GENERAL_MESSAGE_SM_fired = _7_GENERAL_MESSAGE_SM_fired;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      ackRequired = last_ackRequired;
      outC->ackRequired = ackRequired;
      outC->radioTrackTrainMessageWasSentTimestamp =
        radioTrackTrainMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L28_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L29_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L28_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT.session);
      kcg_copy_SessionManagement_T(
        &session,
        &_L29_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_SessionManagement_T(&_35_session, &session);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L27_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L28_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue,
        &_L27_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(&_34_messageQueue, &messageQueue);
      GENERAL_MESSAGE_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      outC->GENERAL_MESSAGE_SM_state_nxt = GENERAL_MESSAGE_SM_state_nxt;
      GENERAL_MESSAGE_SM_reset_nxt = kcg_false;
      outC->GENERAL_MESSAGE_SM_reset_nxt = GENERAL_MESSAGE_SM_reset_nxt;
      GENERAL_MESSAGE_SM_fired = _32_GENERAL_MESSAGE_SM_fired_strong;
      _31_GENERAL_MESSAGE_SM_fired = GENERAL_MESSAGE_SM_fired;
      break;
    
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L74, inDataBus);
  kcg_copy_CompressedRadioMessage_TM(&_L79, inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &_L79);
  kcg_copy_SessionManagement_T(&_L76, &_35_session);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L80,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &_L80);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L81, &_34_messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L77, &_L74);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&_L77.messageQueue, &_L81);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L78, &_L77);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&_L78.session, &_L76);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L78);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessGeneralMessage_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

