/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessTripAndPostTrip_init_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC)
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
  outC->recognitionMessageWasSentTimestamp = 0;
  outC->TRIP_AND_POST_TRIP_SM_reset_nxt = kcg_true;
  outC->TRIP_AND_POST_TRIP_SM_reset_act = kcg_true;
  outC->TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
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
  /* 3 */ RBC__ProcessModeAndLevel_init_RBC_Model_Pkg(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  /* 3 */ RBC__ProcessModeAndLevel_reset_RBC_Model_Pkg(&outC->Context_3);
}

/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
void RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _24_TRIP_AND_POST_TRIP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool _23_TRIP_AND_POST_TRIP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _22_TRIP_AND_POST_TRIP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::session */
  static SessionManagement_T _21_session;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::messageQueue */
  static RadioTrackTrainMessageQueue_T _20_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */
  static T_TRAIN _19_recognitionMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::IDLE::_L3 */
  static RadioTrackTrainMessageQueue_T _L3_TRIP_AND_POST_TRIP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::IDLE::_L4 */
  static RBC_Data_T_RBC_DataBus_Pkg _L4_TRIP_AND_POST_TRIP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::IDLE::_L5 */
  static SessionManagement_T _L5_TRIP_AND_POST_TRIP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _18_TRIP_AND_POST_TRIP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool _17_TRIP_AND_POST_TRIP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _16_TRIP_AND_POST_TRIP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::session */
  static SessionManagement_T _15_session;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::messageQueue */
  static RadioTrackTrainMessageQueue_T _14_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */
  static T_TRAIN _13_recognitionMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_TRIP::_L64 */
  static SessionManagement_T _L64_TRIP_AND_POST_TRIP_SM_MODE_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_TRIP::_L65 */
  static RBC_Data_T_RBC_DataBus_Pkg _L65_TRIP_AND_POST_TRIP_SM_MODE_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_TRIP::_L66 */
  static RadioTrackTrainMessageQueue_T _L66_TRIP_AND_POST_TRIP_SM_MODE_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _12_TRIP_AND_POST_TRIP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool _11_TRIP_AND_POST_TRIP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _10_TRIP_AND_POST_TRIP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::session */
  static SessionManagement_T _9_session;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::messageQueue */
  static RadioTrackTrainMessageQueue_T _8_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */
  static T_TRAIN _7_recognitionMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L29 */
  static RBC_Data_T_RBC_DataBus_Pkg _L29_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L30 */
  static CompressedRadioMessage_TM _L30_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L26 */
  static RadioTrackTrainMessageQueue_T _L26_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L27 */
  static RBC_Data_T_RBC_DataBus_Pkg _L27_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L28 */
  static SessionManagement_T _L28_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L18 */
  static NID_MESSAGE _L18_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L19 */
  static T_TRAIN _L19_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L20 */
  static T_TRAIN _L20_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L21 */
  static kcg_bool _L21_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L22 */
  static T_TRAIN _L22_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L23 */
  static kcg_int _L23_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L25 */
  static Radio_TrackTrain_Header_T_TM _L25_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _6_TRIP_AND_POST_TRIP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool _5_TRIP_AND_POST_TRIP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _4_TRIP_AND_POST_TRIP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::session */
  static SessionManagement_T _3_session;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::messageQueue */
  static RadioTrackTrainMessageQueue_T _2_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */
  static T_TRAIN _1_recognitionMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L25 */
  static RBC_Data_T_RBC_DataBus_Pkg _L25_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L26 */
  static CompressedRadioMessage_TM _L26_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L22 */
  static RadioTrackTrainMessageQueue_T _L22_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L23 */
  static RBC_Data_T_RBC_DataBus_Pkg _L23_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L24 */
  static SessionManagement_T _L24_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L21 */
  static T_TRAIN _L21_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L13 */
  static kcg_int _L13_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L14 */
  static kcg_bool _L14_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L15 */
  static NID_MESSAGE _L15_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L16 */
  static Radio_TrackTrain_Header_T_TM _L16_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L18 */
  static T_TRAIN _L18_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L19 */
  static T_TRAIN _L19_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L1 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L1_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L4 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L4_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L8 */
  static T_TRAIN _L8_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::acknowledgementMessageTimestamp */
  static T_TRAIN acknowledgementMessageTimestamp_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool TRIP_AND_POST_TRIP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::session */
  static SessionManagement_T session;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::messageQueue */
  static RadioTrackTrainMessageQueue_T messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */
  static T_TRAIN recognitionMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L13 */
  static RBC_Data_T_RBC_DataBus_Pkg _L13_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L10 */
  static RadioTrackTrainMessageQueue_T _L10_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L11 */
  static RBC_Data_T_RBC_DataBus_Pkg _L11_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L12 */
  static SessionManagement_T _L12_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L2 */
  static M_ACK _L2_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L3 */
  static T_TRAIN _L3_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L4 */
  static RadioTrackTrainMessageQueue_T _L4_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L5 */
  static CompressedRadioMessage_TM _L5_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L6 */
  static PosData_T _L6_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L7 */
  static RadioTrackTrainMessageQueueEntry_T _L7_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06::_L9 */
  static NID_LRBG _L9_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _36_TRIP_AND_POST_TRIP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool _35_TRIP_AND_POST_TRIP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _34_TRIP_AND_POST_TRIP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::IDLE */
  static kcg_bool br_1_guard_TRIP_AND_POST_TRIP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _33_TRIP_AND_POST_TRIP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool _32_TRIP_AND_POST_TRIP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _31_TRIP_AND_POST_TRIP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_TRIP */
  static kcg_bool br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _30_TRIP_AND_POST_TRIP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool _29_TRIP_AND_POST_TRIP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _28_TRIP_AND_POST_TRIP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP */
  static kcg_bool br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _27_TRIP_AND_POST_TRIP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool _26_TRIP_AND_POST_TRIP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _25_TRIP_AND_POST_TRIP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_3_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_2_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool TRIP_AND_POST_TRIP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::SEND_MSG_06 */
  static kcg_bool br_1_guard_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::validAck */
  static kcg_bool last_validAck;
  static M_LEVEL noname;
  static kcg_bool _37_noname;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */
  static T_TRAIN last_recognitionMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM _40_TRIP_AND_POST_TRIP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool TRIP_AND_POST_TRIP_SM_reset_sel;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static kcg_bool TRIP_AND_POST_TRIP_SM_reset_prv;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _39_TRIP_AND_POST_TRIP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_TR_TRIP_AND_POST_TRIP_SM _38_TRIP_AND_POST_TRIP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::modeChanged */
  static kcg_bool modeChanged;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::mode */
  static M_MODE mode;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::messageQueue */
  static RadioTrackTrainMessageQueue_T _42_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::session */
  static SessionManagement_T _41_session;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L68 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L68;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L67 */
  static NID_MESSAGE _L67;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L66 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L66;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L85 */
  static kcg_bool _L85;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L84 */
  static M_LEVEL _L84;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L83 */
  static kcg_bool _L83;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L82 */
  static M_MODE _L82;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L94 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L94;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L93 */
  static RBC_Data_T_RBC_DataBus_Pkg _L93;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L92 */
  static RBC_Data_T_RBC_DataBus_Pkg _L92;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L91 */
  static RBC_Data_T_RBC_DataBus_Pkg _L91;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L90 */
  static RadioTrackTrainMessageQueue_T _L90;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L89 */
  static SessionManagement_T _L89;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::_L87 */
  static CompressedRadioMessage_TM _L87;
  
  /* last_init_ck_invalidAck */ if (outC->init) {
    last_invalidAck = kcg_false;
  }
  else {
    last_invalidAck = outC->invalidAck;
  }
  /* init_TRIP_AND_POST_TRIP_SM */ if (outC->init) {
    TRIP_AND_POST_TRIP_SM_state_sel = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
  }
  else {
    TRIP_AND_POST_TRIP_SM_state_sel = outC->TRIP_AND_POST_TRIP_SM_state_nxt;
  }
  /* sel_TRIP_AND_POST_TRIP_SM */ switch (TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      br_1_guard_TRIP_AND_POST_TRIP_SM_SEND_MSG_06 = kcg_true;
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_SEND_MSG_06) {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      }
      break;
    
  }
  /* last_init_ck_validAck */ if (outC->init) {
    last_validAck = kcg_false;
  }
  else {
    last_validAck = outC->validAck;
  }
  /* sel_TRIP_AND_POST_TRIP_SM */ switch (TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      br_1_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
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
  /* sel_TRIP_AND_POST_TRIP_SM */ switch (TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP =
        radioTrainTrackMessageId == 136;
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP) {
        _28_TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _28_TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      br_2_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck & (radioTrainTrackMessageId == 136);
      br_3_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck;
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _25_TRIP_AND_POST_TRIP_SM_state_act = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
      }
      else if (br_2_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _25_TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else if (br_3_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _25_TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _25_TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      break;
    
  }
  /* 3 */ RBC__ProcessModeAndLevel_RBC_Model_Pkg(&_L68, &outC->Context_3);
  _L82 = outC->Context_3.out_mode;
  _L83 = outC->Context_3.out_modeChanged;
  _L84 = outC->Context_3.out_level;
  _L85 = outC->Context_3.out_levelChanged;
  mode = _L82;
  modeChanged = _L83;
  /* sel_TRIP_AND_POST_TRIP_SM */ switch (TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      br_1_guard_TRIP_AND_POST_TRIP_SM_IDLE = (mode == M_MODE_Trip) &
        (modeChanged == kcg_true);
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_IDLE) {
        _34_TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _34_TRIP_AND_POST_TRIP_SM_state_act = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
      }
      _40_TRIP_AND_POST_TRIP_SM_state_act = _34_TRIP_AND_POST_TRIP_SM_state_act;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_TRIP = (mode == M_MODE_Post_Trip) &
        (modeChanged == kcg_true);
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_TRIP) {
        _31_TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _31_TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      _40_TRIP_AND_POST_TRIP_SM_state_act = _31_TRIP_AND_POST_TRIP_SM_state_act;
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      _40_TRIP_AND_POST_TRIP_SM_state_act = _28_TRIP_AND_POST_TRIP_SM_state_act;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      _40_TRIP_AND_POST_TRIP_SM_state_act = _25_TRIP_AND_POST_TRIP_SM_state_act;
      break;
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      _40_TRIP_AND_POST_TRIP_SM_state_act = TRIP_AND_POST_TRIP_SM_state_act;
      break;
    
  }
  /* act_TRIP_AND_POST_TRIP_SM */ switch (_40_TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L4_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inRadioTrainTrackMessage);
      /* 2 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &_L4_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L1_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L8_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 1 */
        RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &_L1_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      acknowledgementMessageTimestamp_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L8_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L25_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &_L26_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L25_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT.lastSentTrackTrainMessage);
      /* 3 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L26_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L16_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L15_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 3 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L16_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L13_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT = 6;
      _L14_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L15_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
        _L13_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      _L18_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 2 */
        RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L16_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      break;
    
  }
  /* last_init_ck_recognitionMessageWasSentTimestamp */ if (outC->init) {
    last_recognitionMessageWasSentTimestamp = T_TRAIN_MIN;
  }
  else {
    last_recognitionMessageWasSentTimestamp =
      outC->recognitionMessageWasSentTimestamp;
  }
  /* act_TRIP_AND_POST_TRIP_SM */ switch (_40_TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      _L21_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_recognitionMessageWasSentTimestamp;
      /* 2 */ if (_L14_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _L19_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          _L18_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      else {
        _L19_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          _L21_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      _1_recognitionMessageWasSentTimestamp =
        _L19_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      IfBlock1_clock_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        acknowledgementMessageTimestamp_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
        _1_recognitionMessageWasSentTimestamp;
      /* ck_IfBlock1 */ if (IfBlock1_clock_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        outC->invalidAck = kcg_false;
        outC->validAck = kcg_true;
      }
      else {
        outC->invalidAck = kcg_true;
        outC->validAck = kcg_false;
      }
      break;
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    
  }
  /* init_TRIP_AND_POST_TRIP_SM */ if (outC->init) {
    TRIP_AND_POST_TRIP_SM_reset_sel = kcg_false;
  }
  else {
    TRIP_AND_POST_TRIP_SM_reset_sel = outC->TRIP_AND_POST_TRIP_SM_reset_nxt;
  }
  /* init_TRIP_AND_POST_TRIP_SM */ if (outC->init) {
    TRIP_AND_POST_TRIP_SM_reset_prv = kcg_false;
  }
  else {
    TRIP_AND_POST_TRIP_SM_reset_prv = outC->TRIP_AND_POST_TRIP_SM_reset_act;
  }
  /* sel_TRIP_AND_POST_TRIP_SM */ switch (TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      _35_TRIP_AND_POST_TRIP_SM_reset_act =
        br_1_guard_TRIP_AND_POST_TRIP_SM_IDLE;
      outC->TRIP_AND_POST_TRIP_SM_reset_act =
        _35_TRIP_AND_POST_TRIP_SM_reset_act;
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_IDLE) {
        _36_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_IDLE_1_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _36_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      _39_TRIP_AND_POST_TRIP_SM_fired_strong =
        _36_TRIP_AND_POST_TRIP_SM_fired_strong;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      _32_TRIP_AND_POST_TRIP_SM_reset_act =
        br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_TRIP;
      outC->TRIP_AND_POST_TRIP_SM_reset_act =
        _32_TRIP_AND_POST_TRIP_SM_reset_act;
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_TRIP) {
        _33_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_MODE_TRIP_1_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _33_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      _39_TRIP_AND_POST_TRIP_SM_fired_strong =
        _33_TRIP_AND_POST_TRIP_SM_fired_strong;
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      _29_TRIP_AND_POST_TRIP_SM_reset_act =
        br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
      outC->TRIP_AND_POST_TRIP_SM_reset_act =
        _29_TRIP_AND_POST_TRIP_SM_reset_act;
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP) {
        _30_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_MODE_POST_TRIP_1_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _30_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      _39_TRIP_AND_POST_TRIP_SM_fired_strong =
        _30_TRIP_AND_POST_TRIP_SM_fired_strong;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _26_TRIP_AND_POST_TRIP_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _26_TRIP_AND_POST_TRIP_SM_reset_act = kcg_true;
      }
      else {
        _26_TRIP_AND_POST_TRIP_SM_reset_act =
          br_3_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      outC->TRIP_AND_POST_TRIP_SM_reset_act =
        _26_TRIP_AND_POST_TRIP_SM_reset_act;
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _27_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_TRIP_AND_POST_TRIP_SM;
      }
      else if (br_2_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _27_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_TRIP_AND_POST_TRIP_SM;
      }
      else if (br_3_guard_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        _27_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRIP_AND_POST_TRIP_SM;
      }
      else {
        _27_TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      _39_TRIP_AND_POST_TRIP_SM_fired_strong =
        _27_TRIP_AND_POST_TRIP_SM_fired_strong;
      break;
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      TRIP_AND_POST_TRIP_SM_reset_act =
        br_1_guard_TRIP_AND_POST_TRIP_SM_SEND_MSG_06;
      outC->TRIP_AND_POST_TRIP_SM_reset_act = TRIP_AND_POST_TRIP_SM_reset_act;
      if (br_1_guard_TRIP_AND_POST_TRIP_SM_SEND_MSG_06) {
        TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_SEND_MSG_06_1_TRIP_AND_POST_TRIP_SM;
      }
      else {
        TRIP_AND_POST_TRIP_SM_fired_strong =
          SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM;
      }
      _39_TRIP_AND_POST_TRIP_SM_fired_strong =
        TRIP_AND_POST_TRIP_SM_fired_strong;
      break;
    
  }
  /* act_TRIP_AND_POST_TRIP_SM */ switch (_40_TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      _19_recognitionMessageWasSentTimestamp =
        last_recognitionMessageWasSentTimestamp;
      outC->recognitionMessageWasSentTimestamp =
        _19_recognitionMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L4_TRIP_AND_POST_TRIP_SM_IDLE,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L3_TRIP_AND_POST_TRIP_SM_IDLE,
        &_L4_TRIP_AND_POST_TRIP_SM_IDLE.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_20_messageQueue,
        &_L3_TRIP_AND_POST_TRIP_SM_IDLE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_42_messageQueue,
        &_20_messageQueue);
      kcg_copy_SessionManagement_T(
        &_L5_TRIP_AND_POST_TRIP_SM_IDLE,
        &_L4_TRIP_AND_POST_TRIP_SM_IDLE.session);
      kcg_copy_SessionManagement_T(
        &_21_session,
        &_L5_TRIP_AND_POST_TRIP_SM_IDLE);
      kcg_copy_SessionManagement_T(&_41_session, &_21_session);
      _22_TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        _22_TRIP_AND_POST_TRIP_SM_state_nxt;
      _23_TRIP_AND_POST_TRIP_SM_reset_nxt = kcg_false;
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt =
        _23_TRIP_AND_POST_TRIP_SM_reset_nxt;
      _24_TRIP_AND_POST_TRIP_SM_fired = _39_TRIP_AND_POST_TRIP_SM_fired_strong;
      _38_TRIP_AND_POST_TRIP_SM_fired = _24_TRIP_AND_POST_TRIP_SM_fired;
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      _13_recognitionMessageWasSentTimestamp =
        last_recognitionMessageWasSentTimestamp;
      outC->recognitionMessageWasSentTimestamp =
        _13_recognitionMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L65_TRIP_AND_POST_TRIP_SM_MODE_TRIP,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L66_TRIP_AND_POST_TRIP_SM_MODE_TRIP,
        &_L65_TRIP_AND_POST_TRIP_SM_MODE_TRIP.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_14_messageQueue,
        &_L66_TRIP_AND_POST_TRIP_SM_MODE_TRIP);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_42_messageQueue,
        &_14_messageQueue);
      kcg_copy_SessionManagement_T(
        &_L64_TRIP_AND_POST_TRIP_SM_MODE_TRIP,
        &_L65_TRIP_AND_POST_TRIP_SM_MODE_TRIP.session);
      kcg_copy_SessionManagement_T(
        &_15_session,
        &_L64_TRIP_AND_POST_TRIP_SM_MODE_TRIP);
      kcg_copy_SessionManagement_T(&_41_session, &_15_session);
      _16_TRIP_AND_POST_TRIP_SM_state_nxt =
        SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        _16_TRIP_AND_POST_TRIP_SM_state_nxt;
      _17_TRIP_AND_POST_TRIP_SM_reset_nxt = kcg_false;
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt =
        _17_TRIP_AND_POST_TRIP_SM_reset_nxt;
      _18_TRIP_AND_POST_TRIP_SM_fired = _39_TRIP_AND_POST_TRIP_SM_fired_strong;
      _38_TRIP_AND_POST_TRIP_SM_fired = _18_TRIP_AND_POST_TRIP_SM_fired;
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L29_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP,
        inDataBus);
      kcg_copy_CompressedRadioMessage_TM(
        &_L30_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP,
        &_L29_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP.lastSentTrackTrainMessage);
      /* 5 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L30_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP,
        &_L25_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP);
      _L18_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP = /* 5 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L25_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP);
      _L23_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP = 6;
      _L21_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP =
        _L18_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP ==
        _L23_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
      _L19_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP = /* 4 */
        RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L25_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP);
      _L20_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP =
        last_recognitionMessageWasSentTimestamp;
      /* 4 */ if (_L21_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP) {
        _L22_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP =
          _L19_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
      }
      else {
        _L22_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP =
          _L20_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
      }
      _7_recognitionMessageWasSentTimestamp =
        _L22_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
      outC->recognitionMessageWasSentTimestamp =
        _7_recognitionMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L27_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L26_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP,
        &_L27_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_8_messageQueue,
        &_L26_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_42_messageQueue,
        &_8_messageQueue);
      kcg_copy_SessionManagement_T(
        &_L28_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP,
        &_L27_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP.session);
      kcg_copy_SessionManagement_T(
        &_9_session,
        &_L28_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP);
      kcg_copy_SessionManagement_T(&_41_session, &_9_session);
      _10_TRIP_AND_POST_TRIP_SM_state_nxt =
        SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        _10_TRIP_AND_POST_TRIP_SM_state_nxt;
      _11_TRIP_AND_POST_TRIP_SM_reset_nxt = kcg_false;
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt =
        _11_TRIP_AND_POST_TRIP_SM_reset_nxt;
      _12_TRIP_AND_POST_TRIP_SM_fired = _39_TRIP_AND_POST_TRIP_SM_fired_strong;
      _38_TRIP_AND_POST_TRIP_SM_fired = _12_TRIP_AND_POST_TRIP_SM_fired;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      outC->recognitionMessageWasSentTimestamp =
        _1_recognitionMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L23_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L22_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L23_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_2_messageQueue,
        &_L22_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_42_messageQueue,
        &_2_messageQueue);
      kcg_copy_SessionManagement_T(
        &_L24_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L23_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT.session);
      kcg_copy_SessionManagement_T(
        &_3_session,
        &_L24_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_SessionManagement_T(&_41_session, &_3_session);
      _4_TRIP_AND_POST_TRIP_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        _4_TRIP_AND_POST_TRIP_SM_state_nxt;
      _5_TRIP_AND_POST_TRIP_SM_reset_nxt = kcg_false;
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt =
        _5_TRIP_AND_POST_TRIP_SM_reset_nxt;
      _6_TRIP_AND_POST_TRIP_SM_fired = _39_TRIP_AND_POST_TRIP_SM_fired_strong;
      _38_TRIP_AND_POST_TRIP_SM_fired = _6_TRIP_AND_POST_TRIP_SM_fired;
      break;
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      recognitionMessageWasSentTimestamp =
        last_recognitionMessageWasSentTimestamp;
      outC->recognitionMessageWasSentTimestamp =
        recognitionMessageWasSentTimestamp;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L13_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L10_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        &_L13_TRIP_AND_POST_TRIP_SM_SEND_MSG_06.messageQueue);
      _L3_TRIP_AND_POST_TRIP_SM_SEND_MSG_06 = T_TRAIN_MIN;
      _L2_TRIP_AND_POST_TRIP_SM_SEND_MSG_06 = M_ACK_Acknowledgement_required;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L11_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L12_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        &_L11_TRIP_AND_POST_TRIP_SM_SEND_MSG_06.session);
      /* 3 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &_L12_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        &_L6_TRIP_AND_POST_TRIP_SM_SEND_MSG_06);
      _L9_TRIP_AND_POST_TRIP_SM_SEND_MSG_06 = /* 3 */
        PosData__Get_NID_LRBG_RBC_Session_Pkg(
          &_L6_TRIP_AND_POST_TRIP_SM_SEND_MSG_06);
      /* 3 */
      RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
        _L3_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        _L2_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        _L9_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        &_L5_TRIP_AND_POST_TRIP_SM_SEND_MSG_06);
      /* 3 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &_L5_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        &_L7_TRIP_AND_POST_TRIP_SM_SEND_MSG_06);
      /* 3 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &_L10_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        &_L7_TRIP_AND_POST_TRIP_SM_SEND_MSG_06,
        &_L4_TRIP_AND_POST_TRIP_SM_SEND_MSG_06);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue,
        &_L4_TRIP_AND_POST_TRIP_SM_SEND_MSG_06);
      kcg_copy_RadioTrackTrainMessageQueue_T(&_42_messageQueue, &messageQueue);
      kcg_copy_SessionManagement_T(
        &session,
        &_L12_TRIP_AND_POST_TRIP_SM_SEND_MSG_06);
      kcg_copy_SessionManagement_T(&_41_session, &session);
      TRIP_AND_POST_TRIP_SM_state_nxt =
        SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt = TRIP_AND_POST_TRIP_SM_state_nxt;
      TRIP_AND_POST_TRIP_SM_reset_nxt = kcg_false;
      outC->TRIP_AND_POST_TRIP_SM_reset_nxt = TRIP_AND_POST_TRIP_SM_reset_nxt;
      TRIP_AND_POST_TRIP_SM_fired = _39_TRIP_AND_POST_TRIP_SM_fired_strong;
      _38_TRIP_AND_POST_TRIP_SM_fired = TRIP_AND_POST_TRIP_SM_fired;
      break;
    
  }
  noname = _L84;
  _37_noname = _L85;
  kcg_copy_CompressedRadioMessage_TM(&_L87, inTriggeredRadioTrackTrainMessage);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L93, inDataBus);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L90, &_42_messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L91, &_L93);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&_L91.messageQueue, &_L90);
  }
  kcg_copy_SessionManagement_T(&_L89, &_41_session);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L92, &_L91);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&_L92.session, &_L89);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L92);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L94,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &_L94);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &_L87);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

