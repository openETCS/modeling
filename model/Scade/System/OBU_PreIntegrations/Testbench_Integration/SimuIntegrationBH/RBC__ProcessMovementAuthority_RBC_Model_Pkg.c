/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessMovementAuthority_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessMovementAuthority_init_RBC_Model_Pkg(
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC)
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
  outC->MOVEMENT_AUTHORITY_SM_reset_nxt = kcg_true;
  outC->MOVEMENT_AUTHORITY_SM_reset_act = kcg_true;
  outC->MOVEMENT_AUTHORITY_SM_state_nxt = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
  outC->validAcknowledgement = kcg_true;
  outC->invalidAcknowledgement = kcg_true;
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


void RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessMovementAuthority */
void RBC__ProcessMovementAuthority_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _30_MOVEMENT_AUTHORITY_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _29_MOVEMENT_AUTHORITY_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _28_MOVEMENT_AUTHORITY_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::messageQueue */
  static RadioTrackTrainMessageQueue_T _27_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::session */
  static SessionManagement_T _26_session;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _25_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::IDLE::_L3 */
  static RadioTrackTrainMessageQueue_T _L3_MOVEMENT_AUTHORITY_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::IDLE::_L4 */
  static RBC_Data_T_RBC_DataBus_Pkg _L4_MOVEMENT_AUTHORITY_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::IDLE::_L5 */
  static SessionManagement_T _L5_MOVEMENT_AUTHORITY_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _24_MOVEMENT_AUTHORITY_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _23_MOVEMENT_AUTHORITY_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _22_MOVEMENT_AUTHORITY_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::messageQueue */
  static RadioTrackTrainMessageQueue_T _21_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::session */
  static SessionManagement_T _20_session;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _19_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::_L35 */
  static RBC_Data_T_RBC_DataBus_Pkg _L35_MOVEMENT_AUTHORITY_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::_L33 */
  static RadioTrackTrainMessageQueue_T _L33_MOVEMENT_AUTHORITY_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::_L32 */
  static CompressedRadioMessage_TM _L32_MOVEMENT_AUTHORITY_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::_L29 */
  static RadioTrackTrainMessageQueue_T _L29_MOVEMENT_AUTHORITY_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::_L30 */
  static RadioTrackTrainMessageQueueEntry_T _L30_MOVEMENT_AUTHORITY_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1 */
  static kcg_bool IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1::else::_L4 */
  static SessionManagement_T _L452_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1::else::_L3 */
  static RBC_Data_T_RBC_DataBus_Pkg _L351_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::session */
  static SessionManagement_T _31_session;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1::then::_L4 */
  static SessionManagement_T _L4_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1::then::_L3 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L3_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1::then::_L2 */
  static PosData_T _L2_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1::then::_L1 */
  static PosData_T _L1_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1::then::_L7 */
  static SessionManagement_T _L7_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1::then::_L6 */
  static RBC_Data_T_RBC_DataBus_Pkg _L6_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::session */
  static SessionManagement_T _32_session;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _18_MOVEMENT_AUTHORITY_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _17_MOVEMENT_AUTHORITY_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _16_MOVEMENT_AUTHORITY_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::messageQueue */
  static RadioTrackTrainMessageQueue_T _15_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::session */
  static SessionManagement_T _14_session;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _13_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L19 */
  static CompressedRadioMessage_TM _L19_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L20 */
  static RBC_Data_T_RBC_DataBus_Pkg _L20_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L16 */
  static RBC_Data_T_RBC_DataBus_Pkg _L16_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L17 */
  static RadioTrackTrainMessageQueue_T _L17_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L18 */
  static SessionManagement_T _L18_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L13 */
  static T_TRAIN _L13_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L3 */
  static Radio_TrackTrain_Header_T_TM _L3_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L4 */
  static NID_MESSAGE _L4_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L6 */
  static T_TRAIN _L6_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L7 */
  static kcg_bool _L7_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L8 */
  static NID_MESSAGE _L8_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L9 */
  static T_TRAIN _L9_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _12_MOVEMENT_AUTHORITY_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _11_MOVEMENT_AUTHORITY_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _10_MOVEMENT_AUTHORITY_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::messageQueue */
  static RadioTrackTrainMessageQueue_T _9_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::session */
  static SessionManagement_T _8_session;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _7_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L35 */
  static RBC_Data_T_RBC_DataBus_Pkg _L35_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L36 */
  static CompressedRadioMessage_TM _L36_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L32 */
  static SessionManagement_T _L32_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L33 */
  static RadioTrackTrainMessageQueue_T _L33_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L34 */
  static RBC_Data_T_RBC_DataBus_Pkg _L34_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L27 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L27_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L28 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L28_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L29 */
  static T_TRAIN _L29_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L19 */
  static Radio_TrackTrain_Header_T_TM _L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L20 */
  static T_TRAIN _L20_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L21 */
  static T_TRAIN _L21_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L22 */
  static NID_MESSAGE _L22_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L23 */
  static NID_MESSAGE _L23_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L24 */
  static T_TRAIN _L24_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L26 */
  static kcg_bool _L26_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::radioTrainTrackMessageTimestamp */
  static T_TRAIN radioTrainTrackMessageTimestamp_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _6_MOVEMENT_AUTHORITY_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _5_MOVEMENT_AUTHORITY_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _4_MOVEMENT_AUTHORITY_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::messageQueue */
  static RadioTrackTrainMessageQueue_T _3_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::session */
  static SessionManagement_T _2_session;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN _1_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_MA::_L3 */
  static RBC_Data_T_RBC_DataBus_Pkg _L3_MOVEMENT_AUTHORITY_SM_AWAIT_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_MA::_L4 */
  static SessionManagement_T _L4_MOVEMENT_AUTHORITY_SM_AWAIT_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_MA::_L5 */
  static RadioTrackTrainMessageQueue_T _L5_MOVEMENT_AUTHORITY_SM_AWAIT_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool MOVEMENT_AUTHORITY_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::messageQueue */
  static RadioTrackTrainMessageQueue_T messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::session */
  static SessionManagement_T session;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION::_L10 */
  static RBC_Data_T_RBC_DataBus_Pkg _L10_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION::_L11 */
  static SessionManagement_T _L11_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION::_L7 */
  static RBC_Data_T_RBC_DataBus_Pkg _L7_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION::_L9 */
  static RadioTrackTrainMessageQueue_T _L9_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION::_L3 */
  static PosData_T _L3_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION::_L4 */
  static SessionManagement_T _L4_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION::_L5 */
  static PosData_T _L5_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _47_MOVEMENT_AUTHORITY_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _46_MOVEMENT_AUTHORITY_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _45_MOVEMENT_AUTHORITY_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::IDLE */
  static kcg_bool br_2_guard_MOVEMENT_AUTHORITY_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::IDLE */
  static kcg_bool br_1_guard_MOVEMENT_AUTHORITY_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _44_MOVEMENT_AUTHORITY_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _43_MOVEMENT_AUTHORITY_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _42_MOVEMENT_AUTHORITY_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA */
  static kcg_bool br_2_guard_MOVEMENT_AUTHORITY_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA */
  static kcg_bool br_1_guard_MOVEMENT_AUTHORITY_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _41_MOVEMENT_AUTHORITY_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _40_MOVEMENT_AUTHORITY_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _39_MOVEMENT_AUTHORITY_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _38_MOVEMENT_AUTHORITY_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _37_MOVEMENT_AUTHORITY_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _36_MOVEMENT_AUTHORITY_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_5_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_4_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_3_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_2_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _35_MOVEMENT_AUTHORITY_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool _34_MOVEMENT_AUTHORITY_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _33_MOVEMENT_AUTHORITY_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_MA */
  static kcg_bool br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool MOVEMENT_AUTHORITY_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION */
  static kcg_bool br_2_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::UPDATE_POSITION */
  static kcg_bool br_1_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::invalidAcknowledgement */
  static kcg_bool last_invalidAcknowledgement;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::validAcknowledgement */
  static kcg_bool last_validAcknowledgement;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN last_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM _50_MOVEMENT_AUTHORITY_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool MOVEMENT_AUTHORITY_SM_reset_sel;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static kcg_bool MOVEMENT_AUTHORITY_SM_reset_prv;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _49_MOVEMENT_AUTHORITY_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_TR_MOVEMENT_AUTHORITY_SM _48_MOVEMENT_AUTHORITY_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageId */
  static NID_MESSAGE radioTrackTrainMessageId;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessage */
  static CompressedRadioMessage_TM radioTrackTrainMessage;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::session */
  static SessionManagement_T _54_session;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::messageQueue */
  static RadioTrackTrainMessageQueue_T _53_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L90 */
  static Radio_TrackTrain_Header_T_TM _L90;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L89 */
  static NID_MESSAGE _L89;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L94 */
  static NID_MESSAGE _L94;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L93 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L93;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L92 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L92;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L96 */
  static CompressedRadioMessage_TM _L96;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L99 */
  static CompressedRadioMessage_TM _L99;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L112 */
  static RBC_Data_T_RBC_DataBus_Pkg _L112;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L111 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L111;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L109 */
  static RBC_Data_T_RBC_DataBus_Pkg _L109;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L108 */
  static RBC_Data_T_RBC_DataBus_Pkg _L108;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L107 */
  static RadioTrackTrainMessageQueue_T _L107;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L106 */
  static CompressedRadioMessage_TM _L106;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::_L105 */
  static SessionManagement_T _L105;
  
  /* last_init_ck_invalidAcknowledgement */ if (outC->init) {
    last_invalidAcknowledgement = kcg_false;
  }
  else {
    last_invalidAcknowledgement = outC->invalidAcknowledgement;
  }
  /* init_MOVEMENT_AUTHORITY_SM */ if (outC->init) {
    MOVEMENT_AUTHORITY_SM_state_sel = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
  }
  else {
    MOVEMENT_AUTHORITY_SM_state_sel = outC->MOVEMENT_AUTHORITY_SM_state_nxt;
  }
  kcg_copy_CompressedRadioMessage_TM(&_L96, inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(&radioTrackTrainMessage, &_L96);
  kcg_copy_CompressedRadioMessage_TM(&_L99, &radioTrackTrainMessage);
  /* 6 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L99,
    &_L90);
  _L89 = /* 5 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L90);
  radioTrackTrainMessageId = _L89;
  /* sel_MOVEMENT_AUTHORITY_SM */ switch (MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_MA = radioTrackTrainMessageId == 3;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_MA) {
        _33_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _33_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      br_1_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION =
        radioTrackTrainMessageId == 3;
      br_2_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION = kcg_true;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION) {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_2_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION) {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      break;
    
  }
  /* last_init_ck_validAcknowledgement */ if (outC->init) {
    last_validAcknowledgement = kcg_false;
  }
  else {
    last_validAcknowledgement = outC->validAcknowledgement;
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L92,
    inRadioTrainTrackMessage);
  /* 5 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L92,
    &_L93);
  _L94 = /* 2 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L93);
  radioTrainTrackMessageId = _L94;
  /* sel_MOVEMENT_AUTHORITY_SM */ switch (MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      br_1_guard_MOVEMENT_AUTHORITY_SM_IDLE = (radioTrackTrainMessageId == 3) |
        ((radioTrackTrainMessageId == 3) & (radioTrainTrackMessageId == 132));
      br_2_guard_MOVEMENT_AUTHORITY_SM_IDLE = radioTrainTrackMessageId == 132;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_IDLE) {
        _45_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_2_guard_MOVEMENT_AUTHORITY_SM_IDLE) {
        _45_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _45_MOVEMENT_AUTHORITY_SM_state_act = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
      }
      _50_MOVEMENT_AUTHORITY_SM_state_act = _45_MOVEMENT_AUTHORITY_SM_state_act;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      br_1_guard_MOVEMENT_AUTHORITY_SM_SEND_MA = (radioTrainTrackMessageId ==
          146) | (radioTrainTrackMessageId == 137);
      br_2_guard_MOVEMENT_AUTHORITY_SM_SEND_MA = (radioTrainTrackMessageId !=
          146) & (radioTrainTrackMessageId != 137);
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_SEND_MA) {
        _42_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_2_guard_MOVEMENT_AUTHORITY_SM_SEND_MA) {
        _42_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _42_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      _50_MOVEMENT_AUTHORITY_SM_state_act = _42_MOVEMENT_AUTHORITY_SM_state_act;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT =
        (radioTrainTrackMessageId == 146) | (radioTrainTrackMessageId == 137);
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT) {
        _39_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _39_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      _50_MOVEMENT_AUTHORITY_SM_state_act = _39_MOVEMENT_AUTHORITY_SM_state_act;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      br_1_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAcknowledgement & ((radioTrackTrainMessageId == 3) |
          ((radioTrackTrainMessageId == 3) & (radioTrainTrackMessageId ==
              132)));
      br_2_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAcknowledgement & (radioTrainTrackMessageId == 132);
      br_3_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAcknowledgement;
      br_4_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAcknowledgement & ((radioTrainTrackMessageId == 146) |
          (radioTrainTrackMessageId == 137));
      br_5_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAcknowledgement;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _36_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_2_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _36_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_3_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _36_MOVEMENT_AUTHORITY_SM_state_act = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_4_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _36_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_5_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _36_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _36_MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      _50_MOVEMENT_AUTHORITY_SM_state_act = _36_MOVEMENT_AUTHORITY_SM_state_act;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      _50_MOVEMENT_AUTHORITY_SM_state_act = _33_MOVEMENT_AUTHORITY_SM_state_act;
      break;
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      _50_MOVEMENT_AUTHORITY_SM_state_act = MOVEMENT_AUTHORITY_SM_state_act;
      break;
    
  }
  /* act_MOVEMENT_AUTHORITY_SM */ switch (_50_MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L28_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inRadioTrainTrackMessage);
      /* 4 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &_L28_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L27_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L29_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 2 */
        RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &_L27_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      radioTrainTrackMessageTimestamp_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L29_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L35_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &_L36_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L35_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT.lastSentTrackTrainMessage);
      /* 5 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L36_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L22_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 4 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L23_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT = 3;
      _L26_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L22_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
        _L23_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      _L20_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 3 */
        RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      break;
    
  }
  /* last_init_ck_radioTrackTrainMessageWasSentTimestamp */ if (outC->init) {
    last_radioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  }
  else {
    last_radioTrackTrainMessageWasSentTimestamp =
      outC->radioTrackTrainMessageWasSentTimestamp;
  }
  /* act_MOVEMENT_AUTHORITY_SM */ switch (_50_MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      outC->invalidAcknowledgement = kcg_false;
      outC->validAcknowledgement = kcg_false;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      outC->invalidAcknowledgement = kcg_false;
      outC->validAcknowledgement = kcg_false;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      outC->invalidAcknowledgement = kcg_false;
      outC->validAcknowledgement = kcg_false;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      _L24_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_radioTrackTrainMessageWasSentTimestamp;
      /* 5 */ if (_L26_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _L21_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          _L20_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      else {
        _L21_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          _L24_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      _7_radioTrackTrainMessageWasSentTimestamp =
        _L21_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        radioTrainTrackMessageTimestamp_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
        _7_radioTrackTrainMessageWasSentTimestamp;
      /* ck_IfBlock1 */ if (IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        outC->invalidAcknowledgement = kcg_false;
        outC->validAcknowledgement = kcg_true;
      }
      else {
        outC->invalidAcknowledgement = kcg_true;
        outC->validAcknowledgement = kcg_false;
      }
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      outC->invalidAcknowledgement = kcg_false;
      outC->validAcknowledgement = kcg_false;
      break;
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      outC->invalidAcknowledgement = kcg_false;
      outC->validAcknowledgement = kcg_false;
      break;
    
  }
  /* init_MOVEMENT_AUTHORITY_SM */ if (outC->init) {
    MOVEMENT_AUTHORITY_SM_reset_sel = kcg_false;
  }
  else {
    MOVEMENT_AUTHORITY_SM_reset_sel = outC->MOVEMENT_AUTHORITY_SM_reset_nxt;
  }
  /* init_MOVEMENT_AUTHORITY_SM */ if (outC->init) {
    MOVEMENT_AUTHORITY_SM_reset_prv = kcg_false;
  }
  else {
    MOVEMENT_AUTHORITY_SM_reset_prv = outC->MOVEMENT_AUTHORITY_SM_reset_act;
  }
  /* sel_MOVEMENT_AUTHORITY_SM */ switch (MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_IDLE) {
        _46_MOVEMENT_AUTHORITY_SM_reset_act = kcg_true;
      }
      else {
        _46_MOVEMENT_AUTHORITY_SM_reset_act =
          br_2_guard_MOVEMENT_AUTHORITY_SM_IDLE;
      }
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _46_MOVEMENT_AUTHORITY_SM_reset_act;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_IDLE) {
        _47_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_IDLE_1_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_2_guard_MOVEMENT_AUTHORITY_SM_IDLE) {
        _47_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_IDLE_2_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _47_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      _49_MOVEMENT_AUTHORITY_SM_fired_strong =
        _47_MOVEMENT_AUTHORITY_SM_fired_strong;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_SEND_MA) {
        _43_MOVEMENT_AUTHORITY_SM_reset_act = kcg_true;
      }
      else {
        _43_MOVEMENT_AUTHORITY_SM_reset_act =
          br_2_guard_MOVEMENT_AUTHORITY_SM_SEND_MA;
      }
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _43_MOVEMENT_AUTHORITY_SM_reset_act;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_SEND_MA) {
        _44_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_SEND_MA_1_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_2_guard_MOVEMENT_AUTHORITY_SM_SEND_MA) {
        _44_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_SEND_MA_2_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _44_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      _49_MOVEMENT_AUTHORITY_SM_fired_strong =
        _44_MOVEMENT_AUTHORITY_SM_fired_strong;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      _40_MOVEMENT_AUTHORITY_SM_reset_act =
        br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _40_MOVEMENT_AUTHORITY_SM_reset_act;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT) {
        _41_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _41_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      _49_MOVEMENT_AUTHORITY_SM_fired_strong =
        _41_MOVEMENT_AUTHORITY_SM_fired_strong;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _37_MOVEMENT_AUTHORITY_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _37_MOVEMENT_AUTHORITY_SM_reset_act = kcg_true;
      }
      else if (br_3_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _37_MOVEMENT_AUTHORITY_SM_reset_act = kcg_true;
      }
      else if (br_4_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _37_MOVEMENT_AUTHORITY_SM_reset_act = kcg_true;
      }
      else {
        _37_MOVEMENT_AUTHORITY_SM_reset_act =
          br_5_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _37_MOVEMENT_AUTHORITY_SM_reset_act;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _38_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_2_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _38_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_3_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _38_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_4_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _38_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_5_guard_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _38_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_5_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _38_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      _49_MOVEMENT_AUTHORITY_SM_fired_strong =
        _38_MOVEMENT_AUTHORITY_SM_fired_strong;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      _34_MOVEMENT_AUTHORITY_SM_reset_act =
        br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_MA;
      outC->MOVEMENT_AUTHORITY_SM_reset_act =
        _34_MOVEMENT_AUTHORITY_SM_reset_act;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_AWAIT_MA) {
        _35_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_AWAIT_MA_1_MOVEMENT_AUTHORITY_SM;
      }
      else {
        _35_MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      _49_MOVEMENT_AUTHORITY_SM_fired_strong =
        _35_MOVEMENT_AUTHORITY_SM_fired_strong;
      break;
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION) {
        MOVEMENT_AUTHORITY_SM_reset_act = kcg_true;
      }
      else {
        MOVEMENT_AUTHORITY_SM_reset_act =
          br_2_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION;
      }
      outC->MOVEMENT_AUTHORITY_SM_reset_act = MOVEMENT_AUTHORITY_SM_reset_act;
      if (br_1_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION) {
        MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_UPDATE_POSITION_1_MOVEMENT_AUTHORITY_SM;
      }
      else if (br_2_guard_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION) {
        MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_UPDATE_POSITION_2_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_fired_strong =
          SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM;
      }
      _49_MOVEMENT_AUTHORITY_SM_fired_strong =
        MOVEMENT_AUTHORITY_SM_fired_strong;
      break;
    
  }
  /* act_MOVEMENT_AUTHORITY_SM */ switch (_50_MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      _25_radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _25_radioTrackTrainMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L4_MOVEMENT_AUTHORITY_SM_IDLE,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L5_MOVEMENT_AUTHORITY_SM_IDLE,
        &_L4_MOVEMENT_AUTHORITY_SM_IDLE.session);
      kcg_copy_SessionManagement_T(
        &_26_session,
        &_L5_MOVEMENT_AUTHORITY_SM_IDLE);
      kcg_copy_SessionManagement_T(&_54_session, &_26_session);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L3_MOVEMENT_AUTHORITY_SM_IDLE,
        &_L4_MOVEMENT_AUTHORITY_SM_IDLE.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_27_messageQueue,
        &_L3_MOVEMENT_AUTHORITY_SM_IDLE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_53_messageQueue,
        &_27_messageQueue);
      _28_MOVEMENT_AUTHORITY_SM_state_nxt = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _28_MOVEMENT_AUTHORITY_SM_state_nxt;
      _29_MOVEMENT_AUTHORITY_SM_reset_nxt = kcg_false;
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _29_MOVEMENT_AUTHORITY_SM_reset_nxt;
      _30_MOVEMENT_AUTHORITY_SM_fired = _49_MOVEMENT_AUTHORITY_SM_fired_strong;
      _48_MOVEMENT_AUTHORITY_SM_fired = _30_MOVEMENT_AUTHORITY_SM_fired;
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      _19_radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _19_radioTrackTrainMessageWasSentTimestamp;
      IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA =
        (radioTrackTrainMessageId == 3) & (radioTrainTrackMessageId == 132);
      /* ck_IfBlock1 */ if (IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA) {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &_L6_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &_L7_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          &_L6_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1.session);
        /* 3 */
        SessionManagement__GetPosData_RBC_Session_Pkg(
          &_L7_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          &_L1_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &_L3_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          inRadioTrainTrackMessage);
        /* 3 */
        PosData__Update_RBC_Session_Pkg(
          &_L1_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          &_L3_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          &_L2_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1);
        /* 3 */
        SessionManagement__SetPosData_RBC_Session_Pkg(
          &_L7_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          &_L2_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          &_L4_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1);
        kcg_copy_SessionManagement_T(
          &_32_session,
          &_L4_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1);
        kcg_copy_SessionManagement_T(&_20_session, &_32_session);
      }
      else {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &_L351_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &_L452_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1,
          &_L351_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1.session);
        kcg_copy_SessionManagement_T(
          &_31_session,
          &_L452_MOVEMENT_AUTHORITY_SM_SEND_MA_IfBlock1);
        kcg_copy_SessionManagement_T(&_20_session, &_31_session);
      }
      kcg_copy_SessionManagement_T(&_54_session, &_20_session);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L35_MOVEMENT_AUTHORITY_SM_SEND_MA,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L33_MOVEMENT_AUTHORITY_SM_SEND_MA,
        &_L35_MOVEMENT_AUTHORITY_SM_SEND_MA.messageQueue);
      kcg_copy_CompressedRadioMessage_TM(
        &_L32_MOVEMENT_AUTHORITY_SM_SEND_MA,
        &radioTrackTrainMessage);
      /* 2 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &_L32_MOVEMENT_AUTHORITY_SM_SEND_MA,
        &_L30_MOVEMENT_AUTHORITY_SM_SEND_MA);
      /* 2 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &_L33_MOVEMENT_AUTHORITY_SM_SEND_MA,
        &_L30_MOVEMENT_AUTHORITY_SM_SEND_MA,
        &_L29_MOVEMENT_AUTHORITY_SM_SEND_MA);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_21_messageQueue,
        &_L29_MOVEMENT_AUTHORITY_SM_SEND_MA);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_53_messageQueue,
        &_21_messageQueue);
      _22_MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _22_MOVEMENT_AUTHORITY_SM_state_nxt;
      _23_MOVEMENT_AUTHORITY_SM_reset_nxt = kcg_false;
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _23_MOVEMENT_AUTHORITY_SM_reset_nxt;
      _24_MOVEMENT_AUTHORITY_SM_fired = _49_MOVEMENT_AUTHORITY_SM_fired_strong;
      _48_MOVEMENT_AUTHORITY_SM_fired = _24_MOVEMENT_AUTHORITY_SM_fired;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L20_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &_L19_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L20_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT.lastSentTrackTrainMessage);
      /* 4 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L19_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L3_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT);
      _L4_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT = /* 3 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L3_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT);
      _L8_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT = 3;
      _L7_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT =
        _L4_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT ==
        _L8_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
      _L9_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT = /* 2 */
        RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L3_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT);
      _L13_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT =
        last_radioTrackTrainMessageWasSentTimestamp;
      /* 4 */ if (_L7_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT) {
        _L6_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT =
          _L9_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
      }
      else {
        _L6_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT =
          _L13_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
      }
      _13_radioTrackTrainMessageWasSentTimestamp =
        _L6_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _13_radioTrackTrainMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L16_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L18_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L16_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT.session);
      kcg_copy_SessionManagement_T(
        &_14_session,
        &_L18_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_SessionManagement_T(&_54_session, &_14_session);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L17_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L16_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_15_messageQueue,
        &_L17_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_53_messageQueue,
        &_15_messageQueue);
      _16_MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _16_MOVEMENT_AUTHORITY_SM_state_nxt;
      _17_MOVEMENT_AUTHORITY_SM_reset_nxt = kcg_false;
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _17_MOVEMENT_AUTHORITY_SM_reset_nxt;
      _18_MOVEMENT_AUTHORITY_SM_fired = _49_MOVEMENT_AUTHORITY_SM_fired_strong;
      _48_MOVEMENT_AUTHORITY_SM_fired = _18_MOVEMENT_AUTHORITY_SM_fired;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      outC->radioTrackTrainMessageWasSentTimestamp =
        _7_radioTrackTrainMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L34_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L32_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L34_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT.session);
      kcg_copy_SessionManagement_T(
        &_8_session,
        &_L32_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_SessionManagement_T(&_54_session, &_8_session);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L33_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L34_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_9_messageQueue,
        &_L33_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_53_messageQueue,
        &_9_messageQueue);
      _10_MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _10_MOVEMENT_AUTHORITY_SM_state_nxt;
      _11_MOVEMENT_AUTHORITY_SM_reset_nxt = kcg_false;
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _11_MOVEMENT_AUTHORITY_SM_reset_nxt;
      _12_MOVEMENT_AUTHORITY_SM_fired = _49_MOVEMENT_AUTHORITY_SM_fired_strong;
      _48_MOVEMENT_AUTHORITY_SM_fired = _12_MOVEMENT_AUTHORITY_SM_fired;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      _1_radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      outC->radioTrackTrainMessageWasSentTimestamp =
        _1_radioTrackTrainMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L3_MOVEMENT_AUTHORITY_SM_AWAIT_MA,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L4_MOVEMENT_AUTHORITY_SM_AWAIT_MA,
        &_L3_MOVEMENT_AUTHORITY_SM_AWAIT_MA.session);
      kcg_copy_SessionManagement_T(
        &_2_session,
        &_L4_MOVEMENT_AUTHORITY_SM_AWAIT_MA);
      kcg_copy_SessionManagement_T(&_54_session, &_2_session);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L5_MOVEMENT_AUTHORITY_SM_AWAIT_MA,
        &_L3_MOVEMENT_AUTHORITY_SM_AWAIT_MA.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_3_messageQueue,
        &_L5_MOVEMENT_AUTHORITY_SM_AWAIT_MA);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_53_messageQueue,
        &_3_messageQueue);
      _4_MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        _4_MOVEMENT_AUTHORITY_SM_state_nxt;
      _5_MOVEMENT_AUTHORITY_SM_reset_nxt = kcg_false;
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt =
        _5_MOVEMENT_AUTHORITY_SM_reset_nxt;
      _6_MOVEMENT_AUTHORITY_SM_fired = _49_MOVEMENT_AUTHORITY_SM_fired_strong;
      _48_MOVEMENT_AUTHORITY_SM_fired = _6_MOVEMENT_AUTHORITY_SM_fired;
      break;
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      outC->radioTrackTrainMessageWasSentTimestamp =
        radioTrackTrainMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L10_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L11_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        &_L10_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION.session);
      /* 1 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &_L11_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        &_L3_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L1_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        inRadioTrainTrackMessage);
      /* 1 */
      PosData__Update_RBC_Session_Pkg(
        &_L3_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        &_L1_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        &_L5_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION);
      /* 1 */
      SessionManagement__SetPosData_RBC_Session_Pkg(
        &_L11_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        &_L5_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        &_L4_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION);
      kcg_copy_SessionManagement_T(
        &session,
        &_L4_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION);
      kcg_copy_SessionManagement_T(&_54_session, &session);
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L7_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L9_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION,
        &_L7_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue,
        &_L9_MOVEMENT_AUTHORITY_SM_UPDATE_POSITION);
      kcg_copy_RadioTrackTrainMessageQueue_T(&_53_messageQueue, &messageQueue);
      MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt = MOVEMENT_AUTHORITY_SM_state_nxt;
      MOVEMENT_AUTHORITY_SM_reset_nxt = kcg_false;
      outC->MOVEMENT_AUTHORITY_SM_reset_nxt = MOVEMENT_AUTHORITY_SM_reset_nxt;
      MOVEMENT_AUTHORITY_SM_fired = _49_MOVEMENT_AUTHORITY_SM_fired_strong;
      _48_MOVEMENT_AUTHORITY_SM_fired = MOVEMENT_AUTHORITY_SM_fired;
      break;
    
  }
  kcg_copy_SessionManagement_T(&_L105, &_54_session);
  kcg_copy_CompressedRadioMessage_TM(&_L106, inTriggeredRadioTrackTrainMessage);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L107, &_53_messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L108, inDataBus);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L111,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &_L111);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L109, &_L108);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&_L109.messageQueue, &_L107);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L112, &_L109);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&_L112.session, &_L105);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L112);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &_L106);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessMovementAuthority_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

