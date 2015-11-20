/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__ProcessConditionalEmergencyStop_init_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  static kcg_int i20;
  static kcg_int i19;
  static kcg_int i18;
  static kcg_int i17;
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
  outC->session.m_TrainData.nid_engine = 0;
  outC->session.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  for (i1 = 0; i1 < 1; i1++) {
    outC->session.m_TrainData.m_OnboardPhoneNumbers[i1].valid = kcg_true;
    for (i = 0; i < 15; i++) {
      outC->session.m_TrainData.m_OnboardPhoneNumbers[i1].telephoneNumber[i] =
        0;
    }
  }
  outC->session.m_TrainData.t_train_ref = 0;
  outC->session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->session.m_TrainData.l_train = 0;
  outC->session.m_TrainData.v_maxtrain = 0;
  outC->session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->session.m_TrainData.n_axle = 0;
  for (i2 = 0; i2 < 4; i2++) {
    outC->session.m_TrainData.m_TractionIdentities[i2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->session.m_TrainData.m_TractionIdentities[i2].nid_ctraction = 0;
  }
  for (i3 = 0; i3 < 5; i3++) {
    outC->session.m_TrainData.m_NationalSystemIdentities[i3] = 0;
  }
  outC->session.m_TrainData.nid_operational = 0;
  outC->session.m_PosData.nid_lrbg = 0;
  outC->session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->session.m_PosData.d_lrbg = 0;
  outC->session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->session.m_PosData.l_doubtover = 0;
  outC->session.m_PosData.l_doubtunder = 0;
  outC->session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->session.m_PosData.l_trainint = 0;
  outC->session.m_PosData.v_train = 0;
  outC->session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->session.m_PosData.nid_ntc = 0;
  outC->session.m_PosData.nid_prvlrbg = 0;
  outC->radioTrackTrainMessageWasSentEmergencyStopId = 0;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_true;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
  outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
    SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
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
  for (i4 = 0; i4 < 30; i4++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i4].nid_packet =
      0;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i4].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i4].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i4].startAddress =
      0;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[i4].endAddress =
      0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketData[i5] = 0;
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
  for (i7 = 0; i7 < 1; i7++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[i7].valid = kcg_true;
    for (i6 = 0; i6 < 15; i6++) {
      outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[i7].telephoneNumber[i6] =
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
  for (i8 = 0; i8 < 4; i8++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[i8].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[i8].nid_ctraction =
      0;
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = 0;
  for (i9 = 0; i9 < 5; i9++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[i9] = 0;
  }
  outC->outDataBus.session.m_TrainData.nid_engine = 0;
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  for (i11 = 0; i11 < 1; i11++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[i11].valid =
      kcg_true;
    for (i10 = 0; i10 < 15; i10++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[i11].telephoneNumber[i10] =
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
  for (i12 = 0; i12 < 4; i12++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i12].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[i12].nid_ctraction =
      0;
  }
  for (i13 = 0; i13 < 5; i13++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[i13] = 0;
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
  for (i14 = 0; i14 < 32; i14++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[i14].d_loc =
      0;
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[i14].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (i15 = 0; i15 < 16; i15++) {
    outC->outDataBus.diagnostic[i15].valid = kcg_true;
    outC->outDataBus.diagnostic[i15].count = 0;
    outC->outDataBus.diagnostic[i15].timestamp = 0;
    outC->outDataBus.diagnostic[i15].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[i15].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[i15].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (i18 = 0; i18 < 8; i18++) {
    outC->outDataBus.messageQueue.m_Entries[i18].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.radioDevice = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.receivedSystemTime =
      0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.nid_message = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.t_train = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.m_ack = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.nid_lrbg = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.t_train_reference =
      0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.nid_em = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.q_scale = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.d_sr = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.t_sh_rqst = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.d_ref = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.q_dir = 0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.d_emergencystop =
      0;
    outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Header.m_version = 0;
    for (i16 = 0; i16 < 30; i16++) {
      outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Messages.PacketHeaders[i16].nid_packet =
        0;
      outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Messages.PacketHeaders[i16].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Messages.PacketHeaders[i16].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Messages.PacketHeaders[i16].startAddress =
        0;
      outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Messages.PacketHeaders[i16].endAddress =
        0;
    }
    for (i17 = 0; i17 < 500; i17++) {
      outC->outDataBus.messageQueue.m_Entries[i18].m_Entry.Messages.PacketData[i17] =
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
  for (i19 = 0; i19 < 30; i19++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i19].nid_packet =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i19].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i19].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i19].startAddress =
      0;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i19].endAddress =
      0;
  }
  for (i20 = 0; i20 < 500; i20++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[i20] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop */
void RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _18_CONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _17_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _16_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::session */
  static SessionManagement_T _15_session;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _14_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM _13_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::IDLE::_L5 */
  static RadioTrackTrainMessageQueue_T _L5_CONDITIONAL_EMERGENCY_STOP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::IDLE::_L4 */
  static SessionManagement_T _L4_CONDITIONAL_EMERGENCY_STOP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::IDLE::_L3 */
  static RBC_Data_T_RBC_DataBus_Pkg _L3_CONDITIONAL_EMERGENCY_STOP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _12_CONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _11_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _10_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::session */
  static SessionManagement_T _9_session;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _8_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM _7_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP::_L71 */
  static RBC_Data_T_RBC_DataBus_Pkg _L71_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP::_L64 */
  static RBC_Data_T_RBC_DataBus_Pkg _L64_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP::_L70 */
  static RadioTrackTrainMessageQueue_T _L70_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP::_L62 */
  static SessionManagement_T _L62_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP::_L57 */
  static RadioTrackTrainMessageQueue_T _L57_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP::_L59 */
  static RadioTrackTrainMessageQueueEntry_T _L59_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP::_L56 */
  static Radio_TrackTrain_Header_T_TM _L56_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP::_L54 */
  static NID_EM _L54_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP::_L52 */
  static CompressedRadioMessage_TM _L52_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _6_CONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _5_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _4_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::session */
  static SessionManagement_T _3_session;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _2_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM _1_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::AWAIT_ACKNOWLEDGEMENT::_L3 */
  static RBC_Data_T_RBC_DataBus_Pkg _L3_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::AWAIT_ACKNOWLEDGEMENT::_L4 */
  static SessionManagement_T _L4_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::AWAIT_ACKNOWLEDGEMENT::_L5 */
  static RadioTrackTrainMessageQueue_T _L5_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::session */
  static SessionManagement_T session;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L36 */
  static RadioTrackTrainMessageQueue_T _L36_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L37 */
  static RBC_Data_T_RBC_DataBus_Pkg _L37_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L27 */
  static NID_EM _L27_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L26 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L26_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L25 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L25_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::emergencyStopId */
  static NID_EM emergencyStopId_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::session */
  static SessionManagement_T _19_session;
  static Q_EMERGENCYSTOP noname;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L13 */
  static SessionManagement_T _L13_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L12 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L12_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L11 */
  static PosData_T _L11_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L10 */
  static PosData_T _L10_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L14 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L14_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L16 */
  static Q_EMERGENCYSTOP _L16_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L17 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L17_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L21 */
  static RBC_Data_T_RBC_DataBus_Pkg _L21_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1::then::_L20 */
  static SessionManagement_T _L20_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::session */
  static SessionManagement_T _20_session;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _28_CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::IDLE */
  static kcg_bool br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_IDLE;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _26_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _25_CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _24_CONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP */
  static kcg_bool br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::SEND_CONDITIONAL_EMERGENCY_STOP */
  static kcg_bool br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _23_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool _22_CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _21_CONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::AWAIT_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_4_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_3_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT */
  static kcg_bool br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::session */
  static SessionManagement_T last_session;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::validAck */
  static kcg_bool last_validAck;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM last_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM _32_CONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool CONDITIONAL_EMERGENCY_STOP_SM_reset_sel;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static kcg_bool CONDITIONAL_EMERGENCY_STOP_SM_reset_prv;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _31_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM _30_CONDITIONAL_EMERGENCY_STOP_SM_fired;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessageId */
  static NID_MESSAGE radioTrackTrainMessageId;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessage */
  static CompressedRadioMessage_TM radioTrackTrainMessage;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::messageQueue */
  static RadioTrackTrainMessageQueue_T _33_messageQueue;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L60 */
  static CompressedRadioMessage_TM _L60;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L65 */
  static Radio_TrackTrain_Header_T_TM _L65;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L64 */
  static CompressedRadioMessage_TM _L64;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L63 */
  static NID_MESSAGE _L63;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L68 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L68;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L67 */
  static NID_MESSAGE _L67;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L66 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L66;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L72 */
  static CompressedRadioMessage_TM _L72;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L69 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L69;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L76 */
  static RBC_Data_T_RBC_DataBus_Pkg _L76;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L75 */
  static RBC_Data_T_RBC_DataBus_Pkg _L75;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L78 */
  static RadioTrackTrainMessageQueue_T _L78;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L79 */
  static RBC_Data_T_RBC_DataBus_Pkg _L79;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::_L80 */
  static SessionManagement_T _L80;
  
  /* last_init_ck_invalidAck */ if (outC->init) {
    last_invalidAck = kcg_false;
  }
  else {
    last_invalidAck = outC->invalidAck;
  }
  /* init_CONDITIONAL_EMERGENCY_STOP_SM */ if (outC->init) {
    CONDITIONAL_EMERGENCY_STOP_SM_state_sel =
      SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  }
  else {
    CONDITIONAL_EMERGENCY_STOP_SM_state_sel =
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
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
  /* 4 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L64,
    &_L65);
  _L63 = /* 2 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L65);
  radioTrackTrainMessageId = _L63;
  /* sel_CONDITIONAL_EMERGENCY_STOP_SM */ switch (CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAck & (radioTrackTrainMessageId == 15);
      br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_validAck;
      break;
    
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L68,
    inRadioTrainTrackMessage);
  /* 4 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &_L68,
    &_L66);
  _L67 = /* 2 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L66);
  radioTrainTrackMessageId = _L67;
  /* sel_CONDITIONAL_EMERGENCY_STOP_SM */ switch (CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_IDLE =
        radioTrackTrainMessageId == 15;
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_IDLE) {
        _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      _32_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _27_CONDITIONAL_EMERGENCY_STOP_SM_state_act;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP =
        radioTrainTrackMessageId == 147;
      br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP =
        radioTrainTrackMessageId != 147;
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP) {
        _24_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP) {
        _24_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _24_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      _32_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _24_CONDITIONAL_EMERGENCY_STOP_SM_state_act;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT =
        radioTrainTrackMessageId == 147;
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT) {
        _21_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _21_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      _32_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
        _21_CONDITIONAL_EMERGENCY_STOP_SM_state_act;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      br_3_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck & (radioTrainTrackMessageId == 147);
      br_4_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        last_invalidAck;
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_3_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_4_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      _32_CONDITIONAL_EMERGENCY_STOP_SM_state_act =
        CONDITIONAL_EMERGENCY_STOP_SM_state_act;
      break;
    
  }
  /* act_CONDITIONAL_EMERGENCY_STOP_SM */ switch (_32_CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &_L25_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inRadioTrainTrackMessage);
      /* 3 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &_L25_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L26_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      _L27_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 1 */
        RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &_L26_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      emergencyStopId_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        _L27_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      break;
    
  }
  /* last_init_ck_radioTrackTrainMessageWasSentEmergencyStopId */ if (outC->init) {
    last_radioTrackTrainMessageWasSentEmergencyStopId = NID_EM_DEFAULT;
  }
  else {
    last_radioTrackTrainMessageWasSentEmergencyStopId =
      outC->radioTrackTrainMessageWasSentEmergencyStopId;
  }
  /* act_CONDITIONAL_EMERGENCY_STOP_SM */ switch (_32_CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->invalidAck = kcg_false;
      outC->validAck = kcg_false;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        emergencyStopId_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT ==
        radioTrackTrainMessageWasSentEmergencyStopId;
      /* ck_IfBlock1 */ if (IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        outC->invalidAck = kcg_false;
        outC->validAck = kcg_true;
      }
      else {
        outC->invalidAck = kcg_true;
        outC->validAck = kcg_false;
      }
      break;
    
  }
  /* init_CONDITIONAL_EMERGENCY_STOP_SM */ if (outC->init) {
    CONDITIONAL_EMERGENCY_STOP_SM_reset_sel = kcg_false;
  }
  else {
    CONDITIONAL_EMERGENCY_STOP_SM_reset_sel =
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  }
  /* init_CONDITIONAL_EMERGENCY_STOP_SM */ if (outC->init) {
    CONDITIONAL_EMERGENCY_STOP_SM_reset_prv = kcg_false;
  }
  else {
    CONDITIONAL_EMERGENCY_STOP_SM_reset_prv =
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  }
  /* sel_CONDITIONAL_EMERGENCY_STOP_SM */ switch (CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      _28_CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_IDLE;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _28_CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_IDLE) {
        _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_IDLE_1_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      _31_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _29_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP) {
        _25_CONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
      }
      else {
        _25_CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
          br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _25_CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP) {
        _26_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_1_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP) {
        _26_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_2_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _26_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      _31_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _26_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      _22_CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        _22_CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT) {
        _23_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        _23_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      _31_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        _23_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
      }
      else if (br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
      }
      else if (br_3_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_reset_act = kcg_true;
      }
      else {
        CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
          br_4_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
      }
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_act =
        CONDITIONAL_EMERGENCY_STOP_SM_reset_act;
      if (br_1_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_2_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_3_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (br_4_guard_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
          SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      _31_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong =
        CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      break;
    
  }
  /* act_CONDITIONAL_EMERGENCY_STOP_SM */ switch (_32_CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      _13_radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _13_radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L3_CONDITIONAL_EMERGENCY_STOP_SM_IDLE,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L5_CONDITIONAL_EMERGENCY_STOP_SM_IDLE,
        &_L3_CONDITIONAL_EMERGENCY_STOP_SM_IDLE.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_14_messageQueue,
        &_L5_CONDITIONAL_EMERGENCY_STOP_SM_IDLE);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_33_messageQueue,
        &_14_messageQueue);
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_CompressedRadioMessage_TM(
        &_L52_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP,
        &radioTrackTrainMessage);
      /* 3 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &_L52_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP,
        &_L56_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP);
      _L54_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP =
        /* 1 */
        RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L56_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP);
      _7_radioTrackTrainMessageWasSentEmergencyStopId =
        _L54_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _7_radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L71_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L70_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP,
        &_L71_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP.messageQueue);
      /* 3 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &_L52_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP,
        &_L59_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP);
      /* 3 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &_L70_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP,
        &_L59_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP,
        &_L57_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_8_messageQueue,
        &_L57_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_33_messageQueue,
        &_8_messageQueue);
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      _1_radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        _1_radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L3_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L5_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L3_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_2_messageQueue,
        &_L5_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_33_messageQueue,
        &_2_messageQueue);
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L37_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        inDataBus);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &_L36_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT,
        &_L37_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT.messageQueue);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &messageQueue,
        &_L36_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      kcg_copy_RadioTrackTrainMessageQueue_T(&_33_messageQueue, &messageQueue);
      break;
    
  }
  kcg_copy_SessionManagement_T(&last_session, &outC->session);
  /* act_CONDITIONAL_EMERGENCY_STOP_SM */ switch (_32_CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_SessionManagement_T(
        &_L4_CONDITIONAL_EMERGENCY_STOP_SM_IDLE,
        &_L3_CONDITIONAL_EMERGENCY_STOP_SM_IDLE.session);
      kcg_copy_SessionManagement_T(
        &_15_session,
        &_L4_CONDITIONAL_EMERGENCY_STOP_SM_IDLE);
      kcg_copy_SessionManagement_T(&outC->session, &_15_session);
      _16_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _16_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
      _17_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _17_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
      _18_CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _31_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _30_CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _18_CONDITIONAL_EMERGENCY_STOP_SM_fired;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
        &_L64_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP,
        inDataBus);
      kcg_copy_SessionManagement_T(
        &_L62_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP,
        &_L64_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP.session);
      kcg_copy_SessionManagement_T(
        &_9_session,
        &_L62_CONDITIONAL_EMERGENCY_STOP_SM_SEND_CONDITIONAL_EMERGENCY_STOP);
      kcg_copy_SessionManagement_T(&outC->session, &_9_session);
      _10_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _10_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
      _11_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _11_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
      _12_CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _31_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _30_CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _12_CONDITIONAL_EMERGENCY_STOP_SM_fired;
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_SessionManagement_T(
        &_L4_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT,
        &_L3_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT.session);
      kcg_copy_SessionManagement_T(
        &_3_session,
        &_L4_CONDITIONAL_EMERGENCY_STOP_SM_AWAIT_ACKNOWLEDGEMENT);
      kcg_copy_SessionManagement_T(&outC->session, &_3_session);
      _4_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        _4_CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
      _5_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        _5_CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
      _6_CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _31_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _30_CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _6_CONDITIONAL_EMERGENCY_STOP_SM_fired;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      /* ck_IfBlock1 */ if (IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
          &_L21_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          inDataBus);
        kcg_copy_SessionManagement_T(
          &_L20_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L21_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1.session);
        /* 5 */
        SessionManagement__GetPosData_RBC_Session_Pkg(
          &_L20_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L10_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &_L12_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          inRadioTrainTrackMessage);
        /* 5 */
        PosData__Update_RBC_Session_Pkg(
          &_L10_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L12_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L11_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        /* 5 */
        SessionManagement__SetPosData_RBC_Session_Pkg(
          &_L20_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L11_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L13_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        kcg_copy_SessionManagement_T(
          &_20_session,
          &_L13_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        kcg_copy_SessionManagement_T(&session, &_20_session);
      }
      else {
        kcg_copy_SessionManagement_T(&_19_session, &last_session);
        kcg_copy_SessionManagement_T(&session, &_19_session);
      }
      kcg_copy_SessionManagement_T(&outC->session, &session);
      CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
      CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt = kcg_false;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt =
        CONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
      CONDITIONAL_EMERGENCY_STOP_SM_fired =
        _31_CONDITIONAL_EMERGENCY_STOP_SM_fired_strong;
      _30_CONDITIONAL_EMERGENCY_STOP_SM_fired =
        CONDITIONAL_EMERGENCY_STOP_SM_fired;
      /* ck_IfBlock1 */ if (IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &_L14_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          inRadioTrainTrackMessage);
        /* 5 */
        RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &_L14_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1,
          &_L17_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        _L16_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1 =
          /* 1 */
          RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
            &_L17_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1);
        noname =
          _L16_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT_IfBlock1;
      }
      break;
    
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L69,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &_L69);
  kcg_copy_CompressedRadioMessage_TM(&_L72, inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &_L72);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L76, inDataBus);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L78, &_33_messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L75, &_L76);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&_L75.messageQueue, &_L78);
  }
  kcg_copy_SessionManagement_T(&_L80, &outC->session);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L79, &_L75);
  if (kcg_true) {
    kcg_copy_SessionManagement_T(&_L79.session, &_L80);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L79);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

