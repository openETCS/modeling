/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h"

void Balises0006_Abcoude_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  outC_Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC)
{
  /* 1 */
  Balise_Group_388_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_10_Context_1);
  /* 1 */
  Balise_Group_387_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_9_Context_1);
  /* 1 */
  Balise_Group_386_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_8_Context_1);
  /* 1 */
  Balise_Group_385_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_7_Context_1);
  /* 1 */
  Balise_Group_384_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_6_Context_1);
  /* 1 */
  Balise_Group_383_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_5_Context_1);
  /* 1 */
  Balise_Group_382_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_4_Context_1);
  /* 1 */
  Balise_Group_381_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_3_Context_1);
  /* 1 */
  Balise_Group_380_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Balise_Group_379_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Group_378_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude */
void Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_378_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG378_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_379_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG379_Balises426,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->_1_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_380_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG380_Balises426,
    &outC->_2_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->_2_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_381_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L8,
    outC->_L2,
    (BaliseGroupData_TM *) &BG381_Balises426,
    &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L9,
    &outC->_3_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_382_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L9,
    outC->_L2,
    (BaliseGroupData_TM *) &BG382_Balises426,
    &outC->_4_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L10,
    &outC->_4_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_383_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L10,
    outC->_L2,
    (BaliseGroupData_TM *) &BG383_Balises426,
    &outC->_5_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L11,
    &outC->_5_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_384_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L11,
    outC->_L2,
    (BaliseGroupData_TM *) &BG384_Balises426,
    &outC->_6_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L12,
    &outC->_6_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_385_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L12,
    outC->_L2,
    (BaliseGroupData_TM *) &BG385_Balises426,
    &outC->_7_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->_7_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L13,
    outC->_L2,
    (BaliseGroupData_TM *) &BG386_Balises426,
    &outC->_8_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L14,
    &outC->_8_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_387_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L14,
    outC->_L2,
    (BaliseGroupData_TM *) &BG387_Balises426,
    &outC->_9_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L15,
    &outC->_9_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_388_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L15,
    outC->_L2,
    (BaliseGroupData_TM *) &BG388_Balises426,
    &outC->_10_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L16,
    &outC->_10_Context_1.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L16);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

