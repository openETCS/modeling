/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DataBusFactory_RBC_DataBus_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void DataBusFactory_init_RBC_DataBus_Pkg(
  outC_DataBusFactory_RBC_DataBus_Pkg *outC)
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
  outC->times_1 = 0;
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
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DataBusFactory_reset_RBC_DataBus_Pkg(
  outC_DataBusFactory_RBC_DataBus_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_DataBus_Pkg::DataBusFactory */
void DataBusFactory_RBC_DataBus_Pkg(
  /* RBC_DataBus_Pkg::DataBusFactory::initConfig */ DynamicConfig_T *initConfig,
  /* RBC_DataBus_Pkg::DataBusFactory::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_DataBusFactory_RBC_DataBus_Pkg *outC)
{
  static kcg_bool _1_times_1;
  static kcg_bool _2_times_1;
  static kcg_int _3_times_1;
  static kcg_int times_1;
  /* RBC_DataBus_Pkg::DataBusFactory::_L4 */
  static kcg_int _L4;
  /* RBC_DataBus_Pkg::DataBusFactory::_L3 */
  static kcg_bool _L3;
  /* RBC_DataBus_Pkg::DataBusFactory::_L2 */
  static SessionManagement_T _L2;
  /* RBC_DataBus_Pkg::DataBusFactory::_L1 */
  static kcg_bool _L1;
  /* RBC_DataBus_Pkg::DataBusFactory::_L5 */
  static DynamicConfig_T _L5;
  /* RBC_DataBus_Pkg::DataBusFactory::_L7 */
  static RadioTrackTrainMessageQueue_T _L7;
  /* RBC_DataBus_Pkg::DataBusFactory::_L6 */
  static Clock_T _L6;
  /* RBC_DataBus_Pkg::DataBusFactory::_L8 */
  static RBC_Data_T_RBC_DataBus_Pkg _L8;
  /* RBC_DataBus_Pkg::DataBusFactory::_L10 */
  static DynamicConfig_T _L10;
  /* RBC_DataBus_Pkg::DataBusFactory::_L16 */
  static array_169103 _L16;
  /* RBC_DataBus_Pkg::DataBusFactory::_L15 */
  static SessionManagement_T _L15;
  /* RBC_DataBus_Pkg::DataBusFactory::_L14 */
  static DynamicConfig_T _L14;
  /* RBC_DataBus_Pkg::DataBusFactory::_L13 */
  static RadioTrackTrainMessageQueue_T _L13;
  /* RBC_DataBus_Pkg::DataBusFactory::_L17 */
  static RBC_Data_T_RBC_DataBus_Pkg _L17;
  /* RBC_DataBus_Pkg::DataBusFactory::_L18 */
  static Clock_T _L18;
  /* RBC_DataBus_Pkg::DataBusFactory::_L19 */
  static Clock_T _L19;
  /* RBC_DataBus_Pkg::DataBusFactory::_L21 */
  static CompressedRadioMessage_TM _L21;
  /* RBC_DataBus_Pkg::DataBusFactory::_L22 */
  static CompressedRadioMessage_TM _L22;
  /* RBC_DataBus_Pkg::DataBusFactory::_L23 */
  static SessionManagement_T _L23;
  /* RBC_DataBus_Pkg::DataBusFactory::_L24 */
  static RadioTrackTrainMessageQueue_T _L24;
  /* RBC_DataBus_Pkg::DataBusFactory::_L25 */
  static Clock_T _L25;
  /* RBC_DataBus_Pkg::DataBusFactory::_L26 */
  static CompressedRadioMessage_TM _L26;
  /* RBC_DataBus_Pkg::DataBusFactory::_L28 */
  static array_169103 _L28;
  /* RBC_DataBus_Pkg::DataBusFactory::_L38 */
  static array_169103 _L38;
  
  _L1 = kcg_true;
  _2_times_1 = _L1;
  _L4 = 1;
  _3_times_1 = _L4;
  /* 1 */ if (outC->init) {
    times_1 = _3_times_1;
  }
  else {
    times_1 = outC->times_1;
  }
  if (times_1 < 0) {
    outC->times_1 = times_1;
  }
  else if (_2_times_1) {
    outC->times_1 = times_1 - 1;
  }
  else {
    outC->times_1 = times_1;
  }
  _1_times_1 = _2_times_1 & (outC->times_1 == 0);
  _L3 = _1_times_1;
  kcg_copy_SessionManagement_T(
    &_L23,
    (SessionManagement_T *) &SESSION_MANAGEMENT_DEFAULT);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L8, inDataBus);
  kcg_copy_SessionManagement_T(&_L15, &_L8.session);
  /* 1 */ if (_L3) {
    kcg_copy_SessionManagement_T(&_L2, &_L23);
  }
  else {
    kcg_copy_SessionManagement_T(&_L2, &_L15);
  }
  kcg_copy_DynamicConfig_T(&_L10, initConfig);
  kcg_copy_DynamicConfig_T(&_L14, &_L8.config);
  /* 2 */ if (_L3) {
    kcg_copy_DynamicConfig_T(&_L5, &_L10);
  }
  else {
    kcg_copy_DynamicConfig_T(&_L5, &_L14);
  }
  kcg_copy_Clock_T(&_L25, (Clock_T *) &CLOCK_DEFAULT);
  kcg_copy_Clock_T(&_L19, &_L8.clockk);
  /* 1 */ Clock__Limit_RBC_Time_Pkg(&_L19, &_L18);
  /* 4 */ if (_L3) {
    kcg_copy_Clock_T(&_L6, &_L25);
  }
  else {
    kcg_copy_Clock_T(&_L6, &_L18);
  }
  kcg_copy_RadioTrackTrainMessageQueue_T(
    &_L24,
    (RadioTrackTrainMessageQueue_T *) &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_DEFAULT);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L13, &_L8.messageQueue);
  /* 3 */ if (_L3) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&_L7, &_L24);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueue_T(&_L7, &_L13);
  }
  kcg_copy_CompressedRadioMessage_TM(&_L26, &_L8.lastSentTrackTrainMessage);
  kcg_copy_array_169103(&_L16, &_L8.diagnostic);
  kcg_copy_array_169103(
    &_L38,
    (array_169103 *) &DIAG_MSG_DEFAULT_ARRAY_RBC_Diagnostic_Pkg);
  /* 7 */ if (_L3) {
    kcg_copy_array_169103(&_L28, &_L38);
  }
  else {
    kcg_copy_array_169103(&_L28, &_L16);
  }
  kcg_copy_CompressedRadioMessage_TM(
    &_L22,
    (CompressedRadioMessage_TM *)
      &Empty_RadioTrackTrainMessage_RBC_Messaging_Pkg);
  /* 6 */ if (_L3) {
    kcg_copy_CompressedRadioMessage_TM(&_L21, &_L22);
  }
  else {
    kcg_copy_CompressedRadioMessage_TM(&_L21, &_L26);
  }
  kcg_copy_SessionManagement_T(&_L17.session, &_L2);
  kcg_copy_DynamicConfig_T(&_L17.config, &_L5);
  kcg_copy_array_169103(&_L17.diagnostic, &_L28);
  kcg_copy_RadioTrackTrainMessageQueue_T(&_L17.messageQueue, &_L7);
  kcg_copy_Clock_T(&_L17.clockk, &_L6);
  kcg_copy_CompressedRadioMessage_TM(&_L17.lastSentTrackTrainMessage, &_L21);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_L17);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DataBusFactory_RBC_DataBus_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

