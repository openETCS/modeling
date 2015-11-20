/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.h"

void ConvertPackets_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* 2 */ C_compr_P003_reset_TM_TrainToTrack(&outC->Context_2);
}

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets */
void ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::nid_message */kcg_int nid_message,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::newPackets */M_TrainTrack_compressed_packets_T_TM_radio_messages *newPackets,
  outC_ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  static P000_TM_TrainToTrack tmp6;
  static P001_TM_TrainToTrack tmp5;
  static P003_TM_TrainToTrack tmp4;
  static P004_TM_TrainToTrack tmp3;
  static P005_TM_TrainToTrack tmp2;
  static P009_TM_TrainToTrack tmp1;
  static P011_TM_TrainToTrack tmp;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P003 */
  static kcg_bool Det_if_P003_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P004 */
  static kcg_bool Det_if_P004_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P009 */
  static kcg_bool Det_if_P009_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::Det_if_P011 */
  static kcg_bool Det_if_P011_clock;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets::P0_or_P1 */
  static P000_TrainTrack_int_TM_TrainToTrack P0_or_P1;
  
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(
    &P0_or_P1,
    (P000_TrainTrack_int_TM_TrainToTrack *) &(*newPackets)[0]);
  Det_if_P003_clock = nid_message == 159;
  Det_if_P011_clock = !((nid_message == 146) | (nid_message == 154) |
      (nid_message == 155) | (nid_message == 156) | Det_if_P003_clock);
  Det_if_P009_clock = Det_if_P011_clock & (P0_or_P1[1] == 0);
  if (Det_if_P009_clock) {
    /* 1 */ C_compr_P000_TM_TrainToTrack(&P0_or_P1, &tmp6);
    kcg_copy_P001_TM_TrainToTrack(
      &tmp5,
      (P001_TM_TrainToTrack *)
        &DEFAULT_P001_RBC_Model_Pkg_TrainTrackMsgConversion);
  }
  else {
    Det_if_P004_clock = Det_if_P011_clock & (P0_or_P1[1] == 1);
    if (Det_if_P004_clock) {
      kcg_copy_P000_TM_TrainToTrack(
        &tmp6,
        (P000_TM_TrainToTrack *)
          &DEFAULT_P000_RBC_Model_Pkg_TrainTrackMsgConversion);
      /* 1 */ C_compr_P001_TM_TrainToTrack(&P0_or_P1, &tmp5);
    }
    else {
      kcg_copy_P000_TM_TrainToTrack(
        &tmp6,
        (P000_TM_TrainToTrack *)
          &DEFAULT_P000_RBC_Model_Pkg_TrainTrackMsgConversion);
      kcg_copy_P001_TM_TrainToTrack(
        &tmp5,
        (P001_TM_TrainToTrack *)
          &DEFAULT_P001_RBC_Model_Pkg_TrainTrackMsgConversion);
    }
  }
  Det_if_P011_clock = nid_message == 129;
  Det_if_P004_clock = (nid_message == 136) | (nid_message == 157);
  Det_if_P009_clock = nid_message == 132;
  /* 1 */
  ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion(
    &tmp6,
    &outC->oldPackets.p0);
  /* 1 */
  ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion(
    &tmp5,
    &outC->oldPackets.p1);
  if (Det_if_P003_clock) {
    /* 2 */
    C_compr_P003_TM_TrainToTrack(
      (P003_TrainTrack_int_TM_TrainToTrack *) &(*newPackets)[0],
      &outC->Context_2);
    kcg_copy_P003_TM_TrainToTrack(&tmp4, &outC->Context_2.P003_out);
  }
  else {
    kcg_copy_P003_TM_TrainToTrack(
      &tmp4,
      (P003_TM_TrainToTrack *)
        &DEFAULT_P003_RBC_Model_Pkg_TrainTrackMsgConversion);
  }
  /* 1 */
  ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion(
    &tmp4,
    &outC->oldPackets.p3);
  if (Det_if_P004_clock) {
    /* 2 */
    C_compr_P004_TM_TrainToTrack(
      (P004_TrainTrack_int_TM_TrainToTrack *) &(*newPackets)[17],
      &tmp3);
    /* 2 */
    C_compr_P005_TM_TrainToTrack(
      (P005_TrainTrack_int_TM_TrainToTrack *) &(*newPackets)[20],
      &tmp2);
  }
  else {
    kcg_copy_P004_TM_TrainToTrack(
      &tmp3,
      (P004_TM_TrainToTrack *)
        &DEFAULT_P004_RBC_Model_Pkg_TrainTrackMsgConversion);
    kcg_copy_P005_TM_TrainToTrack(
      &tmp2,
      (P005_TM_TrainToTrack *)
        &DEFAULT_P005_RBC_Model_Pkg_TrainTrackMsgConversion);
  }
  /* 1 */
  ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion(
    &tmp3,
    &outC->oldPackets.p4);
  /* 1 */
  ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion(
    &tmp2,
    &outC->oldPackets.p5);
  if (Det_if_P009_clock) {
    /* 2 */
    C_compr_P009_TM_TrainToTrack(
      (P009_TrainTrack_int_TM_TrainToTrack *) &(*newPackets)[17],
      &tmp1);
  }
  else {
    kcg_copy_P009_TM_TrainToTrack(
      &tmp1,
      (P009_TM_TrainToTrack *)
        &DEFAULT_P009_RBC_Model_Pkg_TrainTrackMsgConversion);
  }
  /* 1 */
  ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion(
    &tmp1,
    &outC->oldPackets.p9);
  if (Det_if_P011_clock) {
    /* 4 */
    C_compr_P011_TM_TrainToTrack(
      (P011_TrainTrack_int_TM_TrainToTrack *) &(*newPackets)[17],
      &tmp);
  }
  else {
    kcg_copy_P011_TM_TrainToTrack(
      &tmp,
      (P011_TM_TrainToTrack *)
        &DEFAULT_P011_RBC_Model_Pkg_TrainTrackMsgConversion);
  }
  /* 1 */
  ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion(
    &tmp,
    &outC->oldPackets.p11);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

