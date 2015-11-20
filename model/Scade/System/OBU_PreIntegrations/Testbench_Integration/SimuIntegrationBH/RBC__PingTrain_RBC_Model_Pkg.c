/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__PingTrain_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC__PingTrain_init_RBC_Model_Pkg(outC_RBC__PingTrain_RBC_Model_Pkg *outC)
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
  outC->lastRadioTrackTrainMessageWasSentTimestamp = 0;
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


void RBC__PingTrain_reset_RBC_Model_Pkg(outC_RBC__PingTrain_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__PingTrain */
void RBC__PingTrain_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__PingTrain::inForceTrigger */ kcg_bool inForceTrigger,
  /* RBC_Model_Pkg::RBC__PingTrain::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__PingTrain::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__PingTrain::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__PingTrain_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC__PingTrain::messageQueue */
  static RadioTrackTrainMessageQueue_T _1_messageQueue;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L34 */
  static P042_trackside_int_T_TM _L34_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L33 */
  static P042_trackside_int_T_TM _L33_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L31 */
  static P042_trackside_int_T_TM _L31_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L30 */
  static kcg_bool _L30_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L28 */
  static RadioTrackTrainMessageQueue_T _L28_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L29 */
  static RBC_Data_T_RBC_DataBus_Pkg _L29_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L24 */
  static SessionManagement_T _L24_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L25 */
  static RBC_Data_T_RBC_DataBus_Pkg _L25_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L20 */
  static NID_LRBG _L20_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L21 */
  static PosData_T _L21_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L14 */
  static RadioTrackTrainMessageQueue_T _L14_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L15 */
  static RadioTrackTrainMessageQueueEntry_T _L15_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L6 */
  static M_ACK _L6_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L5 */
  static T_TRAIN _L5_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::then::_L1 */
  static CompressedRadioMessage_TM _L1_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::messageQueue */
  static RadioTrackTrainMessageQueue_T messageQueue;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::else::_L3 */
  static RBC_Data_T_RBC_DataBus_Pkg _L3_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1::else::_L4 */
  static RadioTrackTrainMessageQueue_T _L4_IfBlock1;
  /* RBC_Model_Pkg::RBC__PingTrain::lastRadioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN last_lastRadioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__PingTrain::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RBC_Model_Pkg::RBC__PingTrain::rbcContactTime */
  static T_NVCONTACT rbcContactTime;
  /* RBC_Model_Pkg::RBC__PingTrain::remainingCapacity */
  static kcg_int remainingCapacity;
  /* RBC_Model_Pkg::RBC__PingTrain::rbcTimestamp */
  static T_TRAIN rbcTimestamp;
  /* RBC_Model_Pkg::RBC__PingTrain::trigger */
  static kcg_bool trigger;
  /* RBC_Model_Pkg::RBC__PingTrain::messageQueue */
  static RadioTrackTrainMessageQueue_T _2_messageQueue;
  /* RBC_Model_Pkg::RBC__PingTrain::_L76 */
  static NationalParams_T _L76;
  /* RBC_Model_Pkg::RBC__PingTrain::_L75 */
  static T_NVCONTACT _L75;
  /* RBC_Model_Pkg::RBC__PingTrain::_L74 */
  static kcg_int _L74;
  /* RBC_Model_Pkg::RBC__PingTrain::_L111 */
  static kcg_int _L111;
  /* RBC_Model_Pkg::RBC__PingTrain::_L110 */
  static T_TRAIN _L110;
  /* RBC_Model_Pkg::RBC__PingTrain::_L109 */
  static T_NVCONTACT _L109;
  /* RBC_Model_Pkg::RBC__PingTrain::_L108 */
  static T_NVCONTACT _L108;
  /* RBC_Model_Pkg::RBC__PingTrain::_L107 */
  static kcg_int _L107;
  /* RBC_Model_Pkg::RBC__PingTrain::_L106 */
  static kcg_bool _L106;
  /* RBC_Model_Pkg::RBC__PingTrain::_L105 */
  static T_NVCONTACT _L105;
  /* RBC_Model_Pkg::RBC__PingTrain::_L104 */
  static T_NVCONTACT _L104;
  /* RBC_Model_Pkg::RBC__PingTrain::_L103 */
  static kcg_int _L103;
  /* RBC_Model_Pkg::RBC__PingTrain::_L102 */
  static kcg_bool _L102;
  /* RBC_Model_Pkg::RBC__PingTrain::_L101 */
  static kcg_int _L101;
  /* RBC_Model_Pkg::RBC__PingTrain::_L100 */
  static kcg_bool _L100;
  /* RBC_Model_Pkg::RBC__PingTrain::_L99 */
  static kcg_bool _L99;
  /* RBC_Model_Pkg::RBC__PingTrain::_L98 */
  static T_TRAIN _L98;
  /* RBC_Model_Pkg::RBC__PingTrain::_L97 */
  static T_NVCONTACT _L97;
  /* RBC_Model_Pkg::RBC__PingTrain::_L96 */
  static kcg_bool _L96;
  /* RBC_Model_Pkg::RBC__PingTrain::_L95 */
  static kcg_bool _L95;
  /* RBC_Model_Pkg::RBC__PingTrain::_L94 */
  static kcg_int _L94;
  /* RBC_Model_Pkg::RBC__PingTrain::_L117 */
  static T_TRAIN _L117;
  /* RBC_Model_Pkg::RBC__PingTrain::_L116 */
  static T_TRAIN _L116;
  /* RBC_Model_Pkg::RBC__PingTrain::_L115 */
  static kcg_bool _L115;
  /* RBC_Model_Pkg::RBC__PingTrain::_L114 */
  static Radio_TrackTrain_Header_T_TM _L114;
  /* RBC_Model_Pkg::RBC__PingTrain::_L112 */
  static T_TRAIN _L112;
  /* RBC_Model_Pkg::RBC__PingTrain::_L123 */
  static CompressedRadioMessage_TM _L123;
  /* RBC_Model_Pkg::RBC__PingTrain::_L120 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L120;
  /* RBC_Model_Pkg::RBC__PingTrain::_L124 */
  static T_TRAIN _L124;
  /* RBC_Model_Pkg::RBC__PingTrain::_L128 */
  static RBC_Data_T_RBC_DataBus_Pkg _L128;
  /* RBC_Model_Pkg::RBC__PingTrain::_L129 */
  static DynamicConfig_T _L129;
  /* RBC_Model_Pkg::RBC__PingTrain::_L131 */
  static RadioTrackTrainMessageQueue_T _L131;
  /* RBC_Model_Pkg::RBC__PingTrain::_L130 */
  static RBC_Data_T_RBC_DataBus_Pkg _L130;
  /* RBC_Model_Pkg::RBC__PingTrain::_L133 */
  static RBC_Data_T_RBC_DataBus_Pkg _L133;
  /* RBC_Model_Pkg::RBC__PingTrain::_L132 */
  static Clock_T _L132;
  /* RBC_Model_Pkg::RBC__PingTrain::_L138 */
  static RBC_Data_T_RBC_DataBus_Pkg _L138;
  /* RBC_Model_Pkg::RBC__PingTrain::_L139 */
  static RBC_Data_T_RBC_DataBus_Pkg _L139;
  /* RBC_Model_Pkg::RBC__PingTrain::_L140 */
  static RadioTrackTrainMessageQueue_T _L140;
  /* RBC_Model_Pkg::RBC__PingTrain::_L141 */
  static RBC_Data_T_RBC_DataBus_Pkg _L141;
  /* RBC_Model_Pkg::RBC__PingTrain::_L142 */
  static CompressedRadioMessage_TM _L142;
  /* RBC_Model_Pkg::RBC__PingTrain::_L143 */
  static kcg_bool _L143;
  /* RBC_Model_Pkg::RBC__PingTrain::_L144 */
  static kcg_bool _L144;
  
  _L143 = inForceTrigger;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L130, inDataBus);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L131, &_L130.messageQueue);
  _L74 = /* 1 */
    RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
      &_L131);
  remainingCapacity = _L74;
  _L107 = remainingCapacity;
  _L94 = RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
  _L95 = _L107 == _L94;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L133, inDataBus);
  kcg_copy_Clock_T(&_L132, &_L133.clockk);
  _L124 = /* 1 */ Clock__GetSeconds_RBC_Time_Pkg(&_L132);
  rbcTimestamp = _L124;
  _L98 = rbcTimestamp;
  /* last_init_ck_lastRadioTrackTrainMessageWasSentTimestamp */ if (outC->init) {
    last_lastRadioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  }
  else {
    last_lastRadioTrackTrainMessageWasSentTimestamp =
      outC->lastRadioTrackTrainMessageWasSentTimestamp;
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L141, inDataBus);
  kcg_copy_CompressedRadioMessage_TM(&_L142, &_L141.lastSentTrackTrainMessage);
  _L115 = /* 2 */
    RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L142);
  /* 2 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &_L142,
    &_L114);
  _L112 = /* 2 */
    RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L114);
  _L117 = last_lastRadioTrackTrainMessageWasSentTimestamp;
  /* 2 */ if (_L115) {
    _L116 = _L112;
  }
  else {
    _L116 = _L117;
  }
  outC->lastRadioTrackTrainMessageWasSentTimestamp = _L116;
  _L110 = outC->lastRadioTrackTrainMessageWasSentTimestamp;
  _L111 = _L98 - _L110;
  _L101 = T_NVCONTACT_FACTOR;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L128, inDataBus);
  kcg_copy_DynamicConfig_T(&_L129, &_L128.config);
  /* 1 */ DynamicConfig__GetNationalParams_RBC_Config_Pkg(&_L129, &_L76);
  _L75 = /* 1 */ NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg(&_L76);
  rbcContactTime = _L75;
  _L97 = rbcContactTime;
  _L103 = _L101 * _L97;
  _L102 = _L111 >= _L103;
  _L104 = rbcContactTime;
  _L109 = T_NVCONTACT_DEFAULT;
  _L100 = _L104 > _L109;
  _L105 = rbcContactTime;
  _L108 = T_NVCONTACT_UNLIMITED;
  _L99 = _L105 < _L108;
  _L96 = _L100 & _L99;
  _L106 = _L95 & _L102 & _L96;
  _L144 = _L143 | _L106;
  trigger = _L144;
  IfBlock1_clock = trigger;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L29_IfBlock1, inDataBus);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_L28_IfBlock1,
      &_L29_IfBlock1.messageQueue);
    _L5_IfBlock1 = T_TRAIN_MIN;
    _L6_IfBlock1 = M_ACK_No_acknowledgement_required;
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L25_IfBlock1, inDataBus);
    kcg_copy_SessionManagement_T(&_L24_IfBlock1, &_L25_IfBlock1.session);
    /* 3 */
    SessionManagement__GetPosData_RBC_Session_Pkg(
      &_L24_IfBlock1,
      &_L21_IfBlock1);
    _L20_IfBlock1 = /* 3 */
      PosData__Get_NID_LRBG_RBC_Session_Pkg(&_L21_IfBlock1);
    _L30_IfBlock1 = inForceTrigger;
    kcg_copy_P042_trackside_int_T_TM(
      &_L34_IfBlock1,
      (P042_trackside_int_T_TM *) &P042_RequestSessionTermination);
    kcg_copy_P042_trackside_int_T_TM(
      &_L33_IfBlock1,
      (P042_trackside_int_T_TM *) &P042_DEFAULT);
    /* 3 */ if (_L30_IfBlock1) {
      kcg_copy_P042_trackside_int_T_TM(&_L31_IfBlock1, &_L34_IfBlock1);
    }
    else {
      kcg_copy_P042_trackside_int_T_TM(&_L31_IfBlock1, &_L33_IfBlock1);
    }
    /* 1 */
    RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
      _L5_IfBlock1,
      _L6_IfBlock1,
      _L20_IfBlock1,
      (P003V1_trackside_int_T_TM_baseline2 *) &P003_DEFAULT,
      (P005_trackside_int_T_TM *) &P005_DEFAULT,
      &_L31_IfBlock1,
      (P057_trackside_int_T_TM *) &P057_DEFAULT,
      (P058_trackside_int_T_TM *) &P058_DEFAULT,
      &_L1_IfBlock1);
    /* 2 */
    RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
      &_L1_IfBlock1,
      &_L15_IfBlock1);
    /* 2 */
    RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
      &_L28_IfBlock1,
      &_L15_IfBlock1,
      &_L14_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(&_1_messageQueue, &_L14_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(&_2_messageQueue, &_1_messageQueue);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L3_IfBlock1, inDataBus);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &_L4_IfBlock1,
      &_L3_IfBlock1.messageQueue);
    kcg_copy_RadioTrackTrainMessageQueue_T(&messageQueue, &_L4_IfBlock1);
    kcg_copy_RadioTrackTrainMessageQueue_T(&_2_messageQueue, &messageQueue);
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L120,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &_L120);
  kcg_copy_CompressedRadioMessage_TM(&_L123, inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &_L123);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L138, inDataBus);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L140, &_2_messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L139, &_L138);
  if (kcg_true) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&_L139.messageQueue, &_L140);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L139);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__PingTrain_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

