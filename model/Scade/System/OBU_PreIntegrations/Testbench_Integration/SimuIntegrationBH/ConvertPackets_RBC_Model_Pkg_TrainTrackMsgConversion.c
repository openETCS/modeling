/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.h"

#ifndef KCG_USER_DEFINED_INIT
void ConvertPackets_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->oldPackets.p0.valid = kcg_true;
  outC->oldPackets.p0.packet0.NID_PACKET = 0;
  outC->oldPackets.p0.packet0.L_PACKET = 0;
  outC->oldPackets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->oldPackets.p0.packet0.NID_LRBG = 0;
  outC->oldPackets.p0.packet0.D_LRBG = 0;
  outC->oldPackets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->oldPackets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->oldPackets.p0.packet0.L_DOUBTOVER = 0;
  outC->oldPackets.p0.packet0.L_DOUBTUNDER = 0;
  outC->oldPackets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->oldPackets.p0.packet0.L_TRAININT = 0;
  outC->oldPackets.p0.packet0.V_TRAIN = 0;
  outC->oldPackets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->oldPackets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->oldPackets.p0.packet0.level = M_LEVEL_Level_0;
  outC->oldPackets.p0.packet0.NID_NTC = 0;
  outC->oldPackets.p1.valid = kcg_true;
  outC->oldPackets.p1.packet1.NID_PACKET = 0;
  outC->oldPackets.p1.packet1.L_PACKET = 0;
  outC->oldPackets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->oldPackets.p1.packet1.NID_LRBG = 0;
  outC->oldPackets.p1.packet1.NID_PRVLRBG = 0;
  outC->oldPackets.p1.packet1.D_LRBG = 0;
  outC->oldPackets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->oldPackets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->oldPackets.p1.packet1.L_DOUBTOVER = 0;
  outC->oldPackets.p1.packet1.L_DOUBTUNDER = 0;
  outC->oldPackets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->oldPackets.p1.packet1.L_TRAININT = 0;
  outC->oldPackets.p1.packet1.V_TRAIN = 0;
  outC->oldPackets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->oldPackets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->oldPackets.p1.packet1.level = M_LEVEL_Level_0;
  outC->oldPackets.p1.packet1.NID_NTC = 0;
  outC->oldPackets.p3.valid = kcg_true;
  outC->oldPackets.p3.number = 0;
  for (i1 = 0; i1 < 1; i1++) {
    outC->oldPackets.p3.aNID_RADIO[i1].valid = kcg_true;
    for (i = 0; i < 15; i++) {
      outC->oldPackets.p3.aNID_RADIO[i1].telephoneNumber[i] = 0;
    }
  }
  outC->oldPackets.p4.valid = kcg_true;
  outC->oldPackets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->oldPackets.p5.valid = kcg_true;
  outC->oldPackets.p5.TrainRunningNumber = 0;
  outC->oldPackets.p9.valid = kcg_true;
  outC->oldPackets.p9.transitionInformation = 0;
  outC->oldPackets.p11.valid = kcg_true;
  outC->oldPackets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->oldPackets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->oldPackets.p11.l_train = 0;
  outC->oldPackets.p11.v_maxtrain = 0;
  outC->oldPackets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->oldPackets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->oldPackets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->oldPackets.p11.n_axle = 0;
  outC->oldPackets.p11.nIter_tractionIdentity = 0;
  for (i2 = 0; i2 < 4; i2++) {
    outC->oldPackets.p11.tractionIdentity[i2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->oldPackets.p11.tractionIdentity[i2].nid_ctraction = 0;
  }
  outC->oldPackets.p11.nIter_ntc = 0;
  for (i3 = 0; i3 < 5; i3++) {
    outC->oldPackets.p11.nid_ntc[i3] = 0;
  }
  /* 2 */ C_compr_P003_init_TM_TrainToTrack(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertPackets_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* 2 */ C_compr_P003_reset_TM_TrainToTrack(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
void ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::nid_message */ kcg_int nid_message,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::newPackets */ M_TrainTrack_compressed_packets_T_TM_radio_messages *newPackets,
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P003 */
  static P003_TM_TrainToTrack P0031;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P003::then::_L3 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L3_Det_if_P003;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P003::then::_L2 */
  static P003_TM_TrainToTrack _L2_Det_if_P003;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P003::then::_L1 */
  static array_int_8 _L1_Det_if_P003;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P003 */
  static P003_TM_TrainToTrack P003;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P003::else::_L1 */
  static P003_TM_TrainToTrack _L112_Det_if_P003;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P005 */
  static P005_TM_TrainToTrack P0052;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P005::then::_L3 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L3_Det_if_P005;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P005::then::_L2 */
  static P005_TM_TrainToTrack _L2_Det_if_P005;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P005::then::_L1 */
  static array_int_3 _L1_Det_if_P005;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P005 */
  static P005_TM_TrainToTrack P005;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P005::else::_L1 */
  static P005_TM_TrainToTrack _L113_Det_if_P005;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P004 */
  static P004_TM_TrainToTrack P0043;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P004::then::_L3 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L3_Det_if_P004;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P004::then::_L2 */
  static P004_TM_TrainToTrack _L2_Det_if_P004;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P004::then::_L1 */
  static array_int_3 _L1_Det_if_P004;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P004 */
  static P004_TM_TrainToTrack P004;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P004::else::_L1 */
  static P004_TM_TrainToTrack _L114_Det_if_P004;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P009 */
  static P009_TM_TrainToTrack P0094;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P009::then::_L3 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L3_Det_if_P009;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P009::then::_L2 */
  static P009_TM_TrainToTrack _L2_Det_if_P009;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P009::then::_L1 */
  static array_int_3 _L1_Det_if_P009;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P009 */
  static P009_TM_TrainToTrack P009;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P009::else::_L1 */
  static P009_TM_TrainToTrack _L115_Det_if_P009;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P011 */
  static P011_TM_TrainToTrack P0115;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P011::then::_L3 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L3_Det_if_P011;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P011::then::_L2 */
  static P011_TM_TrainToTrack _L2_Det_if_P011;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P011::then::_L1 */
  static array_int_25 _L1_Det_if_P011;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P011 */
  static P011_TM_TrainToTrack P011;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P011::else::_L1 */
  static P011_TM_TrainToTrack _L116_Det_if_P011;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P001 */
  static P001_TM_TrainToTrack P0017;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P000 */
  static P000_TM_TrainToTrack P0006;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::then::_L3 */
  static P000_TM_TrainToTrack _L3_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::then::_L2 */
  static P000_TrainTrack_int_TM_TrainToTrack _L2_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::then::_L1 */
  static P001_TM_TrainToTrack _L1_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P001 */
  static P001_TM_TrainToTrack P001;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P000 */
  static P000_TM_TrainToTrack P000;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::else */
  static kcg_bool else_clock_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::else::else::_L2 */
  static P001_TM_TrainToTrack _L220_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::else::else::_L3 */
  static P000_TM_TrainToTrack _L319_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P000 */
  static P000_TM_TrainToTrack P0008;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P001 */
  static P001_TM_TrainToTrack P0019;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::else::then::_L2 */
  static P000_TrainTrack_int_TM_TrainToTrack _L218_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::else::then::_L3 */
  static P001_TM_TrainToTrack _L317_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1::else::then::_L5 */
  static P000_TM_TrainToTrack _L5_Det_if_P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P000 */
  static P000_TM_TrainToTrack P00010;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P001 */
  static P001_TM_TrainToTrack P00111;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P003 */
  static kcg_bool Det_if_P003_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P005 */
  static kcg_bool Det_if_P005_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P004 */
  static kcg_bool Det_if_P004_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P009 */
  static kcg_bool Det_if_P009_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P011 */
  static kcg_bool Det_if_P011_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P0_or_P1 */
  static kcg_bool Det_if_P0_or_P1_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P0_or_P1 */
  static P000_TrainTrack_int_TM_TrainToTrack P0_or_P1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::nid_packet */
  static kcg_int nid_packet;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P000 */
  static P000_TM_TrainToTrack P00027;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P001 */
  static P001_TM_TrainToTrack P00126;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P011 */
  static P011_TM_TrainToTrack P01125;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P009 */
  static P009_TM_TrainToTrack P00924;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P004 */
  static P004_TM_TrainToTrack P00423;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P005 */
  static P005_TM_TrainToTrack P00522;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P003 */
  static P003_TM_TrainToTrack P00321;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::hasPosReport */
  static kcg_bool hasPosReport;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L1 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L4 */
  static array_int_17 _L4;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L3 */
  static kcg_int _L3;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L7 */
  static P000_TM_TrainToTrack _L7;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L8 */
  static P001_TM_TrainToTrack _L8;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L13 */
  static P011_TM_TrainToTrack _L13;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L18 */
  static outPackets_T_Common_Types_Pkg _L18;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L30 */
  static P004_TM_TrainToTrack _L30;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L31 */
  static P009_TM_TrainToTrack _L31;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L34 */
  static P005_TM_TrainToTrack _L34;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L37 */
  static P003_TM_TrainToTrack _L37;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L38 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L38;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L39 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L39;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L40 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L40;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L41 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L41;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L42 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L42;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L43 */
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg _L43;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L44 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L44;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::_L45 */
  static kcg_bool _L45;
  
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &_L1,
    newPackets);
  kcg_copy_array_int_17(&_L4, (array_int_17 *) &_L1[0]);
  _L3 = _L4[1];
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&P0_or_P1, &_L4);
  nid_packet = _L3;
  _L45 = !((nid_message == 146) | (nid_message == 154) | (nid_message == 155) |
      (nid_message == 156) | (nid_message == 159));
  hasPosReport = _L45;
  Det_if_P0_or_P1_clock = hasPosReport & (nid_packet == 0);
  /* ck_Det_if_P0_or_P1 */ if (Det_if_P0_or_P1_clock) {
    kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
      &_L2_Det_if_P0_or_P1,
      &P0_or_P1);
    /* 1 */
    C_compr_P000_TM_TrainToTrack(&_L2_Det_if_P0_or_P1, &_L3_Det_if_P0_or_P1);
    kcg_copy_P000_TM_TrainToTrack(&P0006, &_L3_Det_if_P0_or_P1);
    kcg_copy_P000_TM_TrainToTrack(&P00027, &P0006);
  }
  else {
    else_clock_Det_if_P0_or_P1 = hasPosReport & (nid_packet == 1);
    /* ck_anon_activ */ if (else_clock_Det_if_P0_or_P1) {
      kcg_copy_P000_TM_TrainToTrack(
        &_L5_Det_if_P0_or_P1,
        (P000_TM_TrainToTrack *)
          &DEFAULT_P000_RBC_Model_Pkg_TrainTrackMsgConversion);
      kcg_copy_P000_TM_TrainToTrack(&P00010, &_L5_Det_if_P0_or_P1);
      kcg_copy_P000_TM_TrainToTrack(&P000, &P00010);
    }
    else {
      kcg_copy_P000_TM_TrainToTrack(
        &_L319_Det_if_P0_or_P1,
        (P000_TM_TrainToTrack *)
          &DEFAULT_P000_RBC_Model_Pkg_TrainTrackMsgConversion);
      kcg_copy_P000_TM_TrainToTrack(&P0008, &_L319_Det_if_P0_or_P1);
      kcg_copy_P000_TM_TrainToTrack(&P000, &P0008);
    }
    kcg_copy_P000_TM_TrainToTrack(&P00027, &P000);
  }
  kcg_copy_P000_TM_TrainToTrack(&_L7, &P00027);
  /* 1 */ ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion(&_L7, &_L38);
  /* ck_Det_if_P0_or_P1 */ if (Det_if_P0_or_P1_clock) {
    kcg_copy_P001_TM_TrainToTrack(
      &_L1_Det_if_P0_or_P1,
      (P001_TM_TrainToTrack *)
        &DEFAULT_P001_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P001_TM_TrainToTrack(&P0017, &_L1_Det_if_P0_or_P1);
    kcg_copy_P001_TM_TrainToTrack(&P00126, &P0017);
  }
  else {
    /* ck_anon_activ */ if (else_clock_Det_if_P0_or_P1) {
      kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
        &_L218_Det_if_P0_or_P1,
        &P0_or_P1);
      /* 1 */
      C_compr_P001_TM_TrainToTrack(
        &_L218_Det_if_P0_or_P1,
        &_L317_Det_if_P0_or_P1);
      kcg_copy_P001_TM_TrainToTrack(&P00111, &_L317_Det_if_P0_or_P1);
      kcg_copy_P001_TM_TrainToTrack(&P001, &P00111);
    }
    else {
      kcg_copy_P001_TM_TrainToTrack(
        &_L220_Det_if_P0_or_P1,
        (P001_TM_TrainToTrack *)
          &DEFAULT_P001_RBC_Model_Pkg_TrainTrackMsgConversion);
      kcg_copy_P001_TM_TrainToTrack(&P0019, &_L220_Det_if_P0_or_P1);
      kcg_copy_P001_TM_TrainToTrack(&P001, &P0019);
    }
    kcg_copy_P001_TM_TrainToTrack(&P00126, &P001);
  }
  kcg_copy_P001_TM_TrainToTrack(&_L8, &P00126);
  /* 1 */ ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion(&_L8, &_L39);
  Det_if_P003_clock = nid_message == 159;
  /* ck_Det_if_P003 */ if (Det_if_P003_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &_L3_Det_if_P003,
      newPackets);
    kcg_copy_array_int_8(&_L1_Det_if_P003, (array_int_8 *) &_L3_Det_if_P003[0]);
    /* 2 */ C_compr_P003_TM_TrainToTrack(&_L1_Det_if_P003, &outC->Context_2);
    kcg_copy_P003_TM_TrainToTrack(&_L2_Det_if_P003, &outC->Context_2.P003_out);
    kcg_copy_P003_TM_TrainToTrack(&P0031, &_L2_Det_if_P003);
    kcg_copy_P003_TM_TrainToTrack(&P00321, &P0031);
  }
  else {
    kcg_copy_P003_TM_TrainToTrack(
      &_L112_Det_if_P003,
      (P003_TM_TrainToTrack *)
        &DEFAULT_P003_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P003_TM_TrainToTrack(&P003, &_L112_Det_if_P003);
    kcg_copy_P003_TM_TrainToTrack(&P00321, &P003);
  }
  kcg_copy_P003_TM_TrainToTrack(&_L37, &P00321);
  /* 1 */ ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion(&_L37, &_L40);
  Det_if_P004_clock = (nid_message == 136) | (nid_message == 157);
  /* ck_Det_if_P004 */ if (Det_if_P004_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &_L3_Det_if_P004,
      newPackets);
    kcg_copy_array_int_3(
      &_L1_Det_if_P004,
      (array_int_3 *) &_L3_Det_if_P004[17]);
    /* 2 */ C_compr_P004_TM_TrainToTrack(&_L1_Det_if_P004, &_L2_Det_if_P004);
    kcg_copy_P004_TM_TrainToTrack(&P0043, &_L2_Det_if_P004);
    kcg_copy_P004_TM_TrainToTrack(&P00423, &P0043);
  }
  else {
    kcg_copy_P004_TM_TrainToTrack(
      &_L114_Det_if_P004,
      (P004_TM_TrainToTrack *)
        &DEFAULT_P004_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P004_TM_TrainToTrack(&P004, &_L114_Det_if_P004);
    kcg_copy_P004_TM_TrainToTrack(&P00423, &P004);
  }
  kcg_copy_P004_TM_TrainToTrack(&_L30, &P00423);
  /* 1 */ ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion(&_L30, &_L41);
  Det_if_P005_clock = (nid_message == 136) | (nid_message == 157);
  /* ck_Det_if_P005 */ if (Det_if_P005_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &_L3_Det_if_P005,
      newPackets);
    kcg_copy_array_int_3(
      &_L1_Det_if_P005,
      (array_int_3 *) &_L3_Det_if_P005[20]);
    /* 2 */ C_compr_P005_TM_TrainToTrack(&_L1_Det_if_P005, &_L2_Det_if_P005);
    kcg_copy_P005_TM_TrainToTrack(&P0052, &_L2_Det_if_P005);
    kcg_copy_P005_TM_TrainToTrack(&P00522, &P0052);
  }
  else {
    kcg_copy_P005_TM_TrainToTrack(
      &_L113_Det_if_P005,
      (P005_TM_TrainToTrack *)
        &DEFAULT_P005_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P005_TM_TrainToTrack(&P005, &_L113_Det_if_P005);
    kcg_copy_P005_TM_TrainToTrack(&P00522, &P005);
  }
  kcg_copy_P005_TM_TrainToTrack(&_L34, &P00522);
  /* 1 */ ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion(&_L34, &_L42);
  Det_if_P009_clock = nid_message == 132;
  /* ck_Det_if_P009 */ if (Det_if_P009_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &_L3_Det_if_P009,
      newPackets);
    kcg_copy_array_int_3(
      &_L1_Det_if_P009,
      (array_int_3 *) &_L3_Det_if_P009[17]);
    /* 2 */ C_compr_P009_TM_TrainToTrack(&_L1_Det_if_P009, &_L2_Det_if_P009);
    kcg_copy_P009_TM_TrainToTrack(&P0094, &_L2_Det_if_P009);
    kcg_copy_P009_TM_TrainToTrack(&P00924, &P0094);
  }
  else {
    kcg_copy_P009_TM_TrainToTrack(
      &_L115_Det_if_P009,
      (P009_TM_TrainToTrack *)
        &DEFAULT_P009_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P009_TM_TrainToTrack(&P009, &_L115_Det_if_P009);
    kcg_copy_P009_TM_TrainToTrack(&P00924, &P009);
  }
  kcg_copy_P009_TM_TrainToTrack(&_L31, &P00924);
  /* 1 */ ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion(&_L31, &_L43);
  Det_if_P011_clock = nid_message == 129;
  /* ck_Det_if_P011 */ if (Det_if_P011_clock) {
    kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &_L3_Det_if_P011,
      newPackets);
    kcg_copy_array_int_25(
      &_L1_Det_if_P011,
      (array_int_25 *) &_L3_Det_if_P011[17]);
    /* 4 */ C_compr_P011_TM_TrainToTrack(&_L1_Det_if_P011, &_L2_Det_if_P011);
    kcg_copy_P011_TM_TrainToTrack(&P0115, &_L2_Det_if_P011);
    kcg_copy_P011_TM_TrainToTrack(&P01125, &P0115);
  }
  else {
    kcg_copy_P011_TM_TrainToTrack(
      &_L116_Det_if_P011,
      (P011_TM_TrainToTrack *)
        &DEFAULT_P011_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P011_TM_TrainToTrack(&P011, &_L116_Det_if_P011);
    kcg_copy_P011_TM_TrainToTrack(&P01125, &P011);
  }
  kcg_copy_P011_TM_TrainToTrack(&_L13, &P01125);
  /* 1 */ ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion(&_L13, &_L44);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L18.p0, &_L38);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L18.p1, &_L39);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(&_L18.p3, &_L40);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L18.p4, &_L41);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L18.p5, &_L42);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &_L18.p9,
    &_L43);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(&_L18.p11, &_L44);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->oldPackets, &_L18);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

