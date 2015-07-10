/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

void Amsterdam_Utrecht_Lijn1_b_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(void)
{
  /* 1 */
  TrackClose_reset_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._14_Context_1);
  /* 1 */
  Balises0012_MaarssenUtrechtCS_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._13_Context_1);
  /* 1 */
  Balises0011_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._12_Context_1);
  /* 1 */
  Balises0010_Breukelen_Maa_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._11_Context_1);
  /* 1 */
  Balises0009_Breukelen_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._10_Context_1);
  /* 1 */
  Balises0008_BreukelenKeer_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._9_Context_1);
  /* 1 */
  Balises0007_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._8_Context_1);
  /* 1 */
  Balises0006_Abcoude_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._7_Context_1);
  /* 1 */
  Balises0005_Abcoude_reset_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._6_Context_1);
  /* 1 */
  Balises0004_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._5_Context_1);
  /* 1 */
  Balises0003_Bijlmer_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._4_Context_1);
  /* 1 */
  Balises0002_Amstel_UB_Sig_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._3_Context_1);
  /* 2 */
  TrackDiscontinuity_reset_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.Context_2);
  /* 1 */
  Balises0001_Amstel_UB_Sig_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._2_Context_1);
  /* 1 */
  TrackDiscontinuity_reset_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._1_Context_1);
  /* 1 */
  TrackInit_reset_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.Context_1);
}

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises */
void Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(void)
{
  Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L16 =
    TrainPosSim_in;
  /* 1 */
  TrackInit_InfraLib(
    Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L16,
    0,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L15,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.Context_1.SectionData_out);
  /* 1 */
  TrackDiscontinuity_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L15,
    104775,
    105650,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._1_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L13,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._1_Context_1.SectionData_out);
  /* 1 */
  Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L13,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._2_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L1,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._2_Context_1.SectionData_out);
  /* 2 */
  TrackDiscontinuity_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L1,
    1659 - 400,
    32962,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.Context_2);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L14,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.Context_2.SectionData_out);
  /* 1 */
  Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L14,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._3_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L2,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._3_Context_1.SectionData_out);
  /* 1 */
  Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L2,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._4_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L3,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._4_Context_1.SectionData_out);
  /* 1 */
  Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L3,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._5_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L4,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._5_Context_1.SectionData_out);
  /* 1 */
  Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L4,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._6_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L5,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._6_Context_1.SectionData_out);
  /* 1 */
  Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L5,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._7_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L6,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._7_Context_1.SectionData_out);
  /* 1 */
  Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L6,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._8_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L7,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._8_Context_1.SectionData_out);
  /* 1 */
  Balises0008_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L7,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._9_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L8,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._9_Context_1.SectionData_out);
  /* 1 */
  Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L8,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._10_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L9,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._10_Context_1.SectionData_out);
  /* 1 */
  Balises0010_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L9,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._11_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L10,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._11_Context_1.SectionData_out);
  /* 1 */
  Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L10,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._12_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L11,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._12_Context_1.SectionData_out);
  /* 1 */
  Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L11,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._13_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L12,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._13_Context_1.SectionData_out);
  /* 1 */
  TrackClose_InfraLib(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L12,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._14_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L17,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._14_Context_1.BaliseMessage);
  kcg_copy_CompressedBaliseMessage_TM(
    &BaliseMessage,
    &Ctxt_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1._L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

