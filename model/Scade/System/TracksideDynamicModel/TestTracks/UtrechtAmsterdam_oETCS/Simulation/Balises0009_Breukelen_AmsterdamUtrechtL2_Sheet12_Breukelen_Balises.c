/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T22:54:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.h"

void Balises0009_Breukelen_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
  outC_Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises *outC)
{
  /* 2 */
  Balise_Group_419_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->Context_2);
  /* 1 */
  Balise_Group_418_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_9_Context_1);
  /* 1 */
  Balise_Group_417_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_8_Context_1);
  /* 1 */
  Balise_Group_416_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_7_Context_1);
  /* 1 */
  Balise_Group_415_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_6_Context_1);
  /* 1 */
  Balise_Group_414_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_5_Context_1);
  /* 1 */
  Balise_Group_413_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_4_Context_1);
  /* 1 */
  Balise_Group_412_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_3_Context_1);
  /* 1 */
  Balise_Group_411_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_2_Context_1);
  /* 1 */
  Balise_Group_476_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_1_Context_1);
  /* 1 */
  Balise_Group_410_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->Context_1);
}

/* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen */
void Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* 1 */
  Balise_Group_410_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG410_Balises426,
    &outC->Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_1.BG_message_out);
  /* 1 */
  Balise_Group_476_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG476_Balises426,
    &outC->_1_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->_1_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_411_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG411_Balises426,
    &outC->_2_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->_2_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_412_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L8,
    outC->_L2,
    (BaliseGroupData_TM *) &BG412_Balises426,
    &outC->_3_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L9,
    &outC->_3_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_413_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L9,
    outC->_L2,
    (BaliseGroupData_TM *) &BG413_Balises426,
    &outC->_4_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L10,
    &outC->_4_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_414_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L10,
    outC->_L2,
    (BaliseGroupData_TM *) &BG414_Balises426,
    &outC->_5_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L11,
    &outC->_5_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_415_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L11,
    outC->_L2,
    (BaliseGroupData_TM *) &BG415_Balises426,
    &outC->_6_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L12,
    &outC->_6_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_416_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L12,
    outC->_L2,
    (BaliseGroupData_TM *) &BG416_Balises426,
    &outC->_7_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->_7_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_417_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L13,
    outC->_L2,
    (BaliseGroupData_TM *) &BG417_Balises426,
    &outC->_8_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L14,
    &outC->_8_Context_1.BG_message_out);
  /* 1 */
  Balise_Group_418_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L14,
    outC->_L2,
    (BaliseGroupData_TM *) &BG418_Balises426,
    &outC->_9_Context_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L15,
    &outC->_9_Context_1.BG_message_out);
  /* 2 */
  Balise_Group_419_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L15,
    outC->_L2,
    (BaliseGroupData_TM *) &BG419_Balises426,
    &outC->Context_2);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L25,
    &outC->Context_2.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L25);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises.c
** Generation date: 2015-07-12T22:54:51
*************************************************************$ */

