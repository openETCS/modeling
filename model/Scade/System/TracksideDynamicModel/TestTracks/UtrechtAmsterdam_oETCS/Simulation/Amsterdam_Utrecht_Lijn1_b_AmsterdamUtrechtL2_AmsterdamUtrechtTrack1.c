/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

void Amsterdam_Utrecht_Lijn1_b_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
  /* 1 */ TrackClose_reset_InfraLib(&outC->_14_Context_1);
  /* 1 */
  Balises0012_MaarssenUtrechtCS_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_13_Context_1);
  /* 1 */
  Balises0011_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_12_Context_1);
  /* 1 */
  Balises0010_Breukelen_Maa_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &outC->_11_Context_1);
  /* 1 */
  Balises0009_Breukelen_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_10_Context_1);
  /* 1 */
  Balises0008_BreukelenKeer_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_9_Context_1);
  /* 1 */
  Balises0007_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_8_Context_1);
  /* 1 */
  Balises0006_Abcoude_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_7_Context_1);
  /* 1 */
  Balises0005_Abcoude_reset_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &outC->_6_Context_1);
  /* 1 */
  Balises0004_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_5_Context_1);
  /* 1 */
  Balises0003_Bijlmer_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_4_Context_1);
  /* 1 */
  Balises0002_Amstel_UB_Sig_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_3_Context_1);
  /* 2 */ TrackDiscontinuity_reset_InfraLib(&outC->Context_2);
  /* 1 */
  Balises0001_Amstel_UB_Sig_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_2_Context_1);
  /* 1 */ TrackDiscontinuity_reset_InfraLib(&outC->_1_Context_1);
  /* 1 */ TrackInit_reset_InfraLib(&outC->Context_1);
}

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises */
void Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises::TrainPosSim_in */kcg_real TrainPosSim_in,
  outC_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
  outC->_L16 = TrainPosSim_in;
  /* 1 */ TrackInit_InfraLib(outC->_L16, 0, &outC->Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L15,
    &outC->Context_1.SectionData_out);
  /* 1 */
  TrackDiscontinuity_InfraLib(&outC->_L15, 104775, 105650, &outC->_1_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L13,
    &outC->_1_Context_1.SectionData_out);
  /* 1 */
  Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_L13,
    &outC->_2_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L1,
    &outC->_2_Context_1.SectionData_out);
  /* 2 */
  TrackDiscontinuity_InfraLib(&outC->_L1, 1659 - 400, 32962, &outC->Context_2);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L14,
    &outC->Context_2.SectionData_out);
  /* 1 */
  Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_L14,
    &outC->_3_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L2,
    &outC->_3_Context_1.SectionData_out);
  /* 1 */
  Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L2,
    &outC->_4_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L3,
    &outC->_4_Context_1.SectionData_out);
  /* 1 */
  Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_L3,
    &outC->_5_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L4,
    &outC->_5_Context_1.SectionData_out);
  /* 1 */
  Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &outC->_L4,
    &outC->_6_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L5,
    &outC->_6_Context_1.SectionData_out);
  /* 1 */
  Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L5,
    &outC->_7_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L6,
    &outC->_7_Context_1.SectionData_out);
  /* 1 */
  Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L6,
    &outC->_8_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L7,
    &outC->_8_Context_1.SectionData_out);
  /* 1 */
  Balises0008_BreukelenKeer_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L7,
    &outC->_9_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L8,
    &outC->_9_Context_1.SectionData_out);
  /* 1 */
  Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L8,
    &outC->_10_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L9,
    &outC->_10_Context_1.SectionData_out);
  /* 1 */
  Balises0010_Breukelen_Maa_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &outC->_L9,
    &outC->_11_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L10,
    &outC->_11_Context_1.SectionData_out);
  /* 1 */
  Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L10,
    &outC->_12_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L11,
    &outC->_12_Context_1.SectionData_out);
  /* 1 */
  Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_L11,
    &outC->_13_Context_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L12,
    &outC->_13_Context_1.SectionData_out);
  /* 1 */ TrackClose_InfraLib(&outC->_L12, &outC->_14_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L17,
    &outC->_14_Context_1.BaliseMessage);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BaliseMessage, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

