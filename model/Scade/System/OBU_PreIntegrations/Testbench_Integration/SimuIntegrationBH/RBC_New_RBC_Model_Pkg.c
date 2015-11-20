/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_New_RBC_Model_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RBC_New_init_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC)
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
  outC->dataBus.session.m_TrainData.nid_engine = 0;
  outC->dataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  for (i1 = 0; i1 < 1; i1++) {
    outC->dataBus.session.m_TrainData.m_OnboardPhoneNumbers[i1].valid =
      kcg_true;
    for (i = 0; i < 15; i++) {
      outC->dataBus.session.m_TrainData.m_OnboardPhoneNumbers[i1].telephoneNumber[i] =
        0;
    }
  }
  outC->dataBus.session.m_TrainData.t_train_ref = 0;
  outC->dataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->dataBus.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->dataBus.session.m_TrainData.l_train = 0;
  outC->dataBus.session.m_TrainData.v_maxtrain = 0;
  outC->dataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->dataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->dataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->dataBus.session.m_TrainData.n_axle = 0;
  for (i2 = 0; i2 < 4; i2++) {
    outC->dataBus.session.m_TrainData.m_TractionIdentities[i2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->dataBus.session.m_TrainData.m_TractionIdentities[i2].nid_ctraction =
      0;
  }
  for (i3 = 0; i3 < 5; i3++) {
    outC->dataBus.session.m_TrainData.m_NationalSystemIdentities[i3] = 0;
  }
  outC->dataBus.session.m_TrainData.nid_operational = 0;
  outC->dataBus.session.m_PosData.nid_lrbg = 0;
  outC->dataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->dataBus.session.m_PosData.d_lrbg = 0;
  outC->dataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->dataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->dataBus.session.m_PosData.l_doubtover = 0;
  outC->dataBus.session.m_PosData.l_doubtunder = 0;
  outC->dataBus.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->dataBus.session.m_PosData.l_trainint = 0;
  outC->dataBus.session.m_PosData.v_train = 0;
  outC->dataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->dataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->dataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->dataBus.session.m_PosData.nid_ntc = 0;
  outC->dataBus.session.m_PosData.nid_prvlrbg = 0;
  outC->dataBus.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dataBus.config.m_NationalParams.nid_c = 0;
  outC->dataBus.config.m_NationalParams.v_nvshunt = 0;
  outC->dataBus.config.m_NationalParams.v_nvstff = 0;
  outC->dataBus.config.m_NationalParams.v_nvonsight = 0;
  outC->dataBus.config.m_NationalParams.v_nvunfit = 0;
  outC->dataBus.config.m_NationalParams.v_nvrel = 0;
  outC->dataBus.config.m_NationalParams.t_nvcontact = 0;
  outC->dataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->dataBus.config.m_MAReqParams.t_mar = 0;
  outC->dataBus.config.m_MAReqParams.t_timeoutrqst = 0;
  outC->dataBus.config.m_MAReqParams.t_cycrqst = 0;
  outC->dataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->dataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->dataBus.config.m_PosRepParams.t_cycloc = 0;
  outC->dataBus.config.m_PosRepParams.d_cycloc = 0;
  outC->dataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->dataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    0;
  for (i4 = 0; i4 < 32; i4++) {
    outC->dataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[i4].d_loc =
      0;
    outC->dataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[i4].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (i5 = 0; i5 < 16; i5++) {
    outC->dataBus.diagnostic[i5].valid = kcg_true;
    outC->dataBus.diagnostic[i5].count = 0;
    outC->dataBus.diagnostic[i5].timestamp = 0;
    outC->dataBus.diagnostic[i5].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->dataBus.diagnostic[i5].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->dataBus.diagnostic[i5].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (i8 = 0; i8 < 8; i8++) {
    outC->dataBus.messageQueue.m_Entries[i8].m_IsValid = kcg_true;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.radioDevice = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.receivedSystemTime =
      0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.nid_message = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.t_train = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.m_ack = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.nid_lrbg = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.t_train_reference =
      0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.nid_em = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.q_scale = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.d_sr = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.t_sh_rqst = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.d_ref = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.q_dir = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.d_emergencystop = 0;
    outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Header.m_version = 0;
    for (i6 = 0; i6 < 30; i6++) {
      outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].nid_packet =
        0;
      outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].q_dir =
        Q_DIR_Reverse;
      outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].valid =
        kcg_true;
      outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].startAddress =
        0;
      outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketHeaders[i6].endAddress =
        0;
    }
    for (i7 = 0; i7 < 500; i7++) {
      outC->dataBus.messageQueue.m_Entries[i8].m_Entry.Messages.PacketData[i7] =
        0;
    }
  }
  outC->dataBus.clockk.m_Value = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.radioDevice = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.receivedSystemTime = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.nid_message = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.t_train = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.m_ack = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.nid_lrbg = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.t_train_reference = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.nid_em = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.q_scale = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.d_sr = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.d_ref = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.q_dir = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.d_emergencystop = 0;
  outC->dataBus.lastSentTrackTrainMessage.Header.m_version = 0;
  for (i9 = 0; i9 < 30; i9++) {
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].nid_packet =
      0;
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].q_dir =
      Q_DIR_Reverse;
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].valid =
      kcg_true;
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].startAddress =
      0;
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[i9].endAddress =
      0;
  }
  for (i10 = 0; i10 < 500; i10++) {
    outC->dataBus.lastSentTrackTrainMessage.Messages.PacketData[i10] = 0;
  }
  outC->outClock.m_Value = 0;
  outC->outRadioTrackTrainMessage.Header.radioDevice = 0;
  outC->outRadioTrackTrainMessage.Header.receivedSystemTime = 0;
  outC->outRadioTrackTrainMessage.Header.nid_message = 0;
  outC->outRadioTrackTrainMessage.Header.t_train = 0;
  outC->outRadioTrackTrainMessage.Header.m_ack = 0;
  outC->outRadioTrackTrainMessage.Header.nid_lrbg = 0;
  outC->outRadioTrackTrainMessage.Header.t_train_reference = 0;
  outC->outRadioTrackTrainMessage.Header.nid_em = 0;
  outC->outRadioTrackTrainMessage.Header.q_scale = 0;
  outC->outRadioTrackTrainMessage.Header.d_sr = 0;
  outC->outRadioTrackTrainMessage.Header.t_sh_rqst = 0;
  outC->outRadioTrackTrainMessage.Header.d_ref = 0;
  outC->outRadioTrackTrainMessage.Header.q_dir = 0;
  outC->outRadioTrackTrainMessage.Header.d_emergencystop = 0;
  outC->outRadioTrackTrainMessage.Header.m_version = 0;
  for (i11 = 0; i11 < 30; i11++) {
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i11].nid_packet = 0;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i11].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i11].valid =
      kcg_true;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i11].startAddress =
      0;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[i11].endAddress = 0;
  }
  for (i12 = 0; i12 < 500; i12++) {
    outC->outRadioTrackTrainMessage.Messages.PacketData[i12] = 0;
  }
  outC->outSessionManagement.m_TrainData.nid_engine = 0;
  outC->outSessionManagement.m_TrainData.m_NumberOfOnboardPhoneNumbers = 0;
  for (i14 = 0; i14 < 1; i14++) {
    outC->outSessionManagement.m_TrainData.m_OnboardPhoneNumbers[i14].valid =
      kcg_true;
    for (i13 = 0; i13 < 15; i13++) {
      outC->outSessionManagement.m_TrainData.m_OnboardPhoneNumbers[i14].telephoneNumber[i13] =
        0;
    }
  }
  outC->outSessionManagement.m_TrainData.t_train_ref = 0;
  outC->outSessionManagement.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outSessionManagement.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outSessionManagement.m_TrainData.l_train = 0;
  outC->outSessionManagement.m_TrainData.v_maxtrain = 0;
  outC->outSessionManagement.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outSessionManagement.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outSessionManagement.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outSessionManagement.m_TrainData.n_axle = 0;
  for (i15 = 0; i15 < 4; i15++) {
    outC->outSessionManagement.m_TrainData.m_TractionIdentities[i15].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outSessionManagement.m_TrainData.m_TractionIdentities[i15].nid_ctraction =
      0;
  }
  for (i16 = 0; i16 < 5; i16++) {
    outC->outSessionManagement.m_TrainData.m_NationalSystemIdentities[i16] = 0;
  }
  outC->outSessionManagement.m_TrainData.nid_operational = 0;
  outC->outSessionManagement.m_PosData.nid_lrbg = 0;
  outC->outSessionManagement.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outSessionManagement.m_PosData.d_lrbg = 0;
  outC->outSessionManagement.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outSessionManagement.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outSessionManagement.m_PosData.l_doubtover = 0;
  outC->outSessionManagement.m_PosData.l_doubtunder = 0;
  outC->outSessionManagement.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outSessionManagement.m_PosData.l_trainint = 0;
  outC->outSessionManagement.m_PosData.v_train = 0;
  outC->outSessionManagement.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outSessionManagement.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outSessionManagement.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outSessionManagement.m_PosData.nid_ntc = 0;
  outC->outSessionManagement.m_PosData.nid_prvlrbg = 0;
  /* 1 */ RBC__ProcessController_init_RBC_Model_Pkg(&outC->_3_Context_1);
  /* 1 */
  RadioTrainTrackInputHandler_init_RBC_Messaging_Pkg(&outC->_2_Context_1);
  /* 1 */
  ToOldRadioTrainTrackMsg_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_1_Context_1);
  /* 1 */ DataBusFactory_init_RBC_DataBus_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_New_reset_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ RBC__ProcessController_reset_RBC_Model_Pkg(&outC->_3_Context_1);
  /* 1 */
  RadioTrainTrackInputHandler_reset_RBC_Messaging_Pkg(&outC->_2_Context_1);
  /* 1 */
  ToOldRadioTrainTrackMsg_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_1_Context_1);
  /* 1 */ DataBusFactory_reset_RBC_DataBus_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Model_Pkg::RBC_New */
void RBC_New_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC_New::inDynamicConfigInit */ DynamicConfig_T *inDynamicConfigInit,
  /* RBC_Model_Pkg::RBC_New::inRadioTrainTrackMsg */ M_TrainTrack_Message_T_TM_radio_messages *inRadioTrainTrackMsg,
  /* RBC_Model_Pkg::RBC_New::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC_New_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC_New::dataBus */
  static RBC_Data_T_RBC_DataBus_Pkg last_dataBus;
  /* RBC_Model_Pkg::RBC_New::_L157 */
  static M_TrainTrack_Message_T_TM_radio_messages _L157;
  /* RBC_Model_Pkg::RBC_New::_L217 */
  static CompressedRadioMessage_TM _L217;
  /* RBC_Model_Pkg::RBC_New::_L218 */
  static RBC_Data_T_RBC_DataBus_Pkg _L218;
  /* RBC_Model_Pkg::RBC_New::_L220 */
  static DynamicConfig_T _L220;
  /* RBC_Model_Pkg::RBC_New::_L223 */
  static RBC_Data_T_RBC_DataBus_Pkg _L223;
  /* RBC_Model_Pkg::RBC_New::_L239 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L239;
  /* RBC_Model_Pkg::RBC_New::_L240 */
  static RBC_Data_T_RBC_DataBus_Pkg _L240;
  /* RBC_Model_Pkg::RBC_New::_L246 */
  static CompressedRadioMessage_TM _L246;
  /* RBC_Model_Pkg::RBC_New::_L245 */
  static RBC_Data_T_RBC_DataBus_Pkg _L245;
  /* RBC_Model_Pkg::RBC_New::_L253 */
  static SessionManagement_T _L253;
  /* RBC_Model_Pkg::RBC_New::_L255 */
  static Clock_T _L255;
  /* RBC_Model_Pkg::RBC_New::_L254 */
  static RBC_Data_T_RBC_DataBus_Pkg _L254;
  /* RBC_Model_Pkg::RBC_New::_L256 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L256;
  
  kcg_copy_DynamicConfig_T(&_L220, inDynamicConfigInit);
  /* last_init_ck_dataBus */ if (outC->init) {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
      &last_dataBus,
      (RBC_Data_T_RBC_DataBus_Pkg *) &RBC_DATA_BUS_DEFAULT_RBC_DataBus_Pkg);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&last_dataBus, &outC->dataBus);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L223, &last_dataBus);
  /* 1 */ DataBusFactory_RBC_DataBus_Pkg(&_L220, &_L223, &outC->Context_1);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L218, &outC->Context_1.outDataBus);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L157,
    inRadioTrainTrackMsg);
  /* 1 */
  ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
    &_L157,
    &outC->_1_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L256,
    &outC->_1_Context_1.outOld);
  /* 1 */
  RadioTrainTrackInputHandler_RBC_Messaging_Pkg(&_L256, &outC->_2_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L239,
    &outC->_2_Context_1.outRadioTrainTrack);
  kcg_copy_CompressedRadioMessage_TM(&_L217, inTriggeredRadioTrackTrainMessage);
  /* 1 */
  RBC__ProcessController_RBC_Model_Pkg(
    &_L218,
    &_L239,
    &_L217,
    &outC->_3_Context_1);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L240, &outC->_3_Context_1.outDataBus);
  /* 1 */ RadioTrackTrainMsgQueue_RBC_Messaging_Pkg(&_L240, &_L245, &_L246);
  /* 1 */ RBC_Clock_Tick_RBC_Time_Pkg(&_L245, &_L254, &_L255);
  kcg_copy_Clock_T(&outC->outClock, &_L255);
  kcg_copy_SessionManagement_T(&_L253, &_L254.session);
  kcg_copy_SessionManagement_T(&outC->outSessionManagement, &_L253);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->dataBus, &_L254);
  kcg_copy_CompressedRadioMessage_TM(&outC->outRadioTrackTrainMessage, &_L246);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_New_RBC_Model_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

