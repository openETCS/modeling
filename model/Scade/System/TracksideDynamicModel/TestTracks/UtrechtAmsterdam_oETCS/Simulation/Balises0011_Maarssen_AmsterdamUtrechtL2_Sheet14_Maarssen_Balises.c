/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"

void Balises0011_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  outC_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
{
  /* 1 */
  Balise_Group_437_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_14_Context_1);
  /* 1 */
  Balise_Group_436_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_13_Context_1);
  /* 1 */
  Balise_Group_435_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_12_Context_1);
  /* 1 */
  Balise_Group_434_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_11_Context_1);
  /* 1 */
  Balise_Group_433_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_10_Context_1);
  /* 1 */
  Balise_Group_432_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_9_Context_1);
  /* 1 */
  Balise_Group_431_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_8_Context_1);
  /* 1 */
  Balise_Group_430_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_7_Context_1);
  /* 1 */
  Balise_Group_477_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_6_Context_1);
  /* 1 */
  Balise_Group_429_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_5_Context_1);
  /* 1 */
  Balise_Group_428_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_4_Context_1);
  /* 1 */
  Balise_Group_427_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_3_Context_1);
  /* 1 */
  Balise_Group_426_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Balise_Group_425_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Group_424_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen */
void Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_424_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG424_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_425_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG425_Balises426,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->_1_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_426_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG426_Balises426,
    &outC->_2_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->_2_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_427_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L8,
    outC->_L2,
    (BaliseGroupData_TM *) &BG427_Balises426,
    &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L9,
    &outC->_3_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_428_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L9,
    outC->_L2,
    (BaliseGroupData_TM *) &BG428_Balises426,
    &outC->_4_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L10,
    &outC->_4_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_429_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L10,
    outC->_L2,
    (BaliseGroupData_TM *) &BG429_Balises426,
    &outC->_5_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L11,
    &outC->_5_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L11,
    outC->_L2,
    (BaliseGroupData_TM *) &BG477_Balises426,
    &outC->_6_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L12,
    &outC->_6_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_430_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L12,
    outC->_L2,
    (BaliseGroupData_TM *) &BG430_Balises426,
    &outC->_7_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->_7_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_431_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L13,
    outC->_L2,
    (BaliseGroupData_TM *) &BG431_Balises426,
    &outC->_8_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L14,
    &outC->_8_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_432_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L14,
    outC->_L2,
    (BaliseGroupData_TM *) &BG432_Balises426,
    &outC->_9_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L15,
    &outC->_9_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_433_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L15,
    outC->_L2,
    (BaliseGroupData_TM *) &BG433_Balises426,
    &outC->_10_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L16,
    &outC->_10_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_434_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L16,
    outC->_L2,
    (BaliseGroupData_TM *) &BG434_Balises426,
    &outC->_11_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L17,
    &outC->_11_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_435_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L17,
    outC->_L2,
    (BaliseGroupData_TM *) &BG435_Balises426,
    &outC->_12_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L18,
    &outC->_12_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_436_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L18,
    outC->_L2,
    (BaliseGroupData_TM *) &BG436_Balises426,
    &outC->_13_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L19,
    &outC->_13_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_437_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L19,
    outC->_L2,
    (BaliseGroupData_TM *) &BG437_Balises426,
    &outC->_14_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L20,
    &outC->_14_Context_1.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L20);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.c
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

