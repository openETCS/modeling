/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"

void Balises0003_Bijlmer_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  outC_Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises *outC)
{
  /* 1 */
  Balise_Group_370_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_18_Context_1);
  /* 1 */
  Balise_Group_341_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_17_Context_1);
  /* 1 */
  Balise_Group_369_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_16_Context_1);
  /* 1 */
  Balise_Group_368_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_15_Context_1);
  /* 1 */
  Balise_Group_367_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_14_Context_1);
  /* 1 */
  Balise_Group_366_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_13_Context_1);
  /* 1 */
  Balise_Group_365_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_12_Context_1);
  /* 1 */
  Balise_Group_364_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_11_Context_1);
  /* 1 */
  Balise_Group_363_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_10_Context_1);
  /* 1 */
  Balise_Group_362_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_9_Context_1);
  /* 1 */
  Balise_Group_361_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_8_Context_1);
  /* 1 */
  Balise_Group_360_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_7_Context_1);
  /* 1 */
  Balise_Group_359_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_6_Context_1);
  /* 1 */
  Balise_Group_358_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_5_Context_1);
  /* 1 */
  Balise_Group_357_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_4_Context_1);
  /* 1 */
  Balise_Group_356_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_3_Context_1);
  /* 1 */
  Balise_Group_355_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Balise_Group_351_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Group_354_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer */
void Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG354_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG351_Balises426,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->_1_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_355_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG355_Balises426,
    &outC->_2_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->_2_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_356_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L8,
    outC->_L2,
    (BaliseGroupData_TM *) &BG356_Balises426,
    &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L9,
    &outC->_3_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_357_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L9,
    outC->_L2,
    (BaliseGroupData_TM *) &BG357_Balises426,
    &outC->_4_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L10,
    &outC->_4_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_358_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L10,
    outC->_L2,
    (BaliseGroupData_TM *) &BG358_Balises426,
    &outC->_5_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L11,
    &outC->_5_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_359_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L11,
    outC->_L2,
    (BaliseGroupData_TM *) &BG359_Balises426,
    &outC->_6_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L12,
    &outC->_6_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_360_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L12,
    outC->_L2,
    (BaliseGroupData_TM *) &BG360_Balises426,
    &outC->_7_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->_7_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_361_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L13,
    outC->_L2,
    (BaliseGroupData_TM *) &BG361_Balises426,
    &outC->_8_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L14,
    &outC->_8_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L14,
    outC->_L2,
    (BaliseGroupData_TM *) &BG362_Balises426,
    &outC->_9_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L15,
    &outC->_9_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_363_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L15,
    outC->_L2,
    (BaliseGroupData_TM *) &BG363_Balises426,
    &outC->_10_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L16,
    &outC->_10_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L16,
    outC->_L2,
    (BaliseGroupData_TM *) &BG364_Balises426,
    &outC->_11_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L17,
    &outC->_11_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_365_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L17,
    outC->_L2,
    (BaliseGroupData_TM *) &BG365_Balises426,
    &outC->_12_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L18,
    &outC->_12_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_366_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L18,
    outC->_L2,
    (BaliseGroupData_TM *) &BG366_Balises426,
    &outC->_13_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L19,
    &outC->_13_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_367_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L19,
    outC->_L2,
    (BaliseGroupData_TM *) &BG367_Balises426,
    &outC->_14_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L20,
    &outC->_14_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_368_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L20,
    outC->_L2,
    (BaliseGroupData_TM *) &BG368_Balises426,
    &outC->_15_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L21,
    &outC->_15_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_369_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L21,
    outC->_L2,
    (BaliseGroupData_TM *) &BG369_Balises426,
    &outC->_16_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L22,
    &outC->_16_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_341_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L22,
    outC->_L2,
    (BaliseGroupData_TM *) &BG341_Balises426,
    &outC->_17_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L23,
    &outC->_17_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_370_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L23,
    outC->_L2,
    (BaliseGroupData_TM *) &BG370_Balises426,
    &outC->_18_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L24,
    &outC->_18_Context_1.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L24);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.c
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

